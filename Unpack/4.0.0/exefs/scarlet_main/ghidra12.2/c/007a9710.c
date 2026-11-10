/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a9710; name: FUN_007a9710
 */


undefined8 FUN_007a9710(long param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [16];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  int local_80 [4];
  int local_70 [4];
  int local_60 [4];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_28 [2];
  
  *(undefined4 *)(param_1 + 0xa0) = 0x13;
  lVar4 = *(long *)(param_1 + 0xf8);
  if (*(int *)(lVar4 + 0x1c0) != 0) {
    *(undefined4 *)(lVar4 + 0x1c0) = 0;
  }
  if (*(int *)(lVar4 + 0x1c4) != 4) {
    *(undefined4 *)(lVar4 + 0x1c4) = 4;
  }
  (**(code **)(**(long **)(lVar4 + 0x278) + 0x10))();
  local_50 = CONCAT44(local_50._4_4_,0xc406);
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_60);
  piVar5 = (int *)(param_1 + 0x90);
  if (*piVar5 != (int)local_50) {
    local_28[0] = 0;
    local_60[0] = 0xc47e;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_28);
    if (*piVar5 != local_60[0]) {
      local_70[0] = 0xc47f;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_28);
      if (*piVar5 != local_70[0]) {
        local_80[0] = 0xc481;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_28);
        if (*piVar5 != local_80[0]) {
          local_90[0] = 0xc480;
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_28);
          if (*piVar5 != local_90[0]) {
            local_a0[0] = 0xc420;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)local_28);
            if (*piVar5 != local_a0[0]) {
              local_b0[0] = 0xc421;
              local_28[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_b0 | 4),(Result *)local_28);
              if (*piVar5 != local_b0[0]) goto LAB_007a9938;
            }
          }
        }
      }
    }
  }
  uVar2 = FUN_007aafbc(param_1);
  plVar6 = *(long **)(*(long *)(param_1 + 0xf8) + 0x120);
  FUN_00796584(&local_50);
  (**(code **)(*plVar6 + 0x58))(plVar6,&local_50);
  uVar3 = FUN_00796784(&local_50);
  if ((uVar3 & 1) == 0) {
    if ((uVar2 & 1) == 0) goto LAB_007a9938;
  }
  else {
    (**(code **)(*plVar6 + 0x78))(plVar6,&local_50);
  }
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0xf8) + 0xf8);
  nn::os::LockMutex(pMVar1);
  plVar6 = *(long **)(*(long *)(param_1 + 0xf8) + 0x118);
  local_48 = 0;
  local_50 = 0x100;
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_50);
  *(undefined1 *)(*(long *)(param_1 + 0xf8) + 0x24b) = 1;
  nn::os::UnlockMutex(pMVar1);
LAB_007a9938:
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  FUN_00cbd7c0(auStack_c0,piVar5);
  FUN_0078cb94(uVar7,auStack_c0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


