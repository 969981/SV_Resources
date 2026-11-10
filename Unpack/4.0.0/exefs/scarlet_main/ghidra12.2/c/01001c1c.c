/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01001c1c; name: FUN_01001c1c
 */


void FUN_01001c1c(long *param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  float fVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long *local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  char local_40;
  long local_38;
  
  (**(code **)(*param_1 + 0x18))(&local_78);
  local_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  plVar4 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar4 = param_1 + 5;
  }
  if ((long *)local_78[2] == plVar4) {
    FUN_01001f40(&local_50,&local_78);
  }
  plVar4 = local_78;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 3;
    do {
      sVar6 = (short)*plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(short *)plVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *plVar4;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar6 == 0) goto LAB_01001d98;
  }
  FUN_01002950(param_1 + 10,&local_50);
  puVar9 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_50 + 3);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_50 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_78 = (long *)*puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_78);
      }
    }
    else if (sVar6 == 0) {
LAB_01001d98:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (((param_1[8] != 0) || (param_1[9] != 0)) && ((char)param_1[0xd] == '\0')) {
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    local_68 = (long)param_1 + 0x69;
    lVar11 = *(long *)PTR_DAT_047d88d8;
    *(long *)PTR_DAT_047d88e0 = lVar11;
    lStack_70 = param_1[9];
    local_58 = param_1 + 0x59;
    lStack_60 = (long)param_1 + 0x6a;
    local_78 = param_1;
    FUN_00f338dc(&local_50,lVar11);
    fVar5 = *(float *)(lVar11 + 0x520);
    FUN_01002310(fVar5,local_50,&local_78);
    *(float *)(lVar11 + 0x520) = fVar5 + 0.01;
    if (local_40 != '\0') {
      *local_48 = 0;
      nn::os::SignalLightEvent((LightEventType *)(local_48 + 1));
    }
  }
  return;
}


