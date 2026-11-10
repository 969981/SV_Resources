/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02942dc0; name: FUN_02942dc0
 */


undefined8 FUN_02942dc0(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  uVar3 = FUN_02942d50();
  if (((uVar3 & 1) == 0) && (uVar3 = FUN_02942950(param_1,param_3), (uVar3 & 1) == 0)) {
    lVar5 = FUN_029429bc(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
    plVar6 = (long *)FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3);
    if (lVar5 != 0) {
      uVar1 = FUN_01a6acfc(lVar5);
      uVar2 = (**(code **)(*plVar6 + 0x2a8))(plVar6);
      uVar4 = FUN_02942a80(param_1,uVar1,uVar2);
      return uVar4;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


