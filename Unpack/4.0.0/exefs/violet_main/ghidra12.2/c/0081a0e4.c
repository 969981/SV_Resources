/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081a0e4; name: FUN_0081a0e4
 */


int FUN_0081a0e4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  do {
    if (plVar1 == *(long **)(param_1 + 0x30)) {
      return 600;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(short *)(lVar2 + 8) != 9);
  if (lVar2 == 0) {
    return 600;
  }
  return (uint)*(byte *)(lVar2 + 0xd) + (uint)*(byte *)(lVar2 + 0xc) * 100;
}


