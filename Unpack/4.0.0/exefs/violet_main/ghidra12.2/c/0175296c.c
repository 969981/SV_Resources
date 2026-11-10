/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175296c; name: FUN_0175296c
 */


long FUN_0175296c(byte *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((*param_1 & 1) == 0) {
    uVar5 = (ulong)(*param_1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    if (0x7f < uVar5) {
      uVar4 = 0xffffff82;
      if (uVar5 >> 0x20 != 0) {
        uVar4 = 0xffffff83;
      }
      uVar1 = 0x81;
      if (0xffff < uVar5) {
        uVar1 = uVar4;
      }
      uVar4 = 0x80;
      if (0xff < uVar5) {
        uVar4 = uVar1;
      }
      uVar2 = (ulong)uVar4;
      goto LAB_01752988;
    }
  }
  uVar2 = uVar5 & 0xffffffff;
LAB_01752988:
  lVar3 = FUN_0111b030(uVar2);
  return uVar5 + lVar3 + 1;
}


