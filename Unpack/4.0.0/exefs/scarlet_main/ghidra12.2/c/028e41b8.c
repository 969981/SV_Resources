/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028e41b8; name: FUN_028e41b8
 */


void FUN_028e41b8(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_028e4264(param_1,(param_1[1] - *param_1 >> 4) * -0x79435e50d79435e5 + 1);
  FUN_028e42c8(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * -0x79435e50d79435e5,param_1 + 3);
  FUN_013082c4(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x130;
  FUN_01305610(param_1,auStack_58);
  FUN_0130554c(auStack_58);
  return;
}


