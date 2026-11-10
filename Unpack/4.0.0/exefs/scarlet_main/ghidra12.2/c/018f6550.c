/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f6550; name: FUN_018f6550
 */


uint FUN_018f6550(long param_1)

{
  short sVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  sVar1 = (**(code **)(*plVar3 + 0xf8))();
  if ((sVar1 == 0x67) || (uVar4 = (**(code **)(*plVar3 + 0x220))(plVar3,0x13), (uVar4 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar5 = FUN_0158253c(*(undefined8 *)(param_1 + 8));
    uVar2 = FUN_01582544(uVar5,5);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2 & 1;
}


