/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012979dc; name: FUN_012979dc
 */


void FUN_012979dc(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_01195974();
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x108) != 2) {
      plVar3 = *(long **)(param_1 + 0x30);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x58))(plVar3);
      }
      local_40 = 0x1537ae8bc147117e;
      pcStack_38 = "L_lr_00/key_right";
      local_30 = 0x11;
      local_28 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        lVar1 = FUN_00e895f4(plVar3[0x2e],&local_40);
        if (lVar1 != 0) {
          FUN_00dfcea4();
        }
        if (local_28 != (long *)0x0) {
          (**(code **)(*local_28 + 0x20))();
        }
        (**(code **)(*plVar3 + 0x60))(plVar3);
      }
    }
    uVar2 = 1;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x108) == 2) {
      FUN_01dd2988(param_1,0xffffffff);
      return;
    }
    plVar3 = *(long **)(param_1 + 0x30);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x58))(plVar3);
    }
    local_40 = 0x5b094b4028297865;
    pcStack_38 = "L_lr_00/key_left";
    local_30 = 0x10;
    local_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      lVar1 = FUN_00e895f4(plVar3[0x2e],&local_40);
      if (lVar1 != 0) {
        FUN_00dfcea4();
      }
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
      (**(code **)(*plVar3 + 0x60))(plVar3);
    }
    uVar2 = 0xffffffff;
  }
  FUN_01dd2988(param_1,uVar2);
  return;
}


