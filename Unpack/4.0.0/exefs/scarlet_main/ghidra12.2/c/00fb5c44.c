/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb5c44; name: FUN_00fb5c44
 */


void FUN_00fb5c44(string *param_1,long *param_2)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_58;
  ulong local_50;
  long local_48;
  
  if (param_2[1] == *param_2) {
    std::string::string(param_1,(string *)(param_2 + 8));
    return;
  }
  local_50 = (ulong)*(int *)((long)param_2 + 0x34);
  local_48 = (long)(int)param_2[7];
  if ((*(int *)((long)param_2 + 0x34) < (int)param_2[7]) &&
     ((*(byte *)(param_2 + 0xb) >> 1 & 1) != 0)) {
    local_58 = &DAT_04546b80;
    FUN_00fb9b60(&local_58);
    std::exception::~exception((exception *)&local_58);
  }
  local_50 = 0;
  local_48 = 0;
  local_58 = (undefined *)0x0;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uVar2 = (ulong)(*(byte *)(param_2 + 8) >> 1);
  }
  else {
    uVar2 = param_2[9];
  }
  piVar1 = (int *)*param_2;
  if (param_2[1] - (long)piVar1 != 0) {
    uVar6 = (param_2[1] - (long)piVar1 >> 3) * -0x1111111111111111;
    uVar5 = uVar6;
    if (uVar6 < 2) {
      uVar5 = 1;
    }
    if ((*(byte *)(piVar1 + 2) & 1) == 0) {
      uVar7 = (ulong)(*(byte *)(piVar1 + 2) >> 1);
    }
    else {
      uVar7 = *(ulong *)(piVar1 + 4);
    }
    uVar7 = uVar7 + uVar2;
    uVar2 = uVar7;
    if ((*piVar1 == -2) && (uVar2 = *(ulong *)(piVar1 + 0xe), *(ulong *)(piVar1 + 0xe) <= uVar7)) {
      uVar2 = uVar7;
    }
    if ((*(byte *)(piVar1 + 8) & 1) == 0) {
      uVar7 = (ulong)(*(byte *)(piVar1 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(piVar1 + 10);
    }
    if (1 < uVar6) {
      if ((*(byte *)(piVar1 + 0x20) & 1) == 0) {
        uVar6 = (ulong)(*(byte *)(piVar1 + 0x20) >> 1);
      }
      else {
        uVar6 = *(ulong *)(piVar1 + 0x22);
      }
      uVar6 = uVar6 + uVar7 + uVar2;
      uVar2 = uVar6;
      if ((piVar1[0x1e] == -2) &&
         (uVar2 = *(ulong *)(piVar1 + 0x2c), *(ulong *)(piVar1 + 0x2c) <= uVar6)) {
        uVar2 = uVar6;
      }
      if ((*(byte *)(piVar1 + 0x26) & 1) == 0) {
        uVar6 = (ulong)(*(byte *)(piVar1 + 0x26) >> 1);
      }
      else {
        uVar6 = *(ulong *)(piVar1 + 0x28);
      }
      lVar3 = uVar6 + uVar2;
      lVar8 = uVar5 - 2;
      if (lVar8 != 0) {
        puVar4 = (ulong *)(piVar1 + 0x4a);
        do {
          if (((byte)puVar4[-6] & 1) == 0) {
            uVar2 = (ulong)(byte)((byte)puVar4[-6] >> 1);
          }
          else {
            uVar2 = puVar4[-5];
          }
          uVar2 = uVar2 + lVar3;
          uVar5 = uVar2;
          if (((int)puVar4[-7] == -2) && (uVar5 = *puVar4, *puVar4 <= uVar2)) {
            uVar5 = uVar2;
          }
          if (((byte)puVar4[-3] & 1) == 0) {
            uVar2 = (ulong)(byte)((byte)puVar4[-3] >> 1);
          }
          else {
            uVar2 = puVar4[-2];
          }
          lVar3 = uVar2 + uVar5;
          lVar8 = lVar8 + -1;
          puVar4 = puVar4 + 0xf;
        } while (lVar8 != 0);
      }
    }
  }
  std::string::reserve((ulong)&local_58);
  uVar2 = param_2[10];
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uVar2 = (long)param_2 + 0x41;
  }
  std::string::append((char *)&local_58,uVar2);
  lVar3 = *param_2;
  if (param_2[1] != lVar3) {
    uVar2 = 0;
    lVar8 = 0x28;
    do {
      lVar3 = lVar3 + lVar8;
      uVar5 = lVar3 - 0x1f;
      if ((*(byte *)(lVar3 + -0x20) & 1) != 0) {
        uVar5 = *(ulong *)(lVar3 + -0x10);
      }
      std::string::append((char *)&local_58,uVar5);
      if (*(int *)(lVar3 + -0x28) == -2) {
        uVar5 = *(ulong *)(lVar3 + 0x10);
        if (((ulong)local_58 & 1) == 0) {
          if ((byte)local_58._0_1_ >> 1 < uVar5) {
            uVar6 = (ulong)((byte)local_58._0_1_ >> 1);
            goto LAB_00fb5ee8;
          }
        }
        else {
          uVar6 = local_50;
          if (local_50 < uVar5) {
LAB_00fb5ee8:
            std::string::append((ulong)&local_58,(char)uVar5 - (char)uVar6);
          }
        }
      }
      uVar5 = lVar3 - 7;
      if ((*(byte *)(lVar3 + -8) & 1) != 0) {
        uVar5 = *(ulong *)(lVar3 + 8);
      }
      std::string::append((char *)&local_58,uVar5);
      lVar3 = *param_2;
      uVar2 = uVar2 + 1;
      lVar8 = lVar8 + 0x78;
    } while (uVar2 < (ulong)((param_2[1] - lVar3 >> 3) * -0x1111111111111111));
  }
  *(undefined1 *)((long)param_2 + 0x3c) = 1;
  *(ulong *)(param_1 + 8) = local_50;
  *(long *)(param_1 + 0x10) = local_48;
  *(undefined **)param_1 = local_58;
  return;
}


