/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02198a40; name: FUN_02198a40
 */


void FUN_02198a40(undefined1 *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar3;
  long *plVar2;
  long lVar4;
  
  if (*param_2 != 0) {
    if ((long *)*param_3 != (long *)param_3[1]) {
      plVar2 = (long *)*param_3;
      do {
        plVar3 = plVar2 + 1;
        lVar4 = *(long *)(*plVar2 + 8);
        plVar1 = (long *)PTR_DAT_047d8b70;
        if (lVar4 != 0) {
          plVar1 = (long *)(lVar4 + 0x30);
        }
        if (*plVar1 == *param_4) {
          FUN_02198a98(*plVar2 + 0x10);
          return;
        }
        plVar2 = plVar3;
      } while ((long *)param_3[1] != plVar3);
    }
  }
  *param_1 = 0;
  return;
}


