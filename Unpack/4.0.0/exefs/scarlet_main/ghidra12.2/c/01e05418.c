/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e05418; name: FUN_01e05418
 */


void FUN_01e05418(long param_1,undefined8 param_2,long param_3)

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
  undefined8 *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [104];
  undefined8 local_48;
  
  local_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  FUN_00d0a71c(&local_160,param_3);
  local_140 = 0;
  local_138 = 0;
  local_150 = 0;
  local_148 = (code *)0x0;
  if (*(code **)(param_3 + 0x20) != (code *)0x0) {
    (**(code **)(param_3 + 0x20))(param_3 + 0x30,auStack_130);
    local_138 = *(undefined8 *)(param_3 + 0x28);
    local_148 = *(code **)(param_3 + 0x18);
    local_150 = *(undefined8 *)(param_3 + 0x10);
    local_140 = *(undefined8 *)(param_3 + 0x20);
  }
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  if (*(code **)(param_3 + 0xa0) != (code *)0x0) {
    (**(code **)(param_3 + 0xa0))(param_3 + 0xb0,auStack_b0);
    local_b8 = *(undefined8 *)(param_3 + 0xa8);
    local_c8 = *(code **)(param_3 + 0x98);
    local_d0 = *(undefined8 *)(param_3 + 0x90);
    local_c0 = *(undefined8 *)(param_3 + 0xa0);
  }
  FUN_01e05618(param_1 + 0x318,param_2,&local_160);
  pcVar7 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar7)(auStack_b0);
  }
  pcVar7 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    local_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar7)(auStack_130);
  }
  puVar6 = local_160;
  if (local_160 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_160 + 3);
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
      piVar2 = (int *)((long)local_160 + 0x1c);
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
        local_48 = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_48);
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
  return;
}


