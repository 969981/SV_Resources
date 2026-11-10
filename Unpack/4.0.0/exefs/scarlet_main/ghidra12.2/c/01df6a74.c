/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df6a74; name: FUN_01df6a74
 */


void FUN_01df6a74(undefined8 param_1,uint param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50 [2];
  undefined8 local_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  FUN_01a78e3c(local_38);
  puVar6 = local_38[0];
  if (local_38[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_38[0] + 0x1a) != 0) {
      psVar2 = (short *)((long)local_38[0] + 0x1a);
      sVar9 = *(short *)((long)local_38[0] + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01df6ca4;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01df6ca4:
          bVar5 = false;
        }
        if (bVar5) {
          plVar10 = (long *)0x0;
          if (local_38[0][2] != 0) {
            plVar10 = (long *)(local_38[0][2] + -0x28);
          }
          goto LAB_01df6cd0;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar10 = (long *)0x0;
LAB_01df6cd0:
    psVar2 = (short *)(local_38[0] + 3);
    do {
      sVar9 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar1 = (int *)((long)local_38[0] + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
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
        local_50[0] = (undefined8 *)*puVar6;
        FUN_00c44438(lVar8 + 0x8040,local_50);
      }
    }
    else if (sVar9 == 0) goto LAB_01df6b30;
    if (plVar10 != (long *)0x0) {
      FUN_01101dbc(plVar10,param_2 & 1,0);
      (**(code **)(*plVar10 + 0x60))(plVar10);
    }
  }
  local_40 = FUN_017516e8();
  FUN_0175164c(local_38,&local_40);
  local_70 = 0xff506c54ea584a29;
  pcStack_68 = "PB_EmitTail";
  local_60 = 0xb;
  local_58 = (long *)0x0;
  FUN_01751920(local_50,local_38,&local_70,1,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if ((local_50[0] != (undefined8 *)0x0) &&
     ((local_50[0][2] == 0 ||
      (FUN_01df6e38(local_50[0][2] + -0x28,param_2 & 1), local_50[0] != (undefined8 *)0x0)))) {
    puVar6 = local_50[0];
    psVar2 = (short *)(local_50[0] + 3);
    do {
      sVar9 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar1 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
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
        local_28 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar9 == 0) goto LAB_01df6b30;
  }
  if (local_38[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_38[0] + 3);
    do {
      sVar9 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar1 = (int *)((long)local_38[0] + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
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
        local_50[0] = (undefined8 *)*local_38[0];
        FUN_00c44438(lVar8 + 0x8040,local_50);
      }
    }
    else if (sVar9 == 0) {
LAB_01df6b30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


