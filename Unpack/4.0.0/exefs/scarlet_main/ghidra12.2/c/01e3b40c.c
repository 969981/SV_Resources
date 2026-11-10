/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3b40c; name: FUN_01e3b40c
 */


void FUN_01e3b40c(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined4 param_5,
                 undefined8 *param_6)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  undefined8 *local_90 [7];
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  
  lVar10 = *param_3;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01e3b490;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e3b490:
        bVar6 = false;
      }
      if (bVar6) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          local_50 = 0;
          if (((*PTR_DAT_047d8c00 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8c00);
          }
          lVar9 = *(long *)PTR_DAT_047d8c08;
          *(long *)PTR_DAT_047d8c10 = lVar9;
          local_58 = *(undefined8 *)(lVar9 + 0x70);
          FUN_0100e844(local_90,param_4,&local_58);
          if (local_90[0] == (undefined8 *)0x0) {
            *param_1 = 0;
            goto LAB_01e3b510;
          }
          if (*(short *)((long)local_90[0] + 0x1a) == 0) goto LAB_01e3b694;
          psVar1 = (short *)((long)local_90[0] + 0x1a);
          sVar11 = *(short *)((long)local_90[0] + 0x1a);
          goto LAB_01e3b660;
        }
        break;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  *param_1 = 0;
  return;
LAB_01e3b660:
  sVar4 = *psVar1;
  if (sVar4 == sVar11) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_01e3b684;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01e3b684:
    bVar6 = false;
  }
  if (bVar6) {
    lVar9 = 0;
    if (local_90[0][2] != 0) {
      lVar9 = local_90[0][2] + -0x28;
    }
    *param_1 = lVar9;
    goto LAB_01e3b6b0;
  }
  sVar11 = sVar4;
  if (sVar4 == 0) {
LAB_01e3b694:
    *param_1 = 0;
LAB_01e3b6b0:
    psVar1 = (short *)(local_90[0] + 3);
    do {
      sVar11 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_90[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_48 = *local_90[0];
        FUN_00c44438(lVar9 + 0x8040,&local_48);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
LAB_01e3b510:
    lVar9 = *param_1;
    *(undefined8 *)(lVar9 + 0x40) = *param_6;
    *(undefined8 *)(lVar9 + 0x48) = param_6[1];
    *(undefined8 *)(lVar9 + 0x50) = param_6[2];
    plVar12 = (long *)param_6[3];
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar8 = *(long **)(lVar9 + 0x58);
    *(long **)(lVar9 + 0x58) = plVar12;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    FUN_0100e778(lVar9,*(undefined4 *)(param_6 + 4));
    *(undefined1 *)(lVar9 + 0x221) = *(undefined1 *)((long)param_6 + 0x24);
    *(undefined1 *)(lVar9 + 0x222) = 1;
    *(undefined4 *)(lVar9 + 0x100) = 3;
    FUN_0140f7d8(local_90,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                 *(undefined4 *)(param_2 + 0x48),param_5);
    memcpy((void *)(lVar9 + 0x160),local_90,0x28);
    uVar3 = *(undefined4 *)(param_6 + 6);
    *(undefined8 *)(lVar9 + 0xe8) = param_6[5];
    *(undefined4 *)(lVar9 + 0xf0) = uVar3;
    *(undefined4 *)(lVar9 + 0xf4) = 0;
    *(undefined4 *)(lVar9 + 0xe4) = *(undefined4 *)((long)param_6 + 0x34);
    *(undefined1 *)(lVar9 + 0xf9) = *(undefined1 *)(param_6 + 7);
    *(undefined1 *)(lVar9 + 0xfa) = *(undefined1 *)((long)param_6 + 0x39);
    if (*(int *)(lVar9 + 0x74) == 0) {
      *(undefined4 *)(lVar9 + 0x74) = 1;
    }
    lVar9 = *(long *)(lVar10 + 8);
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  goto LAB_01e3b660;
}


