/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019cac94; name: FUN_019cac94
 */


void FUN_019cac94(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 auStack_30 [16];
  
  pcVar1 = (code *)*param_2;
  FUN_019cace0(param_3);
  (*pcVar1)(auStack_30);
  FUN_018b30b0(param_1,auStack_30);
  FUN_018b3108(auStack_30);
  return;
}


