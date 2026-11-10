/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293dbb0; name: FUN_0293dbb0
 */


undefined1 FUN_0293dbb0(long param_1,undefined4 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined2 local_14;
  
  local_18 = param_2;
  local_14 = param_3;
  uVar1 = FUN_01852268(*(undefined8 *)(param_1 + 0x28));
  FUN_01852270(uVar1,local_20,&local_18);
  return local_20[0];
}


