/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03473b60; name: FUN_03473b60
 */


uint FUN_03473b60(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = FUN_034abe20();
  lVar4 = *(long *)(param_1 + 0x90);
  if (lVar4 != 0) {
    *(short *)(lVar4 + 0x94) = *(short *)(lVar4 + 0x94) + 1;
    *(short *)(lVar4 + 0x96) = *(short *)(lVar4 + 0x96) + 1;
  }
  plVar3 = *(long **)(param_1 + 0xa0);
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x128))(plVar3,1);
    uVar1 = uVar1 & uVar2;
  }
  return uVar1 & 1;
}


