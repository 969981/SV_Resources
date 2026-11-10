/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bfc74; name: FUN_007bfc74
 */


void FUN_007bfc74(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_047d0fd8 + 0x10);
  plVar3 = (long *)param_1[2];
  while (plVar3 != param_1 + 1) {
    plVar1 = (long *)plVar3[1];
    lVar2 = plVar3[2];
    plVar3 = plVar1;
    if (*(char *)(lVar2 + 0x68) != '\0') {
      lVar4 = *(long *)(lVar2 + 0x38);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar2 + 0x38) = 0;
        FUN_007bfd58(lVar2 + 0x20);
        *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
      }
      *(undefined1 *)(lVar2 + 0x68) = 0;
    }
  }
  operator_delete(param_1);
  return;
}


