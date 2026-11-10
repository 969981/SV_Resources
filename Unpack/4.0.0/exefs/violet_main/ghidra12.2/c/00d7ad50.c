/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d7ad50; name: FUN_00d7ad50
 */


void FUN_00d7ad50(undefined1 param_1 [16],long param_2,long param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *__s;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  undefined1 auStack_78 [8];
  
  *(int *)(param_2 + 0x34) = param_4;
  *(int *)(param_2 + 0x38) = param_4;
  fVar16 = *(float *)(param_2 + 0x30) * (float)param_4;
  *(long *)(param_2 + 0x58) = param_1._8_8_;
  *(long *)(param_2 + 0x50) = param_1._0_8_;
  fVar18 = (param_1._0_4_ - fVar16) / 3.0;
  iVar5 = param_4 * param_4;
  iVar11 = (int)fVar18;
  fVar16 = (param_1._8_4_ - fVar16) / 3.0;
  iVar12 = (int)fVar16;
  *(int *)(param_2 + 0x3c) = param_4;
  *(int *)(param_2 + 0x40) = iVar5;
  *(int *)(param_2 + 0x44) = iVar5;
  *(ulong *)(param_2 + 0x60) =
       CONCAT44(iVar12 - (uint)(fVar16 < (float)iVar12),iVar11 - (uint)(fVar18 < (float)iVar11));
  *(undefined4 *)(param_2 + 0x68) = 0;
  plVar1 = (long *)(param_2 + 0x48);
  FUN_00d7b8f0(*(undefined8 *)(param_2 + 8),plVar1,iVar5);
  uVar13 = *(uint *)(param_2 + 0x44);
  __s = (void *)(**(code **)(**(long **)(param_2 + 8) + 0x10))
                          (*(long **)(param_2 + 8),(long)(int)uVar13 << 3,8);
  if ((0 < (int)uVar13) && (__s != (void *)0x0)) {
    memset(__s,0,(ulong)uVar13 << 3);
  }
  *plVar1 = (long)__s;
  if (((*PTR_DAT_047d9210 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d9210);
  }
  lVar9 = *(long *)PTR_DAT_047d9218;
  *(long *)PTR_DAT_047d9220 = lVar9;
  if ((*plVar1 == 0) || (*(int *)(param_2 + 0x3c) < 1)) {
    return;
  }
  lVar9 = *(long *)(lVar9 + 0x28);
  iVar7 = *(int *)(param_2 + 0x60);
  iVar5 = *(int *)(param_2 + 100);
  iVar11 = *(int *)(param_2 + 0x38) + iVar7;
  iVar12 = *(int *)(param_2 + 0x3c) + iVar5;
  while (iVar11 <= iVar7) {
LAB_00d7b064:
    iVar5 = iVar5 + 1;
    if (iVar12 <= iVar5) {
      return;
    }
    iVar7 = *(int *)(param_2 + 0x60);
  }
  uVar13 = (uint)(((float)iVar5 * 3.0 + 1.5) / -500.0);
  iVar15 = iVar7;
  do {
    iVar2 = *(int *)(param_2 + 100);
    iVar3 = *(int *)(param_2 + 0x38);
    if ((param_3 == 0) || (lVar10 = *(long *)(param_3 + 0x48), lVar10 == 0)) {
LAB_00d7af80:
      fVar16 = (float)iVar15 * 3.0 + 1.5;
      uVar17 = *(undefined4 *)(param_2 + 0x54);
      if (((*PTR_DAT_047dc9f8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047dc9f8), iVar4 != 0)) {
        FUN_00100190(PTR_LAB_047dca48,PTR_DAT_047dca00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dc9f8);
      }
      DAT_0483c5d8 = *(undefined8 *)PTR_DAT_047dca00;
      lVar14 = FUN_00d7b124(CONCAT44(uVar17,fVar16));
      if (((lVar14 != 0) && (uVar13 < 0xb)) &&
         ((uVar8 = (uint)(fVar16 / 500.0), uVar8 < 10 &&
          ((lVar10 = *(long *)(lVar9 + (ulong)((uVar8 & 0xff) % 10) * 0x50 +
                               (ulong)((uVar13 & 0xff) % 10) * 8 + 0x30), lVar10 != 0 &&
           (local_80 = iVar15, iStack_7c = iVar5, uVar6 = FUN_00d7b224(lVar10,auStack_78,&local_80),
           (uVar6 & 1) != 0)))))) {
        local_88 = iVar15;
        iStack_84 = iVar5;
        FUN_00d7b394(lVar14,lVar10,auStack_78,&local_88);
      }
    }
    else {
      iVar4 = iVar15 - *(int *)(param_3 + 0x60);
      if ((iVar4 < 0) ||
         (((*(int *)(param_3 + 0x38) <= iVar4 ||
           (iVar4 = iVar5 - *(int *)(param_3 + 100), iVar4 < 0)) ||
          (*(int *)(param_3 + 0x3c) <= iVar4)))) goto LAB_00d7af80;
      iVar4 = iVar15 + (*(int *)(param_3 + 0x38) * iVar4 - *(int *)(param_3 + 0x60));
      lVar14 = *(long *)(lVar10 + (long)iVar4 * 8);
      *(undefined8 *)(lVar10 + (long)iVar4 * 8) = 0;
      if (lVar14 == 0) goto LAB_00d7af80;
    }
    *(long *)(*plVar1 + (long)(iVar15 + (iVar3 * (iVar5 - iVar2) - iVar7)) * 8) = lVar14;
    if (iVar11 + -1 == iVar15) goto LAB_00d7b064;
    iVar7 = *(int *)(param_2 + 0x60);
    iVar15 = iVar15 + 1;
  } while( true );
}


