/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02985cdc; name: FUN_02985cdc
 */


void FUN_02985cdc(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  plVar5 = (long *)FUN_014813f4(param_1,param_3[1]);
  uVar6 = (**(code **)(*plVar5 + 0x200))();
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_018ce3ac(param_3 + 0xc);
    if ((uVar6 & 1) != 0) {
      uVar7 = FUN_01243584(param_1);
      FUN_0124b0ac(uVar7,*param_3,param_3 + 0xc);
      return;
    }
  }
  else {
    uVar7 = FUN_01243584(param_1);
    FUN_02987000(uVar7,param_3[1],*(undefined2 *)(param_3 + 2));
    FUN_01582534(param_1);
    uVar7 = FUN_0123f5b0();
    FUN_0297b4b0(uVar7,param_3[1]);
    uVar6 = FUN_018ce3ac(param_3 + 3);
    if ((uVar6 & 1) != 0) {
      uVar7 = FUN_01243584(param_1);
      FUN_0124b0ac(uVar7,*param_3,param_3 + 3);
    }
    if (*(char *)(param_3 + 0x15) != '\0') {
      FUN_01582534(param_1);
      uVar7 = FUN_014813ec();
      uVar2 = FUN_010e161c(uVar7,param_3[1]);
      if ((uVar2 & 0xff) != 10) {
        uVar3 = FUN_01689a40(param_1,param_3[1]);
        FUN_01582534(param_1);
        uVar7 = FUN_014813ec();
        uVar4 = FUN_02102a34(uVar7,uVar2);
        uVar1 = FUN_02987044(param_1,uVar3,uVar4,uVar4);
        FUN_02987088(param_1,uVar1);
      }
    }
    *param_2 = 1;
  }
  return;
}


