/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f2e3c; name: FUN_026f2e3c
 */


void FUN_026f2e3c(undefined4 *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *param_2;
  uVar3 = 0xffffff86;
  if (lVar2 != (int)(uint)lVar2) {
    uVar3 = 0xffffff87;
  }
  uVar1 = 0x85;
  if (lVar2 != (short)lVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 0x84;
  if (lVar2 != (char)lVar2) {
    uVar3 = uVar1;
  }
  if (lVar2 + 0x40U < 0xc0) {
    uVar3 = (uint)lVar2;
  }
  *(char *)(*param_3 + param_3[2]) = (char)uVar3;
  param_3[2] = param_3[2] + 1;
  lVar2 = *param_2;
  switch(uVar3 & 0xff) {
  case 0x84:
    *(char *)(*param_3 + param_3[2]) = (char)lVar2;
    lVar2 = 1;
    break;
  case 0x85:
    *(short *)(*param_3 + param_3[2]) = (short)lVar2;
    lVar2 = 2;
    break;
  case 0x86:
    *(int *)(*param_3 + param_3[2]) = (int)lVar2;
    lVar2 = 4;
    break;
  case 0x87:
    *(long *)(*param_3 + param_3[2]) = lVar2;
    lVar2 = 8;
    break;
  default:
    goto switchD_026f2ebc_default;
  }
  param_3[2] = param_3[2] + lVar2;
switchD_026f2ebc_default:
  *param_1 = 0;
  return;
}


