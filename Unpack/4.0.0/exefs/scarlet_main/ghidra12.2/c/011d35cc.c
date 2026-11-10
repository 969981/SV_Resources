/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011d35cc; name: FUN_011d35cc
 */


void FUN_011d35cc(long *param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  short *psVar1;
  int *piVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  byte *pbVar15;
  short sVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_81;
  undefined8 local_78;
  undefined4 local_69;
  
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) && (lVar14 = *param_1, lVar14 != 0))
     && (*(short *)(lVar14 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar14 + 0x1a);
    sVar16 = *(short *)(lVar14 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar16) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_011d3660;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_011d3660:
        bVar6 = false;
      }
      if (bVar6) {
        lVar14 = *(long *)(lVar14 + 0x10);
        if (lVar14 == 0) {
          return;
        }
        plVar17 = (long *)(lVar14 + 0xe8);
        lVar10 = nn::os::GetCurrentThread();
        goto LAB_011d36a4;
      }
      sVar16 = sVar4;
    } while (sVar4 != 0);
  }
  return;
LAB_011d36a4:
  if (*plVar17 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_011d36b4;
    goto LAB_011d36a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0xf0));
        while (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_011d36b4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011d36b4:
  lVar10 = param_1[2];
  lVar19 = *(long *)(lVar14 + 0x20);
  uVar3 = *(undefined1 *)(lVar19 + lVar10 * 0x10);
  bVar8 = (*(code *)param_1[4])(lVar14 + -8,param_2,param_3,param_4,param_5);
  *(byte *)(lVar19 + lVar10 * 0x10) = bVar8 & 1;
  uVar11 = (*(code *)param_1[3])(bVar8 & 1,uVar3);
  *(undefined1 *)(lVar14 + 0x140) = 1;
  puVar7 = PTR_DAT_047d6c50;
  if ((uVar11 & 1) == 0) goto LAB_011d37f4;
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  lVar19 = param_1[5];
  lVar10 = 0;
  if (param_2 != 0) {
    lVar10 = param_2 + -0x20;
  }
  if ((lVar19 != 0) && (puVar18 = *(undefined8 **)(lVar19 + 8), puVar18 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_047d6c48 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar9 != 0)) {
      uVar12 = FUN_01cd650c();
      *(undefined8 *)puVar7 = uVar12;
      __cxa_guard_release(PTR_DAT_047d6c48);
    }
    do {
      if (puVar18 == (undefined8 *)puVar7) {
        FUN_00d9f120(&local_b0,param_1 + 5);
        break;
      }
      puVar18 = (undefined8 *)*puVar18;
    } while (puVar18 != (undefined8 *)0x0);
  }
  pbVar15 = (byte *)param_1[8];
  puVar13 = &DAT_cbf29ce484222645;
  bVar8 = *pbVar15;
  while (bVar8 != 0) {
    pbVar15 = pbVar15 + 1;
    puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar8) * 0x100000001b3);
    bVar8 = *pbVar15;
  }
  FUN_00d9ec44(&local_78,2,puVar13);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_00d9ee10(&local_a0,&local_b0);
  local_90 = local_78;
  local_81 = local_69;
  lVar19 = param_1[0xb];
  lVar10 = *(long *)(lVar10 + 0x60);
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar16 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar16) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_011d3a48;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_011d3a48:
        bVar6 = false;
      }
      if (bVar6) {
        if (*(long *)(lVar10 + 0x10) == 0) break;
        plVar17 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
        FUN_021cbb2c(&local_a0,lVar19,plVar17,param_3 == 0,param_4,param_5);
        (**(code **)(*plVar17 + 0x60))(plVar17);
        goto LAB_011d37e4;
      }
      sVar16 = sVar4;
      if (sVar4 == 0) break;
    } while( true );
  }
  FUN_021cbb2c(&local_a0,lVar19,0,param_3 == 0,param_4,param_5);
LAB_011d37e4:
  puVar18 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a0 + 3);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_78 = *puVar18;
        FUN_00c44438(lVar10 + 0x8040,&local_78);
      }
    }
    else if (sVar16 == 0) goto LAB_011d38e0;
  }
  puVar18 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_78 = *puVar18;
        FUN_00c44438(lVar10 + 0x8040,&local_78);
      }
    }
    else if (sVar16 == 0) {
LAB_011d38e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_011d37f4:
  *(undefined8 *)(lVar14 + 0xe8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0xf0));
  lVar10 = *(long *)(lVar14 + 8);
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar16 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar16 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*(long *)(lVar14 + -0x28) + 0x50))();
    return;
  }
  if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


