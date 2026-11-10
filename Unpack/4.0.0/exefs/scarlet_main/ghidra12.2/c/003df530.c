/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003df530; name: FUN_003df530
 */


char * FUN_003df530(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xfffffeff;
  if ((param_1 & 0xfffffff7) != 0x102) {
    uVar1 = param_1;
  }
  if (uVar1 < 0x1f) {
    return (&PTR_DAT_044a1ce8)[uVar1];
  }
  return "(unknown)";
}


