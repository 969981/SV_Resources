/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013c0a0; name: FUN_0013c0a0
 */


void FUN_0013c0a0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  plVar2 = (long *)(*(long *)(lVar1 + 0x30) +
                   (long)(int)(*(int *)(lVar1 + 0x3c) - 1U & *(uint *)(param_2 + 0xc)) * 8);
  lVar3 = *plVar2;
  while (lVar3 != param_2) {
    plVar2 = (long *)(lVar3 + 0x10);
    lVar3 = *plVar2;
  }
  *plVar2 = *(long *)(param_2 + 0x10);
  *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + -1;
  return;
}


