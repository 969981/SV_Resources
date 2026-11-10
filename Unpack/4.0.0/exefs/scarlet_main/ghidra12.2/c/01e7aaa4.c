/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7aaa4; name: FUN_01e7aaa4
 */


void FUN_01e7aaa4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long *local_f8;
  long local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [100];
  undefined4 local_6c;
  long *local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  undefined8 local_28;
  
  FUN_01e79c5c(&local_f0,param_2);
  if (local_f0 == 0) {
    local_28 = 0;
  }
  else {
    FUN_01e79dbc(&local_28);
  }
  FUN_01e79e4c(&local_f0);
  FUN_01050714(&local_68,param_3);
  plVar9 = local_68;
  plVar3 = (long *)PTR_DAT_047d8b70;
  if (local_68 != (long *)0x0) {
    plVar3 = local_68 + 6;
  }
  local_60 = *plVar3;
  plVar3 = (long *)PTR_PTR_047d4508;
  if (local_68 != (long *)0x0) {
    plVar3 = local_68 + 7;
  }
  lStack_58 = *plVar3;
  if (local_68 == (long *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = local_68[8];
  }
  local_48 = (long *)0x0;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))(local_68);
  }
  local_48 = plVar9;
  local_6c = 0;
  FUN_01e79f5c(&local_120,&local_28);
  local_118 = *param_4;
  uStack_110 = param_4[1];
  local_108 = param_4[2];
  uStack_100 = param_4[3];
  local_f8 = (long *)param_4[4];
  param_4[4] = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  FUN_01e82e50(&local_f0,&local_120);
  FUN_015d1ba8(param_1,&local_60,&local_6c,&local_f0);
  pcVar8 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar8)(auStack_d0);
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  FUN_01e7a01c(&local_120);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar11 = *param_1;
  FUN_01e79c5c(&local_f0,param_2);
  local_130 = (undefined8 *)0x0;
  uStack_128 = 0;
  FUN_01e7a094(&local_130,&local_f0);
  if (((*(char *)(lVar11 + 0x140) != '\0') && (local_130 != (undefined8 *)0x0)) &&
     (local_130[2] != 0)) {
    (**(code **)(*(long *)(local_130[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(lVar11 + 0x130,&local_130);
  puVar7 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_130 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_130 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_120 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_120);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_01e79e4c(&local_f0);
  FUN_01e7a01c(&local_28);
  return;
}


