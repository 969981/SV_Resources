/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e05618; name: FUN_01e05618
 */


void FUN_01e05618(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  undefined4 local_1a0 [4];
  undefined8 *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [96];
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  
  plVar1 = (long *)(param_1 + 0x38);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01e0565c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01e0565c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01e0565c:
  local_f0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = (code *)0x0;
  local_1a0[0] = 0;
  local_190 = (undefined8 *)0x0;
  uStack_188 = 0;
  local_180 = 0;
  local_178 = (code *)0x0;
  local_170 = 0;
  local_168 = 0;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_00d0a71c(&local_190,param_3);
  pcVar8 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    local_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar8)(auStack_160);
  }
  if (*(code **)(param_3 + 0x20) != (code *)0x0) {
    (**(code **)(param_3 + 0x20))(param_3 + 0x30,auStack_160);
    local_168 = *(undefined8 *)(param_3 + 0x28);
    local_178 = *(code **)(param_3 + 0x18);
    local_180 = *(undefined8 *)(param_3 + 0x10);
    local_170 = *(undefined8 *)(param_3 + 0x20);
  }
  pcVar8 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar8)(auStack_e0);
  }
  if (*(code **)(param_3 + 0xa0) != (code *)0x0) {
    (**(code **)(param_3 + 0xa0))(param_3 + 0xb0,auStack_e0);
    local_e8 = *(undefined8 *)(param_3 + 0xa8);
    local_f8 = *(code **)(param_3 + 0x98);
    local_100 = *(undefined8 *)(param_3 + 0x90);
    local_f0 = *(undefined8 *)(param_3 + 0xa0);
  }
  FUN_00d0a71c(&local_78,param_2);
  local_80 = 0;
  FUN_01e22b00(param_1,local_1a0);
  puVar7 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_78 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
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
        local_58 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_58);
      }
    }
    else if (sVar4 == 0) goto LAB_01e05850;
  }
  pcVar8 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar8)(auStack_e0);
  }
  pcVar8 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    local_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar8)(auStack_160);
  }
  puVar7 = local_190;
  if (local_190 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_190 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_190 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
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
        local_58 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_58);
      }
    }
    else if (sVar4 == 0) {
LAB_01e05850:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40));
  return;
}


