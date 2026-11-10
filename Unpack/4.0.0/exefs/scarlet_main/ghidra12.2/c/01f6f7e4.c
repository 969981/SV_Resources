/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6f7e4; name: FUN_01f6f7e4
 */


bool FUN_01f6f7e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_e8 [8];
  long *local_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [16];
  byte local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [16];
  byte local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  long *plStack_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  long *plStack_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = std::__shared_weak_count::lock();
    if ((local_28 != 0) && (local_30 = *(long *)(param_1 + 0x48), local_30 != 0)) {
      FUN_01f6ef54(auStack_d0,local_30 + 0x10,"@@battleStart");
      FUN_01f6fa0c(auStack_a0,auStack_d0,&DAT_03c12387);
      if ((local_c0 & 1) != 0) {
        (**(code **)(*plStack_a8 + 0x18))
                  (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
      }
      FUN_01f6f158(auStack_d0);
      FUN_01f6fa34(auStack_d0);
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        lVar4 = param_1 + 0x71;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x80);
      }
      thunk_FUN_027c1d20(auStack_d0,"competitionId",lVar4);
      FUN_01f6fa50(auStack_e8,*(undefined4 *)(param_1 + 0x94));
      FUN_01f6fa50(&local_e0,*(undefined4 *)(param_1 + 0x9c));
      FUN_01f6fac4(auStack_d8,auStack_e8,2);
      thunk_FUN_0025911c(auStack_d0,"users",auStack_d8);
      FUN_01f6fb08(auStack_d8);
      FUN_01f6fb44(&local_e0);
      FUN_01f6fb44(auStack_e8);
      FUN_01f6fb80(auStack_e8,auStack_a0,auStack_d0);
      FUN_01f6fbec((long *)(param_1 + 0xa0),auStack_e8);
      if (local_e0 != (long *)0x0) {
        plVar1 = local_e0 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar4 = *(long *)(param_1 + 0xa0);
      FUN_01f6fc48(auStack_d0);
      if ((local_50 & 1) != 0) {
        (**(code **)(*plStack_38 + 0x18))
                  (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
      }
      if ((local_70 & 1) != 0) {
        (**(code **)(*plStack_58 + 0x18))
                  (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
      }
      if ((local_90 & 1) != 0) {
        (**(code **)(*plStack_78 + 0x18))
                  (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
      }
      FUN_01f6f158(auStack_a0);
      FUN_01f6f1b0(&local_30);
      return lVar4 != 0;
    }
  }
  FUN_01f6f1b0(&local_30);
  return false;
}


