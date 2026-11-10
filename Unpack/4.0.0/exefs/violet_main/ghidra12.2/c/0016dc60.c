/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0016dc60; name: FUN_0016dc60
 */


undefined8
FUN_0016dc60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_200 [68];
  undefined4 local_1bc;
  undefined1 local_1af;
  undefined1 auStack_178 [68];
  undefined4 local_134;
  undefined1 local_127;
  undefined1 *local_f8;
  undefined1 auStack_f0 [68];
  undefined4 local_ac;
  undefined1 local_9f;
  undefined1 *local_70;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_9 + 8);
    FUN_001728ec(auStack_f0);
    FUN_001728ec(auStack_178);
    FUN_001728ec(auStack_200);
    FUN_001657b0(auStack_f0,0xc,param_4,param_5,param_6,param_7,param_2,param_9);
    FUN_00191ef0(auStack_178,9,param_4,param_5,param_6,param_7,param_2,param_9);
    local_134 = local_ac;
    local_9f = 1;
    local_127 = 0;
    local_70 = auStack_178;
    if (5 < *(int *)PTR_DAT_047cb8d8) {
      FUN_001a8ca0(auStack_200,0xd,param_4,param_5,param_6,param_7,param_2,param_9);
      local_1bc = local_ac;
      local_1af = 0;
      local_f8 = auStack_200;
    }
    uVar1 = FUN_00172a40(auStack_f0,param_2,param_3,param_4,param_7,param_8,param_9);
    FUN_00172920(auStack_200);
    FUN_00172920(auStack_178);
    FUN_00172920(auStack_f0);
    *(undefined8 *)(param_9 + 8) = uVar2;
  }
  return uVar1;
}


