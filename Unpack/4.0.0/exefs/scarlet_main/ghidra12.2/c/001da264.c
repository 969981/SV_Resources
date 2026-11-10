/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001da264; name: FUN_001da264
 */


void FUN_001da264(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x4a8);
  if (plVar1 != (long *)0x0) {
    do {
      if (*plVar1 == param_1) {
        FUN_001cb6d8(param_2 + 0x4a8,plVar1,param_2 + 0x4c8,*(undefined8 *)(param_2 + 0x4d0));
        if (*(undefined8 **)(param_2 + 0x4a8) == (undefined8 *)0x0) {
          return;
        }
        *(byte *)(param_2 + 0x66c) = *(byte *)(param_2 + 0x66c) & 0xfb;
        FUN_001cea34(**(undefined8 **)(param_2 + 0x4a8),0,6);
        return;
      }
      plVar1 = (long *)plVar1[2];
    } while (plVar1 != (long *)0x0);
  }
  return;
}


