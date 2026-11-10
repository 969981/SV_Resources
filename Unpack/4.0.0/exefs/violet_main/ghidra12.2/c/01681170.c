/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01681170; name: FUN_01681170
 */


void FUN_01681170(undefined8 param_1,long *param_2,undefined2 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_50 [16];
  
  FUN_01582534();
  uVar5 = FUN_014813ec();
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar1 = FUN_010e161c(uVar5,uVar3);
  iVar4 = FUN_0167ea90(param_4);
  if (iVar4 == 0) {
    uVar2 = 10;
  }
  else {
    plVar6 = (long *)FUN_0168126c(param_4,0);
    uVar3 = (**(code **)(*plVar6 + 0x98))();
    uVar2 = FUN_018d31e0(param_1,uVar3);
  }
  lVar7 = FUN_0149b698(param_1);
  *(undefined2 *)(lVar7 + 0x10) = *param_3;
  *(undefined1 *)(lVar7 + 0x12) = uVar1;
  *(undefined1 *)(lVar7 + 0x13) = uVar2;
  *(undefined1 *)(lVar7 + 0x14) = 0;
  *(undefined2 *)(lVar7 + 0x16) = 0;
  FUN_0168125c(auStack_50);
  uVar5 = FUN_01678f00(param_1);
  FUN_01679420(uVar5,param_3,(undefined2 *)(lVar7 + 0x10),auStack_50);
  return;
}


