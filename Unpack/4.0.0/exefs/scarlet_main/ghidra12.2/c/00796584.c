/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00796584; name: FUN_00796584
 */


void FUN_00796584(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d09d0 + 0x10;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = (long)puVar1;
  memset(param_1 + 1,0,0x10);
  return;
}


