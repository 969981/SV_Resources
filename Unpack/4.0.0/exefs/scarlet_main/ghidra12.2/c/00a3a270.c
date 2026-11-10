/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a3a270; name: FUN_00a3a270
 */


bool FUN_00a3a270(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_019d8b6c();
  if (*(long *)(lVar1 + 0xe8) == 0 || *(long *)(lVar1 + 0xe8) != param_2) {
    lVar1 = FUN_019d8b6c();
    if ((*(long *)(lVar1 + 0x108) == 0) || (*(long *)(lVar1 + 0x108) != param_2)) {
      lVar1 = FUN_019d8b6c();
      if ((*(long *)(lVar1 + 0x128) == 0) || (*(long *)(lVar1 + 0x128) != param_2)) {
        lVar1 = FUN_019d8b6c();
        return *(long *)(lVar1 + 0x148) != 0 && *(long *)(lVar1 + 0x148) == param_2;
      }
    }
  }
  return true;
}


