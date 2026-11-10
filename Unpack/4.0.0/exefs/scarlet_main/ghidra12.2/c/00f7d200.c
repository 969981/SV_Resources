/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7d200; name: FUN_00f7d200
 */


void FUN_00f7d200(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00c5d9a0(param_1,0xfff0b9d8,"_LOADED");
  if (iVar1 != 5) {
    FUN_00c5db00(param_1,0xfffffffe);
    uVar2 = FUN_00121b80(param_1,0xfff0b9d8);
    FUN_00cf6cd0(param_1,0,0);
    FUN_00d341e0(param_1,0xffffffff);
    FUN_00efafb0(param_1,uVar2,"_LOADED");
  }
  FUN_00c5d9a0(param_1,0xffffffff,param_2);
  iVar1 = FUN_00cc4dc0(param_1,0xffffffff);
  if (iVar1 == 0) {
    FUN_00c5db00(param_1,0xfffffffe);
    FUN_00c5dbe0(param_1,param_3,0);
    FUN_00c85bd0(param_1,param_2);
    FUN_00123240(param_1,1,1,0,0);
    FUN_00d341e0(param_1,0xffffffff);
    FUN_00efafb0(param_1,0xfffffffd,param_2);
  }
  FUN_00c5dcd0(param_1,0xfffffffe,0xffffffff);
  FUN_00c5db00(param_1,0xfffffffe);
  if (param_4 == 0) {
    return;
  }
  FUN_00d341e0(param_1,0xffffffff);
  FUN_027073e0(param_1,param_2);
  return;
}


