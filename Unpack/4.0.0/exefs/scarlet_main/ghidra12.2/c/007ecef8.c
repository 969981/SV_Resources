/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ecef8; name: FUN_007ecef8
 */


void FUN_007ecef8(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
      iVar1 = *(int *)(param_1 + 0x24);
      plVar2 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar1);
      do {
        (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
        plVar2 = (long *)(*(long *)((long)plVar2 + (long)*(int *)(param_1 + 0x24) + 8) -
                         (long)*(int *)(param_1 + 0x24));
      } while (plVar2 != (long *)((param_1 + 0x10) - (long)iVar1));
    }
  }
  return;
}


