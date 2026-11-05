using BnTxx.Formats;
using System;
using System.Drawing;
using System.IO;

namespace BnTxx
{
    public class BNTX
    {
        public static TexturePixels? LoadFromFile(string file)
        {
            return LoadFromFile(file, null);
        }

        public static TexturePixels? LoadFromFile(string file, string preferredName)
        {
  using var bitmap = LoadBitmapFromFile(file, preferredName);
  return bitmap == null ? null : TexturePixels.FromBitmap(bitmap);
        }

        public static Bitmap LoadBitmapFromFile(string file, string preferredName)
        {
            Bitmap bm = null;
            using (FileStream FS = new FileStream(file, FileMode.Open))
            {
                BinaryTexture BT = new BinaryTexture(FS);
                int chosenIndex = -1;

                if (!string.IsNullOrEmpty(preferredName))
                {
                    for (int i = 0; i < BT.Textures.Count; i++)
                    {
                        if (string.Equals(BT.Textures[i].Name, preferredName, StringComparison.OrdinalIgnoreCase))
                        {
                            chosenIndex = i;
                            break;
                        }
                    }
                }

                if (chosenIndex == -1 && BT.Textures.Count > 0)
                {
                    chosenIndex = 0;
                }

                if (chosenIndex != -1)
                {
                    var chosen = BT.Textures[chosenIndex];
                    if (!PixelDecoder.TryDecode(chosen, out Bitmap Img))
                    {
                        for (int i = 0; i < BT.Textures.Count; i++)
                        {
                            if (PixelDecoder.TryDecode(BT.Textures[i], out Img))
                            {
                                bm = Img;
                                return bm;
                            }
                        }
                    }
                    else
                    {
                        bm = Img;
                    }
                }
            }

            return bm;
        }
    }
    public sealed record TexturePixels(int Width, int Height, byte[] Bgra)
    {
        public static TexturePixels FromBitmap(Bitmap source)
        {
            using var normalized = new Bitmap(source.Width, source.Height,
      System.Drawing.Imaging.PixelFormat.Format32bppArgb);
            using (var graphics = Graphics.FromImage(normalized))
            {
      graphics.DrawImage(source, 0, 0, source.Width, source.Height);
            }
            var rect = new Rectangle(0, 0, normalized.Width, normalized.Height);
            var data = normalized.LockBits(rect, System.Drawing.Imaging.ImageLockMode.ReadOnly,
      System.Drawing.Imaging.PixelFormat.Format32bppArgb);
            try
            {
      int rowBytes = checked(normalized.Width * 4);
      byte[] pixels = new byte[checked(rowBytes * normalized.Height)];
      for (int y = 0; y < normalized.Height; y++)
      {
          System.Runtime.InteropServices.Marshal.Copy(
              IntPtr.Add(data.Scan0, checked(y * data.Stride)),
              pixels, y * rowBytes, rowBytes);
      }
      return new TexturePixels(normalized.Width, normalized.Height, pixels);
            }
            finally
            {
      normalized.UnlockBits(data);
            }
        }
    }

}
