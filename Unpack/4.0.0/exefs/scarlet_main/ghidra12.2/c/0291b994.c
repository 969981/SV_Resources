/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291b994; name: FUN_0291b994
 */


long FUN_0291b994(undefined8 param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  ushort uVar9;
  
  uVar2 = (**(code **)(*(long *)*param_2 + 0x98))();
  uVar3 = (**(code **)(*(long *)param_2[1] + 0x98))();
  plVar6 = (long *)FUN_01021c74(param_1);
  iVar4 = (**(code **)(*plVar6 + 0x248))(plVar6,uVar2);
  if (iVar4 < 1) {
    lVar7 = 0;
  }
  else {
    uVar9 = 0;
    iVar8 = 0;
    do {
      plVar6 = (long *)FUN_01021c74(param_1);
      uVar5 = (**(code **)(*plVar6 + 0x250))(plVar6,uVar2,iVar8);
      plVar6 = (long *)FUN_01021c74(param_1);
      uVar1 = (**(code **)(*plVar6 + 0x438))(plVar6,uVar3,uVar5,0);
      iVar8 = iVar8 + 1;
      if (uVar1 <= uVar9) {
        uVar1 = uVar9;
      }
      uVar9 = uVar1;
    } while (iVar4 != iVar8);
    if (uVar9 < 0xf0) {
      if (uVar9 < 200) {
        lVar7 = (ulong)(0x9f < uVar9) << 1;
      }
      else {
        lVar7 = 3;
      }
    }
    else {
      lVar7 = 4;
    }
  }
  return lVar7;
}


