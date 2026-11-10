/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193f070; name: FUN_0193f070
 */


undefined1 FUN_0193f070(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_8 [8];
  
  uVar1 = FUN_0193f0a4(*(undefined8 *)(param_1 + 0x28));
  FUN_0193f0ac(uVar1,local_8,param_2);
  return local_8[0];
}


