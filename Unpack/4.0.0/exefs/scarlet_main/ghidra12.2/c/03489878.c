/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03489878; name: FUN_03489878
 */


undefined4 FUN_03489878(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar5 = (**(code **)(*param_2 + 0x88))(param_2);
  sVar4 = (**(code **)(*param_1 + 600))(param_1);
  if (sVar4 == -1) {
    uVar6 = 9;
  }
  else if (iVar5 - 2U < 4) {
    if (param_2[0x13] == 0) {
      uVar2 = *(uint *)(param_2 + 3);
      uVar7 = *(uint *)(param_1 + 0x21);
      if (uVar7 != 0) {
        iVar5 = 0;
        do {
          iVar1 = iVar5 + (uVar7 >> 1);
          uVar3 = *(uint *)(*(long *)(param_1[0x20] + (long)iVar1 * 8) + 0x18);
          if (uVar3 == uVar2) {
            return 5;
          }
          if (uVar3 < uVar2) {
            iVar5 = iVar1 + 1;
          }
          uVar7 = uVar7 - (uVar3 < uVar2) >> 1;
        } while (uVar7 != 0);
      }
      uVar6 = 0x17;
      if (*(uint *)(param_1 + 3) != uVar2) {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 0x15;
    }
  }
  else {
    uVar6 = 4;
  }
  return uVar6;
}


