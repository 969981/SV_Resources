/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00882fb0; name: FUN_00882fb0
 */


undefined8 FUN_00882fb0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80260201;
  }
  if (param_2 == (int *)0x0) {
    return 0x80260201;
  }
  iVar5 = *param_2;
  if (iVar5 != 0x1010000) {
    if (iVar5 == 0x2010000) {
      iVar5 = param_2[2];
      param_1[0x12] = iVar5;
      if (iVar5 == 0) {
        return 0;
      }
      uVar6 = 0;
      param_2 = param_2 + 7;
      puVar4 = param_1 + 0x13;
      do {
        local_70 = 0x1c02011000;
        local_58 = *param_2;
        local_68 = *(undefined8 *)(param_2 + -4);
        local_60 = *(undefined8 *)(param_2 + -2);
        uVar3 = FUN_008809a0(&local_70,puVar4,*param_1,param_1[0x10],param_3,param_4);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar6 = uVar6 + 1;
        param_2 = param_2 + 5;
        puVar4 = puVar4 + 0x36;
      } while (uVar6 < (uint)param_1[0x12]);
      return 0;
    }
    if (iVar5 != 0x1020000) {
      return 0x80260202;
    }
  }
  iVar5 = param_2[2];
  param_1[0x12] = iVar5;
  local_70 = 0x1801011000;
  if (iVar5 != 0) {
    uVar6 = 0;
    piVar7 = param_2 + 7;
    puVar4 = param_1 + 0x13;
    do {
      local_68 = *(undefined8 *)(piVar7 + -3);
      local_60 = CONCAT44(*piVar7,piVar7[-1]);
      uVar3 = FUN_008809a0(&local_70,puVar4,*param_1,param_1[0x10],param_3,param_4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
      puVar4 = puVar4 + 0x36;
    } while (uVar6 < (uint)param_1[0x12]);
  }
  uVar1 = param_2[2];
  if (uVar1 < 6) {
    puVar4 = param_1 + (ulong)uVar1 * 0x36 + 0x13;
    iVar5 = uVar1 - 6;
    do {
      local_68 = 0;
      local_60 = 0;
      uVar3 = FUN_008809a0(&local_70,puVar4,*param_1,param_1[0x10],param_3,param_4);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      puVar4 = puVar4 + 0x36;
      bVar2 = iVar5 != -1;
      iVar5 = iVar5 + 1;
    } while (bVar2);
  }
  return 0;
}


