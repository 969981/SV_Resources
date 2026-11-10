/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c9d29c; name: FUN_01c9d29c
 */


void FUN_01c9d29c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_40 [16];
  
  pcVar2 = (code *)*param_2;
  uVar1 = FUN_01c9e22c(param_4);
  (*pcVar2)(auStack_40,param_3,uVar1);
  FUN_018b30b0(param_1,auStack_40);
  FUN_018b3108(auStack_40);
  return;
}


