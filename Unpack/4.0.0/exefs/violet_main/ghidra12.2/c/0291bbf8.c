/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291bbf8; name: FUN_0291bbf8
 */


undefined8 FUN_0291bbf8(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  
  uVar1 = (**(code **)(*(long *)*param_2 + 0x98))();
  uVar2 = (**(code **)(*(long *)param_2[1] + 0x98))();
  plVar5 = (long *)FUN_01021c74(param_1);
  iVar3 = (**(code **)(*plVar5 + 0x248))(plVar5,uVar1);
  plVar5 = (long *)FUN_01021c74(param_1);
  uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,uVar1);
  if ((0 < iVar3) && ((uVar6 & 1) == 0)) {
    iVar7 = 0;
    do {
      plVar5 = (long *)FUN_01021c74(param_1);
      uVar4 = (**(code **)(*plVar5 + 0x250))(plVar5,uVar1,iVar7);
      plVar5 = (long *)FUN_01021c74(param_1);
      uVar6 = (**(code **)(*plVar5 + 0x460))(plVar5,uVar1,uVar4,0);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
    iVar7 = 0;
    do {
      plVar5 = (long *)FUN_01021c74(param_1);
      uVar4 = (**(code **)(*plVar5 + 0x250))(plVar5,uVar1,iVar7);
      plVar5 = (long *)FUN_01021c74(param_1);
      uVar6 = (**(code **)(*plVar5 + 0x470))(plVar5,uVar2,uVar4);
      if ((uVar6 & 1) != 0) {
        plVar5 = (long *)FUN_01021c74(param_1);
        uVar6 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x4e);
        if ((uVar6 & 1) != 0) {
          return 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
    iVar7 = 0;
    do {
      plVar5 = (long *)FUN_01021c74(param_1);
      uVar4 = (**(code **)(*plVar5 + 0x250))(plVar5,uVar1,iVar7);
      plVar5 = (long *)FUN_01021c74(param_1);
      uVar6 = (**(code **)(*plVar5 + 0x480))(plVar5,uVar2,uVar4);
      if ((uVar6 & 1) != 0) {
        plVar5 = (long *)FUN_01021c74(param_1);
        uVar6 = (**(code **)(*plVar5 + 0x4c0))(plVar5,0x32);
        if ((uVar6 & 1) != 0) {
          return 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  return 0;
}


