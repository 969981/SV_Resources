/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293e3dc; name: FUN_0293e3dc
 */


void FUN_0293e3dc(long param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  *param_2 = 0;
  uVar1 = *param_3;
  plVar2 = (long *)FUN_014813f4(param_1,param_3[1]);
  uVar3 = FUN_02983cc0(param_1,uVar1,plVar2);
  if ((uVar3 & 1) != 0) {
    uVar3 = (**(code **)(*plVar2 + 0x4d0))(plVar2,9);
    local_50 = uVar1;
    if ((uVar3 & 1) == 0) {
      uStack_4c = 9;
      FUN_0293ee3c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xf40),auStack_58,&local_50);
    }
    else {
      local_48 = 0;
      uStack_4c = 9;
      FUN_0193f0ac(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xf80),auStack_58,&local_50);
    }
    uVar3 = (**(code **)(*plVar2 + 0x4d0))(plVar2,0x1f);
    if ((uVar3 & 1) == 0) {
      uStack_4c = 0x1f;
      local_50 = uVar1;
      FUN_0293ee3c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xf40),auStack_58,&local_50);
    }
    else {
      local_48 = 0;
      uStack_4c = 0x1f;
      local_50 = uVar1;
      FUN_0193f0ac(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xf80),auStack_58,&local_50);
    }
    FUN_02983dc0(param_1,uVar1,plVar2);
    uVar3 = FUN_018ce3ac(param_3 + 2);
    if ((uVar3 & 1) != 0) {
      FUN_02983e4c(param_1,uVar1,param_3 + 2,*(undefined1 *)(param_3 + 0xb));
    }
    *param_2 = 1;
  }
  return;
}


