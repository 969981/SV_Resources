/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eba324; name: FUN_01eba324
 */


void FUN_01eba324(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 local_6c [4];
  long local_68 [4];
  long local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  
  local_40 = (undefined4)param_1;
  local_3c = param_4;
  if (*(long *)(param_2 + 0x40) == 0) {
    FUN_01e044e0(param_1,param_4);
    return;
  }
  lVar1 = FUN_019a15fc(param_3);
  if (lVar1 != 0) {
    local_48 = lVar1;
    lVar2 = FUN_014c2a70();
    if (lVar2 == lVar1) {
      FUN_01e044e0(param_1,param_4);
    }
    else {
      FUN_016947d8(local_68);
      local_6c[0] = 2;
      if (local_68[0] != 0) {
        FUN_014c27e0(auStack_38,local_6c,local_68[0] + 8);
        if (local_68[0] != 0) {
          FUN_01eba448(auStack_38,&local_3c,local_68[0] + 8);
        }
      }
      FUN_01eba4d4(local_68,&local_40);
      plVar5 = *(long **)(param_2 + 0x40);
      uVar3 = FUN_014c27b0(local_68);
      uVar4 = FUN_014c27c8(local_68);
      (**(code **)(*plVar5 + 0x68))(plVar5,uVar3,uVar4,&local_48);
      FUN_01694aa8(local_68);
    }
  }
  return;
}


