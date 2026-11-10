/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c29bc; name: FUN_014c29bc
 */


void FUN_014c29bc(undefined4 *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = *param_2;
  uVar4 = 0xffffff81;
  if (0xffff < uVar2) {
    uVar4 = 0xffffff82;
  }
  uVar1 = 0x80;
  if (0xff < uVar2) {
    uVar1 = uVar4;
  }
  if (uVar2 < 0x80) {
    uVar1 = uVar2;
  }
  *(char *)(*param_3 + param_3[2]) = (char)uVar1;
  param_3[2] = param_3[2] + 1;
  uVar4 = *param_2;
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 0x82) {
    *(uint *)(*param_3 + param_3[2]) = uVar4;
    lVar3 = 4;
  }
  else if (uVar1 == 0x80) {
    *(char *)(*param_3 + param_3[2]) = (char)uVar4;
    lVar3 = 1;
  }
  else {
    if (uVar1 != 0x81) goto LAB_014c2a30;
    *(short *)(*param_3 + param_3[2]) = (short)uVar4;
    lVar3 = 2;
  }
  param_3[2] = param_3[2] + lVar3;
LAB_014c2a30:
  *param_1 = 0;
  return;
}


