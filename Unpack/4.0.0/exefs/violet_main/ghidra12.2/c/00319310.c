/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


