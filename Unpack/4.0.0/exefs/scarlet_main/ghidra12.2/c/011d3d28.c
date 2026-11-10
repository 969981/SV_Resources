/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011d3d28; name: FUN_011d3d28
 */


uint FUN_011d3d28(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = FUN_011d3d7c();
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)FUN_011d3f10(*(undefined8 *)(param_1 + 0x290));
    if (plVar3 == (long *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*plVar3 + 0x208))();
      uVar1 = uVar1 ^ 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}


