/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0188dfe8; name: FUN_0188dfe8
 */


void FUN_0188dfe8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 0x38) == 0)) || (*(int *)(lVar1 + 0x4c) == 0)) {
    return;
  }
  FUN_00d9d890();
  return;
}


