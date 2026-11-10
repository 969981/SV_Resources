/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01904804; name: FUN_01904804
 */


undefined8 FUN_01904804(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = FUN_01e1c0e8();
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x30,8);
    return uVar1;
  }
  FUN_00c48fe8(plVar4,param_2,0x30,8);
  return uVar1;
}


