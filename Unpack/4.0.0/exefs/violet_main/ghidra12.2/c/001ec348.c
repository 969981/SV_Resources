/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ec348; name: FUN_001ec348
 */


ulong FUN_001ec348(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(code **)PTR_DAT_047cb9d0 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar1 = (**(code **)PTR_DAT_047cb9d0)(param_1 + 7 + param_2);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = param_1 + 7 + lVar1 & -param_1;
      *(long *)(uVar2 - 8) = lVar1;
    }
  }
  return uVar2;
}


