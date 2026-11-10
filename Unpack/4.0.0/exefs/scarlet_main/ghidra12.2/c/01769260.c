/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01769260; name: FUN_01769260
 */


void FUN_01769260(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  
  if (param_3 != 0) {
    if (*(long *)(param_2 + 0xd0) == param_3) {
      plVar1 = (long *)(param_2 + 0xb0);
    }
    else if (*(long *)(param_2 + 0x100) == param_3) {
      plVar1 = (long *)(param_2 + 0xe0);
    }
    else if (*(long *)(param_2 + 0x130) == param_3) {
      plVar1 = (long *)(param_2 + 0x110);
    }
    else {
      if (*(long *)(param_2 + 0x160) != param_3) goto LAB_017692c8;
      plVar1 = (long *)(param_2 + 0x140);
    }
    if (((char)plVar1[5] != '\0') && (*plVar1 != 0)) {
      *param_1 = *plVar1;
      return;
    }
  }
LAB_017692c8:
  *param_1 = 0;
  return;
}


