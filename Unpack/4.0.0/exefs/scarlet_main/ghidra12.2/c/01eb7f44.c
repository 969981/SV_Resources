/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb7f44; name: FUN_01eb7f44
 */


void FUN_01eb7f44(undefined4 *param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  
  uVar1 = *param_2;
  uVar3 = 0xff80;
  if (0xff < uVar1) {
    uVar3 = 0xff81;
  }
  if (0x7f < uVar1) {
    uVar1 = uVar3;
  }
  *(char *)(*param_3 + param_3[2]) = (char)uVar1;
  lVar2 = param_3[2] + 1;
  param_3[2] = lVar2;
  if ((uVar1 & 0xff) == 0x81) {
    *(ushort *)(*param_3 + lVar2) = *param_2;
    lVar2 = 2;
  }
  else {
    if ((uVar1 & 0xff) != 0x80) goto LAB_01eb7f8c;
    *(char *)(*param_3 + lVar2) = (char)*param_2;
    lVar2 = 1;
  }
  param_3[2] = param_3[2] + lVar2;
LAB_01eb7f8c:
  *param_1 = 0;
  return;
}


