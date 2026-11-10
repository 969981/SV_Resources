/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00319350; name: FUN_00319350
 */


bool FUN_00319350(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x60);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x99) == '\0') {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(lVar2 + 0x58);
    if (lVar3 == 0) {
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      *plVar1 = lVar3;
      *(undefined8 *)(lVar3 + 0x60) = 0;
    }
    *(undefined1 *)(lVar2 + 0x99) = 0;
  }
  *param_2 = lVar2;
  return lVar2 != 0;
}


