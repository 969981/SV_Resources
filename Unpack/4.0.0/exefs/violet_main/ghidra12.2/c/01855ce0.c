/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01855ce0; name: FUN_01855ce0
 */


undefined8 FUN_01855ce0(long param_1,undefined4 param_2)

{
  short sVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar3 = (**(code **)(*plVar2 + 0x510))(plVar2,3);
  if ((((uVar3 & 1) == 0) &&
      (lVar4 = FUN_01855d6c(*(undefined8 *)(param_1 + 0x10),param_2), lVar4 != 0)) &&
     (sVar1 = FUN_01855d50(), sVar1 != 0)) {
    uVar5 = FUN_015d973c();
    return uVar5;
  }
  return 0;
}


