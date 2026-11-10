/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02216b3c; name: FUN_02216b3c
 */


undefined4
FUN_02216b3c(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,uint param_5
            ,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_330 [48];
  undefined8 local_300;
  ulong uStack_2f8;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined2 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  long *local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  long *local_298;
  undefined *apuStack_290 [3];
  undefined1 local_278;
  undefined4 local_270;
  ulong local_268;
  ulong local_260;
  undefined *apuStack_258 [63];
  
  local_270 = 0;
  apuStack_290[1] = (undefined *)0xffffffff;
  apuStack_290[2] = (undefined *)0x1;
  memset(&local_268,0xff,0x200);
  apuStack_290[0] = PTR_DAT_047d9310 + 0x10;
  local_298 = (long *)0x0;
  local_278 = 2;
  FUN_00cb4960(param_4,&local_298);
  local_2d8 = 0xffff;
  local_2d4 = 0;
  local_2d0 = 0;
  local_2e8 = 0;
  local_2e0 = (undefined **)0x0;
  lVar5 = 0x30;
  local_2c8 = 0xfb0001;
  local_2a0 = 0;
  local_2b0 = local_298;
  local_2a8 = param_2;
  memcpy(auStack_330,PTR_DAT_047d19b0 + 0x200,0x30);
  auVar6 = NEON_ext(param_1,param_1,8,1);
  uStack_2f8 = (ulong)auVar6._0_4_;
  local_300 = param_1._0_8_;
  nn::os::LockMutex((MutexType *)(param_3 + 0x120));
  local_2e8 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  do {
    *(ulong *)((long)apuStack_290 + lVar5) = *(ulong *)((long)apuStack_290 + lVar5) & 1;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x228);
  if ((param_5 & 1) != 0) {
    local_268 = local_268 | 2;
  }
  local_260 = local_260 | param_5;
  if ((param_5 >> 1 & 1) != 0) {
    local_260 = local_260 | 2;
  }
  lVar5 = 7;
  do {
    if ((param_5 >> (lVar5 - 5U & 0x3f) & 1) != 0) {
      apuStack_290[lVar5] = (undefined *)((ulong)apuStack_290[lVar5] | 2);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x45);
  local_2e0 = apuStack_290;
  local_2e8 = (**(code **)(**(long **)(param_3 + 8) + 0x68))();
  local_2d4 = 1;
  uVar4 = FUN_00da69f8(param_3,&local_2e8,auStack_330,param_6,param_7,param_8);
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x120));
  if ((local_298 != (long *)0x0) && (local_298[1] != 0)) {
    plVar1 = local_298 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*local_298 + 0x18))();
    }
  }
  return uVar4;
}


