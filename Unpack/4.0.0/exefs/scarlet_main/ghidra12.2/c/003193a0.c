/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003193a0; name: FUN_003193a0
 */


void FUN_003193a0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x9c) != '\0') {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x98);
  plVar1 = (long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x88);
  }
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(long *)(param_2 + 0x90) = lVar2;
  *plVar1 = param_2;
  *(long *)(param_1 + 0x98) = param_2;
  *(undefined1 *)(param_2 + 0x9c) = 1;
  return;
}


