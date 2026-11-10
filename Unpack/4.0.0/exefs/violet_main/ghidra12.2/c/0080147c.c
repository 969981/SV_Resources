/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080147c; name: FUN_0080147c
 */


long * FUN_0080147c(ushort *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if ((ulong)*param_1 != 0) {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 4) + uVar2 * 8);
      if ((*plVar1 != -1) && (plVar1[1] == param_2)) {
        return plVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  return (long *)0x0;
}


