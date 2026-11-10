/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025524a4; name: FUN_025524a4
 */


void FUN_025524a4(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 *param_4
                 ,undefined8 param_5)

{
  undefined1 local_40 [16];
  undefined8 uStack_30;
  
  local_40 = FUN_02559ccc(param_5,*param_4,param_4[1]);
  *param_1 = 1;
  uStack_30 = param_3;
  FUN_024c863c(param_1 + 8,local_40);
  return;
}


