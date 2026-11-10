/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291b724; name: FUN_0291b724
 */


undefined8 FUN_0291b724(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  
  uVar1 = (**(code **)(*(long *)*param_2 + 0x98))();
  uVar2 = (**(code **)(*(long *)param_2[1] + 0x98))();
  plVar6 = (long *)FUN_01021c74(param_1);
  uVar3 = (**(code **)(*plVar6 + 400))(plVar6,uVar1);
  if ((uVar3 & 0xffff) == 0) {
    return 0;
  }
  plVar6 = (long *)FUN_01021c74(param_1);
  uVar7 = (**(code **)(*plVar6 + 800))(plVar6,uVar3);
  plVar6 = (long *)FUN_01021c74(param_1);
  if ((uVar7 & 1) == 0) {
    lVar8 = *plVar6;
    uVar9 = 0x42;
  }
  else {
    iVar4 = (**(code **)(*plVar6 + 0x248))(plVar6,uVar1);
    plVar6 = (long *)FUN_01021c74(param_1);
    if (0 < iVar4) {
      iVar10 = 0;
      do {
        uVar5 = (**(code **)(*plVar6 + 0x250))(plVar6,uVar1,iVar10);
        uVar7 = FUN_0291c1e0(param_1,uVar1,uVar5,uVar3);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        iVar10 = iVar10 + 1;
        plVar6 = (long *)FUN_01021c74(param_1);
      } while (iVar4 != iVar10);
    }
    uVar7 = (**(code **)(*plVar6 + 0x478))(plVar6,uVar2);
    if ((uVar7 & 1) == 0) {
      plVar6 = (long *)FUN_01021c74(param_1);
      uVar7 = (**(code **)(*plVar6 + 0x478))(plVar6,uVar2);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar9 = 0x32;
    }
    else {
      uVar9 = 0x42;
    }
    plVar6 = (long *)FUN_01021c74(param_1);
    lVar8 = *plVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0291b864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(lVar8 + 0x4c0))(plVar6,uVar9);
  return uVar9;
}


