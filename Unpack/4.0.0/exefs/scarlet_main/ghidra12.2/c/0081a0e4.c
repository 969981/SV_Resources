/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081a0e4; name: FUN_0081a0e4
 */


int FUN_0081a0e4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  do {
    if (plVar1 == *(long **)(param_1 + 0x30)) {
      return 600;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(short *)(lVar2 + 8) != 9);
  if (lVar2 == 0) {
    return 600;
  }
  return (uint)*(byte *)(lVar2 + 0xd) + (uint)*(byte *)(lVar2 + 0xc) * 100;
}


