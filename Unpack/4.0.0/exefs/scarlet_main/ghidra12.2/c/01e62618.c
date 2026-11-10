/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e62618; name: FUN_01e62618
 */


void FUN_01e62618(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = FUN_01e62678();
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x68);
    if ((((*plVar2 != 0) && (plVar2 = (long *)(param_1 + 0x70), *plVar2 != 0)) &&
        (plVar2 = (long *)(param_1 + 0x78), *plVar2 != 0)) &&
       (plVar2 = (long *)(param_1 + 0x80), *plVar2 != 0)) {
      return;
    }
    *plVar2 = param_2;
  }
  return;
}


