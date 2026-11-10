/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02983588; name: FUN_02983588
 */


void FUN_02983588(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  undefined4 local_8;
  undefined2 local_4;
  
  local_4 = 0;
  local_8 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01461214(param_1);
  uVar1 = FUN_018f6604();
  FUN_018f681c(uVar1,auStack_28,&local_8);
  return;
}


