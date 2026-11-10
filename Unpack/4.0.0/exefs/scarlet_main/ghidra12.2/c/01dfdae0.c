/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dfdae0; name: FUN_01dfdae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01dfdae0(undefined1 param_1 [16])

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  long *local_38 [2];
  long local_28;
  
  FUN_01dfeb7c(local_38);
  plVar7 = local_38[0];
  if (local_38[0] == (long *)0x0) {
    return true;
  }
  if (*(short *)((long)local_38[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_38[0] + 0x1a);
    sVar12 = *(short *)((long)local_38[0] + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar12) {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_01dfdb50;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dfdb50:
        bVar8 = false;
      }
      if (bVar8) {
        plVar13 = (long *)0x0;
        if (local_38[0][2] != 0) {
          plVar13 = (long *)(local_38[0][2] + -0x28);
        }
        goto LAB_01dfdb78;
      }
      sVar12 = sVar4;
    } while (sVar4 != 0);
  }
  plVar13 = (long *)0x0;
LAB_01dfdb78:
  plVar2 = local_38[0] + 3;
  do {
    sVar12 = (short)*plVar2;
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *(short *)plVar2 = sVar12 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar12 == 1) {
    piVar3 = (int *)((long)local_38[0] + 0x1c);
    do {
      iVar9 = *piVar3;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar8) {
        *piVar3 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar11 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar11;
      local_28 = *plVar7;
      FUN_00c44438(lVar11 + 0x8040,&local_28);
    }
  }
  else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar13 == (long *)0x0) {
    return true;
  }
  FUN_016c5438(local_38,plVar13,0);
  if (local_38[0] == (long *)0x0) {
    bVar8 = true;
  }
  else {
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    uVar10 = (ulong)(*(float *)((long)local_38[0] + 0x334) *
                    (fVar14 / *(float *)PTR_FloatDegree180_047d2390));
    fVar14 = param_1._0_4_ * (float)_DAT_03cabe60;
    fVar16 = param_1._4_4_ * (float)((ulong)_DAT_03cabe60 >> 0x20);
    fVar17 = param_1._8_4_ * (float)_UNK_03cabe68;
    fVar18 = param_1._12_4_ * (float)((ulong)_UNK_03cabe68 >> 0x20);
    auVar15._0_4_ = fVar14 + fVar16;
    auVar15._4_4_ = fVar17 + fVar18;
    auVar15._8_4_ = fVar14 + fVar16;
    auVar15._12_4_ = fVar17 + fVar18;
    auVar15 = NEON_ext(auVar15,auVar15,4,1);
    lVar11 = local_38[0][6];
    psVar1 = (short *)(lVar11 + 0x1a);
    bVar8 = auVar15._0_4_ + auVar15._4_4_ <
            *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar10 >> 0x18 & 0xff) * 0x10) +
            *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar10 >> 0x18 & 0xff) * 0x10) + 8)
            * (float)((uint)uVar10 & 0xffffff) * 5.9604645e-08;
    do {
      sVar12 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_38[0] + 0x50))();
    }
    else if (sVar12 == 0) goto LAB_01dfdc84;
  }
  lVar11 = plVar13[0x13];
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar12 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
    return bVar8;
  }
  if (sVar12 != 0) {
    return bVar8;
  }
LAB_01dfdc84:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


