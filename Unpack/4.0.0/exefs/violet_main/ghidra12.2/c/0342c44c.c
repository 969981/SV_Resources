/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342c44c; name: FUN_0342c44c
 */


void FUN_0342c44c(long *param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long local_38;
  
  *param_1 = (long)&PTR_FUN_047bf5d8;
  if ((int)param_1[8] != 0) {
    puVar4 = PTR_DAT_047e6cd0;
    while (puVar4 = *(undefined **)(puVar4 + 0x10), puVar4 != (undefined *)0x0) {
      if (*(long **)(puVar4 + 0x30) == param_1) {
        *(undefined8 *)(puVar4 + 0x30) = 0;
        *(int *)(param_1 + 8) = (int)param_1[8] + -1;
      }
    }
  }
  puVar4 = PTR_DAT_047e2fd0;
  if ((int)param_1[5] != 0) {
    puVar9 = (undefined8 *)param_1[4];
    do {
      puVar6 = (undefined8 *)*puVar9;
      iVar1 = *(int *)(puVar6 + 0x10);
      uVar3 = iVar1 - 1;
      *(uint *)(puVar6 + 0x10) = uVar3;
      if (iVar1 == 0 || uVar3 == 0) {
        if (uVar3 == 0) {
LAB_0342c504:
          lVar5 = puVar6[5];
          if (lVar5 != 0) {
            uVar3 = ((uint)lVar5 ^ (uint)lVar5 >> 0x10) * -0x7a143595;
            uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
            local_38 = lVar5;
            FUN_034c6294(&DAT_048b02b8,&local_38,uVar3 ^ uVar3 >> 0x10);
            uVar3 = *(uint *)(puVar6 + 0x10);
          }
          goto LAB_0342c534;
        }
      }
      else if (uVar3 < 2) {
        if (*(char *)((long)puVar6 + 0x84) != '\0') goto LAB_0342c504;
LAB_0342c534:
        if (uVar3 == 0) {
          (**(code **)*puVar6)(puVar6);
          (**(code **)(puVar4 + 0x30))(4,puVar6);
        }
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != (undefined8 *)(param_1[4] + (ulong)*(uint *)(param_1 + 5) * 0x10));
  }
  puVar9 = (undefined8 *)param_1[10];
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (puVar9 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0xb) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0xb) * 0x50;
      do {
        (**(code **)*puVar9)(puVar9);
        lVar5 = lVar5 + -0x50;
        puVar9 = puVar9 + 10;
      } while (lVar5 != 0);
      puVar9 = (undefined8 *)param_1[10];
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    (**(code **)(puVar4 + 0x30))(0xb,puVar9);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  lVar5 = param_1[0x11];
  if (lVar5 != 0) {
    if (*(uint *)(param_1 + 0x12) != 0) {
      lVar7 = (ulong)*(uint *)(param_1 + 0x12) * 0x90;
      do {
        FUN_03411470(lVar5);
        lVar5 = lVar5 + 0x90;
        lVar7 = lVar7 + -0x90;
      } while (lVar7 != 0);
      lVar5 = param_1[0x11];
    }
    *(undefined4 *)(param_1 + 0x12) = 0;
    (**(code **)(puVar4 + 0x30))(9,lVar5);
    param_1[0x11] = 0;
    *(undefined4 *)((long)param_1 + 0x94) = 0;
  }
  if ((int)param_1[0xe] != 0) {
    uVar8 = 0;
    do {
      lVar5 = param_1[0xd];
      plVar2 = *(long **)(lVar5 + uVar8 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          (**(code **)(puVar4 + 0x30))(0xb);
        } while (plVar2 != (long *)0x0);
        lVar5 = param_1[0xd];
      }
      *(undefined8 *)(lVar5 + uVar8 * 8) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0xe));
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xd] != 0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    (**(code **)(puVar4 + 0x30))(0xb);
    param_1[0xd] = 0;
    *(undefined4 *)((long)param_1 + 0x74) = 0;
  }
  puVar6 = (undefined8 *)param_1[4];
  puVar9 = puVar6;
  if ((int)param_1[5] != 0) {
    do {
      puVar6 = (undefined8 *)*puVar9;
      iVar1 = *(int *)(puVar6 + 0x10);
      uVar3 = iVar1 - 1;
      *(uint *)(puVar6 + 0x10) = uVar3;
      if (iVar1 == 0 || uVar3 == 0) {
        if (uVar3 == 0) {
LAB_0342c6c8:
          lVar5 = puVar6[5];
          if (lVar5 != 0) {
            uVar3 = ((uint)lVar5 ^ (uint)lVar5 >> 0x10) * -0x7a143595;
            uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
            local_38 = lVar5;
            FUN_034c6294(&DAT_048b02b8,&local_38,uVar3 ^ uVar3 >> 0x10);
            uVar3 = *(uint *)(puVar6 + 0x10);
          }
          goto LAB_0342c6f8;
        }
      }
      else if (uVar3 < 2) {
        if (*(char *)((long)puVar6 + 0x84) != '\0') goto LAB_0342c6c8;
LAB_0342c6f8:
        if (uVar3 == 0) {
          (**(code **)*puVar6)(puVar6);
          (**(code **)(puVar4 + 0x30))(4,puVar6);
        }
      }
      puVar6 = (undefined8 *)param_1[4];
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar6 + (ulong)*(uint *)(param_1 + 5) * 2);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    (**(code **)(puVar4 + 0x30))(9,puVar6);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  if (param_1[6] != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    (**(code **)(puVar4 + 0x30))(9);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  *param_1 = (long)(PTR_DAT_047e6ea8 + 0x10);
  if (param_1[2] == 0) {
    lVar5 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar5 = param_1[2];
  }
  puVar4 = PTR_DAT_047e6ce0;
  lVar7 = param_1[3];
  plVar2 = (long *)(PTR_DAT_047e6ce0 + 0x10);
  if (*(long **)(PTR_DAT_047e6ce0 + 0x10) != param_1) {
    plVar2 = (long *)(lVar7 + 0x10);
  }
  *plVar2 = lVar5;
  if (*(long **)(puVar4 + 8) == param_1) {
    *(long *)(puVar4 + 8) = lVar7;
  }
  *(int *)puVar4 = *(int *)puVar4 + -1;
  return;
}


