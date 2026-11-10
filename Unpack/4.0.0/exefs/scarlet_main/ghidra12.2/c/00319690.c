/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00319690; name: FUN_00319690
 */


undefined8 FUN_00319690(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_2 + 0x9b) == '\0') {
    return 0;
  }
  lVar2 = *(long *)(param_2 + 0x80);
  *(undefined1 *)(param_2 + 0x9b) = 0;
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x80) != param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(param_2 + 0x78);
    *(long *)(param_1 + 0x80) = lVar3;
  }
  else {
    *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    lVar3 = *(long *)(param_2 + 0x78);
  }
  plVar1 = (long *)(param_1 + 0x88);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x80);
  }
  *plVar1 = lVar2;
  return 1;
}


