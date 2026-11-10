/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192edd8; name: FUN_0192edd8
 */


void FUN_0192edd8(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = param_3[2];
  bVar1 = *(byte *)(*param_3 + lVar3);
  param_3[2] = lVar3 + 1;
  if (bVar1 < 0x81) {
    if (bVar1 == 0x80) {
      bVar1 = *(byte *)(*param_3 + lVar3 + 1);
      param_3[2] = lVar3 + 2;
    }
    *param_2 = bVar1;
    lVar3 = param_3[2];
    bVar1 = *(byte *)(*param_3 + lVar3);
    param_3[2] = lVar3 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(*param_3 + lVar3 + 1);
        param_3[2] = lVar3 + 2;
      }
      uVar2 = 0;
      param_2[1] = bVar1;
      goto LAB_0192ee24;
    }
  }
  uVar2 = 1;
LAB_0192ee24:
  *param_1 = uVar2;
  return;
}


