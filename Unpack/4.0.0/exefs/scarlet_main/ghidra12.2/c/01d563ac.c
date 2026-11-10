/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d563ac; name: FUN_01d563ac
 */


void FUN_01d563ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5,byte *param_6)

{
  short *psVar1;
  int *piVar2;
  undefined *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  undefined1 *local_1a0;
  byte *pbStack_198;
  size_t local_190;
  long *local_188;
  undefined8 local_180;
  code *local_178;
  code *local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  code *local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  undefined8 local_80 [3];
  undefined4 local_64;
  undefined8 *local_60 [2];
  undefined8 local_38;
  
  local_180 = 0;
  local_178 = (code *)0x0;
  local_170 = (code *)0x0;
  uStack_168 = 0;
  puVar3 = PTR_FUN_047d7a50;
  if (DAT_048310d8 == '\0') {
    puVar3 = (undefined *)0x0;
  }
  local_80[0] = param_2;
  local_64 = param_4;
  if ((code *)param_5[2] == (code *)0x0) {
    local_f0 = (code *)0x0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
  }
  else {
    (*(code *)param_5[2])(param_5 + 4,auStack_160);
    local_180 = *param_5;
    local_178 = (code *)param_5[1];
    local_170 = (code *)param_5[2];
    uStack_168 = param_5[3];
    local_100 = 0;
    local_f8 = (code *)0x0;
    local_f0 = (code *)0x0;
    uStack_e8 = 0;
    if (local_170 != (code *)0x0) {
      (*local_170)(auStack_160,auStack_e0);
      local_100 = local_180;
      local_f8 = local_178;
      local_f0 = local_170;
      uStack_e8 = uStack_168;
    }
  }
  if (param_6 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_1a0 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_198 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_190 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_188 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_188 != (long *)0x0) {
      (**(code **)(*local_188 + 0x18))();
    }
  }
  else {
    local_190 = strlen((char *)param_6);
    bVar5 = *param_6;
    local_1a0 = &DAT_cbf29ce484222645;
    pbVar11 = param_6;
    while (bVar5 != 0) {
      pbVar11 = pbVar11 + 1;
      local_1a0 = (undefined1 *)(((ulong)local_1a0 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar11;
    }
    local_188 = (long *)0x0;
    pbStack_198 = param_6;
  }
  FUN_01d57058(local_60,param_3,puVar3,0,&local_64,local_80,&local_100,&local_1a0);
  FUN_01d569c0(param_1,local_60);
  if (local_60[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60[0] + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_60[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *local_60[0];
        FUN_00c44438(lVar10 + 0x8040,&local_38);
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
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  pcVar8 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar8)(auStack_e0);
  }
  pcVar8 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar8)(auStack_160);
  }
  return;
}


