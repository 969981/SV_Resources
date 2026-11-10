/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbc0ec; name: FUN_01dbc0ec
 */


void FUN_01dbc0ec(long param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x28) == param_2) {
    lVar2 = 0;
  }
  else if (*(long *)(param_1 + 0x48) == param_2) {
    lVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x68) != param_2) {
      return;
    }
    lVar2 = 2;
  }
  FUN_0192cbc0();
  puVar1 = *(undefined4 **)(param_1 + lVar2 * 0x20 + 0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  return;
}


