/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a36674; name: FUN_00a36674
 */


void FUN_00a36674(long param_1)

{
  long *plVar1;
  short sVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  long local_38;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  plVar1 = *(long **)(lVar6 + 0x1c8);
  plVar3 = *(long **)(lVar6 + 0x1c0);
  do {
    if (plVar3 == plVar1) {
      return;
    }
    lVar6 = *plVar3;
    uVar5 = FUN_00a371b8(lVar6 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar5 & 1) == 0);
  uVar5 = FUN_02adbf5c();
  if (((uVar5 & 1) != 0) &&
     ((((lVar7 = *(long *)(param_1 + 0x70), lVar8 = lVar7, lVar7 != 0 ||
        (lVar8 = *(long *)(param_1 + 0x78), lVar8 != 0)) ||
       (lVar8 = *(long *)(param_1 + 0x80), lVar8 != 0)) ||
      (lVar8 = *(long *)(param_1 + 0x88), lVar8 != 0)))) {
    if (*(long *)(lVar6 + 0xb00) == 0) {
      fVar9 = 0.0;
    }
    else {
      sVar2 = *(short *)(lVar6 + 0x178);
      fVar9 = *(float *)(lVar6 + 0x17c);
      if (sVar2 == *(short *)(lVar6 + 0x484)) {
        fVar9 = fVar9 + *(float *)(lVar6 + 0x488);
      }
      if (sVar2 == *(short *)(lVar6 + 0x694)) {
        fVar9 = fVar9 + *(float *)(lVar6 + 0x698);
      }
      if (sVar2 == *(short *)(lVar6 + 0x8a4)) {
        fVar9 = fVar9 + *(float *)(lVar6 + 0x8a8);
      }
    }
    if (*(float *)(param_1 + 0x94) != fVar9) {
      if ((0.0 < (float)(int)*(short *)(param_1 + 0x90) - fVar9) && (DAT_04835810 != (code *)0x0)) {
        local_38 = lVar8;
        (*DAT_04835810)(&DAT_04835830,&local_38);
        lVar7 = *(long *)(param_1 + 0x70);
      }
      *(float *)(param_1 + 0x94) = fVar9;
      if (lVar8 == lVar7) {
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      if (lVar8 == *(long *)(param_1 + 0x78)) {
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      if (lVar8 == *(long *)(param_1 + 0x80)) {
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      if (lVar8 == *(long *)(param_1 + 0x88)) {
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
  }
  return;
}


