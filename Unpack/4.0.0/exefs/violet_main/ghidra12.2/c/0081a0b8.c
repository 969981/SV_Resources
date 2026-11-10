/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081a0b8; name: FUN_0081a0b8
 */


long FUN_0081a0b8(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  do {
    if (plVar1 == *(long **)(param_1 + 0x30)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(ushort *)(lVar2 + 8) != param_2);
  return lVar2;
}


