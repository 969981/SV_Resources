/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a040b0; name: FUN_02a040b0
 */


void FUN_02a040b0(undefined8 *param_1,long param_2,long param_3,char *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  void *__dest;
  undefined8 uVar5;
  long lVar6;
  char local_9e8 [8];
  long *local_9e0;
  undefined1 local_9d0;
  undefined1 auStack_9cc [2068];
  undefined1 auStack_1b8 [256];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [32];
  ulong local_70 [2];
  void *local_60;
  long *local_58;
  undefined8 local_38;
  
  if (((*(long **)(param_2 + 0x70) != (long *)0x0) &&
      (uVar4 = (**(code **)(**(long **)(param_2 + 0x70) + 0x70))(), (uVar4 & 1) == 0)) ||
     (param_3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_01f7558c(auStack_b8,param_3);
  if (*param_4 == '\0') {
LAB_02a041f4:
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    FUN_006c7fc0(local_9e8,param_2 + 0x48,auStack_b8);
    FUN_01f74e90(&local_38,uVar5,local_9e8);
    local_70[0] = *(ulong *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    FUN_01f710f0(local_70);
    uVar5 = local_38;
    local_38 = 0;
    *(undefined8 *)(param_2 + 0x70) = uVar5;
    FUN_01d00ad8(&local_38);
    if (local_9e0 != (long *)0x0) {
      plVar1 = local_9e0 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*local_9e0 + 0x10))(local_9e0);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(param_2 + 0x70) != 0) {
      FUN_01f717cc(local_9e8);
      FUN_01f74f54(param_1,local_9e8);
      FUN_01d0fcc8(local_9e8);
      goto LAB_02a042ac;
    }
  }
  else {
    lVar6 = *(long *)(param_4 + 8);
    if (lVar6 != 0) {
      memset(local_9e8,0,0x930);
      local_9d0 = (undefined1)*(undefined4 *)(param_2 + 0x78);
      memcpy(auStack_1b8,param_4 + 0x10,0x100);
      FUN_01674c7c(lVar6,auStack_9cc,1);
      lVar6 = *(long *)(param_4 + 0x110);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x54) != '\0')) {
        FUN_011b8d00((ulong)local_9e8 | 2,*(undefined8 *)(lVar6 + 0x30),0xb);
      }
      local_9e8[0] = param_4[0x118];
      local_58 = (long *)FUN_01cf7e20();
      __dest = (void *)(**(code **)(*local_58 + 0x10))(local_58,0x940,1);
      local_70[0] = 0x941;
      local_70[1] = 0x930;
      local_60 = __dest;
      memcpy(__dest,local_9e8,0x930);
      *(undefined1 *)((long)__dest + 0x930) = 0;
      FUN_01f754d8(auStack_90,local_70);
      if ((local_70[0] & 1) != 0) {
        (**(code **)(*local_58 + 0x18))(local_58,local_60,local_70[0] & 0xfffffffffffffffe,1);
      }
      goto LAB_02a041f4;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_02a042ac:
  FUN_02a042d0(auStack_b8);
  return;
}


