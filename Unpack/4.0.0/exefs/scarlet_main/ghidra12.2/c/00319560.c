/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00319560; name: FUN_00319560
 */


void FUN_00319560(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_2 + 0x9a) != '\0') {
    lVar2 = *(long *)(param_2 + 0x70);
    *(undefined1 *)(param_2 + 0x9a) = 0;
    if (lVar2 == 0) {
      if (*(long *)(param_1 + 0x70) != param_2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = *(long *)(param_2 + 0x68);
      *(long *)(param_1 + 0x70) = lVar3;
    }
    else {
      *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(param_2 + 0x68);
      lVar3 = *(long *)(param_2 + 0x68);
    }
    plVar1 = (long *)(param_1 + 0x78);
    if (lVar3 != 0) {
      plVar1 = (long *)(lVar3 + 0x70);
    }
    *plVar1 = lVar2;
  }
  return;
}


