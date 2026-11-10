/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295c210; name: FUN_0295c210
 */


bool FUN_0295c210(long param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar1 = (**(code **)(*plVar4 + 0x110))();
  uVar2 = FUN_018286d0(uVar1,2);
  uVar3 = (**(code **)(*plVar4 + 0x108))(plVar4);
  return uVar2 < (uVar3 & 0xffff);
}


