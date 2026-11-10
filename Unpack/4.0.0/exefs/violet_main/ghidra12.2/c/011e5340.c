/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e5340; name: FUN_011e5340
 */


undefined8 FUN_011e5340(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  iVar1 = (**(code **)(*(long *)*param_2 + 0x20))();
  iVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
  plVar6 = (long *)*param_2;
  iVar3 = (**(code **)(*(long *)*param_3 + 0x20))();
  iVar4 = (**(code **)(*plVar6 + 0x20))(plVar6);
  if (iVar1 < iVar2) {
    plVar6 = (long *)*param_1;
    if (iVar3 < iVar4) {
      *param_1 = *param_3;
      *param_3 = plVar6;
    }
    else {
      *param_1 = *param_2;
      *param_2 = plVar6;
      iVar1 = (**(code **)(*(long *)*param_3 + 0x20))();
      iVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
      if (iVar1 < iVar2) {
        uVar5 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar5;
        return 2;
      }
    }
  }
  else {
    if (iVar4 <= iVar3) {
      return 0;
    }
    uVar5 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar5;
    plVar6 = (long *)*param_1;
    iVar1 = (**(code **)(*(long *)*param_2 + 0x20))();
    iVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
    if (iVar1 < iVar2) {
      uVar5 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar5;
      return 2;
    }
  }
  return 1;
}


