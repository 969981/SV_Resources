/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f4250; name: FUN_005f4250
 */


byte FUN_005f4250(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 local_60 [2] [16];
  undefined1 local_40 [2] [16];
  
  iVar2 = FUN_006c3868();
  iVar3 = FUN_006c3868(param_2);
  if (iVar2 == iVar3) {
    uVar4 = FUN_006c3858(param_1);
    if ((uVar4 & 1) == 0) {
      FUN_006c38b8(local_40,param_1);
      FUN_006c38b8(local_60,param_2);
      bVar1 = FUN_006c3910(local_40,local_60);
    }
    else {
      local_40[0] = FUN_006c3870(param_1);
      local_60[0] = FUN_006c3870(param_2);
      iVar2 = FUN_006c3850(local_40);
      iVar3 = FUN_006c3850(local_60);
      bVar1 = iVar2 == iVar3;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}


