/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01908ac0; name: FUN_01908ac0
 */


void FUN_01908ac0(long param_1,undefined8 *param_2)

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
  long *plVar12;
  short sVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar14 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar14;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x90) == -1)) {
    plVar11 = (long *)0x0;
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
  }
  else {
    FUN_0142cac4(&local_60,*(undefined8 *)(lVar14 + (long)*(int *)(lVar9 + 0x90) * 8 + 0x6a0));
    puVar7 = local_60;
    if ((local_60 != (undefined8 *)0x0) && (sVar13 = *(short *)((long)local_60 + 0x1a), sVar13 != 0)
       ) {
      puVar15 = (undefined8 *)local_60[1];
      if (((*PTR_DAT_047d6c48 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar8 != 0)) {
        uVar10 = FUN_01cd650c();
        *(undefined8 *)PTR_DAT_047d6c50 = uVar10;
        __cxa_guard_release(PTR_DAT_047d6c48);
      }
      if (puVar15 != (undefined8 *)0x0) {
        psVar1 = (short *)((long)puVar7 + 0x1a);
        do {
          if (puVar15 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_01908f74;
          puVar15 = (undefined8 *)*puVar15;
          plVar11 = (long *)0x0;
        } while (puVar15 != (undefined8 *)0x0);
        goto LAB_01908b50;
      }
    }
    plVar11 = (long *)0x0;
  }
  goto LAB_01908b50;
  while( true ) {
    plVar11 = (long *)0x0;
    sVar13 = sVar4;
    if (sVar4 == 0) break;
LAB_01908f74:
    sVar4 = *psVar1;
    if (sVar4 == sVar13) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01908f98;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01908f98:
      bVar6 = false;
    }
    if (bVar6) {
      lVar14 = puVar7[2];
      plVar11 = (long *)0x0;
      if (lVar14 != 0) {
        plVar11 = (long *)(lVar14 + -0x28);
      }
      break;
    }
  }
LAB_01908b50:
  (**(code **)(*plVar11 + 0x18))(local_50,plVar11);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  plVar3 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar3 = plVar11 + 5;
  }
  if ((long *)local_50[0][2] == plVar3) {
    FUN_01099238(&local_70,local_50);
  }
  puVar7 = local_50[0];
  if (local_50[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50[0] + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_50[0] + 0x1c);
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_28 = *puVar7;
        FUN_00c44438(lVar14 + 0x8040,&local_28);
      }
    }
    else if (sVar13 == 0) goto LAB_01908d04;
  }
  FUN_013e2144(param_1 + 0x160,&local_70);
  puVar7 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_50[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar14 + 0x8040,local_50);
      }
    }
    else if (sVar13 == 0) goto LAB_01908d04;
  }
  plVar12 = (long *)*param_2;
  (**(code **)(*plVar12 + 0x18))(local_50,plVar12);
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  plVar3 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12 + 5;
  }
  if ((long *)local_50[0][2] == plVar3) {
    FUN_00cbc6dc(&local_70,local_50);
  }
  puVar7 = local_50[0];
  if (local_50[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50[0] + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_50[0] + 0x1c);
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_28 = *puVar7;
        FUN_00c44438(lVar14 + 0x8040,&local_28);
      }
    }
    else if (sVar13 == 0) goto LAB_01908d04;
  }
  FUN_00ca1ea4(param_1 + 0x150,&local_70);
  puVar7 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_50[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar14 + 0x8040,local_50);
      }
    }
    else if (sVar13 == 0) goto LAB_01908d04;
  }
  if (plVar11 != (long *)0x0) {
    lVar14 = plVar11[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar7 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_50[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar14 + 0x8040,local_50);
      }
    }
    else if (sVar13 == 0) {
LAB_01908d04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


