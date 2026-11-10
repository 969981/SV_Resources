/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eae998; name: FUN_01eae998
 */


void FUN_01eae998(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_01eaea44(param_1,(param_1[1] - *param_1 >> 3) * -0x71c71c71c71c71c7 + 1);
  FUN_01eaeaa8(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x71c71c71c71c71c7,param_1 + 3);
  FUN_01eae820(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x48;
  FUN_01eaeb38(param_1,auStack_58);
  FUN_01eaebe0(auStack_58);
  return;
}


