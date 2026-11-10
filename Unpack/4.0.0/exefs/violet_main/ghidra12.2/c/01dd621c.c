/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd621c; name: FUN_01dd621c
 */


undefined8 FUN_01dd621c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  iVar2 = *(int *)(param_1 + 0x2a4);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    iVar3 = iVar2 + param_2 + -1;
    iVar6 = 0;
    if (5 < iVar3) {
      iVar6 = -6;
    }
    iVar1 = 6;
    if (-1 < iVar3) {
      iVar1 = iVar6;
    }
    iVar1 = iVar2 + param_2 + iVar1;
    uVar4 = 0;
    if (iVar1 != iVar2) {
      FUN_014a3de8(*(undefined8 *)(param_1 + 0x1a8),5,0);
      plVar7 = *(long **)(param_1 + 0x30);
      if (param_2 == -1) {
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x58))(plVar7);
        }
        local_50 = 0x37e510e66fbbf43c;
        pcStack_48 = "L_lr_01/key_left";
        local_40 = 0x10;
      }
      else {
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x58))(plVar7);
        }
        local_50 = 0x5f9f0ff2ee3ff969;
        pcStack_48 = "L_lr_01/key_right";
        local_40 = 0x11;
      }
      local_38 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar5 = FUN_00e895f4(plVar7[0x2e],&local_50);
        if (lVar5 != 0) {
          FUN_00dfcea4();
        }
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
        (**(code **)(*plVar7 + 0x60))(plVar7);
      }
      FUN_014e3420(param_1,iVar1);
      uVar4 = 1;
      *(int *)(param_1 + 0x2a4) = iVar1;
    }
  }
  return uVar4;
}


