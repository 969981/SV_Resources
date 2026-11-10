/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004efc34; name: FUN_004efc34
 */


long FUN_004efc34(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
  if ((uVar2 & 1) == 0) {
    lVar1 = FUN_00264e54();
    return lVar1;
  }
  return (uVar2 & 0xfffffffffffffffe) + 8;
}


