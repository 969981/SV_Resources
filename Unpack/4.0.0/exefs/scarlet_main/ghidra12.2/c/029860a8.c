/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029860a8; name: FUN_029860a8
 */


undefined8
FUN_029860a8(long param_1,long *param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  uVar2 = FUN_02986068(param_1,param_3);
  uVar5 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
  FUN_01253868(uVar5,uVar2,local_34,local_38);
  iVar3 = FUN_029862cc(param_1,local_34[0]);
  if (iVar3 < 0) {
    uVar5 = 0;
  }
  else {
    plVar6 = (long *)FUN_01248380(param_1,local_34[0],iVar3);
    uVar5 = 0;
    if (plVar6 != (long *)0x0) {
      FUN_02986388(param_1,param_3,param_4);
      if (param_5 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
        FUN_0124b0ac(uVar5,uVar2,param_5);
      }
      uVar1 = FUN_029863bc(param_1,local_34[0],local_38[0],iVar3);
      lVar7 = *(long *)(param_1 + 0x20);
      uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
      uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
      FUN_0167ebc0(*(undefined8 *)(lVar7 + 0x18),0xcb,uVar2,0x10f,uVar4,0xffff0000);
      FUN_029863fc(param_1,uVar1);
      uVar5 = 1;
    }
  }
  return uVar5;
}


