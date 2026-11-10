/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d55e0; name: FUN_003d55e0
 */


undefined4 * FUN_003d55e0(ushort param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if ((ushort)(param_1 - 1) < 0x1e) {
    puVar1 = &DAT_03cdd004 + (ulong)(param_1 - 1) * 3;
  }
  return puVar1;
}


