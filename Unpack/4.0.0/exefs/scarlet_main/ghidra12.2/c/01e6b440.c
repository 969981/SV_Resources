/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6b440; name: FUN_01e6b440
 */


void FUN_01e6b440(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  
  lVar1 = FUN_01e6b0d8(*param_5 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  FUN_01e625cc(lVar1,param_4,param_2,param_3);
  FUN_01e6ae6c(param_1,param_4);
  return;
}


