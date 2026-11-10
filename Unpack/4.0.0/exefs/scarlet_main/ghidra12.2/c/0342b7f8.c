/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342b7f8; name: FUN_0342b7f8
 */


void FUN_0342b7f8(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  
  *param_1 = (long)&PTR_FUN_047bf5b0;
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + -1;
    param_1[6] = 0;
  }
  puVar5 = (undefined4 *)param_1[7];
  puVar8 = puVar5;
  if ((int)param_1[8] == 0) {
    if (puVar5 == (undefined4 *)0x0) goto LAB_0342b8e4;
  }
  else {
    do {
      puVar6 = puVar8;
      FUN_03429cc4(puVar6,param_1);
      puVar1 = PTR_DAT_047e2fd0;
      puVar5 = (undefined4 *)param_1[7];
      puVar8 = puVar6 + 10;
    } while (puVar6 + 10 != puVar5 + (ulong)*(uint *)(param_1 + 8) * 10);
    if (puVar5 == (undefined4 *)0x0) goto LAB_0342b8e4;
    if (*(uint *)(param_1 + 8) != 0) {
      puVar8 = puVar5 + -10;
      do {
        if (*(long *)(puVar8 + 0xc) != 0) {
          (**(code **)(puVar1 + 0x30))(9);
        }
        puVar5 = puVar8 + 10;
        *puVar5 = 0;
        *(undefined8 *)(puVar8 + 0xc) = 0;
        puVar8 = puVar5;
      } while (puVar6 != puVar5);
      puVar5 = (undefined4 *)param_1[7];
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,puVar5);
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
LAB_0342b8e4:
  if ((int)param_1[0xd] != 0) {
    uVar7 = *(undefined8 *)(param_1[1] + 0x78);
    puVar8 = (undefined4 *)param_1[0xc];
    do {
      puVar5 = puVar8 + 1;
      FUN_034785cc(*puVar8,uVar7,3,0,0xab,0,0,0);
      puVar8 = puVar5;
    } while (puVar5 != (undefined4 *)(param_1[0xc] + (ulong)*(uint *)(param_1 + 0xd) * 4));
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xb] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
  }
  lVar3 = param_1[4];
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  puVar1 = PTR_DAT_047e2fd0;
  if (lVar3 != 0) {
    if (*(uint *)(param_1 + 5) != 0) {
      lVar9 = lVar3 + (ulong)*(uint *)(param_1 + 5) * 0x90;
      do {
        FUN_0342c91c(lVar3);
        if (*(int *)(lVar3 + 0x68) != 0) {
          uVar10 = 0;
          do {
            lVar4 = *(long *)(lVar3 + 0x60);
            plVar2 = *(long **)(lVar4 + uVar10 * 8);
            if (plVar2 != (long *)0x0) {
              do {
                plVar2 = (long *)*plVar2;
                (**(code **)(puVar1 + 0x30))(0xb);
              } while (plVar2 != (long *)0x0);
              lVar4 = *(long *)(lVar3 + 0x60);
            }
            *(undefined8 *)(lVar4 + uVar10 * 8) = 0;
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(lVar3 + 0x68));
        }
        *(undefined4 *)(lVar3 + 0x70) = 0;
        if (*(long *)(lVar3 + 0x60) != 0) {
          *(undefined4 *)(lVar3 + 0x68) = 0;
          (**(code **)(puVar1 + 0x30))(0xb);
          *(undefined8 *)(lVar3 + 0x60) = 0;
          *(undefined4 *)(lVar3 + 0x6c) = 0;
        }
        lVar3 = lVar3 + 0x90;
      } while (lVar3 != lVar9);
      lVar3 = param_1[4];
    }
    *(undefined4 *)(param_1 + 5) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb,lVar3);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  lVar3 = *(long *)(param_1[1] + 0x38);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x28) = 0;
    *(undefined4 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
  }
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(PTR_DAT_047e6e98 + 0x10);
  if (param_1[2] == 0) {
    lVar3 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar3 = param_1[2];
  }
  puVar1 = PTR_DAT_047e6cd0;
  lVar9 = param_1[3];
  plVar2 = (long *)(PTR_DAT_047e6cd0 + 0x10);
  if (*(long **)(PTR_DAT_047e6cd0 + 0x10) != param_1) {
    plVar2 = (long *)(lVar9 + 0x10);
  }
  *plVar2 = lVar3;
  if (*(long **)(puVar1 + 8) == param_1) {
    *(long *)(puVar1 + 8) = lVar9;
  }
  *(int *)puVar1 = *(int *)puVar1 + -1;
  return;
}


