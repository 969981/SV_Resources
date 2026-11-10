/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293fbf0; name: FUN_0293fbf0
 */


undefined1 FUN_0293fbf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_8 [8];
  
  uVar1 = FUN_0123dfc4(*(undefined8 *)(param_1 + 0x28));
  FUN_01254148(uVar1,local_8,param_2);
  return local_8[0];
}


