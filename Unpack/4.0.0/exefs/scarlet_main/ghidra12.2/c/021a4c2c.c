/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a4c2c; name: FUN_021a4c2c
 */


void FUN_021a4c2c(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 local_68;
  
  *param_1 = &PTR_FUN_045a18a8;
  param_1[4] = &PTR_LAB_045a18d8;
  FUN_00da5204();
  FUN_012c6ad0();
  plVar10 = (long *)param_1[0x169e];
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_021a5080;
  }
  FUN_021a50a8(param_1 + 0x1696);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1693));
  FUN_021a5158(param_1 + 0x168a);
  FUN_021a5200(param_1 + 0x1683);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1681));
  FUN_021a5408(param_1 + 0x1679);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1677));
  FUN_021a5430(param_1 + 0x166f);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x166d));
  pcVar12 = (code *)param_1[0x165d];
  if (pcVar12 != (code *)0x0) {
    param_1[0x165e] = 0;
    param_1[0x165f] = 0;
    param_1[0x165c] = 0;
    param_1[0x165d] = 0;
    (*pcVar12)(param_1 + 0x1660);
  }
  FUN_021a5458(param_1 + 0x1655);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1653));
  FUN_021a5500(param_1 + 0x164b);
  FUN_021a5500(param_1 + 0x1644);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1642));
  FUN_021a5528(param_1 + 0x1639);
  FUN_021a5568(param_1 + 0x1635);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1633));
  FUN_021a5610(param_1 + 0x1624);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1622));
  FUN_021a56b0(param_1 + 0x161a);
  plVar10 = (long *)param_1[0x1619];
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_021a5080;
  }
  plVar10 = (long *)param_1[0x1618];
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_021a5080;
  }
  if ((long *)param_1[0x1616] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1616] + 0x60))();
  }
  if ((long *)param_1[0x1615] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1615] + 0x60))();
  }
  puVar14 = param_1 + 0x1612;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1613));
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  do {
    puVar13 = (undefined8 *)puVar14[-3];
    if (puVar13 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar13 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar13 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          lVar11 = *(long *)puVar7;
          *(long *)puVar8 = lVar11;
          local_68 = *puVar13;
          FUN_00c44438(lVar11 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    plVar10 = puVar14 + -4;
    puVar14 = puVar14 + -7;
    if ((long *)*plVar10 != (long *)0x0) {
      (**(code **)(*(long *)*plVar10 + 0x20))();
    }
  } while (puVar14 != param_1 + 0x812);
  FUN_021a5750(param_1 + 0xc);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 10));
  FUN_012e9b50(param_1 + 7);
  plVar10 = (long *)param_1[6];
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_021a5080;
  }
  plVar10 = (long *)param_1[5];
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x021a5014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x50))();
      return;
    }
    if (sVar3 == 0) {
LAB_021a5080:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


