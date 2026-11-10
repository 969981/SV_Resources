/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003193e0; name: FUN_003193e0
 */


bool FUN_003193e0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x90);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x9c) == '\0') {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(lVar2 + 0x88);
    if (lVar3 == 0) {
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    else {
      *plVar1 = lVar3;
      *(undefined8 *)(lVar3 + 0x90) = 0;
    }
    *(undefined1 *)(lVar2 + 0x9c) = 0;
  }
  *param_2 = lVar2;
  return lVar2 != 0;
}


