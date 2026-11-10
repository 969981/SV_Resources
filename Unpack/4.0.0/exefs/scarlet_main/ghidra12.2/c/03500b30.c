/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03500b30; name: FUN_03500b30
 */


void FUN_03500b30(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_28;
  
  *param_1 = &PTR_FUN_047c61e0;
  param_1[0x12] = &PTR_LAB_047c6320;
  FUN_03500ec8();
  puVar2 = PTR_DAT_047e2fd0;
  plVar4 = (long *)param_1[0x2f];
  if (plVar4 != (long *)0x0) {
    plVar7 = (long *)plVar4[0xc];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,PTR_PTR_047e71e0);
      *(undefined8 *)(param_1[0x2f] + 0x60) = 0;
      plVar4 = (long *)param_1[0x2f];
    }
    (**(code **)(*plVar4 + 0x28))();
    *(undefined4 *)(param_1[0x2f] + 0x68) = 0xffffffff;
    puVar8 = (undefined8 *)param_1[0x2f];
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8);
      (**(code **)(puVar2 + 0x30))(5,puVar8);
      param_1[0x2f] = 0;
    }
  }
  puVar3 = PTR_DAT_047e70e8;
  lVar5 = param_1[0x30];
  if (lVar5 != 0) {
    if (*(uint *)(param_1 + 0x31) != 0) {
      lVar9 = (ulong)*(uint *)(param_1 + 0x31) << 5;
      plVar4 = (long *)(lVar5 + 0x18);
      do {
        if ((plVar4[-2] != 0) && (*(int *)((long)plVar4 + -4) != -1)) {
          FUN_03468ed8(*(undefined8 *)puVar3);
          if (*plVar4 != 0) {
            FUN_0346034c(*plVar4,0);
          }
        }
        lVar9 = lVar9 + -0x20;
        plVar4 = plVar4 + 4;
      } while (lVar9 != 0);
      lVar5 = param_1[0x30];
    }
    *(undefined4 *)(param_1 + 0x31) = 0;
    (**(code **)(puVar2 + 0x30))(0,lVar5);
    param_1[0x30] = 0;
    *(undefined4 *)((long)param_1 + 0x18c) = 0;
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1 + 0x26) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[0x25] = 0;
    *(undefined4 *)((long)param_1 + 0x134) = 0;
  }
  lVar5 = param_1[0x27];
  if (lVar5 != 0) {
    if (*(uint *)(param_1 + 0x28) != 0) {
      lVar9 = (ulong)*(uint *)(param_1 + 0x28) * 0x30;
      do {
        FUN_0350499c(lVar5);
        lVar5 = lVar5 + 0x30;
        lVar9 = lVar9 + -0x30;
      } while (lVar9 != 0);
      lVar5 = param_1[0x27];
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(puVar2 + 0x30))(0,lVar5);
    param_1[0x27] = 0;
    *(undefined4 *)((long)param_1 + 0x144) = 0;
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[0x1f] = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
  }
  lVar5 = param_1[0x21];
  if (lVar5 != 0) {
    if (*(uint *)(param_1 + 0x22) != 0) {
      lVar9 = (ulong)*(uint *)(param_1 + 0x22) * 0x30;
      do {
        FUN_0350499c(lVar5);
        lVar5 = lVar5 + 0x30;
        lVar9 = lVar9 + -0x30;
      } while (lVar9 != 0);
      lVar5 = param_1[0x21];
    }
    *(undefined4 *)(param_1 + 0x22) = 0;
    (**(code **)(puVar2 + 0x30))(0,lVar5);
    param_1[0x21] = 0;
    *(undefined4 *)((long)param_1 + 0x114) = 0;
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[0x19] = 0;
    *(undefined4 *)((long)param_1 + 0xd4) = 0;
  }
  lVar5 = param_1[0x1b];
  if (lVar5 != 0) {
    if (*(uint *)(param_1 + 0x1c) != 0) {
      lVar9 = (ulong)*(uint *)(param_1 + 0x1c) * 0x30;
      do {
        FUN_0350499c(lVar5);
        lVar5 = lVar5 + 0x30;
        lVar9 = lVar9 + -0x30;
      } while (lVar9 != 0);
      lVar5 = param_1[0x1b];
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    (**(code **)(puVar2 + 0x30))(0,lVar5);
    param_1[0x1b] = 0;
    *(undefined4 *)((long)param_1 + 0xe4) = 0;
  }
  if (param_1[0x13] != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[0x13] = 0;
    *(undefined4 *)((long)param_1 + 0xa4) = 0;
  }
  lVar5 = param_1[0x15];
  if (lVar5 != 0) {
    if (*(uint *)(param_1 + 0x16) != 0) {
      lVar9 = (ulong)*(uint *)(param_1 + 0x16) * 0x30;
      do {
        FUN_0350499c(lVar5);
        lVar5 = lVar5 + 0x30;
        lVar9 = lVar9 + -0x30;
      } while (lVar9 != 0);
      lVar5 = param_1[0x15];
    }
    *(undefined4 *)(param_1 + 0x16) = 0;
    (**(code **)(puVar2 + 0x30))(0,lVar5);
    param_1[0x15] = 0;
    *(undefined4 *)((long)param_1 + 0xb4) = 0;
  }
  puVar8 = (undefined8 *)param_1[0xe];
  *param_1 = &PTR_LAB_047c6160;
  if (puVar8 == (undefined8 *)0x0) goto LAB_03500eb0;
  iVar1 = *(int *)(puVar8 + 0x10);
  uVar6 = iVar1 - 1;
  *(uint *)(puVar8 + 0x10) = uVar6;
  if (iVar1 == 0 || uVar6 == 0) {
    if (uVar6 == 0) {
LAB_03500e44:
      lVar5 = puVar8[5];
      if (lVar5 != 0) {
        uVar6 = ((uint)lVar5 ^ (uint)lVar5 >> 0x10) * -0x7a143595;
        uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
        local_28 = lVar5;
        FUN_034c6294(&DAT_048b02b8,&local_28,uVar6 ^ uVar6 >> 0x10);
        uVar6 = *(uint *)(puVar8 + 0x10);
      }
      goto LAB_03500e88;
    }
  }
  else if (uVar6 < 2) {
    if (*(char *)((long)puVar8 + 0x84) != '\0') goto LAB_03500e44;
LAB_03500e88:
    if (uVar6 == 0) {
      (**(code **)*puVar8)(puVar8);
      (**(code **)(puVar2 + 0x30))(4,puVar8);
    }
  }
  param_1[0xe] = 0;
LAB_03500eb0:
  FUN_034fd9e0(param_1);
  return;
}


