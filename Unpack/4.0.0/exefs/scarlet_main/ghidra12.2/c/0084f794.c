/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084f794; name: FUN_0084f794
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084f794(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  long *plVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  long *local_68;
  
  puVar2 = PTR_DAT_047d1a08;
  local_80 = 0x200;
  puVar9 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_80,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(puVar9,"hkgpConvexHullImpl");
  }
  *(undefined2 *)puVar9 = 1;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(undefined2 *)((long)puVar9 + 0xc) = 0;
  *(undefined1 *)((long)puVar9 + 0xe) = 0;
  *(undefined8 *)((long)puVar9 + 4) = 0x10001003f7fff58;
  puVar2 = PTR_DAT_047d1ba0 + 0x10;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[7] = puVar2;
  puVar9[8] = 0xffffffff;
  puVar9[9] = 1;
  *(undefined4 *)(puVar9 + 0xc) = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0x10] = 0;
  puVar9[0x11] = 0x8000000000000000;
  puVar9[0x12] = 0;
  puVar9[0x13] = 0x8000000000000000;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0x8000000000000000;
  puVar2 = PTR_DAT_047d1ba8;
  *(undefined4 *)(puVar9 + 0xf) = 0;
  do {
    iVar5 = *(int *)puVar2;
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar8) {
      *(int *)puVar2 = iVar5 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(int *)(puVar9 + 0x3f) = iVar5;
  FUN_0085c61c();
  puVar2 = PTR_DAT_047d19b0;
  puVar9[0x3c] = 0;
  puVar9[0x3d] = 0;
  uVar20 = *(undefined8 *)(puVar2 + 0x228);
  uVar19 = *(undefined8 *)(puVar2 + 0x220);
  uVar21 = *(undefined8 *)(puVar2 + 0x230);
  uVar11 = *(undefined8 *)(puVar2 + 0x248);
  lVar16 = *(long *)(puVar2 + 0x240);
  puVar9[0x33] = *(undefined8 *)(puVar2 + 0x238);
  puVar9[0x32] = uVar21;
  puVar9[0x35] = 0;
  puVar9[0x34] = 0;
  *(undefined4 *)(puVar9 + 0x13) = 0;
  puVar9[0x23] = 0;
  puVar9[0x22] = 0;
  *(undefined4 *)(puVar9 + 0x11) = 0;
  puVar9[0x31] = uVar20;
  puVar9[0x30] = uVar19;
  *(undefined4 *)(puVar9 + 0x15) = 0;
  *(undefined2 *)((long)puVar9 + 0x1fc) = 0;
  *(undefined1 *)((long)puVar9 + 0x1fe) = 0;
  *(undefined4 *)((long)puVar9 + 500) = 0;
  *(undefined4 *)(puVar9 + 0x3e) = 0xffffffff;
  puVar9[0x24] = 0;
  puVar9[0x26] = 0;
  puVar9[0x28] = 0;
  puVar9[0x2a] = 0;
  puVar9[0x3b] = uVar20;
  puVar9[0x3a] = uVar19;
  puVar9[0x17] = lVar16 << 0x20;
  puVar9[0x16] = 0;
  puVar9[0x19] = lVar16 << 0x20;
  puVar9[0x18] = 0;
  uVar19 = CONCAT44(-(float)((ulong)lVar16 >> 0x20),-(float)lVar16);
  uVar20 = CONCAT44(-(float)((ulong)uVar11 >> 0x20),-(float)uVar11);
  puVar9[0x1b] = uVar11;
  puVar9[0x1a] = lVar16;
  puVar9[0x1d] = uVar20;
  puVar9[0x1c] = uVar19;
  puVar9[0x1f] = uVar11;
  puVar9[0x1e] = lVar16;
  puVar9[0x21] = uVar20;
  puVar9[0x20] = uVar19;
  uVar19 = *(undefined8 *)(puVar2 + 0x208);
  uVar11 = *(undefined8 *)(puVar2 + 0x200);
  uVar21 = *(undefined8 *)(puVar2 + 0x218);
  uVar20 = *(undefined8 *)(puVar2 + 0x210);
  puVar9[0x2d] = uVar19;
  puVar9[0x2c] = uVar11;
  puVar9[0x2f] = uVar21;
  puVar9[0x2e] = uVar20;
  puVar9[0x37] = uVar19;
  puVar9[0x36] = uVar11;
  puVar9[0x39] = uVar21;
  puVar9[0x38] = uVar20;
  puVar9[0x25] = 0;
  puVar9[0x27] = 0;
  puVar9[0x29] = 0;
  puVar9[0x2b] = 0;
  *param_1 = (long)puVar9;
  uVar11 = *param_2;
  *(undefined8 *)((long)puVar9 + 7) = *(undefined8 *)((long)param_2 + 7);
  *puVar9 = uVar11;
  uVar11 = param_2[2];
  puVar9[3] = param_2[3];
  puVar9[2] = uVar11;
  uVar11 = param_2[4];
  puVar9[5] = param_2[5];
  puVar9[4] = uVar11;
  uVar11 = param_2[0x22];
  puVar9[0x23] = param_2[0x23];
  puVar9[0x22] = uVar11;
  uVar11 = param_2[0x24];
  puVar9[0x25] = param_2[0x25];
  puVar9[0x24] = uVar11;
  uVar11 = param_2[0x26];
  puVar9[0x27] = param_2[0x27];
  puVar9[0x26] = uVar11;
  uVar11 = param_2[0x28];
  puVar9[0x29] = param_2[0x29];
  puVar9[0x28] = uVar11;
  uVar11 = param_2[0x2a];
  puVar9[0x2b] = param_2[0x2b];
  puVar9[0x2a] = uVar11;
  uVar11 = param_2[0x2c];
  puVar9[0x2d] = param_2[0x2d];
  puVar9[0x2c] = uVar11;
  uVar11 = param_2[0x2e];
  puVar9[0x2f] = param_2[0x2f];
  puVar9[0x2e] = uVar11;
  uVar11 = param_2[0x30];
  puVar9[0x31] = param_2[0x31];
  puVar9[0x30] = uVar11;
  uVar11 = param_2[0x32];
  puVar9[0x33] = param_2[0x33];
  puVar9[0x32] = uVar11;
  uVar11 = param_2[0x34];
  puVar9[0x35] = param_2[0x35];
  puVar9[0x34] = uVar11;
  puVar9[0x3c] = param_2[0x3c];
  puVar9[0x3d] = param_2[0x3d];
  *(undefined4 *)(puVar9 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined4 *)((long)puVar9 + 500) = *(undefined4 *)((long)param_2 + 500);
  *(undefined1 *)((long)puVar9 + 0x1fc) = *(undefined1 *)((long)param_2 + 0x1fc);
  *(undefined1 *)((long)puVar9 + 0x1fe) = *(undefined1 *)((long)param_2 + 0x1fe);
  puVar9[6] = 0;
  iVar5 = *(int *)(param_2 + 0x11);
  if ((int)(*(uint *)((long)puVar9 + 0x8c) & 0x7fffffff) < iVar5) {
    FUN_0085c77c(puVar9 + 0x10,PTR_PTR_047d1a50,(long)iVar5);
  }
  iVar4 = *(int *)(puVar9 + 0x11);
  if (iVar4 < iVar5) {
    lVar12 = puVar9[0x10];
    lVar13 = (long)iVar5 * 0x40;
    lVar16 = lVar12 + (long)iVar4 * 0x40;
    uVar14 = (lVar13 + (long)iVar4 * -0x40) - 0x40;
    uVar1 = ((uint)(uVar14 >> 6) & 0x3ffffff) + 1;
    *(int *)(puVar9 + 0x11) = iVar5;
    if ((uVar1 & 3) != 0) {
      lVar15 = -((ulong)uVar1 & 3);
      do {
        *(undefined4 *)(lVar16 + 0x2c) = 0;
        bVar8 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        *(undefined4 *)(lVar16 + 0x34) = 0xffffffff;
        lVar16 = lVar16 + 0x40;
      } while (bVar8);
    }
    if (0xbf < uVar14) {
      do {
        *(undefined4 *)(lVar16 + 0x2c) = 0;
        *(undefined4 *)(lVar16 + 0x34) = 0xffffffff;
        *(undefined4 *)(lVar16 + 0x6c) = 0;
        *(undefined4 *)(lVar16 + 0x74) = 0xffffffff;
        *(undefined4 *)(lVar16 + 0xac) = 0;
        *(undefined4 *)(lVar16 + 0xb4) = 0xffffffff;
        *(undefined4 *)(lVar16 + 0xec) = 0;
        *(undefined4 *)(lVar16 + 0xf4) = 0xffffffff;
        lVar16 = lVar16 + 0x100;
      } while (lVar12 + lVar13 != lVar16);
    }
  }
  else if (iVar5 < iVar4) {
    *(int *)(puVar9 + 0x11) = iVar5;
  }
  if (*(int *)(param_2 + 0x11) < 1) {
    lVar16 = *param_1;
  }
  else {
    lVar16 = *param_1;
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar15 = param_2[0x10] + lVar12;
      lVar3 = *(long *)(lVar16 + 0x80) + lVar12;
      lVar12 = lVar12 + 0x40;
      uVar11 = *(undefined8 *)(lVar15 + 0x10);
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar15 + 0x18);
      *(undefined8 *)(lVar3 + 0x10) = uVar11;
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
      uVar11 = *(undefined8 *)(lVar15 + 0x20);
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar15 + 0x30);
      *(undefined8 *)(lVar3 + 0x20) = uVar11;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_2 + 0x11));
  }
  iVar5 = *(int *)(param_2 + 0x13);
  if ((int)(*(uint *)(lVar16 + 0x9c) & 0x7fffffff) < iVar5) {
    FUN_02e8df28(lVar16 + 0x90,PTR_PTR_047d1a50,(long)iVar5);
    iVar4 = *(int *)(lVar16 + 0x98);
  }
  else {
    iVar4 = *(int *)(lVar16 + 0x98);
  }
  if (iVar4 == iVar5) {
    iVar5 = *(int *)(param_2 + 0x13);
  }
  else {
    *(int *)(lVar16 + 0x98) = iVar5;
    iVar5 = *(int *)(param_2 + 0x13);
  }
  if (0 < iVar5) {
    lVar12 = 0;
    do {
      lVar13 = lVar12 * 0x10;
      lVar12 = lVar12 + 1;
      puVar9 = (undefined8 *)(param_2[0x12] + lVar13);
      uVar11 = *puVar9;
      puVar17 = (undefined8 *)(*(long *)(lVar16 + 0x90) + lVar13);
      puVar17[1] = puVar9[1];
      *puVar17 = uVar11;
    } while (lVar12 < *(int *)(param_2 + 0x13));
  }
  puVar2 = PTR_PTR_047d1a50;
  local_80 = 0;
  uStack_78 = 0xffffffff00000000;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_031c5614(&local_80,PTR_PTR_047d1a50);
    plVar7 = (long *)param_2[0xb];
    if ((long *)param_2[0xb] != (long *)0x0) {
      do {
        plVar18 = plVar7;
        plVar7 = (long *)*plVar18;
      } while ((long *)*plVar18 != (long *)0x0);
      do {
        puVar9 = *(undefined8 **)(lVar16 + 0x50);
        if ((puVar9 == (undefined8 *)0x0) || (puVar9[0x140] == 0)) {
          puVar9 = (undefined8 *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,0xa20);
          if (puVar9 != (undefined8 *)0x0) {
            puVar9[0x122] = puVar9 + 300;
            puVar9[300] = puVar9 + 0x136;
            puVar9[0x118] = puVar9 + 0x122;
            puVar9[0x10e] = puVar9 + 0x118;
            puVar9[0x104] = puVar9 + 0x10e;
            puVar9[0xfa] = puVar9 + 0x104;
            puVar9[0xf0] = puVar9 + 0xfa;
            puVar9[0xe6] = puVar9 + 0xf0;
            puVar9[0xdc] = puVar9 + 0xe6;
            puVar9[0xd2] = puVar9 + 0xdc;
            puVar9[200] = puVar9 + 0xd2;
            puVar9[0xbe] = puVar9 + 200;
            puVar9[0xb4] = puVar9 + 0xbe;
            puVar9[0xaa] = puVar9 + 0xb4;
            puVar9[0xa0] = puVar9 + 0xaa;
            puVar9[0x96] = puVar9 + 0xa0;
            puVar9[0x8c] = puVar9 + 0x96;
            puVar9[0x82] = puVar9 + 0x8c;
            puVar9[0x78] = puVar9 + 0x82;
            puVar9[0x6e] = puVar9 + 0x78;
            puVar9[100] = puVar9 + 0x6e;
            puVar9[0x5a] = puVar9 + 100;
            puVar9[0x50] = puVar9 + 0x5a;
            puVar9[0x46] = puVar9 + 0x50;
            puVar9[0x3c] = puVar9 + 0x46;
            puVar9[0x32] = puVar9 + 0x3c;
            puVar9[0x28] = puVar9 + 0x32;
            puVar9[0x136] = 0;
            puVar9[0x1e] = puVar9 + 0x28;
            puVar9[0x14] = puVar9 + 0x1e;
            puVar9[10] = puVar9 + 0x14;
            *puVar9 = puVar9 + 10;
            *(undefined4 *)(puVar9 + 0x143) = 0;
            puVar9[0x140] = puVar9;
            puVar9[0x141] = 0;
            puVar9[0x142] = *(undefined8 *)(lVar16 + 0x50);
            *(undefined8 **)(lVar16 + 0x50) = puVar9;
            if (puVar9[0x142] != 0) {
              *(undefined8 **)(puVar9[0x142] + 0xa08) = puVar9;
            }
            goto LAB_0084fd4c;
          }
          _DAT_00000028 = plVar18[5];
          local_68 = (long *)0x0;
          _DAT_00000018 = plVar18[3];
          _DAT_00000010 = plVar18[2];
          _DAT_00000020 = plVar18[4];
          _DAT_00000030 = plVar18[6];
        }
        else {
LAB_0084fd4c:
          local_68 = (long *)puVar9[0x140];
          puVar9[0x140] = *local_68;
          local_68[8] = (long)puVar9;
          *(int *)(puVar9 + 0x143) = *(int *)(puVar9 + 0x143) + 1;
          lVar12 = plVar18[5];
          local_68[3] = plVar18[3];
          local_68[5] = lVar12;
          local_68[2] = plVar18[2];
          lVar12 = plVar18[4];
          local_68[6] = plVar18[6];
          local_68[4] = lVar12;
          if (local_68 != (long *)0x0) {
            local_68[1] = 0;
            *local_68 = *(long *)(lVar16 + 0x58);
            if (*(long *)(lVar16 + 0x58) != 0) {
              *(long **)(*(long *)(lVar16 + 0x58) + 8) = local_68;
            }
            *(long **)(lVar16 + 0x58) = local_68;
            *(int *)(lVar16 + 0x60) = *(int *)(lVar16 + 0x60) + 1;
          }
        }
        local_90 = plVar18;
        FUN_031c5350(&local_80,puVar2,&local_90,&local_68);
        plVar18 = (long *)plVar18[1];
      } while (plVar18 != (long *)0x0);
    }
  }
  puVar2 = PTR_PTR_047d1a50;
  if (*(int *)(param_2 + 0xf) != 0) {
    local_90 = (long *)0x0;
    uStack_88 = 0xffffffff00000000;
    FUN_031c5614(&local_90,PTR_PTR_047d1a50);
    plVar7 = (long *)param_2[0xe];
    if ((long *)param_2[0xe] != (long *)0x0) {
      do {
        plVar18 = plVar7;
        plVar7 = (long *)*plVar18;
      } while ((long *)*plVar18 != (long *)0x0);
LAB_0084fe2c:
      do {
        lVar16 = *param_1;
        puVar9 = *(undefined8 **)(lVar16 + 0x68);
        if ((puVar9 == (undefined8 *)0x0) || (puVar9[0x200] == 0)) {
          puVar9 = (undefined8 *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,0x1020);
          if (puVar9 != (undefined8 *)0x0) {
            puVar9[0x1d0] = puVar9 + 0x1e0;
            puVar9[0x1e0] = puVar9 + 0x1f0;
            puVar9[0x1c0] = puVar9 + 0x1d0;
            puVar9[0x1b0] = puVar9 + 0x1c0;
            puVar9[0x1a0] = puVar9 + 0x1b0;
            puVar9[400] = puVar9 + 0x1a0;
            puVar9[0x180] = puVar9 + 400;
            puVar9[0x170] = puVar9 + 0x180;
            puVar9[0x160] = puVar9 + 0x170;
            puVar9[0x150] = puVar9 + 0x160;
            puVar9[0x140] = puVar9 + 0x150;
            puVar9[0x130] = puVar9 + 0x140;
            puVar9[0x120] = puVar9 + 0x130;
            puVar9[0x110] = puVar9 + 0x120;
            puVar9[0x100] = puVar9 + 0x110;
            puVar9[0xf0] = puVar9 + 0x100;
            puVar9[0xe0] = puVar9 + 0xf0;
            puVar9[0xd0] = puVar9 + 0xe0;
            puVar9[0xc0] = puVar9 + 0xd0;
            puVar9[0xb0] = puVar9 + 0xc0;
            puVar9[0xa0] = puVar9 + 0xb0;
            puVar9[0x90] = puVar9 + 0xa0;
            puVar9[0x80] = puVar9 + 0x90;
            puVar9[0x70] = puVar9 + 0x80;
            puVar9[0x60] = puVar9 + 0x70;
            puVar9[0x50] = puVar9 + 0x60;
            puVar9[0x40] = puVar9 + 0x50;
            puVar9[0x30] = puVar9 + 0x40;
            puVar9[0x20] = puVar9 + 0x30;
            puVar9[0x1f0] = 0;
            puVar9[0x10] = puVar9 + 0x20;
            *puVar9 = puVar9 + 0x10;
            *(undefined4 *)(puVar9 + 0x203) = 0;
            puVar9[0x200] = puVar9;
            puVar9[0x201] = 0;
            puVar9[0x202] = *(undefined8 *)(lVar16 + 0x68);
            *(undefined8 **)(lVar16 + 0x68) = puVar9;
            if (puVar9[0x202] != 0) {
              *(undefined8 **)(puVar9[0x202] + 0x1008) = puVar9;
            }
            goto LAB_0084ff78;
          }
          puVar17 = (undefined8 *)0x0;
        }
        else {
LAB_0084ff78:
          puVar17 = (undefined8 *)puVar9[0x200];
          puVar9[0x200] = *puVar17;
          puVar17[0xe] = puVar9;
          *(int *)(puVar9 + 0x203) = *(int *)(puVar9 + 0x203) + 1;
        }
        lVar12 = plVar18[3];
        puVar17[2] = plVar18[2];
        puVar17[3] = lVar12;
        lVar12 = plVar18[4];
        lVar13 = plVar18[5];
        lVar15 = plVar18[7];
        puVar17[6] = plVar18[6];
        puVar17[7] = lVar15;
        puVar17[4] = lVar12;
        puVar17[5] = lVar13;
        lVar13 = plVar18[0xc];
        lVar12 = plVar18[9];
        lVar15 = plVar18[10];
        puVar17[0xb] = plVar18[0xb];
        puVar17[0xc] = lVar13;
        puVar17[9] = lVar12;
        puVar17[10] = lVar15;
        puVar17[8] = plVar18[8];
        if (puVar17 != (undefined8 *)0x0) {
          puVar17[1] = 0;
          *puVar17 = *(undefined8 *)(lVar16 + 0x70);
          if (*(long *)(lVar16 + 0x70) != 0) {
            *(undefined8 **)(*(long *)(lVar16 + 0x70) + 8) = puVar17;
          }
          *(undefined8 **)(lVar16 + 0x70) = puVar17;
          *(int *)(lVar16 + 0x78) = *(int *)(lVar16 + 0x78) + 1;
        }
        local_68 = (long *)puVar17[2];
        local_70 = (undefined8 *)0x0;
        puVar9 = (undefined8 *)FUN_031c5430(&local_80,&local_68,&local_70);
        puVar17[2] = *puVar9;
        local_68 = (long *)puVar17[3];
        local_70 = (undefined8 *)0x0;
        puVar9 = (undefined8 *)FUN_031c5430(&local_80,&local_68,&local_70);
        puVar17[3] = *puVar9;
        local_68 = (long *)puVar17[4];
        local_70 = (undefined8 *)0x0;
        puVar9 = (undefined8 *)FUN_031c5430(&local_80,&local_68,&local_70);
        puVar17[4] = *puVar9;
        local_68 = (long *)puVar17[5];
        local_70 = (undefined8 *)0x0;
        puVar10 = (ulong *)FUN_031c5430(&local_90,&local_68,&local_70);
        uVar14 = *puVar10;
        if ((uVar14 & 0xfffffffffffffffc) == 0) {
          local_70 = puVar17;
          local_68 = plVar18;
          FUN_031c5350(&local_90,puVar2,&local_68,&local_70);
        }
        else {
          local_68 = (long *)puVar17[5];
          FUN_031c54c4(&local_90,&local_68);
          puVar17[5] = uVar14;
          *(undefined8 **)((uVar14 & 0xfffffffffffffffc) + (uVar14 & 3) * 8 + 0x28) = puVar17;
        }
        local_68 = (long *)puVar17[6];
        local_70 = (undefined8 *)0x0;
        puVar10 = (ulong *)FUN_031c5430(&local_90,&local_68,&local_70);
        uVar14 = *puVar10;
        if ((uVar14 & 0xfffffffffffffffc) == 0) {
          local_68 = (long *)((long)plVar18 + 1);
          local_70 = (undefined8 *)((long)puVar17 + 1);
          FUN_031c5350(&local_90,puVar2,&local_68,&local_70);
        }
        else {
          local_68 = (long *)puVar17[6];
          FUN_031c54c4(&local_90,&local_68);
          puVar17[6] = uVar14;
          *(long *)((uVar14 & 0xfffffffffffffffc) + (uVar14 & 3) * 8 + 0x28) = (long)puVar17 + 1;
        }
        local_68 = (long *)puVar17[7];
        local_70 = (undefined8 *)0x0;
        puVar10 = (ulong *)FUN_031c5430(&local_90,&local_68,&local_70);
        uVar14 = *puVar10;
        if ((uVar14 & 0xfffffffffffffffc) == 0) {
          local_68 = (long *)((long)plVar18 + 2);
          local_70 = (undefined8 *)((long)puVar17 + 2);
          FUN_031c5350(&local_90,puVar2,&local_68,&local_70);
          plVar18 = (long *)plVar18[1];
          if (plVar18 == (long *)0x0) break;
          goto LAB_0084fe2c;
        }
        local_68 = (long *)puVar17[7];
        FUN_031c54c4(&local_90,&local_68);
        puVar17[7] = uVar14;
        *(long *)((uVar14 & 0xfffffffffffffffc) + (uVar14 & 3) * 8 + 0x28) = (long)puVar17 + 2;
        plVar18 = (long *)plVar18[1];
      } while (plVar18 != (long *)0x0);
    }
    FUN_031c5580(&local_90,PTR_PTR_047d1a50);
    FUN_031c534c(&local_90);
  }
  FUN_031c5580(&local_80,PTR_PTR_047d1a50);
  FUN_031c534c(&local_80);
  return;
}


