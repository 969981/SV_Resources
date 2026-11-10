/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d1430; name: FUN_021d1430
 */


void FUN_021d1430(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_021d2914(param_1,(param_1[1] - *param_1 >> 7) * -0x5555555555555555 + 1);
  FUN_021d2970(auStack_58,uVar1,(param_1[1] - *param_1 >> 7) * -0x5555555555555555,param_1 + 3);
  FUN_021d1248(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x180;
  FUN_021d2a00(param_1,auStack_58);
  FUN_021d2aa8(auStack_58);
  return;
}


