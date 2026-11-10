/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295c730; name: FUN_0295c730
 */


bool FUN_0295c730(long param_1,undefined4 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar5 = FUN_02943990();
  if ((((uVar5 & 1) == 0) && (uVar5 = FUN_02943850(param_1), (uVar5 & 1) == 0)) &&
     (*(int *)(*(long *)(param_1 + 0x48) + 0x48) == 1)) {
    plVar6 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
    uVar2 = (**(code **)(*plVar6 + 0x110))();
    uVar4 = FUN_018286d0(uVar2,2);
    uVar3 = (**(code **)(*plVar6 + 0x108))(plVar6);
    bVar1 = uVar3 != 0 && uVar3 <= uVar4;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


