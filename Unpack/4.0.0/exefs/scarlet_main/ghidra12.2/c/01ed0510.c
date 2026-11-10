/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ed0510; name: FUN_01ed0510
 */


void FUN_01ed0510(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
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
  undefined1 auStack_60 [24];
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
  FUN_0135d26c(auStack_60,&local_68);
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
  FUN_01ed67ec(&local_f0,&local_120);
  FUN_015d1ba8(param_1,auStack_60,&local_6c,&local_f0);
  pcVar7 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar7)(auStack_d0);
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
  lVar9 = *param_1;
  FUN_01e79c5c(&local_f0,param_2);
  local_130 = (undefined8 *)0x0;
  uStack_128 = 0;
  FUN_01e7a094(&local_130,&local_f0);
  if (((*(char *)(lVar9 + 0x140) != '\0') && (local_130 != (undefined8 *)0x0)) &&
     (local_130[2] != 0)) {
    (**(code **)(*(long *)(local_130[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(lVar9 + 0x130,&local_130);
  puVar6 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_130 + 3);
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
      piVar2 = (int *)((long)local_130 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_120 = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_120);
      }
    }
    else if (sVar3 == 0) {
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


