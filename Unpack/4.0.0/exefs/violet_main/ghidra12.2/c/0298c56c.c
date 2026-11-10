/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298c56c; name: FUN_0298c56c
 */


void FUN_0298c56c(undefined8 param_1,long *param_2,undefined2 *param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *local_a0;
  undefined1 *puStack_98;
  undefined2 *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [4];
  uint local_7c;
  undefined1 auStack_74 [36];
  undefined1 uStack_38;
  undefined1 local_37;
  
  uVar4 = FUN_01243584();
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar1 = *param_3;
  uVar2 = (**(code **)(*param_2 + 400))(param_2);
  FUN_0129af6c(uVar4,uVar3,uVar1,uVar2);
  FUN_01246154(auStack_74);
  FUN_0295caf0(auStack_80);
  FUN_01582534(param_1);
  uVar4 = FUN_01920e44();
  FUN_01920e4c(uVar4,auStack_80);
  local_7c = local_7c | 2;
  local_37 = 0;
  local_a0 = param_2;
  puStack_98 = auStack_80;
  local_90 = param_3;
  uStack_88 = param_4;
  FUN_01461214(param_1);
  uVar4 = FUN_02984e40();
  FUN_016784b8(uVar4,&uStack_38,&local_a0);
  uVar4 = FUN_01243584(param_1);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_02984e48(uVar4,uVar3,*param_3);
  return;
}


