/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f56b6c; name: FUN_02f56b6c
 */


void FUN_02f56b6c(long *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_047d1a08;
  lVar21 = *param_1;
  uVar14 = (uint)param_2;
  if ((~uVar14 & 0xffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(*(long *)(lVar21 + 0x38) + (param_2 & 0xffffff) * 0xc0 + 0x80);
  }
  uVar13 = (uint)param_3;
  if ((~uVar13 & 0xffffff) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(uint *)(*(long *)(lVar21 + 0x38) + (param_3 & 0xffffff) * 0xc0 + 0x80);
  }
  lVar19 = (long)(int)uVar10;
  lVar9 = *(long *)(lVar21 + 0x150);
  lVar20 = (long)(int)uVar6;
  uVar18 = *(uint *)(param_1[0x71] + lVar19 * 0x20 + 0x10);
  uVar1 = *(uint *)(param_1[0x71] + lVar20 * 0x20 + 0x10);
  iVar16 = *(int *)(lVar9 + (ulong)uVar6 * 0x80 + 0x4c);
  if (iVar16 == 0) {
    if (*(int *)(lVar9 + (ulong)uVar10 * 0x80 + 0x4c) != 0x7fffffff) {
      return;
    }
    if (uVar18 == 0xffffffff) {
      if ((int)param_1[0x69] == 0) {
        local_68 = 0x70;
        puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
        if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
          (**(code **)(puVar2 + 0x10))(puVar5,"hknpDeactivatedIsland");
        }
        *(int *)(puVar5 + 4) = (int)param_1[0x74];
        puVar5[5] = 0xffffffffffffffff;
        puVar5[6] = puVar5 + 8;
        *(undefined4 *)(puVar5 + 10) = 0;
        *puVar5 = 0;
        puVar5[1] = 0x8000000000000000;
        puVar5[2] = 0;
        puVar5[3] = 0x8000000000000000;
        *(undefined2 *)((long)puVar5 + 0x24) = 0;
        *(undefined4 *)(puVar5 + 0xd) = 0;
        puVar5[7] = 0x8000000100000000;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0x8000000000000000;
        iVar16 = (int)param_1[0x74];
        lVar21 = (long)iVar16;
        iVar11 = iVar16;
        if ((int)(*(uint *)((long)param_1 + 0x3a4) & 0x7fffffff) <= iVar16) {
          FUN_02f5e87c(param_1 + 0x73,lVar21 + 1);
          iVar11 = (int)param_1[0x74];
        }
        *(undefined8 **)(param_1[0x73] + (long)iVar11 * 8) = puVar5;
        *(int *)(param_1 + 0x74) = (int)(lVar21 + 1);
      }
      else {
        iVar11 = (int)param_1[0x69] + -1;
        iVar16 = *(int *)(param_1[0x68] + (long)iVar11 * 4);
        *(int *)(param_1 + 0x69) = iVar11;
        puVar2 = PTR_DAT_047d1a08;
        local_68 = 0x70;
        lVar21 = (long)iVar16;
        puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
        if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
          (**(code **)(puVar2 + 0x10))(puVar5,"hknpDeactivatedIsland");
        }
        *(int *)(puVar5 + 4) = iVar16;
        puVar5[5] = 0xffffffffffffffff;
        puVar5[6] = puVar5 + 8;
        *(undefined2 *)((long)puVar5 + 0x24) = 0;
        puVar5[7] = 0x8000000100000000;
        *(undefined4 *)(puVar5 + 10) = 0;
        *(undefined4 *)(puVar5 + 0xd) = 0;
        *puVar5 = 0;
        puVar5[1] = 0x8000000000000000;
        puVar5[2] = 0;
        puVar5[3] = 0x8000000000000000;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0x8000000000000000;
        *(undefined8 **)(param_1[0x73] + lVar21 * 8) = puVar5;
      }
      *(int *)(param_1[0x71] + lVar19 * 0x20 + 0x10) = iVar16;
      puVar2 = PTR_PTR_047d1a50;
      lVar9 = *param_1;
      plVar15 = *(long **)(param_1[0x73] + lVar21 * 8);
      lVar21 = *(long *)(lVar9 + 0x38);
      param_3 = param_3 & 0xffffffff;
      do {
        uVar17 = (ulong)((uint)param_3 & 0xffffff);
        if ((*(byte *)(lVar21 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
          iVar16 = (int)plVar15[1];
          lVar19 = (long)iVar16;
          if ((int)(*(uint *)((long)plVar15 + 0xc) & 0x7fffffff) <= iVar16) {
            FUN_02f23d90(plVar15,puVar2,lVar19 + 1);
            iVar16 = (int)plVar15[1];
          }
          lVar21 = lVar21 + uVar17 * 0xc0;
          *(undefined4 *)(*plVar15 + (long)iVar16 * 4) = *(undefined4 *)(lVar21 + 0x50);
          *(int *)(plVar15 + 1) = (int)(lVar19 + 1);
          uVar14 = *(uint *)(lVar21 + 0x50);
          if (uVar14 < *(uint *)((long)plVar15 + 0x2c)) {
            *(uint *)((long)plVar15 + 0x2c) = uVar14;
            *(undefined4 *)(plVar15 + 5) = *(undefined4 *)(lVar9 + 0x5bc);
          }
        }
        lVar21 = *(long *)(lVar9 + 0x38);
        uVar14 = *(uint *)(lVar21 + uVar17 * 0xc0 + 0x84);
        param_3 = (ulong)uVar14;
      } while (uVar14 != uVar13);
      return;
    }
    bVar12 = false;
    bVar3 = false;
    bVar4 = false;
    iVar11 = 0x7fffffff;
  }
  else {
    iVar11 = *(int *)(lVar9 + (ulong)uVar10 * 0x80 + 0x4c);
    bVar3 = iVar11 == 0;
    if (iVar16 != 0x7fffffff && iVar11 == 0) {
      return;
    }
    bVar4 = uVar18 == 0xffffffff;
    bVar12 = uVar1 == 0xffffffff && iVar11 == 0;
    if (iVar16 == 0x7fffffff && bVar12) {
      if ((int)param_1[0x69] == 0) {
        local_68 = 0x70;
        puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
        if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
          (**(code **)(puVar2 + 0x10))(puVar5,"hknpDeactivatedIsland");
        }
        *(int *)(puVar5 + 4) = (int)param_1[0x74];
        puVar5[5] = 0xffffffffffffffff;
        puVar5[6] = puVar5 + 8;
        *(undefined4 *)(puVar5 + 10) = 0;
        *puVar5 = 0;
        puVar5[1] = 0x8000000000000000;
        puVar5[2] = 0;
        puVar5[3] = 0x8000000000000000;
        *(undefined2 *)((long)puVar5 + 0x24) = 0;
        *(undefined4 *)(puVar5 + 0xd) = 0;
        puVar5[7] = 0x8000000100000000;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0x8000000000000000;
        iVar16 = (int)param_1[0x74];
        lVar21 = (long)iVar16;
        iVar11 = iVar16;
        if ((int)(*(uint *)((long)param_1 + 0x3a4) & 0x7fffffff) <= iVar16) {
          FUN_02f5e87c(param_1 + 0x73,lVar21 + 1);
          iVar11 = (int)param_1[0x74];
        }
        *(undefined8 **)(param_1[0x73] + (long)iVar11 * 8) = puVar5;
        *(int *)(param_1 + 0x74) = (int)(lVar21 + 1);
      }
      else {
        iVar11 = (int)param_1[0x69] + -1;
        iVar16 = *(int *)(param_1[0x68] + (long)iVar11 * 4);
        *(int *)(param_1 + 0x69) = iVar11;
        puVar2 = PTR_DAT_047d1a08;
        local_68 = 0x70;
        lVar21 = (long)iVar16;
        puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
        if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
          (**(code **)(puVar2 + 0x10))(puVar5,"hknpDeactivatedIsland");
        }
        *(int *)(puVar5 + 4) = iVar16;
        puVar5[5] = 0xffffffffffffffff;
        puVar5[6] = puVar5 + 8;
        *(undefined2 *)((long)puVar5 + 0x24) = 0;
        puVar5[7] = 0x8000000100000000;
        *(undefined4 *)(puVar5 + 10) = 0;
        *(undefined4 *)(puVar5 + 0xd) = 0;
        *puVar5 = 0;
        puVar5[1] = 0x8000000000000000;
        puVar5[2] = 0;
        puVar5[3] = 0x8000000000000000;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0x8000000000000000;
        *(undefined8 **)(param_1[0x73] + lVar21 * 8) = puVar5;
      }
      *(int *)(param_1[0x71] + lVar20 * 0x20 + 0x10) = iVar16;
      puVar2 = PTR_PTR_047d1a50;
      lVar9 = *param_1;
      plVar15 = *(long **)(param_1[0x73] + lVar21 * 8);
      lVar21 = *(long *)(lVar9 + 0x38);
      param_2 = param_2 & 0xffffffff;
      do {
        uVar17 = (ulong)((uint)param_2 & 0xffffff);
        if ((*(byte *)(lVar21 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
          iVar16 = (int)plVar15[1];
          lVar19 = (long)iVar16;
          if ((int)(*(uint *)((long)plVar15 + 0xc) & 0x7fffffff) <= iVar16) {
            FUN_02f23d90(plVar15,puVar2,lVar19 + 1);
            iVar16 = (int)plVar15[1];
          }
          lVar21 = lVar21 + uVar17 * 0xc0;
          *(undefined4 *)(*plVar15 + (long)iVar16 * 4) = *(undefined4 *)(lVar21 + 0x50);
          *(int *)(plVar15 + 1) = (int)(lVar19 + 1);
          uVar6 = *(uint *)(lVar21 + 0x50);
          if (uVar6 < *(uint *)((long)plVar15 + 0x2c)) {
            *(uint *)((long)plVar15 + 0x2c) = uVar6;
            *(undefined4 *)(plVar15 + 5) = *(undefined4 *)(lVar9 + 0x5bc);
          }
        }
        lVar21 = *(long *)(lVar9 + 0x38);
        uVar6 = *(uint *)(lVar21 + uVar17 * 0xc0 + 0x84);
        param_2 = (ulong)uVar6;
      } while (uVar6 != uVar14);
      return;
    }
    bVar12 = iVar16 != 0x7fffffff || bVar12;
  }
  if ((uVar18 != 0xffffffff && iVar16 == 0) || ((bool)(uVar1 != 0xffffffff & bVar3))) {
    lVar9 = *(long *)(param_1[0x73] + (long)(int)(uVar1 ^ uVar18 ^ 0xffffffff) * 8);
  }
  else {
    if (bVar12 != (iVar11 != 0 && iVar11 != 0x7fffffff)) {
      if (bVar12 == false) {
        uVar10 = uVar6;
        uVar13 = uVar14;
        uVar18 = uVar1;
      }
      if (uVar18 == 0xffffffff) {
        if ((int)param_1[0x69] == 0) {
          local_68 = 0x70;
          puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
          if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
            (**(code **)(puVar2 + 0x10))(puVar5,"hknpDeactivatedIsland");
          }
          *(int *)(puVar5 + 4) = (int)param_1[0x74];
          puVar5[5] = 0xffffffffffffffff;
          puVar5[6] = puVar5 + 8;
          *(undefined4 *)(puVar5 + 10) = 0;
          *puVar5 = 0;
          puVar5[1] = 0x8000000000000000;
          puVar5[2] = 0;
          puVar5[3] = 0x8000000000000000;
          *(undefined2 *)((long)puVar5 + 0x24) = 0;
          *(undefined4 *)(puVar5 + 0xd) = 0;
          puVar5[7] = 0x8000000100000000;
          puVar5[0xb] = 0;
          puVar5[0xc] = 0x8000000000000000;
          uVar18 = *(uint *)(param_1 + 0x74);
          lVar21 = (long)(int)uVar18;
          uVar14 = uVar18;
          if ((int)(*(uint *)((long)param_1 + 0x3a4) & 0x7fffffff) <= (int)uVar18) {
            FUN_02f5e87c(param_1 + 0x73,lVar21 + 1);
            uVar14 = *(uint *)(param_1 + 0x74);
          }
          *(undefined8 **)(param_1[0x73] + (long)(int)uVar14 * 8) = puVar5;
          *(int *)(param_1 + 0x74) = (int)(lVar21 + 1);
        }
        else {
          iVar16 = (int)param_1[0x69] + -1;
          uVar18 = *(uint *)(param_1[0x68] + (long)iVar16 * 4);
          *(int *)(param_1 + 0x69) = iVar16;
          puVar2 = PTR_DAT_047d1a08;
          local_68 = 0x70;
          lVar21 = (long)(int)uVar18;
          puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
          if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
            (**(code **)(puVar2 + 0x10))(puVar5,"hknpDeactivatedIsland");
          }
          *(uint *)(puVar5 + 4) = uVar18;
          puVar5[5] = 0xffffffffffffffff;
          puVar5[6] = puVar5 + 8;
          *(undefined2 *)((long)puVar5 + 0x24) = 0;
          puVar5[7] = 0x8000000100000000;
          *(undefined4 *)(puVar5 + 10) = 0;
          *(undefined4 *)(puVar5 + 0xd) = 0;
          *puVar5 = 0;
          puVar5[1] = 0x8000000000000000;
          puVar5[2] = 0;
          puVar5[3] = 0x8000000000000000;
          puVar5[0xb] = 0;
          puVar5[0xc] = 0x8000000000000000;
          *(undefined8 **)(param_1[0x73] + lVar21 * 8) = puVar5;
        }
        plVar15 = *(long **)(param_1[0x73] + lVar21 * 8);
        *(uint *)(param_1[0x71] + (long)(int)uVar10 * 0x20 + 0x10) = uVar18;
        lVar9 = *param_1;
        lVar21 = *(long *)(lVar9 + 0x38);
        uVar14 = uVar13;
        do {
          uVar17 = (ulong)(uVar14 & 0xffffff);
          if ((*(byte *)(lVar21 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
            iVar16 = (int)plVar15[1];
            lVar19 = (long)iVar16;
            if ((int)(*(uint *)((long)plVar15 + 0xc) & 0x7fffffff) <= iVar16) {
              FUN_02f23d90(plVar15,PTR_PTR_047d1a50,lVar19 + 1);
              iVar16 = (int)plVar15[1];
            }
            lVar21 = lVar21 + uVar17 * 0xc0;
            *(undefined4 *)(*plVar15 + (long)iVar16 * 4) = *(undefined4 *)(lVar21 + 0x50);
            *(int *)(plVar15 + 1) = (int)(lVar19 + 1);
            uVar14 = *(uint *)(lVar21 + 0x50);
            if (uVar14 < *(uint *)((long)plVar15 + 0x2c)) {
              *(uint *)((long)plVar15 + 0x2c) = uVar14;
              *(undefined4 *)(plVar15 + 5) = *(undefined4 *)(lVar9 + 0x5bc);
            }
          }
          lVar21 = *(long *)(lVar9 + 0x38);
          uVar14 = *(uint *)(lVar21 + uVar17 * 0xc0 + 0x84);
        } while (uVar14 != uVar13);
        lVar21 = *param_1;
      }
      lVar9 = *(long *)(param_1[0x73] + (long)(int)uVar18 * 8);
      iVar16 = *(int *)(lVar21 + 0x5bc);
      if (*(int *)(lVar9 + 0x68) == iVar16) {
        iVar11 = *(int *)(lVar9 + 0x60);
      }
      else {
        iVar11 = 0;
        *(undefined4 *)(lVar9 + 0x60) = 0;
        *(int *)(lVar9 + 0x68) = iVar16;
      }
      iVar16 = iVar11 + 1;
      if ((int)(*(uint *)(lVar9 + 100) & 0x7fffffff) <= iVar11) {
        FUN_02f5f23c(lVar9 + 0x58,PTR_PTR_047d1a50,(long)iVar16);
        iVar11 = *(int *)(lVar9 + 0x60);
      }
      *(ulong *)(*(long *)(lVar9 + 0x58) + (long)iVar11 * 8) =
           param_3 & 0xffffffff | param_2 << 0x20;
      *(int *)(lVar9 + 0x60) = iVar16;
      if (*(char *)(lVar9 + 0x25) == '\0') {
        iVar16 = (int)param_1[0x67];
        lVar21 = (long)iVar16;
        if ((int)(*(uint *)((long)param_1 + 0x33c) & 0x7fffffff) <= iVar16) {
          FUN_0133bb88(param_1 + 0x66,PTR_PTR_047d1a50,lVar21 + 1);
          iVar16 = (int)param_1[0x67];
        }
        *(uint *)(param_1[0x66] + (long)iVar16 * 4) = uVar18;
        *(int *)(param_1 + 0x67) = (int)(lVar21 + 1);
        *(undefined1 *)(lVar9 + 0x25) = 1;
      }
      *(undefined1 *)(lVar9 + 0x24) = 1;
      return;
    }
    if (bVar12 != false) {
      return;
    }
    if ((iVar11 != 0x7fffffff) && (iVar11 != 0)) {
      return;
    }
    if ((uVar18 & uVar1) == 0xffffffff) {
      if ((int)param_1[0x69] == 0) {
        local_68 = 0x70;
        puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
        if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
          (**(code **)(puVar2 + 0x10))(puVar5,"hknpDeactivatedIsland");
        }
        *(int *)(puVar5 + 4) = (int)param_1[0x74];
        puVar5[5] = 0xffffffffffffffff;
        puVar5[6] = puVar5 + 8;
        *(undefined4 *)(puVar5 + 10) = 0;
        *puVar5 = 0;
        puVar5[1] = 0x8000000000000000;
        puVar5[2] = 0;
        puVar5[3] = 0x8000000000000000;
        *(undefined2 *)((long)puVar5 + 0x24) = 0;
        *(undefined4 *)(puVar5 + 0xd) = 0;
        puVar5[7] = 0x8000000100000000;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0x8000000000000000;
        iVar16 = (int)param_1[0x74];
        lVar21 = (long)iVar16;
        iVar11 = iVar16;
        if ((int)(*(uint *)((long)param_1 + 0x3a4) & 0x7fffffff) <= iVar16) {
          FUN_02f5e87c(param_1 + 0x73,lVar21 + 1);
          iVar11 = (int)param_1[0x74];
        }
        *(undefined8 **)(param_1[0x73] + (long)iVar11 * 8) = puVar5;
        *(int *)(param_1 + 0x74) = (int)(lVar21 + 1);
      }
      else {
        iVar11 = (int)param_1[0x69] + -1;
        iVar16 = *(int *)(param_1[0x68] + (long)iVar11 * 4);
        *(int *)(param_1 + 0x69) = iVar11;
        puVar2 = PTR_DAT_047d1a08;
        local_68 = 0x70;
        lVar21 = (long)iVar16;
        puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
        if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
          (**(code **)(puVar2 + 0x10))(puVar5,"hknpDeactivatedIsland");
        }
        *(int *)(puVar5 + 4) = iVar16;
        *puVar5 = 0;
        puVar5[1] = 0x8000000000000000;
        *(undefined2 *)((long)puVar5 + 0x24) = 0;
        *(undefined4 *)(puVar5 + 10) = 0;
        *(undefined4 *)(puVar5 + 0xd) = 0;
        puVar5[2] = 0;
        puVar5[3] = 0x8000000000000000;
        puVar5[5] = 0xffffffffffffffff;
        puVar5[6] = puVar5 + 8;
        puVar5[7] = 0x8000000100000000;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0x8000000000000000;
        *(undefined8 **)(param_1[0x73] + lVar21 * 8) = puVar5;
      }
      lVar9 = *param_1;
      plVar15 = *(long **)(param_1[0x73] + lVar21 * 8);
      lVar21 = *(long *)(lVar9 + 0x38);
      uVar17 = param_2 & 0xffffffff;
      do {
        uVar17 = (ulong)((uint)uVar17 & 0xffffff);
        if ((*(byte *)(lVar21 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
          iVar11 = (int)plVar15[1];
          lVar8 = (long)iVar11;
          if ((int)(*(uint *)((long)plVar15 + 0xc) & 0x7fffffff) <= iVar11) {
            FUN_02f23d90(plVar15,PTR_PTR_047d1a50,lVar8 + 1);
            iVar11 = (int)plVar15[1];
          }
          lVar21 = lVar21 + uVar17 * 0xc0;
          *(undefined4 *)(*plVar15 + (long)iVar11 * 4) = *(undefined4 *)(lVar21 + 0x50);
          *(int *)(plVar15 + 1) = (int)(lVar8 + 1);
          uVar6 = *(uint *)(lVar21 + 0x50);
          if (uVar6 < *(uint *)((long)plVar15 + 0x2c)) {
            *(uint *)((long)plVar15 + 0x2c) = uVar6;
            *(undefined4 *)(plVar15 + 5) = *(undefined4 *)(lVar9 + 0x5bc);
          }
        }
        lVar21 = *(long *)(lVar9 + 0x38);
        uVar6 = *(uint *)(lVar21 + uVar17 * 0xc0 + 0x84);
        uVar17 = (ulong)uVar6;
      } while (uVar6 != uVar14);
      lVar9 = *param_1;
      uVar17 = param_3 & 0xffffffff;
      lVar21 = *(long *)(lVar9 + 0x38);
      do {
        uVar17 = (ulong)((uint)uVar17 & 0xffffff);
        if ((*(byte *)(lVar21 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
          iVar11 = (int)plVar15[1];
          lVar8 = (long)iVar11;
          if ((int)(*(uint *)((long)plVar15 + 0xc) & 0x7fffffff) <= iVar11) {
            FUN_02f23d90(plVar15,PTR_PTR_047d1a50,lVar8 + 1);
            iVar11 = (int)plVar15[1];
          }
          lVar21 = lVar21 + uVar17 * 0xc0;
          *(undefined4 *)(*plVar15 + (long)iVar11 * 4) = *(undefined4 *)(lVar21 + 0x50);
          *(int *)(plVar15 + 1) = (int)(lVar8 + 1);
          uVar14 = *(uint *)(lVar21 + 0x50);
          if (uVar14 < *(uint *)((long)plVar15 + 0x2c)) {
            *(uint *)((long)plVar15 + 0x2c) = uVar14;
            *(undefined4 *)(plVar15 + 5) = *(undefined4 *)(lVar9 + 0x5bc);
          }
        }
        lVar21 = *(long *)(lVar9 + 0x38);
        uVar14 = *(uint *)(lVar21 + uVar17 * 0xc0 + 0x84);
        uVar17 = (ulong)uVar14;
      } while (uVar14 != uVar13);
      iVar11 = *(int *)(*param_1 + 0x5bc);
      if ((int)plVar15[0xd] == iVar11) {
        iVar7 = (int)plVar15[0xc];
      }
      else {
        iVar7 = 0;
        *(undefined4 *)(plVar15 + 0xc) = 0;
        *(int *)(plVar15 + 0xd) = iVar11;
      }
      iVar11 = iVar7 + 1;
      if ((int)(*(uint *)((long)plVar15 + 100) & 0x7fffffff) <= iVar7) {
        FUN_02f5f23c(plVar15 + 0xb,PTR_PTR_047d1a50,(long)iVar11);
        iVar7 = (int)plVar15[0xc];
      }
      *(ulong *)(plVar15[0xb] + (long)iVar7 * 8) = param_3 & 0xffffffff | param_2 << 0x20;
      *(int *)(plVar15 + 0xc) = iVar11;
      *(int *)(param_1[0x71] + lVar20 * 0x20 + 0x10) = iVar16;
      *(int *)(param_1[0x71] + lVar19 * 0x20 + 0x10) = iVar16;
      return;
    }
    if ((bool)(uVar1 == 0xffffffff | bVar4)) {
      uVar6 = uVar1 ^ uVar18 ^ 0xffffffff;
      plVar15 = *(long **)(param_1[0x73] + (long)(int)uVar6 * 8);
      lVar9 = *(long *)(lVar21 + 0x38);
      if (uVar1 == 0xffffffff) {
        uVar17 = param_2 & 0xffffffff;
        do {
          uVar17 = (ulong)((uint)uVar17 & 0xffffff);
          if ((*(byte *)(lVar9 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
            iVar16 = (int)plVar15[1];
            lVar8 = (long)iVar16;
            if ((int)(*(uint *)((long)plVar15 + 0xc) & 0x7fffffff) <= iVar16) {
              FUN_02f23d90(plVar15,PTR_PTR_047d1a50,lVar8 + 1);
              iVar16 = (int)plVar15[1];
            }
            lVar9 = lVar9 + uVar17 * 0xc0;
            *(undefined4 *)(*plVar15 + (long)iVar16 * 4) = *(undefined4 *)(lVar9 + 0x50);
            *(int *)(plVar15 + 1) = (int)(lVar8 + 1);
            uVar13 = *(uint *)(lVar9 + 0x50);
            if (uVar13 < *(uint *)((long)plVar15 + 0x2c)) {
              *(uint *)((long)plVar15 + 0x2c) = uVar13;
              *(undefined4 *)(plVar15 + 5) = *(undefined4 *)(lVar21 + 0x5bc);
            }
          }
          lVar9 = *(long *)(lVar21 + 0x38);
          uVar13 = *(uint *)(lVar9 + uVar17 * 0xc0 + 0x84);
          uVar17 = (ulong)uVar13;
        } while (uVar13 != uVar14);
      }
      else {
        uVar17 = param_3 & 0xffffffff;
        do {
          uVar17 = (ulong)((uint)uVar17 & 0xffffff);
          if ((*(byte *)(lVar9 + uVar17 * 0xc0 + 0x88) & 1) != 0) {
            iVar16 = (int)plVar15[1];
            lVar8 = (long)iVar16;
            if ((int)(*(uint *)((long)plVar15 + 0xc) & 0x7fffffff) <= iVar16) {
              FUN_02f23d90(plVar15,PTR_PTR_047d1a50,lVar8 + 1);
              iVar16 = (int)plVar15[1];
            }
            lVar9 = lVar9 + uVar17 * 0xc0;
            *(undefined4 *)(*plVar15 + (long)iVar16 * 4) = *(undefined4 *)(lVar9 + 0x50);
            *(int *)(plVar15 + 1) = (int)(lVar8 + 1);
            uVar14 = *(uint *)(lVar9 + 0x50);
            if (uVar14 < *(uint *)((long)plVar15 + 0x2c)) {
              *(uint *)((long)plVar15 + 0x2c) = uVar14;
              *(undefined4 *)(plVar15 + 5) = *(undefined4 *)(lVar21 + 0x5bc);
            }
          }
          lVar9 = *(long *)(lVar21 + 0x38);
          uVar14 = *(uint *)(lVar9 + uVar17 * 0xc0 + 0x84);
          uVar17 = (ulong)uVar14;
        } while (uVar14 != uVar13);
      }
      iVar16 = *(int *)(*param_1 + 0x5bc);
      if ((int)plVar15[0xd] == iVar16) {
        iVar11 = (int)plVar15[0xc];
      }
      else {
        iVar11 = 0;
        *(undefined4 *)(plVar15 + 0xc) = 0;
        *(int *)(plVar15 + 0xd) = iVar16;
      }
      iVar16 = iVar11 + 1;
      if ((int)(*(uint *)((long)plVar15 + 100) & 0x7fffffff) <= iVar11) {
        FUN_02f5f23c(plVar15 + 0xb,PTR_PTR_047d1a50,(long)iVar16);
        iVar11 = (int)plVar15[0xc];
      }
      *(ulong *)(plVar15[0xb] + (long)iVar11 * 8) = param_3 & 0xffffffff | param_2 << 0x20;
      *(int *)(plVar15 + 0xc) = iVar16;
      *(uint *)(param_1[0x71] + lVar20 * 0x20 + 0x10) = uVar6;
      *(uint *)(param_1[0x71] + lVar19 * 0x20 + 0x10) = uVar6;
      return;
    }
    if (uVar1 != uVar18) {
      FUN_02f563c4(param_1,uVar1);
      lVar9 = *(long *)(param_1[0x73] + (long)(int)uVar1 * 8);
      iVar16 = *(int *)(lVar9 + 0x60);
      lVar21 = (long)iVar16;
      if ((int)(*(uint *)(lVar9 + 100) & 0x7fffffff) <= iVar16) {
        FUN_02f5f23c(lVar9 + 0x58,PTR_PTR_047d1a50,lVar21 + 1);
        iVar16 = *(int *)(lVar9 + 0x60);
      }
      *(ulong *)(*(long *)(lVar9 + 0x58) + (long)iVar16 * 8) =
           param_3 & 0xffffffff | param_2 << 0x20;
      *(int *)(lVar9 + 0x60) = (int)(lVar21 + 1);
      iVar16 = *(int *)(*param_1 + 0x5bc);
      if (*(int *)(lVar9 + 0x68) == iVar16) {
        return;
      }
      *(undefined4 *)(lVar9 + 0x60) = 0;
      *(int *)(lVar9 + 0x68) = iVar16;
      return;
    }
    lVar9 = *(long *)(param_1[0x73] + (long)(int)uVar1 * 8);
  }
  iVar16 = *(int *)(lVar21 + 0x5bc);
  if (*(int *)(lVar9 + 0x68) == iVar16) {
    iVar11 = *(int *)(lVar9 + 0x60);
  }
  else {
    iVar11 = 0;
    *(undefined4 *)(lVar9 + 0x60) = 0;
    *(int *)(lVar9 + 0x68) = iVar16;
  }
  iVar16 = iVar11 + 1;
  if ((int)(*(uint *)(lVar9 + 100) & 0x7fffffff) <= iVar11) {
    FUN_02f5f23c(lVar9 + 0x58,PTR_PTR_047d1a50,(long)iVar16);
    iVar11 = *(int *)(lVar9 + 0x60);
  }
  *(ulong *)(*(long *)(lVar9 + 0x58) + (long)iVar11 * 8) = param_3 & 0xffffffff | param_2 << 0x20;
  *(int *)(lVar9 + 0x60) = iVar16;
  return;
}


