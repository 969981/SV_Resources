/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0180c364; name: FUN_0180c364
 */


void FUN_0180c364(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[10] = 8;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  *param_1 = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar3 = param_1[10];
  if (7 < param_1[10]) {
    iVar3 = *param_1;
  }
  param_1[0x12] = 0;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar2 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar2;
  lVar2 = *(long *)(lVar2 + 0x38);
  switch(iVar3) {
  case 2:
    iVar3 = 1;
    break;
  case 3:
    iVar3 = 2;
    break;
  case 4:
    iVar3 = 3;
    break;
  case 5:
    param_1[0xe] = 3;
    *(undefined4 *)(*(long *)(lVar2 + 0x50) + 0xc0) = 3;
    lVar4 = *(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc;
    iVar3 = 0x3a83126f;
    goto LAB_0180c490;
  case 6:
    param_1[0xe] = 1;
    *(undefined4 *)(*(long *)(lVar2 + 0x50) + 0xc0) = 1;
    *(int *)(*(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc + 0x90) = param_1[0xb];
    *(int *)(*(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc + 0x94) = param_1[0xc];
    iVar3 = param_1[0xd];
    lVar2 = *(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc;
    goto LAB_0180c4b0;
  case 7:
    param_1[0xe] = 1;
    *(undefined4 *)(*(long *)(lVar2 + 0x50) + 0xc0) = 1;
    lVar4 = *(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc;
    iVar3 = 0x3f000000;
    goto LAB_0180c490;
  default:
    param_1[0xe] = 0;
    *(undefined4 *)(*(long *)(lVar2 + 0x50) + 0xc0) = 0;
    *(undefined4 *)(*(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc + 0x90) = 0x3f800000;
    *(undefined4 *)(*(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc + 0x94) = 0x3f800000;
    *(undefined4 *)(*(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc + 0x98) = 0x3f800000;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    return;
  }
  param_1[0xe] = iVar3;
  *(int *)(*(long *)(lVar2 + 0x50) + 0xc0) = iVar3;
  lVar4 = *(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc;
  iVar3 = 0x3f800000;
LAB_0180c490:
  *(int *)(lVar4 + 0x90) = iVar3;
  *(int *)(*(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc + 0x94) = iVar3;
  lVar2 = *(long *)(lVar2 + 0x50) + (long)param_1[0xe] * 0xc;
LAB_0180c4b0:
  *(int *)(lVar2 + 0x98) = iVar3;
  return;
}


