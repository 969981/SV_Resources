/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291b550; name: FUN_0291b550
 */


int FUN_0291b550(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  
  iVar1 = FUN_0291b60c();
  iVar2 = FUN_0291b684(param_1,param_2);
  iVar3 = FUN_0291b6d4(param_1,param_2);
  uVar8 = FUN_0291b724(param_1,param_2);
  iVar7 = 0x14;
  if ((uVar8 & 1) == 0) {
    iVar7 = 0;
  }
  iVar4 = FUN_0291b8a4(param_1,param_2);
  iVar5 = FUN_0291b8f4(param_1,param_2);
  iVar6 = FUN_0291b944(param_1,param_2);
  iVar6 = iVar2 + iVar1 + iVar3 + iVar7 + iVar4 + iVar5 + iVar6;
  if (iVar6 < 1) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_0291b994(param_1,param_2);
    iVar7 = iVar7 + iVar6;
  }
  return iVar7;
}


