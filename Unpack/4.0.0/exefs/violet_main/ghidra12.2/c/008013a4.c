/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008013a4; name: FUN_008013a4
 */


long * FUN_008013a4(ushort *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0xc) != -1) && ((ulong)*param_1 != 0)) {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 4) + uVar2 * 8);
      if (*plVar1 == *(long *)(param_1 + 0xc)) {
        return plVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  return (long *)0x0;
}


