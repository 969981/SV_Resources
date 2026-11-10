/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016bd670; name: FUN_016bd670
 */


void FUN_016bd670(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_016bd71c(param_1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7 + 1);
  FUN_016bd780(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7,param_1 + 3);
  FUN_016bdaec(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x38;
  FUN_016bd8d8(param_1,auStack_58);
  FUN_016bd814(auStack_58);
  return;
}


