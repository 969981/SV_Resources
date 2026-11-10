/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01283650; name: FUN_01283650
 */


int FUN_01283650(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = FUN_01283440();
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
        iVar1 = iVar1 + 3;
        *param_2 = lVar6;
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


