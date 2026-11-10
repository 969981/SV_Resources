/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e1bfc; name: FUN_013e1bfc
 */


void FUN_013e1bfc(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  short sVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar13 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar13;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x90) == -1)) {
    plVar11 = (long *)0x0;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
  }
  else {
    FUN_0142cac4(&local_58,*(undefined8 *)(lVar13 + (long)*(int *)(lVar9 + 0x90) * 8 + 0x6a0));
    puVar7 = local_58;
    if ((local_58 != (undefined8 *)0x0) && (sVar12 = *(short *)((long)local_58 + 0x1a), sVar12 != 0)
       ) {
      puVar14 = (undefined8 *)local_58[1];
      if (((*PTR_DAT_047d6c48 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar8 != 0)) {
        uVar10 = FUN_01cd650c();
        *(undefined8 *)PTR_DAT_047d6c50 = uVar10;
        __cxa_guard_release(PTR_DAT_047d6c48);
      }
      if (puVar14 != (undefined8 *)0x0) {
        psVar1 = (short *)((long)puVar7 + 0x1a);
        do {
          if (puVar14 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_013e1f3c;
          puVar14 = (undefined8 *)*puVar14;
          plVar11 = (long *)0x0;
        } while (puVar14 != (undefined8 *)0x0);
        goto LAB_013e1c84;
      }
    }
    plVar11 = (long *)0x0;
  }
  goto LAB_013e1c84;
  while( true ) {
    plVar11 = (long *)0x0;
    sVar12 = sVar4;
    if (sVar4 == 0) break;
LAB_013e1f3c:
    sVar4 = *psVar1;
    if (sVar4 == sVar12) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_013e1f60;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_013e1f60:
      bVar6 = false;
    }
    if (bVar6) {
      lVar13 = puVar7[2];
      plVar11 = (long *)0x0;
      if (lVar13 != 0) {
        plVar11 = (long *)(lVar13 + -0x28);
      }
      break;
    }
  }
LAB_013e1c84:
  (**(code **)(*plVar11 + 0x18))(local_48,plVar11);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  plVar3 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar3 = plVar11 + 5;
  }
  if ((long *)local_48[0][2] == plVar3) {
    FUN_01099238(&local_68,local_48);
  }
  puVar7 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_38 = *puVar7;
        FUN_00c44438(lVar13 + 0x8040,&local_38);
      }
    }
    else if (sVar12 == 0) goto LAB_013e1d8c;
  }
  FUN_013e2144(param_1 + 0x40,&local_68);
  puVar7 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_48[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar13 + 0x8040,local_48);
      }
    }
    else if (sVar12 == 0) goto LAB_013e1d8c;
  }
  if (plVar11 != (long *)0x0) {
    lVar13 = plVar11[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar7 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_48[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar13 + 0x8040,local_48);
      }
    }
    else if (sVar12 == 0) {
LAB_013e1d8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


