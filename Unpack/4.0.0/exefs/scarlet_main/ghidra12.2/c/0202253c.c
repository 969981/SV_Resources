/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0202253c; name: FUN_0202253c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0202253c(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  short sVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80 [2];
  
  lVar8 = FUN_0202174c(param_1,*param_2);
  if ((((*(long *)(lVar8 + 0x128) == 0) || (*(short *)(*(long *)(lVar8 + 0x128) + 0x1a) == 0)) &&
      (uVar9 = FUN_00d53914(lVar8 + 0x110), (uVar9 & 1) == 0)) ||
     ((*(long *)(lVar8 + 0x120) == 0 ||
      (FUN_00d52990(local_80,*(long *)(lVar8 + 0x120),0), local_80[0] == (undefined8 *)0x0)))) {
    return 0;
  }
  if (*(short *)((long)local_80[0] + 0x1a) != 0) {
    if (local_80[0] == (undefined8 *)0x0) {
      return 0;
    }
    if (*(short *)((long)local_80[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_80[0] + 0x1a);
      sVar11 = *(short *)((long)local_80[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02022624;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02022624:
          bVar5 = false;
        }
        uVar6 = _UNK_03cabe68;
        uVar12 = _DAT_03cabe60;
        if (bVar5) {
          lVar8 = local_80[0][2];
          if (lVar8 == 0) goto LAB_02022768;
          lVar10 = *(long *)(lVar8 + 0x90);
          plVar13 = (long *)(lVar8 + -0x28);
          if (lVar10 == 0) goto LAB_02022718;
          uVar9 = 0;
          goto LAB_02022688;
        }
        uVar12 = 0;
        sVar11 = sVar3;
      } while (sVar3 != 0);
      goto LAB_0202276c;
    }
  }
LAB_02022768:
  uVar12 = 0;
  goto LAB_0202276c;
  while( true ) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    FUN_00f314bc(plVar13,uVar9 & 0xffffffff,&local_c0);
    fVar15 = (float)local_a0 * (float)uVar12;
    fVar16 = local_a0._4_4_ * (float)((ulong)uVar12 >> 0x20);
    fVar17 = (float)uStack_98 * (float)uVar6;
    fVar18 = uStack_98._4_4_ * (float)((ulong)uVar6 >> 0x20);
    auVar14._0_4_ = fVar15 + fVar16;
    auVar14._4_4_ = fVar17 + fVar18;
    auVar14._8_4_ = fVar15 + fVar16;
    auVar14._12_4_ = fVar17 + fVar18;
    NEON_ext(auVar14,auVar14,4,1);
    fVar15 = (float)FUN_00d7a4e0();
    if (fVar15 < (*(float *)(lVar8 + 0x30c) * 3.1415927) / 180.0) {
      uVar12 = 1;
      goto LAB_0202271c;
    }
    lVar10 = *(long *)(lVar8 + 0x90);
    uVar9 = uVar9 + 1;
    if (lVar10 == 0) break;
LAB_02022688:
    if ((ulong)(long)*(int *)(lVar10 + 0x20) <= uVar9) break;
  }
LAB_02022718:
  uVar12 = 0;
LAB_0202271c:
  lVar8 = *(long *)(lVar8 + 8);
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar11 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar11 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
  }
  else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_0202276c:
  if (local_80[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80[0] + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_80[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_c0 = *local_80[0];
        FUN_00c44438(lVar8 + 0x8040,&local_c0);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return uVar12;
}


