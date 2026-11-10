/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fae54; name: FUN_026fae54
 */


void FUN_026fae54(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  auVar1 = FUN_026fae88();
  *param_1 = auVar1;
  return;
}


