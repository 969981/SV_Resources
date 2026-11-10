/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02784d64; name: FUN_02784d64
 */


void FUN_02784d64(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28) * 0x20;
  plVar3 = (long *)(lVar1 + -0x20);
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    FUN_027853e8(lVar1 + -0x18);
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  return;
}


