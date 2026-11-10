/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d55e4c; name: FUN_01d55e4c
 */


void FUN_01d55e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  short *psVar1;
  int *piVar2;
  undefined *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70 [2];
  undefined4 local_5c;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  uVar9 = 0;
  pcVar10 = (code *)0x0;
  pcVar11 = (code *)0x0;
  uVar12 = 0;
  puVar3 = PTR_FUN_047d7a48;
  if (DAT_048310d0 == '\0') {
    puVar3 = (undefined *)0x0;
  }
  local_70[0] = param_2;
  local_5c = param_4;
  if ((code *)param_5[2] == (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
  }
  else {
    (*(code *)param_5[2])(param_5 + 4,auStack_150);
    uVar9 = *param_5;
    pcVar10 = (code *)param_5[1];
    pcVar11 = (code *)param_5[2];
    uVar12 = param_5[3];
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(auStack_150,auStack_d0);
      local_f0 = uVar9;
      local_e8 = pcVar10;
      local_e0 = pcVar11;
      uStack_d8 = uVar12;
    }
  }
  FUN_01d56968(local_58,param_3,puVar3,0,&local_5c,local_70,&local_f0,in_x6,in_x7,uVar9,pcVar10,
               pcVar11,uVar12);
  FUN_01d569c0(param_1,local_58);
  if (local_58[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58[0] + 3);
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
      piVar2 = (int *)((long)local_58[0] + 0x1c);
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_48 = *local_58[0];
        FUN_00c44438(lVar8 + 0x8040,&local_48);
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
  pcVar11 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar11)(auStack_d0);
  }
  if (pcVar10 != (code *)0x0) {
    (*pcVar10)(auStack_150);
  }
  return;
}


