/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031013fc; name: FUN_031013fc
 */


void FUN_031013fc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  int local_88 [2];
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar4 = PTR_DAT_047d1a08;
  local_b0 = (undefined *)0xc0;
  plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_b0,0);
  if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
    (**(code **)(puVar4 + 0x10))(plVar7,"FindPathInput");
  }
  plVar7[1] = 0xffffffff;
  plVar17 = plVar7 + 2;
  *plVar17 = 1;
  *plVar7 = (long)(PTR_DAT_047e5100 + 0x10);
  plVar7[6] = 0;
  *(undefined4 *)(plVar7 + 8) = 0xffffffff;
  plVar7[7] = -0x8000000000000000;
  plVar7[9] = 0;
  plVar7[10] = -0x8000000000000000;
  *(undefined4 *)(plVar7 + 0xb) = 100000;
  *(undefined4 *)(plVar7 + 0xc) = 0;
  plVar7[0xd] = 0;
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  *(undefined1 *)(plVar7 + 0x12) = 1;
  *(undefined8 *)((long)plVar7 + 0x94) = 0x7f7fffee3f800000;
  *(undefined8 *)((long)plVar7 + 0x9c) = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[5] = 0;
  plVar7[4] = 0;
  lVar15 = *(long *)(param_2 + 0x40);
  lVar13 = *(long *)(lVar15 + 0x40);
  uStack_70 = 0;
  local_78 = *(undefined8 *)(lVar13 + 0x50);
  local_80 = (undefined **)0x0;
  local_88[0] = 1 << (ulong)(*(uint *)(lVar13 + 0x34) & 0x1f);
  local_90 = *(long *)(lVar13 + 0x78);
  local_b0 = &DAT_0464de50;
  uStack_a8 = 0xffffffff;
  local_a0 = 1;
  if (local_90 != 0) {
    local_80 = &local_b0;
  }
  local_b8 = 1;
  local_b4 = 0xffffffff;
  local_c0 = CONCAT44(*(undefined4 *)(lVar13 + 0x38),*(undefined4 *)(lVar13 + 0x38));
  iVar5 = *(int *)PTR_DAT_047e4f38;
  lVar13 = tpidr_el0;
  lVar10 = *(long *)(lVar13 + 0x1000b8);
  uStack_98 = param_3;
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar13 + 0x1000b8) = lVar10;
  }
  if (*(long *)(lVar10 + (long)iVar5 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  iVar5 = FUN_030ae9a4(param_3,(long *)(lVar15 + 0x20),local_88,&local_c0,&local_d0);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_2 + 0x50);
    lVar13 = (long)iVar5;
    lVar16 = *(long *)(lVar15 + 0x28);
    lVar10 = *(long *)(lVar15 + 0x20);
    if ((int)(*(uint *)(param_2 + 0x54) & 0x7fffffff) <= iVar5) {
      FUN_03102564(param_2 + 0x48,PTR_PTR_047d1a50,lVar13 + 1);
      iVar5 = *(int *)(param_2 + 0x50);
    }
    puVar14 = (undefined4 *)(*(long *)(param_2 + 0x48) + (long)iVar5 * 0x60);
    uVar9 = 0;
    *(int *)(param_2 + 0x50) = (int)(lVar13 + 1);
    *(undefined8 *)(puVar14 + 0x14) = 0;
    *(undefined8 *)(puVar14 + 0x16) = 0x8000000000000000;
    *(undefined8 *)(puVar14 + 0xc) = 0xffffffffffffffff;
    *puVar14 = 1;
    *(undefined8 *)(puVar14 + 8) = 0;
    *(undefined8 *)(puVar14 + 10) = 0;
  }
  else {
    *(int *)(plVar7 + 8) = iVar5;
    *(undefined4 *)(plVar7 + 10) = 0;
    *(undefined4 *)(plVar7 + 7) = 0;
    plVar7[5] = lStack_c8;
    plVar7[4] = local_d0;
    lVar10 = local_d0;
    lVar16 = lStack_c8;
    if (*(int *)(lVar15 + 0x38) != 0) {
      lVar16 = (long)*(int *)(lVar15 + 0x38) << 4;
      lVar10 = *(long *)(lVar15 + 0x30);
      do {
        lVar11 = *(long *)(lVar15 + 0x40);
        uStack_70 = 0;
        local_80 = (undefined **)0x0;
        local_78 = *(undefined8 *)(lVar11 + 0x50);
        local_88[0] = 1 << (ulong)(*(uint *)(lVar11 + 0x34) & 0x1f);
        local_90 = *(long *)(lVar11 + 0x78);
        local_b0 = &DAT_0464de50;
        uStack_a8 = 0xffffffff;
        local_a0 = 1;
        if (local_90 != 0) {
          local_80 = &local_b0;
        }
        local_b8 = 1;
        local_b4 = 0xffffffff;
        local_c0 = CONCAT44(*(undefined4 *)(lVar11 + 0x38),*(undefined4 *)(lVar11 + 0x38));
        iVar6 = *(int *)PTR_DAT_047e4f38;
        lVar11 = *(long *)(lVar13 + 0x1000b8);
        uStack_98 = param_3;
        if (lVar11 == 0) {
          lVar11 = FUN_00e5d3b4();
          *(long *)(lVar13 + 0x1000b8) = lVar11;
        }
        if (*(long *)(lVar11 + (long)iVar6 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        iVar6 = FUN_030ae9a4(param_3,lVar10,local_88,&local_c0,&local_e0);
        if (iVar6 != -1) {
          iVar8 = (int)plVar7[10];
          lVar11 = (long)iVar8;
          if ((int)(*(uint *)((long)plVar7 + 0x54) & 0x7fffffff) <= iVar8) {
            FUN_03086764(plVar7 + 9,PTR_PTR_047d1a50,lVar11 + 1);
            iVar8 = (int)plVar7[10];
          }
          *(int *)(plVar7[9] + (long)iVar8 * 4) = iVar6;
          iVar6 = (int)plVar7[7];
          lVar12 = (long)iVar6;
          *(int *)(plVar7 + 10) = (int)(lVar11 + 1);
          if ((int)(*(uint *)((long)plVar7 + 0x3c) & 0x7fffffff) <= iVar6) {
            FUN_02e9b11c(plVar7 + 6,PTR_PTR_047d1a50,lVar12 + 1);
            iVar6 = (int)plVar7[7];
          }
          puVar1 = (undefined8 *)(plVar7[6] + (long)iVar6 * 0x10);
          puVar1[1] = local_d8;
          *puVar1 = local_e0;
          *(int *)(plVar7 + 7) = (int)(lVar12 + 1);
        }
        lVar10 = lVar10 + 0x10;
        lVar16 = lVar16 + -0x10;
      } while (lVar16 != 0);
      if ((int)plVar7[10] != 0) {
        iVar5 = *(int *)(*(long *)(lVar15 + 0x40) + 0x30);
        if (iVar5 < 1) {
          iVar5 = 10000;
        }
        *(int *)(plVar7 + 0xb) = iVar5;
        lVar13 = *(long *)(*(long *)(lVar15 + 0x40) + 0x50);
        plVar7[0xc] = *(long *)(*(long *)(lVar15 + 0x40) + 0x48);
        plVar7[0xd] = lVar13;
        lVar13 = *(long *)(lVar15 + 0x40);
        lVar10 = *(long *)(lVar13 + 0x60);
        plVar7[0xf] = *(long *)(lVar13 + 0x68);
        plVar7[0xe] = lVar10;
        memcpy(plVar7 + 0x10,(void *)(lVar13 + 0x70),0x24);
        lVar13 = *(long *)(*(long *)(lVar15 + 0x40) + 0x20);
        plVar7[0xf] = *(long *)(*(long *)(lVar15 + 0x40) + 0x28);
        plVar7[0xe] = lVar13;
        *param_1 = plVar7;
        return;
      }
      lVar10 = local_d0;
      lVar16 = lStack_c8;
    }
    iVar6 = *(int *)(param_2 + 0x50);
    lVar13 = (long)iVar6;
    if ((int)(*(uint *)(param_2 + 0x54) & 0x7fffffff) <= iVar6) {
      FUN_03102564(param_2 + 0x48,PTR_PTR_047d1a50,lVar13 + 1);
      iVar6 = *(int *)(param_2 + 0x50);
    }
    puVar14 = (undefined4 *)(*(long *)(param_2 + 0x48) + (long)iVar6 * 0x60);
    uVar9 = 1;
    *(int *)(param_2 + 0x50) = (int)(lVar13 + 1);
    *(undefined8 *)(puVar14 + 0x14) = 0;
    *(undefined8 *)(puVar14 + 0x16) = 0x8000000000000000;
    *puVar14 = 1;
    *(undefined8 *)(puVar14 + 8) = 0;
    *(undefined8 *)(puVar14 + 10) = 0;
    puVar14[0xc] = iVar5;
    puVar14[0xd] = 0xffffffff;
  }
  puVar14[0xf] = 0;
  *(long *)(puVar14 + 6) = lVar16;
  *(long *)(puVar14 + 4) = lVar10;
  puVar14[0x10] = uVar9;
  *param_1 = 0;
  if (plVar7[1] != 0) {
    do {
      lVar13 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *plVar17 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  return;
}


