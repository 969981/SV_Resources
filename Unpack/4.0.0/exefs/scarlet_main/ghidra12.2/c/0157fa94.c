/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157fa94; name: FUN_0157fa94
 */


void FUN_0157fa94(long param_1,byte param_2)

{
  bool bVar1;
  long *plVar2;
  undefined4 uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_100 [24];
  long *local_e8;
  code *local_e0;
  code *local_d8;
  long local_d0;
  long lStack_c8;
  undefined1 auStack_c0 [96];
  long local_60;
  long local_50;
  byte local_48 [4];
  undefined4 local_44;
  
  plVar6 = *(long **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (plVar6 != plVar2) {
    local_d0 = 0;
    lStack_c8 = 0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    if ((code *)plVar6[2] == (code *)0x0) {
      local_60 = plVar6[0x10];
    }
    else {
      (*(code *)plVar6[2])(plVar6 + 4,auStack_c0);
      local_d0 = plVar6[2];
      lStack_c8 = plVar6[3];
      local_e0 = (code *)*plVar6;
      local_d8 = (code *)plVar6[1];
      local_60 = plVar6[0x10];
      if (local_e0 != (code *)0x0) {
        uVar3 = *(undefined4 *)(param_1 + 8);
        FUN_0135d26c(auStack_100,param_1);
        local_50 = local_60;
        local_48[0] = param_2 & 1;
        local_44 = uVar3;
        (*local_e0)(auStack_c0,&local_44,auStack_100,local_48,&local_50);
        if (local_e8 != (long *)0x0) {
          (**(code **)(*local_e8 + 0x20))();
        }
      }
    }
    pcVar4 = local_d8;
    bVar1 = local_d8 != (code *)0x0;
    local_d8 = (code *)0x0;
    if (bVar1) {
      local_d0 = 0;
      lStack_c8 = 0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar4)(auStack_c0);
    }
    while (plVar6 = plVar6 + 0x12, plVar6 != plVar2) {
      local_d0 = 0;
      lStack_c8 = 0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      if ((code *)plVar6[2] == (code *)0x0) {
        local_60 = plVar6[0x10];
      }
      else {
        (*(code *)plVar6[2])(plVar6 + 4,auStack_c0);
        local_d0 = plVar6[2];
        lStack_c8 = plVar6[3];
        local_e0 = (code *)*plVar6;
        local_d8 = (code *)plVar6[1];
        local_60 = plVar6[0x10];
        if (local_e0 != (code *)0x0) {
          uVar3 = *(undefined4 *)(param_1 + 8);
          FUN_0135d26c(auStack_100,param_1);
          local_50 = local_60;
          local_48[0] = param_2 & 1;
          local_44 = uVar3;
          (*local_e0)(auStack_c0,&local_44,auStack_100,local_48,&local_50);
          if (local_e8 != (long *)0x0) {
            (**(code **)(*local_e8 + 0x20))();
          }
        }
      }
      pcVar4 = local_d8;
      bVar1 = local_d8 != (code *)0x0;
      local_d8 = (code *)0x0;
      if (bVar1) {
        local_d0 = 0;
        lStack_c8 = 0;
        local_e0 = (code *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar4)(auStack_c0);
      }
    }
    plVar6 = *(long **)(param_1 + 0x18);
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != plVar6) {
      pcVar4 = (code *)plVar2[-0x11];
      plVar5 = plVar2 + -0x12;
      if (pcVar4 != (code *)0x0) {
        plVar2[-0x10] = 0;
        plVar2[-0xf] = 0;
        *plVar5 = 0;
        plVar2[-0x11] = 0;
        (*pcVar4)(plVar2 + -0xe);
      }
      while (plVar2 = plVar5, plVar2 != plVar6) {
        pcVar4 = (code *)plVar2[-0x11];
        plVar5 = plVar2 + -0x12;
        if (pcVar4 != (code *)0x0) {
          plVar2[-0x10] = 0;
          plVar2[-0xf] = 0;
          plVar2[-0x12] = 0;
          plVar2[-0x11] = 0;
          (*pcVar4)(plVar2 + -0xe);
        }
      }
    }
  }
  *(long **)(param_1 + 0x20) = plVar6;
  return;
}


