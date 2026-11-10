/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d9c20; name: FUN_008d9c20
 */


void FUN_008d9c20(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d2580;
  (*param_1)(PTR_DAT_047d2580 + 0x260,PTR_DAT_047d2580 + 0x120,param_2);
  *(undefined8 *)(puVar1 + 0x260) = 0xffffffffffffffff;
  return;
}


