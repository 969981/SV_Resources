/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fe53cc; name: FUN_01fe53cc
 */


uint FUN_01fe53cc(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = FUN_01e04f58();
  lVar2 = *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60));
  if (lVar2 != 0x137e8707be8470ef) {
    if (lVar2 == 0x133a8707be4aa423) {
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 & 1;
}


