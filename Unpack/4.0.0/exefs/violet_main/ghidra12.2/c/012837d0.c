/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012837d0; name: FUN_012837d0
 */


int FUN_012837d0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = FUN_01283650();
  iVar2 = (**(code **)(*(long *)*param_5 + 0x70))();
  iVar3 = (**(code **)(*(long *)*param_4 + 0x70))();
  if (iVar2 < iVar3) {
    lVar6 = *param_4;
    *param_4 = 0;
    lVar5 = *param_5;
    *param_5 = 0;
    *param_4 = lVar5;
    plVar4 = (long *)*param_5;
    *param_5 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    *param_5 = lVar6;
    iVar2 = (**(code **)(*(long *)*param_4 + 0x70))();
    iVar3 = (**(code **)(*(long *)*param_3 + 0x70))();
    if (iVar2 < iVar3) {
      lVar6 = *param_3;
      *param_3 = 0;
      lVar5 = *param_4;
      *param_4 = 0;
      *param_3 = lVar5;
      plVar4 = (long *)*param_4;
      *param_4 = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      *param_4 = lVar6;
      iVar2 = (**(code **)(*(long *)*param_3 + 0x70))();
      iVar3 = (**(code **)(*(long *)*param_2 + 0x70))();
      if (iVar2 < iVar3) {
        lVar6 = *param_2;
        *param_2 = 0;
        lVar5 = *param_3;
        *param_3 = 0;
        *param_2 = lVar5;
        plVar4 = (long *)*param_3;
        *param_3 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x18))();
        }
        *param_3 = lVar6;
        iVar2 = (**(code **)(*(long *)*param_2 + 0x70))();
        iVar3 = (**(code **)(*(long *)*param_1 + 0x70))();
        if (iVar2 < iVar3) {
          lVar6 = *param_1;
          *param_1 = 0;
          lVar5 = *param_2;
          *param_2 = 0;
          *param_1 = lVar5;
          plVar4 = (long *)*param_2;
          *param_2 = 0;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))();
          }
          iVar1 = iVar1 + 4;
          *param_2 = lVar6;
        }
        else {
          iVar1 = iVar1 + 3;
        }
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


