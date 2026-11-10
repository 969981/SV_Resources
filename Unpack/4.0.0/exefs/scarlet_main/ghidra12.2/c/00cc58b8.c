/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cc58b8; name: thunk_FUN_00cc5970
 */


void thunk_FUN_00cc5970(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  uStack_30 = param_1[1];
  uStack_28 = param_1[2];
  uStack_20 = param_1[3];
  uStack_18 = *(undefined1 *)(param_1 + 4);
  FUN_00cc5a40(*param_1,&uStack_30);
  return;
}


