/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004514b0; name: FUN_004514b0
 */


ulong FUN_004514b0(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = 0;
  if (param_1 != (byte *)0x0) {
    bVar2 = *param_1;
    if (bVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
    uVar4 = 0x100;
    do {
      param_1 = param_1 + 1;
      uVar5 = uVar4 | bVar2;
      uVar4 = uVar4 + 0x100;
      uVar1 = (byte)(bVar2 ^ bVar2 >> 2) & 0xf;
      uVar3 = (ulong)((uint)(uVar3 >> ((ulong)(0x20 - uVar1) & 0x3f)) | (int)uVar3 << (ulong)uVar1)
              ^ uVar5 * uVar5;
      bVar2 = *param_1;
    } while (bVar2 != 0);
    uVar3 = uVar3 ^ uVar3 >> 0x10;
  }
  return uVar3;
}


