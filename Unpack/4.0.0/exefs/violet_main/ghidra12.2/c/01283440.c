/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01283440; name: FUN_01283440
 */


undefined8 FUN_01283440(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  iVar1 = (**(code **)(*(long *)*param_2 + 0x70))();
  iVar2 = (**(code **)(*(long *)*param_1 + 0x70))();
  iVar3 = (**(code **)(*(long *)*param_3 + 0x70))();
  iVar4 = (**(code **)(*(long *)*param_2 + 0x70))();
  if (iVar1 < iVar2) {
    lVar6 = *param_1;
    *param_1 = 0;
    if (iVar3 < iVar4) {
      lVar7 = *param_3;
      *param_3 = 0;
      *param_1 = lVar7;
      plVar5 = (long *)*param_3;
      *param_3 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      *param_3 = lVar6;
    }
    else {
      lVar7 = *param_2;
      *param_2 = 0;
      *param_1 = lVar7;
      plVar5 = (long *)*param_2;
      *param_2 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      *param_2 = lVar6;
      iVar1 = (**(code **)(*(long *)*param_3 + 0x70))();
      iVar2 = (**(code **)(*(long *)*param_2 + 0x70))();
      if (iVar1 < iVar2) {
        lVar7 = *param_2;
        *param_2 = 0;
        lVar6 = *param_3;
        *param_3 = 0;
        *param_2 = lVar6;
        plVar5 = (long *)*param_3;
        *param_3 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))();
        }
        *param_3 = lVar7;
        return 2;
      }
    }
  }
  else {
    if (iVar4 <= iVar3) {
      return 0;
    }
    lVar7 = *param_2;
    *param_2 = 0;
    lVar6 = *param_3;
    *param_3 = 0;
    *param_2 = lVar6;
    plVar5 = (long *)*param_3;
    *param_3 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    *param_3 = lVar7;
    iVar1 = (**(code **)(*(long *)*param_2 + 0x70))();
    iVar2 = (**(code **)(*(long *)*param_1 + 0x70))();
    if (iVar1 < iVar2) {
      lVar7 = *param_1;
      *param_1 = 0;
      lVar6 = *param_2;
      *param_2 = 0;
      *param_1 = lVar6;
      plVar5 = (long *)*param_2;
      *param_2 = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))();
      }
      *param_2 = lVar7;
      return 2;
    }
  }
  return 1;
}


