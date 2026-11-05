using System;
using System.IO;
using System.Linq;
using EveryFileExplorer;

static void RoundTrip(string name, byte[] data)
{
    byte[] compressed = YAZ0.Compress(data, level: 9, alignment: 32);
    if (compressed.Length < 16 || compressed[0] != (byte)'Y' || compressed[3] != (byte)'0')
        throw new Exception($"{name}: missing Yaz0 header");
    if (!YAZ0.Decompress(compressed).SequenceEqual(data))
        throw new Exception($"{name}: decompressed output differs");
    string temp = Path.GetTempFileName();
    try
    {
        File.WriteAllBytes(temp, compressed);
        if (!YAZ0.Decompress(temp).SequenceEqual(data))
            throw new Exception($"{name}: path decompression differs");
    }
    finally { File.Delete(temp); }
    Console.WriteLine($"{name}: {data.Length} -> {compressed.Length} -> {data.Length} OK");
}
RoundTrip("empty", Array.Empty<byte>());
RoundTrip("small literal", "ABCD"u8.ToArray());
RoundTrip("overlap", Enumerable.Repeat((byte)'A', 8192).ToArray());
RoundTrip("repetitive", Enumerable.Range(0, 65536).Select(x => (byte)(x % 97)).ToArray());
RoundTrip("incompressible", RandomNumberGeneratorLikeBytes(131071));
byte[] known = new byte[]
{
    0x59,0x61,0x7A,0x30, 0,0,0,8, 0,0,0,0, 0,0,0,0,
    0xC0, 0x41, 0x42, 0x40, 0x01
};
if (!YAZ0.Decompress(known).SequenceEqual("ABABABAB"u8.ToArray()))
    throw new Exception("Known Yaz0 overlapping-reference fixture mismatch");
foreach (byte[] invalid in new[] { Array.Empty<byte>(), "BAD!"u8.ToArray(),
                                  new byte[] {0x59,0x61,0x7A,0x30,0,0,0,1,0,0,0,0,0,0,0,0} })
{
    try { YAZ0.Decompress(invalid); throw new Exception("Malformed Yaz0 erroneously accepted"); }
    catch (InvalidDataException) { }
    catch (EndOfStreamException) { }
}
Console.WriteLine("Yaz0 known fixture, round-trips and corruption rejection passed.");

static byte[] RandomNumberGeneratorLikeBytes(int count)
{
    var bytes = new byte[count];
    var random = new Random(20261105);
    random.NextBytes(bytes);
    return bytes;
}
