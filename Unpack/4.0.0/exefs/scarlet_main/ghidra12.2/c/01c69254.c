/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c69254; name: FUN_01c69254
 */


void FUN_01c69254(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 auStack_30 [16];
  
  pcVar1 = (code *)*param_2;
  FUN_01827b8c(param_3);
  (*pcVar1)(auStack_30);
  FUN_01c5d1d0(param_1,auStack_30);
  FUN_01c5d228(auStack_30);
  return;
}


