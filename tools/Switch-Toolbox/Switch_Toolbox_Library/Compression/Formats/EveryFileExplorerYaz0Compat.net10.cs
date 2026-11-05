// Managed compatibility codec for the original EveryFileExplorer.YAZ0 call sites.
// Only compiled by the side-by-side .NET 10 project. This is a strict Yaz0
// decoder and a valid (not byte-identical to upstream) greedy Yaz0 encoder.
using System;
using System.Collections.Generic;
using System.IO;

namespace EveryFileExplorer
{
    internal static class YAZ0
    {
        private const int MaxRun = 0x111;
        private const int WindowSize = 0x1000;
        private const int MaxOutputSize = 1024 * 1024 * 1024;

        public static byte[] Decompress(string path) => Decompress(File.ReadAllBytes(path));

        public static byte[] Decompress(byte[] input)
        {
            if (input == null) throw new ArgumentNullException(nameof(input));
            if (input.Length < 16 || input[0] != 'Y' || input[1] != 'a'
                || input[2] != 'z' || input[3] != '0')
                throw new InvalidDataException("Yaz0 header is missing or truncated.");

            uint declared = ReadU32(input, 4);
            if (declared > MaxOutputSize)
                throw new InvalidDataException("Yaz0 declared output exceeds safety limit.");
            byte[] result = new byte[(int)declared];
            int source = 16, target = 0;
            int flags = 0, bits = 0;
            while (target < result.Length)
            {
                if (bits == 0)
                {
                    if (source >= input.Length) throw new EndOfStreamException("Truncated Yaz0 flag byte.");
                    flags = input[source++];
                    bits = 8;
                }

                if ((flags & 0x80) != 0)
                {
                    if (source >= input.Length) throw new EndOfStreamException("Truncated Yaz0 literal.");
                    result[target++] = input[source++];
                }
                else
                {
                    if (source + 1 >= input.Length) throw new EndOfStreamException("Truncated Yaz0 back-reference.");
                    int first = input[source++];
                    int second = input[source++];
                    int distance = ((first & 0x0f) << 8) | second;
                    int count = first >> 4;
                    if (count == 0)
                    {
                        if (source >= input.Length) throw new EndOfStreamException("Truncated Yaz0 extended length.");
                        count = input[source++] + 0x12;
                    }
                    else count += 2;

                    int from = target - distance - 1;
                    if (from < 0 || count > result.Length - target)
                        throw new InvalidDataException("Yaz0 back-reference points outside the output.");
                    // Overlap is required by the Yaz0 LZ77 bitstream.
                    for (int j = 0; j < count; j++)
                        result[target++] = result[from + j];
                }
                flags <<= 1;
                bits--;
            }
            return result;
        }

        public static byte[] Compress(string path) => Compress(File.ReadAllBytes(path), 0, 0);

        public static byte[] Compress(byte[] input, int level = 0, uint alignment = 0)
        {
            if (input == null) throw new ArgumentNullException(nameof(input));
            if (input.Length > MaxOutputSize) throw new ArgumentOutOfRangeException(nameof(input));
            var encoded = new List<byte>(Math.Min(input.Length + 4096, MaxOutputSize));
            encoded.Add((byte)'Y');
            encoded.Add((byte)'a');
            encoded.Add((byte)'z');
            encoded.Add((byte)'0');
            AppendU32(encoded, (uint)input.Length);
            AppendU32(encoded, alignment);
            AppendU32(encoded, 0);

            // Index 3-byte sequences, limiting each bucket so RAM and CPU
            // remain bounded on repetitive model / texture data.
            var positions = new Dictionary<int, List<int>>();
            int cursor = 0, indexedUntil = 0;
            while (cursor < input.Length)
            {
                int flagIndex = encoded.Count;
                encoded.Add(0);
                byte flags = 0;
                for (int bit = 7; bit >= 0 && cursor < input.Length; bit--)
                {
                    for (int p = indexedUntil; p < cursor && p + 2 < input.Length; p++)
                    {
                        int key = Key(input, p);
                        if (!positions.TryGetValue(key, out var bucket))
                        {
                            bucket = new List<int>();
                            positions.Add(key, bucket);
                        }
                        bucket.Add(p);
                        if (bucket.Count > 128) bucket.RemoveAt(0);
                    }
                    indexedUntil = cursor;

                    int bestLength = 0, bestDistance = 0;
                    if (cursor + 2 < input.Length
                        && positions.TryGetValue(Key(input, cursor), out var candidates))
                    {
                        int minPosition = Math.Max(0, cursor - WindowSize);
                        int inspected = 0;
                        for (int i = candidates.Count - 1; i >= 0 && inspected < 96; i--)
                        {
                            int p = candidates[i];
                            if (p < minPosition) break;
                            inspected++;
                            int length = 3;
                            int limit = Math.Min(MaxRun, input.Length - cursor);
                            while (length < limit && input[p + length] == input[cursor + length])
                                length++;
                            if (length > bestLength)
                            {
                                bestLength = length;
                                bestDistance = cursor - p - 1;
                                if (length == limit) break;
                            }
                        }
                    }

                    if (bestLength >= 3)
                    {
                        if (bestLength >= 0x12)
                        {
                            encoded.Add((byte)(bestDistance >> 8));
                            encoded.Add((byte)bestDistance);
                            encoded.Add((byte)(bestLength - 0x12));
                        }
                        else
                        {
                            encoded.Add((byte)(((bestLength - 2) << 4) | (bestDistance >> 8)));
                            encoded.Add((byte)bestDistance);
                        }
                        cursor += bestLength;
                    }
                    else
                    {
                        flags |= (byte)(1 << bit);
                        encoded.Add(input[cursor++]);
                    }
                }
                encoded[flagIndex] = flags;
            }
            return encoded.ToArray();
        }

        private static int Key(byte[] data, int offset) =>
            (data[offset] << 16) | (data[offset + 1] << 8) | data[offset + 2];

        private static uint ReadU32(byte[] data, int offset) =>
            ((uint)data[offset] << 24) | ((uint)data[offset + 1] << 16)
                | ((uint)data[offset + 2] << 8) | data[offset + 3];

        private static void AppendU32(List<byte> target, uint value)
        {
            target.Add((byte)(value >> 24));
            target.Add((byte)(value >> 16));
            target.Add((byte)(value >> 8));
            target.Add((byte)value);
        }
    }
}
