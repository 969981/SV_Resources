/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e5210; name: FUN_011e5210
 */


int FUN_011e5210(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  
  iVar1 = FUN_011e5340();
  plVar5 = (long *)*param_3;
  iVar2 = (**(code **)(*(long *)*param_4 + 0x20))();
  iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
  if (iVar2 < iVar3) {
    uVar4 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar4;
    plVar5 = (long *)*param_2;
    iVar2 = (**(code **)(*(long *)*param_3 + 0x20))();
    iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
    if (iVar2 < iVar3) {
      uVar4 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar4;
      plVar5 = (long *)*param_1;
      iVar2 = (**(code **)(*(long *)*param_2 + 0x20))();
      iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
      if (iVar2 < iVar3) {
        uVar4 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar4;
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


