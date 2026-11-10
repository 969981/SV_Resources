/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e2d13c; name: FUN_01e2d13c
 */


void FUN_01e2d13c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined2 local_48 [4];
  undefined8 local_28;
  
  lVar9 = *(long *)(param_1 + 0x28);
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
    plVar12 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e2d548;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e2d548:
        bVar5 = false;
      }
      if (bVar5) {
        plVar12 = (long *)0x0;
        if (*(long *)(lVar9 + 0x10) != 0) {
          plVar12 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
        }
        break;
      }
      plVar12 = (long *)0x0;
      sVar11 = sVar3;
    } while (sVar3 != 0);
  }
  local_48[0] = 6;
  lVar9 = FUN_011457ac(plVar12,plVar12[1],local_48);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_013dbad8(&local_58,(long *)(param_1 + 0x28));
  plVar8 = (long *)(**(code **)(**(long **)(lVar9 + 0x148) + 0x10))
                             (*(long **)(lVar9 + 0x148),0x40,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(lVar9 + 0x148) + 0xe8))();
  }
  *plVar8 = 0;
  FUN_010bb1c4((undefined8 *)(lVar9 + 0x148),plVar8 + 2,&local_58);
  puVar6 = local_58;
  plVar8[1] = lVar9 + 0x130;
  lVar10 = *(long *)(lVar9 + 0x130);
  *plVar8 = lVar10;
  *(long **)(lVar10 + 8) = plVar8;
  *(long **)(lVar9 + 0x130) = plVar8;
  *(long *)(lVar9 + 0x140) = *(long *)(lVar9 + 0x140) + 1;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
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
      piVar2 = (int *)((long)local_58 + 0x1c);
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
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_98 = *puVar6;
        FUN_00c44438(lVar10 + 0x8040,&local_98);
      }
    }
    else if (sVar11 == 0) goto LAB_01e2d330;
  }
  local_98 = 0x9ed15e43ff06cc17;
  pcStack_90 = "PartnerPokemonRecvHit";
  local_88 = 0x15;
  local_80 = (long *)0x0;
  FUN_00fe3ff4(local_78,plVar12,&local_98);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_011453dc(&local_68,local_78);
  plVar8 = (long *)(**(code **)(**(long **)(lVar9 + 0x180) + 0x10))
                             (*(long **)(lVar9 + 0x180),0x78,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(lVar9 + 0x180) + 0xe8))();
  }
  *plVar8 = 0;
  FUN_0109ee3c((undefined8 *)(lVar9 + 0x180),plVar8 + 2,&local_68);
  puVar6 = local_68;
  plVar8[1] = lVar9 + 0x168;
  lVar10 = *(long *)(lVar9 + 0x168);
  *plVar8 = lVar10;
  *(long **)(lVar10 + 8) = plVar8;
  *(long **)(lVar9 + 0x168) = plVar8;
  *(long *)(lVar9 + 0x178) = *(long *)(lVar9 + 0x178) + 1;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
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
      piVar2 = (int *)((long)local_68 + 0x1c);
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_28);
      }
    }
    else if (sVar11 == 0) goto LAB_01e2d330;
  }
  if (local_78[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_78[0] + 3);
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
      piVar2 = (int *)((long)local_78[0] + 0x1c);
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *local_78[0];
        FUN_00c44438(lVar9 + 0x8040,&local_28);
      }
    }
    else if (sVar11 == 0) {
LAB_01e2d330:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


