/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02940660; name: FUN_02940660
 */


undefined1 FUN_02940660(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_8 [8];
  
  uVar1 = FUN_02940694(*(undefined8 *)(param_1 + 0x28));
  FUN_0294069c(uVar1,local_8,param_2);
  return local_8[0];
}


