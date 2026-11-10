/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e081c; name: FUN_011e081c
 */


void FUN_011e081c(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  
  FUN_011e0898(param_1,1);
  if ((*(char *)(param_1 + 0x58) == '\0') && (*(char *)(param_1 + 0x59) == '\0')) {
    return;
  }
  uVar2 = *(undefined2 *)(param_1 + 0x58);
  plVar1 = (long *)(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x58) = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x011e0878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  return;
}


