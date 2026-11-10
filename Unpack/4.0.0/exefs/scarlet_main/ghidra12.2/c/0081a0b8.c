/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081a0b8; name: FUN_0081a0b8
 */


long FUN_0081a0b8(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  do {
    if (plVar1 == *(long **)(param_1 + 0x30)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(ushort *)(lVar2 + 8) != param_2);
  return lVar2;
}


