/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003192a0; name: FUN_003192a0
 */


undefined8 FUN_003192a0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_2 + 0x98) == '\0') {
    return 0;
  }
  lVar2 = *(long *)(param_2 + 0x50);
  *(undefined1 *)(param_2 + 0x98) = 0;
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x50) != param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(param_2 + 0x48);
    *(long *)(param_1 + 0x50) = lVar3;
  }
  else {
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    lVar3 = *(long *)(param_2 + 0x48);
  }
  plVar1 = (long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x50);
  }
  *plVar1 = lVar2;
  return 1;
}


