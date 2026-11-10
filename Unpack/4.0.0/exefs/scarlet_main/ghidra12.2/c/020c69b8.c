/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020c69b8; name: FUN_020c69b8
 */


undefined8 FUN_020c69b8(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x58);
  if (param_2 == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x48);
  }
  puVar2 = (undefined8 *)(param_1 + 0x50);
  if (param_2 != 1) {
    puVar2 = puVar1;
  }
  return *puVar2;
}


