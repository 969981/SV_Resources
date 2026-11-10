/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e9734; name: FUN_021e9734
 */


void FUN_021e9734(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = FUN_021dad50();
  do {
    FUN_021e9844(lVar3);
    FUN_021e985c(lVar3);
    FUN_021e986c(lVar3);
    FUN_021e9878(lVar3);
    plVar4 = (long *)FUN_021dad60();
    uVar2 = FUN_021dad80(lVar3);
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
    lVar5 = FUN_021e9888(lVar3);
    bVar1 = lVar5 != lVar3;
    *(int *)*param_2 = *(int *)*param_2 + 1;
    lVar3 = lVar5;
  } while (bVar1);
  return;
}


