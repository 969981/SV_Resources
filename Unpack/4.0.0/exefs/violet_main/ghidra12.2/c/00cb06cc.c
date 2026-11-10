/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb06cc; name: FUN_00cb06cc
 */


void FUN_00cb06cc(char *param_1,float *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  fVar5 = *param_2;
  if (0.0099983215 <= fVar5) {
    uVar3 = 0x100;
    if (fVar5 <= 216.75) {
      uVar3 = 0x80;
    }
    uVar4 = 0xc0;
    if (fVar5 <= 216.75) {
      uVar4 = 0x40;
    }
    if (fVar5 <= (float)((uint)*(ushort *)(&DAT_03d79d10 + (ulong)uVar4 * 2) * 0x1000 + 0x3b800000))
    {
      uVar3 = uVar4;
      uVar4 = (uint)(216.75 < fVar5) << 7;
    }
    uVar1 = uVar4 + uVar3 >> 1;
    if (fVar5 <= (float)((uint)*(ushort *)(&DAT_03d79d10 + (uVar4 + uVar3)) * 0x1000 + 0x3b800000))
    {
      uVar3 = uVar1;
      uVar1 = uVar4;
    }
    uVar4 = uVar1 + uVar3 >> 1;
    if (fVar5 <= (float)((uint)*(ushort *)(&DAT_03d79d10 + (uVar1 + uVar3)) * 0x1000 + 0x3b800000))
    {
      uVar3 = uVar4;
      uVar4 = uVar1;
    }
    uVar1 = uVar4 + uVar3 >> 1;
    if (fVar5 <= (float)((uint)*(ushort *)(&DAT_03d79d10 + (uVar1 << 1)) * 0x1000 + 0x3b800000)) {
      uVar3 = uVar1;
      uVar1 = uVar4;
    }
    uVar4 = uVar1 + uVar3 >> 1;
    if (fVar5 <= (float)((uint)*(ushort *)(&DAT_03d79d10 + (uVar4 << 1)) * 0x1000 + 0x3b800000)) {
      uVar3 = uVar4;
      uVar4 = uVar1;
    }
    uVar1 = (int)(uVar4 + uVar3) >> 1;
    if (fVar5 <= (float)((uint)*(ushort *)(&DAT_03d79d10 + (ulong)uVar1 * 2) * 0x1000 + 0x3b800000))
    {
      uVar3 = uVar1;
      uVar1 = uVar4;
    }
    uVar4 = (int)(uVar1 + uVar3) >> 1;
    cVar2 = ((float)((uint)*(ushort *)(&DAT_03d79d10 + (ulong)uVar4 * 2) * 0x1000 + 0x3b800000) <
             fVar5 && uVar1 + uVar3 < 0x1fe) + (char)uVar4;
  }
  else {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  return;
}


