/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01985b3c; name: FUN_01985b3c
 */


void FUN_01985b3c(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 *param_4
                 )

{
  undefined1 local_40 [16];
  undefined8 uStack_30;
  
  local_40 = (*(code *)*param_4)();
  *param_1 = 1;
  uStack_30 = param_3;
  FUN_01985d14(param_1 + 8,local_40);
  return;
}


