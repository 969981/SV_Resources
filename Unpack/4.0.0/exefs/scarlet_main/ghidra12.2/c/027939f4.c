/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027939f4; name: FUN_027939f4
 */


void FUN_027939f4(undefined8 param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long local_5c8 [2];
  char *pcStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined4 local_5a0;
  undefined3 uStack_59c;
  char local_520 [1152];
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_28;
  
  if ((*(long *)(param_2 + 0x1c0) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_2 + 0x1c0) + 0x10), lVar6 == 0)) {
    local_60 = 0xf9ea7befe95aa249;
    pcStack_58 = "NoSessionInstance";
    local_50 = 0x11;
    local_48 = (long *)0x0;
    FUN_02792464(param_1,&local_60);
    plVar5 = local_48;
  }
  else if (*(char *)(param_2 + 0x9c) == '\0') {
    local_80 = 0x9d4262a916a71fe7;
    pcStack_78 = "NotEnabled";
    local_70 = 10;
    local_68 = (long *)0x0;
    FUN_02792464(param_1,&local_80);
    plVar5 = local_68;
  }
  else {
    if (*(int *)(param_2 + 0xa0) != 1) {
      memset(local_520,0,0x480);
      memset((void *)((ulong)&local_5a0 | 7),0,0x4a);
      local_5a0 = 0x63616562;
      uStack_59c = 0x6e6f;
      FUN_02793d88(&local_28,lVar6 + -0x28,&local_5a0);
      local_5c8[1] = 0x82d832b1e160cf5a;
      pcStack_5b8 = "StoreBeaconData";
      local_5b0 = 0xf;
      uStack_5a8 = 0;
      local_5c8[0] = param_2;
      FUN_02793f6c(param_1,local_28,local_5c8 + 1,local_5c8);
      if (local_28 == (long *)0x0) {
        return;
      }
      lVar6 = local_28[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
        return;
      }
      if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      return;
    }
    local_a0 = 0x9686e2d63933a3f8;
    pcStack_98 = "SkipRecieve_SendOnly";
    local_90 = 0x14;
    local_88 = (long *)0x0;
    FUN_01987400(param_1,&local_a0,&DAT_03d68958);
    plVar5 = local_88;
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  return;
}


