/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b4e50; name: FUN_016b4e50
 */


void FUN_016b4e50(long param_1)

{
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_012e43f8(*(long *)(param_1 + 0x20),"load process",0xffffffff,0x10);
  return;
}


