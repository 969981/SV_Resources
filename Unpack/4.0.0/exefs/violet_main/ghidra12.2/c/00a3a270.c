/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3a270; name: FUN_00a3a270
 */


bool FUN_00a3a270(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_019d8b6c();
  if (*(long *)(lVar1 + 0xe8) == 0 || *(long *)(lVar1 + 0xe8) != param_2) {
    lVar1 = FUN_019d8b6c();
    if ((*(long *)(lVar1 + 0x108) == 0) || (*(long *)(lVar1 + 0x108) != param_2)) {
      lVar1 = FUN_019d8b6c();
      if ((*(long *)(lVar1 + 0x128) == 0) || (*(long *)(lVar1 + 0x128) != param_2)) {
        lVar1 = FUN_019d8b6c();
        return *(long *)(lVar1 + 0x148) != 0 && *(long *)(lVar1 + 0x148) == param_2;
      }
    }
  }
  return true;
}


