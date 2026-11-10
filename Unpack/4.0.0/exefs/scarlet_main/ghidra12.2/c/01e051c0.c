/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e051c0; name: FUN_01e051c0
 */


void FUN_01e051c0(undefined8 param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
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
  
  if (((DAT_04837608 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04837608), iVar9 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  uVar6 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  local_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  FUN_00d0a71c(&local_160,param_2);
  local_140 = 0;
  local_138 = 0;
  local_150 = 0;
  local_148 = (code *)0x0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,auStack_130);
    local_138 = *(undefined8 *)(param_2 + 0x28);
    local_148 = *(code **)(param_2 + 0x18);
    local_150 = *(undefined8 *)(param_2 + 0x10);
    local_140 = *(undefined8 *)(param_2 + 0x20);
  }
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,auStack_b0);
    local_b8 = *(undefined8 *)(param_2 + 0xa8);
    local_c8 = *(code **)(param_2 + 0x98);
    local_d0 = *(undefined8 *)(param_2 + 0x90);
    local_c0 = *(undefined8 *)(param_2 + 0xa0);
  }
  FUN_01e05418(uVar6,param_1,&local_160);
  pcVar8 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar8)(auStack_b0);
  }
  pcVar8 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    local_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar8)(auStack_130);
  }
  puVar7 = local_160;
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
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
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


