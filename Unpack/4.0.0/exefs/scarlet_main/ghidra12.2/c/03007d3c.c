/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03007d3c; name: FUN_03007d3c
 */


void FUN_03007d3c(long *param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  *param_1 = (long)&PTR_LAB_04613018;
  *(undefined4 *)(param_1 + 0x2dd) = 0;
  puVar7 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x16ec)) && (param_1[0x2dc] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x2dc],(ulong)*(uint *)((long)param_1 + 0x16ec) * 0x30);
  }
  param_1[0x2dc] = 0;
  *(undefined4 *)((long)param_1 + 0x16ec) = 0x80000000;
  puVar6 = PTR_DAT_047d1a08;
  lVar10 = param_1[0x2da];
  while (lVar10 != 0) {
    lVar8 = *(long *)(lVar10 + 8);
    (**(code **)(puVar6 + 8))(0,lVar10,0);
    lVar10 = lVar8;
  }
  *(undefined4 *)(param_1 + 0x2d9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x16cc)) && (param_1[0x2d8] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x2d8],(ulong)*(uint *)((long)param_1 + 0x16cc) << 2);
  }
  plVar9 = (long *)param_1[0x2d7];
  param_1[0x2d8] = 0;
  *(undefined4 *)((long)param_1 + 0x16cc) = 0x80000000;
  if (plVar9 != (long *)0x0) {
    if ((long *)plVar9[0x11] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[0x11] + 0x10))();
    }
    if ((long *)plVar9[0x10] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[0x10] + 0x10))();
    }
    if ((long *)plVar9[0xf] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[0xf] + 0x10))();
    }
    if ((long *)plVar9[0xe] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[0xe] + 0x10))();
    }
    if ((long *)plVar9[0xd] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[0xd] + 0x10))();
    }
    if ((long *)plVar9[0xc] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[0xc] + 0x10))();
    }
    if ((long *)plVar9[0xb] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[0xb] + 0x10))();
    }
    if ((long *)plVar9[10] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[10] + 0x10))();
    }
    if ((long *)plVar9[9] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[9] + 0x10))();
    }
    if ((long *)plVar9[8] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[8] + 0x10))();
    }
    if ((long *)plVar9[7] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[7] + 0x10))();
    }
    if ((long *)plVar9[6] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[6] + 0x10))();
    }
    if ((long *)plVar9[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[5] + 0x10))();
    }
    if ((long *)plVar9[4] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[4] + 0x10))();
    }
    if ((long *)plVar9[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[3] + 0x10))();
    }
    if ((long *)plVar9[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[2] + 0x10))();
    }
    if ((long *)plVar9[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[1] + 0x10))();
    }
    if ((long *)*plVar9 != (long *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0x10))();
    }
    (**(code **)(puVar6 + 8))(0,plVar9,0);
  }
  *(undefined4 *)(param_1 + 0x2d6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x16b4)) && (param_1[0x2d5] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x2d5],(ulong)*(uint *)((long)param_1 + 0x16b4) << 2);
  }
  param_1[0x2d5] = 0;
  *(undefined4 *)((long)param_1 + 0x16b4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2d3) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x169c)) && (param_1[0x2d2] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))(puVar7);
  }
  lVar10 = param_1[0x2cf];
  param_1[0x2d2] = 0;
  *(undefined4 *)((long)param_1 + 0x169c) = 0x80000000;
  if (lVar10 != 0) {
    FUN_0300a7dc(lVar10);
    (**(code **)(puVar6 + 8))(0,lVar10,0);
  }
  lVar10 = param_1[0x2ce];
  if (lVar10 != 0) {
    FUN_03009800(lVar10);
    (**(code **)(puVar6 + 8))(0,lVar10,0);
  }
  plVar9 = (long *)param_1[0x2cc];
  if (plVar9 != (long *)0x0) {
    if (*(int *)((long)plVar9 + 0xc) < 0) {
      lVar10 = 0;
      if (*plVar9 != 0) {
        lVar10 = *plVar9 + (long)plVar9;
      }
      (**(code **)(puVar6 + 8))(0,lVar10,0);
    }
    (**(code **)(puVar6 + 8))(0,plVar9,0);
  }
  *(undefined4 *)(param_1 + 0x2ca) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1654)) && (param_1[0x2c9] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x2c9],(ulong)*(uint *)((long)param_1 + 0x1654) << 2);
  }
  param_1[0x2c9] = 0;
  *(undefined4 *)((long)param_1 + 0x1654) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1644)) && (param_1[0x2c7] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x2c7],(ulong)*(uint *)((long)param_1 + 0x1644) << 4);
  }
  param_1[0x2c7] = 0;
  *(undefined4 *)((long)param_1 + 0x1644) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2c6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1634)) && (param_1[0x2c5] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x2c5],(ulong)*(uint *)((long)param_1 + 0x1634) << 5);
  }
  lVar10 = param_1[0x2c4];
  param_1[0x2c5] = 0;
  *(undefined4 *)((long)param_1 + 0x1634) = 0x80000000;
  if (lVar10 != 0) {
    FUN_030096bc(lVar10);
    (**(code **)(puVar6 + 8))(0,lVar10,0);
  }
  *(undefined4 *)(param_1 + 0x2b9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x15cc)) && (param_1[0x2b8] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x2b8],(ulong)*(uint *)((long)param_1 + 0x15cc) * 0x14);
  }
  param_1[0x2b8] = 0;
  *(undefined4 *)((long)param_1 + 0x15cc) = 0x80000000;
  if ((int)param_1[0x37] != 0) {
    lVar8 = param_1[0x36];
    lVar10 = (long)(int)param_1[0x37] * 0x280;
    do {
      lVar1 = lVar8 + lVar10;
      *(undefined4 *)(lVar1 + -0x108) = 0;
      uVar3 = *(uint *)(lVar1 + -0x104);
      if ((-1 < (int)uVar3) && (*(long *)(lVar1 + -0x110) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x20))(puVar7,*(long *)(lVar1 + -0x110),(ulong)uVar3 << 3);
      }
      *(undefined8 *)(lVar1 + -0x110) = 0;
      *(uint *)(lVar1 + -0x104) = 0x80000000;
      *(undefined4 *)(lVar1 + -0x198) = 0;
      uVar3 = *(uint *)(lVar1 + -0x194);
      if ((-1 < (int)uVar3) && (*(long *)(lVar1 + -0x1a0) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x20))(puVar7,*(long *)(lVar1 + -0x1a0),(ulong)uVar3 << 2);
      }
      *(undefined8 *)(lVar1 + -0x1a0) = 0;
      *(uint *)(lVar1 + -0x194) = 0x80000000;
      *(undefined4 *)(lVar1 + -0x228) = 0;
      uVar3 = *(uint *)(lVar1 + -0x224);
      if ((-1 < (int)uVar3) && (*(long *)(lVar1 + -0x230) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x20))(puVar7,*(long *)(lVar1 + -0x230),(ulong)uVar3 << 2);
      }
      lVar10 = lVar10 + -0x280;
      *(undefined8 *)(lVar1 + -0x230) = 0;
      *(uint *)(lVar1 + -0x224) = 0x80000000;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1bc)) && (param_1[0x36] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x36],(ulong)*(uint *)((long)param_1 + 0x1bc) * 0x280);
  }
  param_1[0x36] = 0;
  *(undefined4 *)((long)param_1 + 0x1bc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x184)) && (param_1[0x2f] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x2f],(ulong)*(uint *)((long)param_1 + 0x184) << 3);
  }
  param_1[0x2f] = 0;
  *(undefined4 *)((long)param_1 + 0x184) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x174)) && (param_1[0x2d] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x2d],(ulong)*(uint *)((long)param_1 + 0x174) << 2);
  }
  param_1[0x2d] = 0;
  *(undefined4 *)((long)param_1 + 0x174) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x164)) && (param_1[0x2b] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x2b],(ulong)*(uint *)((long)param_1 + 0x164) << 2);
  }
  param_1[0x2b] = 0;
  *(undefined4 *)((long)param_1 + 0x164) = 0x80000000;
  puVar6 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar9 = (long *)(param_1[0x26] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x26] & 3U) == 0) {
        param_1[0x26] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x26] = 0;
        if (*puVar6 == '\0') goto LAB_030083f4;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    plVar9 = (long *)(param_1[0x25] & 0xfffffffffffffffc);
    if (plVar9 != (long *)0x0) {
      if ((param_1[0x25] & 3U) == 0) {
        param_1[0x25] = (ulong)plVar9 | 1;
        do {
          lVar10 = *plVar9;
          plVar9 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          (**(code **)(lVar10 + 8))();
        } while (plVar9 != (long *)0x0);
        param_1[0x25] = 0;
      }
      else {
        do {
          plVar2 = (long *)(plVar9[1] & 0xfffffffffffffffc);
          plVar9[1] = (ulong)plVar2 | 1;
          plVar9 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
LAB_030083f4:
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x124)) && (param_1[0x23] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x23],(ulong)*(uint *)((long)param_1 + 0x124) << 4);
  }
  param_1[0x23] = 0;
  *(undefined4 *)((long)param_1 + 0x124) = 0x80000000;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x114)) && (param_1[0x21] != 0)) {
    (**(code **)(*(long *)puVar7 + 0x20))
              (puVar7,param_1[0x21],(ulong)*(uint *)((long)param_1 + 0x114) << 5);
  }
  plVar9 = (long *)param_1[3];
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0x80000000;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


