/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a02c4; name: FUN_029a02c4
 */


void FUN_029a02c4(long param_1,byte param_2)

{
  long *plVar1;
  undefined4 uVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
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
  
  plVar5 = *(long **)(param_1 + 0x50);
  plVar1 = *(long **)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (plVar5 != plVar1) {
    do {
      local_d0 = 0;
      lStack_c8 = 0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      if ((code *)plVar5[2] == (code *)0x0) {
        local_60 = plVar5[0x10];
      }
      else {
        (*(code *)plVar5[2])(plVar5 + 4,auStack_c0);
        local_d0 = plVar5[2];
        lStack_c8 = plVar5[3];
        local_e0 = (code *)*plVar5;
        local_d8 = (code *)plVar5[1];
        local_60 = plVar5[0x10];
        if (local_e0 != (code *)0x0) {
          uVar2 = *(undefined4 *)(param_1 + 8);
          FUN_0135d26c(auStack_100,param_1);
          local_50 = local_60;
          local_48[0] = param_2 & 1;
          local_44 = uVar2;
          (*local_e0)(auStack_c0,&local_44,auStack_100,local_48,&local_50);
          if (local_e8 != (long *)0x0) {
            (**(code **)(*local_e8 + 0x20))();
          }
        }
      }
      pcVar3 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = 0;
        lStack_c8 = 0;
        local_e0 = (code *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar3)(auStack_c0);
      }
      plVar5 = plVar5 + 0x12;
    } while (plVar1 != plVar5);
    plVar5 = *(long **)(param_1 + 0x50);
    plVar1 = *(long **)(param_1 + 0x58);
    if (plVar1 != plVar5) {
      pcVar3 = (code *)plVar1[-0x11];
      plVar4 = plVar1 + -0x12;
      if (pcVar3 != (code *)0x0) {
        plVar1[-0x10] = 0;
        plVar1[-0xf] = 0;
        *plVar4 = 0;
        plVar1[-0x11] = 0;
        (*pcVar3)(plVar1 + -0xe);
      }
      while (plVar1 = plVar4, plVar1 != plVar5) {
        pcVar3 = (code *)plVar1[-0x11];
        plVar4 = plVar1 + -0x12;
        if (pcVar3 != (code *)0x0) {
          plVar1[-0x10] = 0;
          plVar1[-0xf] = 0;
          plVar1[-0x12] = 0;
          plVar1[-0x11] = 0;
          (*pcVar3)(plVar1 + -0xe);
        }
      }
    }
  }
  *(long **)(param_1 + 0x58) = plVar5;
  return;
}


