/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298d5e8; name: FUN_0298d5e8
 */


undefined1 FUN_0298d5e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_20 [8];
  undefined8 local_18;
  
  local_18 = param_2;
  uVar1 = FUN_0298d61c(*(undefined8 *)(param_1 + 0x18));
  FUN_02987af4(uVar1,local_20,&local_18);
  return local_20[0];
}


