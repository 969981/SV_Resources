/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb0dec; name: FUN_01fb0dec
 */


void FUN_01fb0dec(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  double dVar6;
  
  iVar3 = param_1[10];
  if (7 < param_1[10]) {
    iVar3 = *param_1;
  }
  if (iVar3 - 1U < 3) {
    if (param_1[0x12] < 1) {
      dVar6 = (double)*(long *)(DAT_0485a0a0 + 0x130) / 1000000.0;
      iVar5 = param_1[8];
      param_1[8] = iVar5 + 1;
      iVar1 = param_1[0xe];
      *(double *)(param_1 + 2) = dVar6;
      dVar6 = *(double *)(param_1 + 4) + dVar6;
      *(double *)(param_1 + 4) = dVar6;
      if (0 < param_1[0xf]) {
        param_1[0xf] = param_1[0xf] + -1;
      }
      if (0 < iVar5) {
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[8] = 0;
        dVar6 = dVar6 * 0.5;
        *(double *)(param_1 + 6) = dVar6;
        dVar6 = dVar6 / 33.333334;
        if (0.949999988079071 <= dVar6) {
          iVar5 = 3;
          if (iVar1 < 3) {
            iVar5 = iVar1 + 1;
          }
          bVar2 = iVar5 != iVar1;
          if (bVar2) {
            param_1[0x12] = 2;
          }
          param_1[9] = 0;
          *(double *)(param_1 + 0x10) = dVar6;
          param_1[0xf] = 0x1e;
        }
        else {
          if (0.800000011920929 < dVar6) {
            return;
          }
          iVar5 = param_1[9];
          param_1[9] = iVar5 + 1;
          if (iVar5 < 0xe) {
            return;
          }
          iVar5 = iVar1 + -1;
          if (iVar1 < 1) {
            iVar5 = 0;
          }
          bVar2 = iVar5 != iVar1;
          if (bVar2) {
            param_1[0x12] = 2;
          }
          param_1[9] = 0;
        }
        if ((iVar3 == 1) && (bVar2)) {
          param_1[0xe] = iVar5;
          if (((*PTR_DAT_047d4df8 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar3 != 0)) {
            FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4df8);
          }
          lVar4 = *(long *)PTR_DAT_047d4e00;
          *(long *)PTR_DAT_047d4e08 = lVar4;
          lVar4 = *(long *)(lVar4 + 0x38);
          *(int *)(*(long *)(lVar4 + 0x50) + 0xc0) = param_1[0xe];
          *(undefined4 *)(*(long *)(lVar4 + 0x50) + (long)param_1[0xe] * 0xc + 0x90) = 0x3f800000;
          *(undefined4 *)(*(long *)(lVar4 + 0x50) + (long)param_1[0xe] * 0xc + 0x94) = 0x3f800000;
          *(undefined4 *)(*(long *)(lVar4 + 0x50) + (long)param_1[0xe] * 0xc + 0x98) = 0x3f800000;
        }
      }
    }
    else {
      param_1[0x12] = param_1[0x12] + -1;
    }
  }
  return;
}


