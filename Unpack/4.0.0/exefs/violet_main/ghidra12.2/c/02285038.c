/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02285038; name: FUN_02285038
 */


void FUN_02285038(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_022850dc(param_1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555 + 1);
  FUN_02285138(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555,param_1 + 3);
  FUN_02284fa0(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x30;
  FUN_017fa234(param_1,auStack_58);
  FUN_017fa2dc(auStack_58);
  return;
}


