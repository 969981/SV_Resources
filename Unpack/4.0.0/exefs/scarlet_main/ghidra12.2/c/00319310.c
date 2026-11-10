/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00319310; name: FUN_00319310
 */


undefined8 FUN_00319310(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x99) != '\0') {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x68);
  plVar1 = (long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0x58);
  }
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(long *)(param_2 + 0x60) = lVar2;
  *plVar1 = param_2;
  *(long *)(param_1 + 0x68) = param_2;
  *(undefined1 *)(param_2 + 0x99) = 1;
  return 1;
}


