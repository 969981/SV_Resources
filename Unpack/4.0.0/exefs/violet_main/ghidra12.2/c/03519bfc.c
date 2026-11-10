/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03519bfc; name: FUN_03519bfc
 */


undefined8 FUN_03519bfc(long *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 local_4c;
  uint *local_48;
  long local_28;
  
  local_4c = param_3;
  local_48 = param_2;
  iVar4 = (**(code **)(*param_1 + 0x88))();
  if (iVar4 == 8) {
    uVar5 = FUN_0352d798(param_1,&local_48,&local_4c,0);
    puVar3 = PTR_DAT_047e2fd0;
    if ((int)uVar5 == 1) {
      if (*local_48 != 0) {
        lVar11 = (ulong)*local_48 * 0x20;
        local_48 = local_48 + 1;
        lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,lVar11);
        if (lVar6 == 0) {
          return 2;
        }
        lVar8 = 0;
        do {
          puVar1 = (uint *)(lVar6 + lVar8);
          lVar8 = lVar8 + 0x20;
          *puVar1 = *local_48;
          puVar1[1] = local_48[1];
          puVar1[2] = local_48[2];
          puVar1[3] = local_48[3];
          *(short *)(puVar1 + 4) = (short)local_48[4];
          *(undefined2 *)((long)puVar1 + 0x12) = *(undefined2 *)((long)local_48 + 0x12);
          *(short *)(puVar1 + 5) = (short)local_48[5];
          puVar1[6] = *(uint *)((long)local_48 + 0x16);
          *(undefined2 *)(puVar1 + 7) = *(undefined2 *)((long)local_48 + 0x1a);
          pcVar10 = (char *)((long)local_48 + 0x1d);
          *(bool *)((long)puVar1 + 0x1e) = (char)local_48[7] != '\0';
          local_48 = (uint *)((long)local_48 + 0x1e);
          *(bool *)((long)puVar1 + 0x1f) = *pcVar10 != '\0';
        } while (lVar11 != lVar8);
        uVar7 = *(uint *)(param_1 + 0x2d);
        local_28 = lVar6;
        if (uVar7 != 0) {
          puVar9 = (undefined8 *)param_1[0x2c];
          puVar13 = puVar9;
          do {
            puVar12 = (undefined8 *)*puVar13;
            if (puVar12 != (undefined8 *)0x0) {
              (**(code **)*puVar12)(puVar12);
              (**(code **)(puVar3 + 0x30))(2,puVar12);
              puVar9 = (undefined8 *)param_1[0x2c];
              uVar7 = *(uint *)(param_1 + 0x2d);
            }
            puVar13 = puVar13 + 1;
          } while (puVar13 != puVar9 + uVar7);
        }
        *(undefined4 *)(param_1 + 0x2d) = 0;
        if ((int)param_1[0x31] != 0) {
          lVar11 = param_1[0x30];
          do {
            (**(code **)(**(long **)(lVar11 + 8) + 0x10))();
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != param_1[0x30] + (ulong)*(uint *)(param_1 + 0x31) * 0x10);
        }
        local_28 = lVar6 + 0x20;
        *(undefined4 *)(param_1 + 0x31) = 0;
        *(undefined2 *)(param_1 + 0x2f) = *(undefined2 *)(lVar6 + 0x1c);
        uVar2 = *(undefined2 *)(lVar6 + 0x14);
        *(undefined4 *)((long)param_1 + 0x154) = *(undefined4 *)(lVar6 + 0x10);
        *(undefined2 *)(param_1 + 0x2b) = uVar2;
        *(undefined4 *)((long)param_1 + 0x15c) = *(undefined4 *)(lVar6 + 0x18);
        *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(lVar6 + 0xc);
        *(undefined1 *)((long)param_1 + 0x174) = 0;
        *(undefined1 *)((long)param_1 + 0x175) = *(undefined1 *)(lVar6 + 0x1f);
        *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(lVar6 + 4);
        if (*(int *)(lVar6 + 8) != 0) {
          FUN_0351a380(param_1 + 0x28,&local_28);
        }
        (**(code **)(puVar3 + 0x30))(0,lVar6);
      }
      uVar5 = 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x88))(param_1);
    uVar5 = 0x5b;
  }
  return uVar5;
}


