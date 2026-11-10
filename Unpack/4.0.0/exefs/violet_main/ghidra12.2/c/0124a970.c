/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124a970; name: FUN_0124a970
 */


undefined8
FUN_0124a970(uint param_1,undefined8 param_2,undefined4 param_3,ushort param_4,short *param_5)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  short sVar5;
  uint uVar6;
  
  uVar6 = param_1 - 1;
  if (((uVar6 & 0xffff) < 0x21) && ((0x140465cffU >> ((ulong)uVar6 & 0x3f) & 1) != 0)) {
    psVar1 = (short *)(&DAT_03d6af38 + *(long *)(&DAT_03d6afa0 + (long)(short)uVar6 * 8) * 6);
    if (param_4 != 0) {
      psVar1 = (short *)(&DAT_03d6af3a + *(long *)(&DAT_03d6afa0 + (long)(short)uVar6 * 8) * 6);
    }
    sVar5 = *psVar1;
    if (sVar5 < 0) {
      sVar5 = *(short *)(&DAT_03d6af38 + *(long *)(&DAT_03d6afa0 + (long)(short)uVar6 * 8) * 6);
    }
    uVar2 = param_5[1];
    *param_5 = sVar5;
    uVar6 = uVar2 & 0xffffc000 | 0x82;
    param_5[1] = (short)uVar6;
    *(undefined4 *)(param_5 + 2) = param_3;
    if (param_4 != 0) {
      uVar6 = uVar2 & 0xffffc000 | 0x102;
      param_5[1] = (short)uVar6;
      *(uint *)(param_5 + 4) = (uint)param_4;
    }
    uVar2 = (ushort)uVar6;
    if ((param_1 & 0xffff) == 0x12) {
      uVar6 = uVar6 >> 7 & 0x7f;
      if (uVar6 < 8) {
        param_5[1] = uVar2 + 0x80 & 0x3f80 | uVar2 & 0xc07f;
        (param_5 + (ulong)uVar6 * 2 + 2)[0] = 0x49;
        (param_5 + (ulong)uVar6 * 2 + 2)[1] = 0;
      }
    }
    else if (((param_1 & 0xffff) == 8) && (uVar6 = uVar6 >> 7 & 0x7f, uVar6 < 8)) {
      uVar3 = FUN_0107ffe0(param_2);
      param_5[1] = uVar2 + 0x80 & 0x3f80 | uVar2 & 0xc07f;
      *(uint *)(param_5 + (ulong)uVar6 * 2 + 2) = uVar3 & 0xffff;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


