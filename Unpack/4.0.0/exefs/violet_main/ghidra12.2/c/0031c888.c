/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0031c888; name: FUN_0031c888
 */


void FUN_0031c888(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = *(long **)(*(long *)(param_1[3] + 8) + 0x28);
  if (param_1[0x1d] == (ulong)*(uint *)(plVar1 + 1)) {
    FUN_0031c778(param_1,param_2);
    return;
  }
  while( true ) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,0xffffffffffffffff,param_1 + 0x6b);
    if ((uVar2 & 1) == 0) {
      return;
    }
    plVar1 = *(long **)(*(long *)(param_1[3] + 8) + 0x28);
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_60);
    if (uVar2 != 0) break;
    uStack_78 = uStack_58;
    local_80 = local_60;
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    FUN_003686e0(param_1 + 0x19,&local_80);
    plVar1 = *(long **)(*(long *)(param_1[3] + 8) + 0x28);
    if (param_1[0x1d] == (ulong)*(uint *)(plVar1 + 1)) {
      FUN_0031c778(param_1,param_2);
      return;
    }
  }
  lVar4 = param_1[3];
  if (lVar4 != 0) {
    uVar3 = uVar2;
    if (4 < uVar2) {
      uVar3 = FUN_00350fb0(uVar2,uVar2);
    }
    FUN_0037b1c0(lVar4,uVar3,*param_1);
    param_1[3] = 0;
  }
  if (uVar2 < 5) {
    return;
  }
  FUN_00350fd0(uVar2);
  return;
}


