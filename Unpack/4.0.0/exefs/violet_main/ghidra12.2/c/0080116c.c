/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080116c; name: FUN_0080116c
 */


undefined8 FUN_0080116c(ushort *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((ulong)*param_1 != 0) {
    uVar3 = 0;
    uVar1 = 0xffffffff;
    do {
      lVar4 = **(long **)(*(long *)(param_1 + 4) + uVar3 * 8);
      if (lVar4 == param_2) {
        return 0;
      }
      uVar2 = (uint)uVar3;
      if (lVar4 != -1) {
        uVar2 = 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      if (uVar1 != 0xffffffff) {
        uVar2 = uVar1;
      }
      uVar1 = uVar2;
    } while (uVar3 < *param_1);
    if (-1 < (int)uVar2) {
      **(long **)(*(long *)(param_1 + 4) + (ulong)uVar2 * 8) = param_2;
      return 1;
    }
  }
  return 0;
}


