/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c93ab8; name: FUN_01c93ab8
 */


void FUN_01c93ab8(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  byte *pbVar14;
  code *local_168;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  undefined8 *local_50 [2];
  
  uVar10 = DAT_04816c50;
  FUN_00efb870(local_50);
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_68 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_60 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_58 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_2);
    bVar7 = *param_2;
    local_70 = &DAT_cbf29ce484222645;
    pbVar14 = param_2;
    while (bVar7 != 0) {
      pbVar14 = pbVar14 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar7) * 0x100000001b3);
      bVar7 = *pbVar14;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_2;
  }
  uVar12 = FUN_01c94860(param_3);
  local_168 = (code *)0x0;
  if ((code *)param_4[2] == (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
  }
  else {
    (*(code *)param_4[2])(param_4 + 4,auStack_150);
    uVar4 = *param_4;
    local_168 = (code *)param_4[1];
    pcVar5 = (code *)param_4[2];
    uVar6 = param_4[3];
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(auStack_150,auStack_d0);
      local_f0 = uVar4;
      local_e8 = local_168;
      local_e0 = pcVar5;
      uStack_d8 = uVar6;
    }
  }
  FUN_01c94a60(uVar10,local_50,&local_70,uVar12,&local_f0);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  if (local_168 != (code *)0x0) {
    (*local_168)(auStack_150);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_50[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar3 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_f0 = *local_50[0];
        FUN_00c44438(lVar13 + 0x8040,&local_f0);
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


