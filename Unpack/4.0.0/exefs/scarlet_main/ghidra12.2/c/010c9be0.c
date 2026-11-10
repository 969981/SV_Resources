/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010c9be0; name: FUN_010c9be0
 */


void FUN_010c9be0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  uVar1 = FUN_010c9c24(lVar2 + 0x28);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  *(long *)(param_1 + 0x120) = lVar2;
  return;
}


