/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124e268; name: FUN_0124e268
 */


void FUN_0124e268(undefined8 param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  
  uVar6 = FUN_0124e480();
  uVar7 = FUN_01582534(param_1);
  uVar8 = FUN_0124e550(uVar6,uVar7);
  uVar6 = FUN_01243584(param_1);
  if ((uVar8 & 1) == 0) {
    FUN_012500d0(uVar6,*param_3);
  }
  else {
    FUN_0124ecec();
  }
  uVar6 = FUN_0124e498(param_1,*param_3);
  plVar9 = (long *)FUN_0124e4c0(uVar6,param_3[2]);
  uVar4 = (**(code **)(*plVar9 + 0x98))();
  FUN_0124e4e0(param_1,1,uVar4);
  FUN_0124e4e0(param_1,0x1f,uVar4);
  FUN_0124e4e0(param_1,0x20,*param_2);
  uVar6 = FUN_01243584(param_1);
  uVar1 = param_3[2];
  uVar2 = param_3[1];
  uVar3 = *param_3;
  uVar7 = FUN_0124e528(param_1,0);
  FUN_0124e7ec(uVar6,uVar3,uVar2,uVar1,uVar7);
  uVar6 = FUN_0124e498(param_1,*param_3);
  plVar9 = (long *)FUN_0124e4c0(uVar6,param_3[1]);
  uVar4 = (**(code **)(*plVar9 + 0x98))();
  uVar6 = FUN_01243584(param_1);
  uVar7 = FUN_01246e90(param_1);
  FUN_0124f1ec(uVar6,uVar7,plVar9);
  uVar6 = FUN_01243584(param_1);
  uVar5 = (**(code **)(*plVar9 + 0x98))(plVar9);
  FUN_0124e798(uVar6,uVar5);
  uVar6 = FUN_01243584(param_1);
  uVar5 = (**(code **)(*plVar9 + 0x98))(plVar9);
  FUN_0124e578(uVar6,uVar5);
  uVar6 = FUN_0124e480(param_1);
  FUN_0124f348(uVar6,plVar9);
  FUN_0123de68(param_1);
  uVar6 = FUN_0124e490();
  FUN_0124e5dc(uVar6,uVar4);
  uVar6 = FUN_01243584(param_1);
  FUN_0124e848(uVar6,plVar9);
  FUN_0124e480(param_1);
  uVar8 = FUN_0124e488();
  if ((uVar8 & 1) != 0) {
    FUN_01582534(param_1);
    uVar6 = FUN_0123df30();
    uVar8 = FUN_0157992c(uVar6,0);
    if ((uVar8 & 1) != 0) {
      uVar6 = FUN_012468e8(param_1);
      FUN_0291c364(uVar6,uVar4);
    }
  }
  *param_2 = uVar4;
  return;
}


