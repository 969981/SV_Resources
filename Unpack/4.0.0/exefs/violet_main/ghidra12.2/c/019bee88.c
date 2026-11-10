/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bee88; name: FUN_019bee88
 */


void FUN_019bee88(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 8);
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3,8);
  *param_1 = uVar1;
  param_1[1] = plVar2;
  param_1[2] = param_3;
  param_1[3] = 8;
  FUN_019bfa00(param_4,uVar1,param_5,param_3 & 0xffffffff);
  return;
}


