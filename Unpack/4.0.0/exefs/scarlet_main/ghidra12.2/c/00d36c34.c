/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d36c34; name: FUN_00d36c34
 */


void FUN_00d36c34(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char acStack_b8 [136];
  
  nn::util::SNPrintf(acStack_b8,0x88,"%s_%s.bflan",param_1[6],param_3);
  uVar2 = (**(code **)(*(long *)param_1[8] + 0x50))((long *)param_1[8],0x616e696d,acStack_b8);
  FUN_00d358ac(acStack_b8,uVar2);
  uVar1 = FUN_0088f738(acStack_b8);
  if (uVar1 < 2) {
    pcVar3 = *(code **)(*param_1 + 0x88);
  }
  else {
    pcVar3 = *(code **)(*param_1 + 0x90);
  }
  (*pcVar3)(param_1,param_2,param_3,acStack_b8,param_4 & 1);
  return;
}


