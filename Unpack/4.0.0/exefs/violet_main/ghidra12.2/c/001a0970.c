/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a0970; name: FUN_001a0970
 */


undefined8
FUN_001a0970(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [136];
  
  uVar2 = *(undefined8 *)(param_9 + 8);
  FUN_001728ec(auStack_e8);
  FUN_00191ef0(auStack_e8,param_1,param_4,param_5,param_6,param_7,param_2,param_9);
  if (param_2 == 0) {
    uVar1 = FUN_00172980(auStack_e8,param_4);
  }
  else {
    uVar1 = FUN_00172a40(auStack_e8,param_2,param_3,param_4,param_7,param_8,param_9);
  }
  FUN_00172920(auStack_e8);
  *(undefined8 *)(param_9 + 8) = uVar2;
  return uVar1;
}


