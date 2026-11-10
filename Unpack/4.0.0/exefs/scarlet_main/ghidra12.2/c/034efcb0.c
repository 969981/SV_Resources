/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034efcb0; name: FUN_034efcb0
 */


int FUN_034efcb0(undefined8 param_1,long *param_2,long param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long local_68;
  long local_60;
  undefined8 *local_58;
  long local_50;
  long local_48;
  undefined8 *local_40;
  long local_38;
  
  uVar2 = *(undefined4 *)PTR_DAT_047e6d08;
  lVar7 = FUN_0349fff0(param_2);
  if (lVar7 == 0) {
    return 2;
  }
  local_68 = *param_2;
  if (local_68 == 0) {
LAB_034efd28:
    puVar1 = (uint *)(lVar7 + 100);
    if (param_3 != 0) {
      puVar1 = (uint *)(param_3 + 0x158);
    }
    uVar9 = (ulong)*puVar1;
  }
  else {
    uVar8 = *(uint *)(local_68 + 0x11c);
    uVar9 = (ulong)uVar8;
    uVar4 = uVar8 >> 8 & 0xf;
    if ((3 < uVar4) || (((uVar8 & 0xff) == 0 && (uVar4 != 3)))) {
      uVar8 = uVar8 & 0xf00;
      if (uVar8 == 0xf00) {
        if ((*(char *)(lVar7 + 0x470) == '\0') || ((*(byte *)(lVar7 + 0x124) & 1) == 0)) {
LAB_034efd7c:
          uVar9 = (ulong)*(uint *)(lVar7 + 100);
        }
        else {
          uVar9 = 0x3102;
        }
      }
      else if (uVar8 == 0xe00) {
        if (*(char *)(lVar7 + 0x470) == '\0') goto LAB_034efd7c;
        uVar9 = *(ulong *)(lVar7 + 0x118);
      }
      else {
        if (uVar8 == 0) goto LAB_034efd28;
        uVar9 = 0;
      }
    }
  }
  if (param_3 == 0) {
    local_60 = param_2[1];
    local_58 = (undefined8 *)param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    iVar6 = FUN_035045a8(param_1,param_1,uVar9 & 0xffffffff,uVar2,&local_68,0);
    puVar5 = local_58;
    if (local_58 == (undefined8 *)0x0) {
      return iVar6;
    }
    iVar3 = *(int *)(local_58 + 0x10);
    uVar8 = iVar3 - 1;
    *(uint *)(local_58 + 0x10) = uVar8;
    if (iVar3 == 0 || uVar8 == 0) {
      if (uVar8 != 0) {
        return iVar6;
      }
    }
    else {
      if (1 < uVar8) {
        return iVar6;
      }
      if (*(char *)((long)local_58 + 0x84) == '\0') goto LAB_034eff30;
    }
    lVar7 = local_58[5];
    if (lVar7 != 0) {
      uVar8 = ((uint)lVar7 ^ (uint)lVar7 >> 0x10) * -0x7a143595;
      uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
      local_38 = lVar7;
      FUN_034c6294(&DAT_048b02b8,&local_38,uVar8 ^ uVar8 >> 0x10);
      uVar8 = *(uint *)(puVar5 + 0x10);
    }
LAB_034eff30:
    if (uVar8 == 0) {
      (**(code **)*puVar5)(puVar5);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar5);
      return iVar6;
    }
    return iVar6;
  }
  local_48 = param_2[1];
  local_40 = (undefined8 *)param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_50 = local_68;
  iVar6 = FUN_035045a8(param_1,param_1,uVar9 & 0xffffffff,uVar2,&local_50,param_3);
  puVar5 = local_40;
  if (local_40 == (undefined8 *)0x0) goto LAB_034efe60;
  iVar3 = *(int *)(local_40 + 0x10);
  uVar8 = iVar3 - 1;
  *(uint *)(local_40 + 0x10) = uVar8;
  if (iVar3 == 0 || uVar8 == 0) {
    if (uVar8 == 0) {
LAB_034efdec:
      lVar7 = local_40[5];
      if (lVar7 != 0) {
        uVar8 = ((uint)lVar7 ^ (uint)lVar7 >> 0x10) * -0x7a143595;
        uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
        local_38 = lVar7;
        FUN_034c6294(&DAT_048b02b8,&local_38,uVar8 ^ uVar8 >> 0x10);
        uVar8 = *(uint *)(puVar5 + 0x10);
      }
      goto LAB_034efe30;
    }
  }
  else if (uVar8 < 2) {
    if (*(char *)((long)local_40 + 0x84) != '\0') goto LAB_034efdec;
LAB_034efe30:
    if (uVar8 == 0) {
      (**(code **)*puVar5)(puVar5);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar5);
    }
  }
  local_40 = (undefined8 *)0x0;
LAB_034efe60:
  if (iVar6 == 1) {
    FUN_035000f0(param_1,param_3,0);
  }
  return iVar6;
}


