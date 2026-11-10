/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cdb68; name: FUN_007cdb68
 */


uint FUN_007cdb68(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = 0;
    plVar3 = *(long **)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_0078cdf4();
    plVar3 = *(long **)(param_1 + 0x18);
  }
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x1a0))();
    uVar1 = uVar1 | uVar2;
  }
  return uVar1 & 1;
}


