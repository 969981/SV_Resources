/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029424bc; name: FUN_029424bc
 */


void FUN_029424bc(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  
  *param_2 = 0;
  plVar8 = (long *)*param_3;
  uVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
  uVar6 = (**(code **)(*plVar8 + 0x588))(plVar8);
  if ((uVar6 & 1) != 0) {
    FUN_02984e8c(param_1,plVar8);
    return;
  }
  uVar4 = (uint)*(ushort *)(param_3 + 1);
  if (*(ushort *)(param_3 + 1) == 0) {
    uVar2 = (**(code **)(*plVar8 + 0x140))(plVar8);
    uVar4 = FUN_02944940(uVar2,4);
  }
  uVar1 = uVar4;
  if (*(ushort *)((long)param_3 + 10) != 0) {
    uVar1 = (uint)*(ushort *)((long)param_3 + 10);
  }
  uVar5 = (**(code **)(*plVar8 + 0x108))(plVar8);
  if ((int)(uVar5 & 0xffff) <= (int)uVar1) {
    FUN_02984ed0(param_1,plVar8);
    return;
  }
  uVar5 = FUN_018d31e0(param_1,uVar3);
  if ((uVar5 & 0xff) != 10) {
    uVar7 = FUN_01243584(param_1);
    FUN_0124fcd8(uVar7,plVar8,-uVar1,0xe,uVar3,1);
    FUN_02984f18(param_1,plVar8);
    uVar7 = FUN_01243584(param_1);
    FUN_02984f70(uVar7,uVar3,uVar4);
    uVar7 = FUN_01243584(param_1);
    FUN_02982ea4(uVar7,uVar5);
    uVar6 = FUN_018ce3ac((long)param_3 + 0xc);
    uVar7 = FUN_01243584(param_1);
    if ((uVar6 & 1) == 0) {
      FUN_0167eba0(uVar7,uVar3,0xfe,uVar3);
    }
    else {
      FUN_0124b0ac(uVar7,uVar3,(long)param_3 + 0xc);
    }
    *param_2 = 1;
  }
  return;
}


