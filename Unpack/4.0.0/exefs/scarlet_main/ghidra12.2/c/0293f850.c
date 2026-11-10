/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293f850; name: FUN_0293f850
 */


undefined1 FUN_0293f850(long param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  
  local_20 = param_2;
  local_1f = param_3;
  local_18 = param_4;
  uVar1 = FUN_0293f88c(*(undefined8 *)(param_1 + 0x28));
  FUN_0293f894(uVar1,local_28,&local_20);
  return local_28[0];
}


