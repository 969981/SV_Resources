/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d6431c; name: FUN_00d6431c
 */


long FUN_00d6431c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60 [2];
  undefined8 local_38;
  
  if ((((*(long *)(param_1 + 0x80) != 0) && (*(short *)(*(long *)(param_1 + 0x80) + 0x1a) != 0)) &&
      (lVar11 = *(long *)(param_1 + 0x80), lVar11 != 0)) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00d643b0;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d643b0:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar11 + 0x10) != 0) {
          plVar13 = (long *)(*(long *)(lVar11 + 0x10) + -0x28);
          local_70 = 0x10;
          local_68 = (long *)0x0;
          local_80 = (undefined8 *)&DAT_4932f30f47404b80;
          pcStack_78 = "LookAroundObject";
          FUN_00fe4300(local_60,plVar13,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          if (local_60[0] == (undefined8 *)0x0) goto LAB_00d64434;
          if (*(short *)((long)local_60[0] + 0x1a) == 0) goto LAB_00d6442c;
          if (local_60[0] == (undefined8 *)0x0) goto LAB_00d64434;
          if (*(short *)((long)local_60[0] + 0x1a) == 0) goto LAB_00d6442c;
          psVar1 = (short *)((long)local_60[0] + 0x1a);
          sVar12 = *(short *)((long)local_60[0] + 0x1a);
          goto LAB_00d644bc;
        }
        break;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
LAB_00d64358:
  return param_1 + 0x90;
LAB_00d644bc:
  sVar3 = *psVar1;
  if (sVar3 == sVar12) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar12 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_00d644e0;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d644e0:
    bVar5 = false;
  }
  if (bVar5) {
    lVar11 = local_60[0][2];
    if (lVar11 != 0) {
      plVar14 = (long *)(lVar11 + -0x28);
      (**(code **)(*(long *)(lVar11 + -0x28) + 0x18))(&local_80,plVar14);
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      if (local_80[2] == lVar11) {
        FUN_00c9ea00(&local_90,&local_80);
      }
      puVar9 = local_80;
      puVar8 = PTR_DAT_047d3918;
      puVar7 = PTR_DAT_047d3910;
      puVar6 = PTR_DAT_047d3908;
      if (local_80 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_80 + 3);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          piVar2 = (int *)((long)local_80 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*puVar6 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)puVar7;
            *(long *)puVar8 = lVar11;
            local_38 = *puVar9;
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar12 == 0) goto LAB_00d6446c;
      }
      FUN_00d0a34c(param_1 + 0x90,&local_90);
      puVar9 = local_90;
      if (local_90 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_90 + 3);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          piVar2 = (int *)((long)local_90 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*puVar6 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)puVar7;
            *(long *)puVar8 = lVar11;
            local_80 = (undefined8 *)*puVar9;
            FUN_00c44438(lVar11 + 0x8040,&local_80);
          }
        }
        else if (sVar12 == 0) goto LAB_00d6446c;
      }
      (**(code **)(*plVar14 + 0x60))(plVar14);
    }
    goto LAB_00d6442c;
  }
  sVar12 = sVar3;
  if (sVar3 == 0) {
LAB_00d6442c:
    if (local_60[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60[0] + 3);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_60[0] + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_80 = (undefined8 *)*local_60[0];
          FUN_00c44438(lVar11 + 0x8040,&local_80);
        }
      }
      else if (sVar12 == 0) {
LAB_00d6446c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_00d64434:
    (**(code **)(*plVar13 + 0x60))(plVar13);
    goto LAB_00d64358;
  }
  goto LAB_00d644bc;
}


