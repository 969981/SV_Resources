/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029239ac; name: FUN_029239ac
 */


undefined4 FUN_029239ac(undefined8 param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = FUN_00f7e27c();
  uVar4 = FUN_00f7d7d8(uVar3,0);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    iVar6 = 0;
    uVar5 = 2;
  }
  else {
    iVar6 = *param_2;
    uVar5 = 0;
  }
  uVar3 = FUN_00f7e27c(param_1);
  uVar4 = FUN_00f7d7d8(uVar3,1);
  uVar2 = uVar5;
  if ((uVar4 & 1) != 0) {
    uVar2 = 1;
  }
  if ((!bVar1) && ((uVar4 & 1) != 0)) {
    if (iVar6 < param_2[1]) {
      uVar2 = 1;
    }
    else {
      uVar7 = 1;
      if (param_2[1] == iVar6) {
        uVar7 = 2;
      }
      uVar2 = 2;
      if (uVar7 < 2) {
        uVar2 = uVar5;
      }
    }
  }
  return uVar2;
}


