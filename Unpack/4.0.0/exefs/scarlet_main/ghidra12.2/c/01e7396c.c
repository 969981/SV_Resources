/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7396c; name: FUN_01e7396c
 */


void FUN_01e7396c(int *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  if (*param_1 == 3) {
    plVar1 = *(long **)(param_1 + 0xc);
    if (plVar1 != (long *)0x0) {
      if (plVar1 == (long *)(param_1 + 4)) {
        pcVar2 = *(code **)(*plVar1 + 0x10);
      }
      else {
        pcVar2 = *(code **)(*plVar1 + 0x18);
      }
      (*pcVar2)();
    }
  }
  else if ((*param_1 == 1) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 10) + 0x18))
              (*(long **)(param_1 + 10),*(undefined8 *)(param_1 + 8),
               *(ulong *)(param_1 + 4) & 0xfffffffffffffffe,1);
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01e73a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x1e),
             *(ulong *)(param_1 + 0x1a) & 0xfffffffffffffffe,1);
  return;
}


