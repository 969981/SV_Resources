/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030dbe0c; name: FUN_030dbe0c
 */


void FUN_030dbe0c(undefined4 param_1,long param_2,long param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  long *plVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  short sVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  int iVar20;
  ulong *puVar21;
  long lVar22;
  int iVar23;
  undefined *puVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined8 in_x7;
  undefined1 uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  int iVar32;
  long lVar33;
  undefined1 *puVar34;
  ulong uVar35;
  int *piVar36;
  byte *pbVar37;
  long lVar38;
  ushort *puVar39;
  long *plVar40;
  code *pcVar41;
  undefined8 *puVar42;
  byte bVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  ulong uVar48;
  long lVar49;
  undefined8 *puVar50;
  int iVar51;
  long lVar52;
  undefined4 *puVar53;
  long lVar54;
  undefined4 *puVar55;
  int iVar56;
  long *plVar57;
  long lVar58;
  ulong uVar59;
  int iVar60;
  ushort *puVar61;
  undefined2 *puVar62;
  ulong uVar63;
  undefined1 *puVar64;
  int *piVar65;
  ushort *puVar66;
  ulong uVar67;
  int *piVar68;
  uint *puVar69;
  long lVar70;
  int *piVar71;
  short *psVar72;
  long lVar73;
  int *piVar74;
  void *__src;
  float fVar75;
  undefined8 uVar76;
  float fVar77;
  float fVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  ulong local_2f8;
  ulong local_2f0;
  uint local_2e4;
  ulong local_2e0;
  long local_2d8;
  long local_2d0;
  long local_2c0;
  ulong local_1d0;
  long *local_170;
  int local_138 [2];
  int local_130 [2];
  undefined2 local_128 [4];
  uint local_120 [2];
  ulong local_118;
  ulong local_110;
  long local_108;
  undefined8 local_100;
  uint local_f8;
  undefined4 local_f4;
  ulong local_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 local_d0 [4];
  uint local_c8 [2];
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar73 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x38) +
                    (long)*(int *)(param_2 + 0x20) * 0x100);
  if (*(char *)(lVar73 + 0x30) != '\x01') {
    FUN_0307d71c(lVar73 + 0x20);
  }
  iVar20 = *(int *)PTR_DAT_047e4f38;
  lVar22 = tpidr_el0;
  lVar33 = *(long *)(lVar22 + 0x1000b8);
  if (lVar33 == 0) {
    lVar33 = FUN_00e5d3b4();
    *(long *)(lVar22 + 0x1000b8) = lVar33;
  }
  if (*(long *)(lVar33 + (long)iVar20 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  iVar20 = *(int *)(*(long *)PTR_DAT_047e4f50 + 0x18);
  if (0 < iVar20) {
    FUN_03056218(&local_c0,*(undefined4 *)(*(long *)PTR_DAT_047e4f50 + 0x20),
                 *(undefined4 *)(*(long *)(lVar73 + 0x20) + 0x180),0);
    lVar33 = *(long *)(lVar22 + 0x1000b8);
    if (lVar33 == 0) {
      lVar33 = FUN_00e5d3b4();
      *(long *)(lVar22 + 0x1000b8) = lVar33;
    }
    puVar24 = PTR_DAT_047e48d8;
    lVar33 = *(long *)(lVar33 + 0x3e0);
    if ((lVar33 != 0) && (puVar50 = *(undefined8 **)(lVar33 + 0x10), puVar50 != (undefined8 *)0x0))
    {
      puVar55 = (undefined4 *)((long)puVar50 + 0x13U & 0xfffffffffffffffc);
      uVar35 = (long)puVar55 + 0xbU & 0xfffffffffffffff8;
      if (uVar35 <= *(ulong *)(lVar33 + 0x18)) {
        *(ulong *)(lVar33 + 0x10) = uVar35;
        *puVar50 = &DAT_03c1a9df;
        puVar50[1] = puVar24;
        if (puVar55 != (undefined4 *)0x0) {
          *puVar55 = (int)local_c0;
        }
      }
    }
  }
  if (*(int *)(param_5 + 1) != 0) {
    puVar64 = (undefined1 *)*param_5;
    plVar5 = (long *)(lVar73 + 0x20);
    puVar34 = puVar64 + (long)*(int *)(param_5 + 1) * 0xc;
    do {
      lVar33 = *(long *)(lVar22 + 0x1000b8);
      if (lVar33 == 0) {
        lVar33 = FUN_00e5d3b4();
        *(long *)(lVar22 + 0x1000b8) = lVar33;
      }
      plVar57 = *(long **)(lVar33 + 0x3e0);
      if (plVar57 != (long *)0x0) {
        lVar33 = *plVar57;
        if (*(code **)(lVar33 + 0x18) != (code *)0x0) {
          (**(code **)(lVar33 + 0x18))("updateOneFace",0xd,*(undefined8 *)(lVar33 + 0x28));
        }
        puVar50 = (undefined8 *)plVar57[2];
        uVar35 = (long)puVar50 + 0x17U & 0xfffffffffffffff8;
        if ((uVar35 <= (ulong)plVar57[3]) && (plVar57[2] = uVar35, puVar50 != (undefined8 *)0x0)) {
          *puVar50 = "TtupdateOneFace";
          uVar26 = nn::os::GetSystemTick();
          puVar50[1] = uVar26;
        }
        if (((*(byte *)(lVar33 + 0x38) & 1) != 0) && (plVar57[6] != 0)) {
          puVar50 = (undefined8 *)plVar57[2];
          uVar35 = (long)puVar50 + 0x17U & 0xfffffffffffffff8;
          if ((uVar35 <= (ulong)plVar57[3]) && (plVar57[2] = uVar35, puVar50 != (undefined8 *)0x0))
          {
            *puVar50 = &DAT_03c4e575;
            puVar50[1] = *(undefined8 *)(plVar57[6] + 8);
          }
        }
      }
      piVar65 = (int *)(puVar64 + 4);
      iVar28 = *piVar65;
      lVar33 = *(long *)(lVar73 + 0x20);
      uVar44 = *(uint *)(*(long *)(lVar33 + 0x168) + (long)iVar28 * 4);
      if (-1 < (int)uVar44) {
        uVar30 = *(uint *)(lVar33 + 0x170);
        lVar58 = (long)(int)uVar30;
        if ((int)uVar30 <= (int)(uVar44 + 1)) {
          uVar30 = uVar44 + 1;
        }
        uVar35 = (ulong)uVar44;
        do {
          uVar48 = uVar35 + 1;
          if (lVar58 <= (long)uVar48) goto LAB_030dc018;
          lVar49 = uVar35 * 4;
          uVar35 = uVar48;
        } while (*(int *)(*(long *)(lVar33 + 0x168) + 4 + lVar49) == iVar28);
        uVar30 = (uint)uVar48;
LAB_030dc018:
        if (uVar44 != uVar30) {
          uVar29 = uVar44 - *(int *)(lVar33 + 0x20);
          uVar35 = -(ulong)(uVar29 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar29 << 4;
          iVar51 = uVar30 - uVar44;
          do {
            uVar26 = *(undefined8 *)(param_2 + 0x18);
            if (*(char *)(lVar73 + 0x30) == '\x01') {
              lVar58 = *plVar5;
              lVar33 = lVar58;
            }
            else {
              lVar33 = FUN_0307d71c(plVar5);
              lVar58 = *(long *)(lVar73 + 0x20);
            }
            piVar36 = (int *)(*(long *)(lVar33 + 0xd0) + uVar35);
            iVar32 = *(int *)(lVar58 + 0x30);
            local_c0 = CONCAT44(local_c0._4_4_,*piVar36 - iVar32);
            FUN_030e9bd0(uVar26,lVar33,&local_c0,(long)(short)piVar36[2]);
            if (*(short *)((long)piVar36 + 10) != 0) {
              local_f0 = CONCAT44(local_f0._4_4_,piVar36[1] - iVar32);
              FUN_030e9bd0(uVar26,lVar33,&local_f0);
            }
            uVar35 = uVar35 + 0x10;
            iVar51 = iVar51 + -1;
          } while (iVar51 != 0);
        }
      }
      local_c0 = CONCAT44(local_c0._4_4_,iVar28);
      FUN_0308f878(lVar73,&local_c0);
      iVar28 = *(int *)PTR_DAT_047e4f38;
      lVar33 = *(long *)(lVar22 + 0x1000b8);
      if (lVar33 == 0) {
        lVar33 = FUN_00e5d3b4();
        *(long *)(lVar22 + 0x1000b8) = lVar33;
      }
      if (*(long *)(lVar33 + (long)iVar28 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      switch(*puVar64) {
      case 0:
        lVar58 = (long)*(int *)(puVar64 + 8);
        lVar33 = *(long *)(lVar73 + 0x20);
        uVar44 = *(uint *)(param_3 + lVar58 * 0x58);
        uVar35 = (ulong)uVar44 & 0x3fffff;
        iVar51 = (int)uVar35;
        iVar28 = iVar51 - *(int *)(lVar33 + 0x20);
        if (iVar51 < *(int *)(lVar33 + 0x20)) {
          iVar28 = iVar51;
          if ((*(int *)(lVar33 + 0x98) == 0) ||
             (iVar28 = *(int *)(*(long *)(lVar33 + 0x90) + uVar35 * 4), iVar28 != -1)) {
            lVar49 = *(long *)(lVar33 + 0xb0);
            goto LAB_030dc1cc;
          }
          piVar36 = (int *)(*(long *)(lVar33 + 0x18) + uVar35 * 0x10);
        }
        else {
          lVar49 = *(long *)(lVar33 + 0xd0);
LAB_030dc1cc:
          piVar36 = (int *)(lVar49 + (long)iVar28 * 0x10);
        }
        local_c0 = CONCAT44(local_c0._4_4_,iVar51);
        if ((*(int *)(lVar33 + 0x108) == 0) ||
           ((*(byte *)(*(long *)(lVar33 + 0x100) + uVar35) >> 3 & 1) == 0)) {
          local_170 = (long *)0x0;
        }
        else {
          lVar49 = FUN_03095288((long *)(lVar33 + 0x188),&local_c0);
          if (lVar49 == 0) {
            uVar29 = 0;
            uVar30 = 0xffffffff;
          }
          else {
            uVar30 = *(uint *)(lVar49 + 4);
            uVar29 = ((int)lVar49 - (int)*(undefined8 *)(lVar33 + 0x198)) * 0x20000000;
          }
          local_170 = (long *)(*(long *)(lVar33 + 0x188) + (long)(int)(uVar30 | uVar29) * 0x38 + 8);
        }
        lVar33 = param_3 + lVar58 * 0x58;
        local_c0 = 0;
        uStack_b8 = -0x8000000000000000;
        uVar30 = *(uint *)(lVar33 + 0x10);
        if (uVar30 == 0) {
          if (*(char *)(lVar73 + 0x30) == '\x01') {
            lVar33 = *plVar5;
          }
          else {
            lVar33 = FUN_0307d71c(plVar5);
          }
          if (*(int *)(lVar33 + 0x108) == 0) {
            bVar43 = 1;
          }
          else {
            bVar43 = *(byte *)(*(long *)(lVar33 + 0x100) + uVar35) | 1;
          }
          *(byte *)(*(long *)(lVar33 + 0x100) + uVar35) = bVar43;
          *(undefined4 *)(*(long *)(lVar33 + 0x168) + uVar35 * 4) = 0xfffffffe;
          if (*(int *)(lVar73 + 0x40) != 0) {
            plVar40 = *(long **)(lVar73 + 0x38);
            lVar33 = (long)*(int *)(lVar73 + 0x40) * 0x18;
            do {
              lVar58 = *plVar40;
              if (lVar58 != 0) {
                if ((char)plVar40[2] != '\x01') {
                  lVar58 = FUN_03065a74(plVar40);
                }
                local_f0 = CONCAT44(local_f0._4_4_,iVar51);
                FUN_03077488(lVar58,lVar73,&local_f0);
              }
              plVar40 = plVar40 + 3;
              lVar33 = lVar33 + -0x18;
            } while (lVar33 != 0);
          }
        }
        else {
          uVar9 = *(undefined4 *)(lVar33 + 0x50);
          piVar74 = (int *)(param_3 + lVar58 * 0x58 + 0x30);
          iVar28 = *piVar74;
          if (iVar28 < 1) {
            uStack_b8._0_4_ = 0;
          }
          else {
            FUN_0309cc54(&local_c0,PTR_PTR_047d1a50 + 0x20,iVar28);
          }
          if ((int)uStack_b8 != iVar28) {
            uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar28);
          }
          if (0 < (int)uVar30) {
            uVar48 = 0;
            lVar49 = 0;
            do {
              uVar19 = *(ushort *)(*(long *)(lVar33 + 8) + uVar48 * 6);
              if (uVar19 != 0) {
                lVar49 = (long)(int)lVar49;
                uVar29 = uVar19 & 3;
                uVar31 = (undefined4)uVar48;
                if (2 < uVar19 - 1) {
                  lVar38 = 0;
                  lVar70 = lVar49 * 4;
                  do {
                    *(undefined4 *)(local_c0 + lVar70 + lVar38 * 4) = uVar31;
                    *(undefined4 *)(local_c0 + lVar70 + lVar38 * 4 + 4) = uVar31;
                    *(undefined4 *)(local_c0 + lVar70 + lVar38 * 4 + 8) = uVar31;
                    lVar52 = lVar38 * 4;
                    lVar38 = lVar38 + 4;
                    *(undefined4 *)(local_c0 + lVar70 + lVar52 + 0xc) = uVar31;
                  } while ((uVar19 & 0xfffc) != (uint)lVar38);
                  lVar49 = lVar49 + lVar38;
                }
                if ((uVar19 & 3) != 0) {
                  do {
                    *(undefined4 *)(local_c0 + lVar49 * 4) = uVar31;
                    lVar49 = lVar49 + 1;
                    uVar29 = uVar29 - 1;
                  } while (uVar29 != 0);
                }
              }
              uVar48 = uVar48 + 1;
            } while (uVar48 != uVar30);
          }
          lVar49 = *(long *)(lVar73 + 0x20);
          if (*(int *)(lVar49 + 0x108) == 0) {
            bVar43 = 0;
          }
          else {
            bVar43 = *(byte *)(*(long *)(lVar49 + 0x100) + uVar35);
          }
          iVar32 = *(int *)(lVar49 + 0x30);
          iVar60 = *(int *)(lVar49 + 0xe8);
          iVar10 = *(int *)(lVar49 + 0x20);
          iVar11 = *(int *)(lVar49 + 0xd8);
          iVar12 = *(int *)(lVar49 + 0x40);
          iVar28 = *(int *)(lVar49 + 0xf8);
          iVar13 = *(int *)(lVar49 + 0x60);
          iVar14 = *(int *)(lVar49 + 0x50);
          iVar23 = piVar36[2];
          lVar49 = *(long *)(lVar22 + 0x1000b8);
          if (lVar49 == 0) {
            lVar49 = FUN_00e5d3b4();
            *(long *)(lVar22 + 0x1000b8) = lVar49;
          }
          local_118 = (long)(short)iVar23 + 1;
          local_2c0 = *(long *)(*(long *)(lVar49 + 0x3d0) + 0x10);
          if (*(long *)(local_2c0 + 8) == 0) {
            local_2e0 = -(local_118 >> 0x1f & 1) & 0xfffffff000000000 |
                        local_118 * 0x10 & 0xffffffff0;
            local_118 = local_2e0;
            if (local_2c0 == 0) goto LAB_030dc7cc;
            local_f0 = local_2e0 + 0x3f & 0xffffffffffffffc0;
            if (*(ulong *)(local_2c0 + 0x28) < local_f0) {
LAB_030dc4b4:
              local_2d8 = FUN_031cf3b4(local_2c0,&local_f0);
            }
            else {
              local_2d8 = *(long *)(local_2c0 + 0x38);
              if (*(ulong *)(local_2c0 + 0x40) < local_f0 + local_2d8) goto LAB_030dc4b4;
              *(ulong *)(local_2c0 + 0x38) = local_f0 + local_2d8;
            }
          }
          else {
            local_118 = local_118 * 0x10;
LAB_030dc7cc:
            local_2e0 = local_118;
            local_2d8 = (**(code **)PTR_DAT_047d1a08)(1,&local_118,0x40);
            local_2c0 = 0;
          }
          lVar49 = param_3 + lVar58 * 0x58;
          FUN_0308f544(lVar73,*(undefined8 *)(lVar49 + 0x48),uVar9);
          uVar59 = (ulong)*piVar74;
          uVar48 = (long)*(int *)(lVar49 + 0x40) + uVar59;
          uVar29 = (uint)uVar48;
          if ((int)uVar29 < 1) {
            lVar49 = 0;
            local_2e4 = 0x80000000;
            local_2f0 = 0;
            if (uVar29 != 0) {
              lVar38 = uVar48 * 0x40;
              goto LAB_030dc87c;
            }
          }
          else {
            lVar49 = (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                               (PTR_PTR_047d1a50 + 0x20,(uVar48 & 0xffffffff) << 6);
            local_2f0 = uVar48 & 0xffffffff;
            lVar38 = lVar49 + (uVar48 & 0xffffffff) * 0x40;
            local_2e4 = uVar29;
LAB_030dc87c:
            lVar70 = 0;
            do {
              lVar52 = lVar49 + lVar70;
              lVar70 = lVar70 + 0x40;
              *(undefined8 *)(lVar52 + 8) = 0xffffffffffffffff;
              *(undefined4 *)(lVar52 + 0x10) = 4;
              *(long *)(lVar52 + 0x18) = lVar52 + 0x28;
              *(undefined4 *)(lVar52 + 0x20) = 0;
              *(undefined4 *)(lVar52 + 0x24) = 0x80000004;
              *(undefined2 *)(lVar52 + 0x38) = 0xffff;
            } while (lVar38 - lVar49 != lVar70);
          }
          lVar38 = *(long *)(lVar22 + 0x1000b8);
          if (lVar38 == 0) {
            lVar38 = FUN_00e5d3b4();
            *(long *)(lVar22 + 0x1000b8) = lVar38;
          }
          local_2d0 = *(long *)(*(long *)(lVar38 + 0x3d0) + 0x10);
          if (*(long *)(local_2d0 + 8) == 0) {
            local_2f8 = (long)(int)uVar30 * 0x38;
            local_118 = local_2f8;
            if (local_2d0 == 0) goto LAB_030dc97c;
            local_f0 = local_2f8 + 0x3f & 0xffffffffffffffc0;
            if (*(ulong *)(local_2d0 + 0x28) < local_f0) {
LAB_030dc92c:
              lVar38 = FUN_031cf3b4(local_2d0,&local_f0);
            }
            else {
              lVar38 = *(long *)(local_2d0 + 0x38);
              if (*(ulong *)(local_2d0 + 0x40) < local_f0 + lVar38) goto LAB_030dc92c;
              *(ulong *)(local_2d0 + 0x38) = local_f0 + lVar38;
            }
          }
          else {
            local_118 = (long)(int)uVar30 * 0x38;
LAB_030dc97c:
            local_2f8 = local_118;
            lVar38 = (**(code **)PTR_DAT_047d1a08)(1,&local_118,0x40);
            local_2d0 = 0;
          }
          uVar30 = *(uint *)(lVar33 + 0x10);
          if (uVar30 == 0) {
            local_1d0 = 0;
          }
          else {
            uVar44 = uVar44 & 0xffc00000;
            iVar28 = iVar28 + iVar12;
            puVar61 = *(ushort **)(lVar33 + 8);
            lVar33 = param_3 + lVar58 * 0x58;
            puVar39 = puVar61 + (long)(int)uVar30 * 3;
            iVar12 = *(int *)(*(long *)(lVar73 + 0x20) + 0xe8) +
                     *(int *)(*(long *)(lVar73 + 0x20) + 0x30);
            uVar30 = 0;
            uVar29 = 0;
            local_1d0 = 0;
            iVar23 = 0;
            do {
              piVar71 = (int *)(lVar38 + local_1d0 * 0x38);
              piVar74 = piVar71 + 10;
              uVar19 = *puVar61;
              uVar17 = puVar61[1];
              *(int **)(piVar71 + 6) = piVar74;
              piVar68 = piVar71 + 8;
              *piVar68 = 0;
              piVar71[9] = 0x80000004;
              piVar71[0] = -1;
              piVar71[1] = -1;
              *(ushort *)(piVar71 + 2) = 0;
              puVar66 = (ushort *)((long)piVar71 + 10);
              puVar66[0] = 0;
              puVar66[1] = 0xffff;
              *(undefined2 *)((long)piVar71 + 0xe) = 0xcdcd;
              lVar58 = *(long *)(lVar73 + 0x20);
              iVar47 = *(int *)(lVar58 + 0x50);
              if (iVar51 < *(int *)(lVar58 + 0x20)) {
                iVar45 = iVar51;
                if ((*(int *)(lVar58 + 0x98) == 0) ||
                   (iVar45 = *(int *)(*(long *)(lVar58 + 0x90) + uVar35 * 4), iVar45 != -1)) {
                  lVar70 = *(long *)(lVar58 + 0x120);
                }
                else {
                  lVar70 = *(long *)(lVar58 + 0x48);
                  iVar45 = iVar51;
                }
              }
              else {
                lVar70 = *(long *)(lVar58 + 0x140);
                iVar45 = iVar51 - *(int *)(lVar58 + 0x20);
              }
              puVar50 = (undefined8 *)(lVar38 + local_1d0 * 0x38 + 0x18);
              if (4 < iVar47) {
                FUN_02f5f190(puVar50,PTR_PTR_047d1a50,(long)iVar47);
                piVar74 = (int *)*puVar50;
              }
              memcpy(piVar74,(void *)(lVar70 + (long)(iVar45 * iVar47) * 4),(long)iVar47 << 2);
              *piVar68 = iVar47;
              *(byte *)(lVar38 + local_1d0 * 0x38 + 0x10) = bVar43 ^ 2;
              *(ushort *)(piVar71 + 2) = *puVar61;
              iVar47 = (int)uVar59 + iVar12;
              *piVar71 = iVar23 + iVar12;
              if (puVar61[1] == 0) {
                iVar47 = -1;
              }
              piVar71[1] = iVar47;
              *puVar66 = puVar61[1];
              *(short *)(piVar71 + 3) = (short)piVar36[3];
              uVar18 = puVar61[2];
              lVar58 = *(long *)(lVar33 + 0x18);
              if ((int)(piVar71[9] & 0x7fffffffU) < iVar14) {
                FUN_02f5f190(puVar50,PTR_PTR_047d1a50,(long)iVar14);
              }
              uVar4 = (ulong)uVar19 + (ulong)uVar30;
              memcpy((void *)*puVar50,(void *)(lVar58 + (long)(int)(iVar14 * (uint)uVar18) * 4),
                     (long)iVar14 << 2);
              *piVar68 = iVar14;
              if (uVar19 != 0) {
                uVar67 = (ulong)uVar30;
                lVar70 = uVar67 << 3;
                puVar62 = (undefined2 *)(lVar49 + 0x38 + (long)iVar23 * 0x40);
                lVar58 = 0;
                do {
                  uVar8 = uVar30;
                  if ((uVar67 - uVar4) + 1 + lVar58 != 0) {
                    uVar8 = uVar30 + (int)lVar58 + 1;
                  }
                  puVar66 = (ushort *)(*(long *)(lVar33 + 0x28) + lVar70);
                  uVar18 = *(ushort *)(*(long *)(lVar33 + 0x28) + (ulong)uVar8 * 8);
                  uVar19 = *puVar66;
                  *(undefined8 *)(puVar62 + -0x18) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar62 + -0x14) = 0;
                  *(uint *)(puVar62 + -0x1c) = iVar28 + (uint)uVar19;
                  *(uint *)(puVar62 + -0x1a) = iVar28 + (uint)uVar18;
                  bVar7 = (byte)puVar66[1] & 3;
                  if (bVar7 == 1) {
                    *(undefined8 *)(puVar62 + -0x18) = 0xffffffffffffffff;
                    uVar27 = 1;
LAB_030dcd18:
                    *(undefined1 *)(puVar62 + -0x14) = uVar27;
                    iVar47 = *(int *)(puVar62 + -0xc);
                    if (iVar47 < iVar13) {
                      *(int *)(puVar62 + -0xc) = iVar13;
                      memset((void *)(*(long *)(puVar62 + -0x10) + (long)iVar47 * 4),0,
                             (ulong)(uint)((iVar13 + -1) - iVar47) * 4 + 4);
                    }
                    else if (iVar13 < iVar47) {
                      *(int *)(puVar62 + -0xc) = iVar13;
                    }
                  }
                  else {
                    if (bVar7 == 2) {
                      iVar47 = *(int *)(local_c0 + (long)*(int *)(puVar66 + 2) * 4);
                      *(uint *)(puVar62 + -0x18) = iVar60 + iVar32 + *(int *)(puVar66 + 2) | uVar44;
                      *(uint *)(puVar62 + -0x16) = iVar11 + iVar10 + iVar47 | uVar44;
                      uVar27 = 2;
                      goto LAB_030dcd18;
                    }
                    lVar52 = *(long *)(lVar73 + 0x20);
                    iVar45 = *(int *)(puVar66 + 2);
                    iVar47 = *piVar36 + iVar45;
                    iVar46 = iVar47 - *(int *)(lVar52 + 0x30);
                    if (iVar47 < *(int *)(lVar52 + 0x30)) {
                      lVar54 = *(long *)(lVar52 + 0x28);
                      iVar46 = iVar47;
                      if (*(int *)(lVar52 + 0x78) != 0) {
                        iVar46 = *(int *)(*(long *)(lVar52 + 0x70) + (long)iVar47 * 4);
                      }
                      if (iVar46 != -1) {
                        plVar40 = (long *)(lVar52 + 0xc0);
                        goto LAB_030dcdac;
                      }
                      iVar46 = iVar47;
                    }
                    else {
                      plVar40 = (long *)(lVar52 + 0xe0);
LAB_030dcdac:
                      lVar54 = *plVar40;
                    }
                    *(byte *)(puVar62 + -0x14) =
                         *(byte *)(lVar54 + (long)iVar46 * 0x14 + 0x10) & 0x40 | 4;
                    lVar52 = *(long *)(lVar73 + 0x20);
                    iVar46 = *(int *)(lVar52 + 0x60);
                    if (iVar47 < *(int *)(lVar52 + 0x30)) {
                      lVar54 = *(long *)(lVar52 + 0x58);
                      if (*(int *)(lVar52 + 0x78) == 0) {
                        iVar56 = iVar47;
                      }
                      else {
                        iVar56 = *(int *)(*(long *)(lVar52 + 0x70) + (long)iVar47 * 4);
                      }
                      if (iVar56 != -1) {
                        lVar54 = *(long *)(lVar52 + 0x130);
                        iVar47 = iVar56;
                      }
                    }
                    else {
                      lVar54 = *(long *)(lVar52 + 0x150);
                      iVar47 = iVar47 - *(int *)(lVar52 + 0x30);
                    }
                    if ((int)(*(uint *)(puVar62 + -10) & 0x7fffffff) < iVar46) {
                      FUN_02f5f190(puVar62 + -0x10,PTR_PTR_047d1a50,(long)iVar46);
                    }
                    memcpy(*(void **)(puVar62 + -0x10),
                           (void *)(lVar54 + (long)(iVar47 * iVar46) * 4),(long)iVar46 << 2);
                    *puVar62 = (short)iVar45;
                    *(int *)(puVar62 + -0xc) = iVar46;
                  }
                  lVar58 = lVar58 + 1;
                  lVar70 = lVar70 + 8;
                  puVar62 = puVar62 + 0x20;
                } while (uVar67 + lVar58 < uVar4);
                iVar23 = iVar23 + (int)lVar58;
              }
              uVar67 = (ulong)uVar17 + (ulong)uVar29;
              local_1d0 = local_1d0 + 1;
              if (uVar17 != 0) {
                uVar63 = (ulong)uVar29;
                lVar58 = uVar63 << 3;
                psVar72 = (short *)(lVar49 + 0x38 + (long)(int)uVar59 * 0x40);
                do {
                  puVar66 = (ushort *)(*(long *)(lVar33 + 0x38) + lVar58);
                  uVar19 = *puVar66;
                  uVar17 = puVar66[1];
                  psVar72[-0x18] = -1;
                  psVar72[-0x17] = -1;
                  psVar72[-0x16] = -1;
                  psVar72[-0x15] = -1;
                  *(uint *)(psVar72 + -0x1c) = iVar28 + (uint)uVar19;
                  *(uint *)(psVar72 + -0x1a) = iVar28 + (uint)uVar17;
                  psVar72[-0x14] = 4;
                  psVar72[-0x13] = 0;
                  uVar19 = puVar66[3];
                  if ((uint)uVar19 < (uint)*(ushort *)((long)piVar36 + 10)) {
                    iVar45 = piVar36[1] + (uint)uVar19;
                    lVar70 = *(long *)(lVar73 + 0x20);
                    iVar47 = *(int *)(lVar70 + 0x60);
                    iVar46 = iVar45 - *(int *)(lVar70 + 0x30);
                    if (iVar45 < *(int *)(lVar70 + 0x30)) {
                      if (*(int *)(lVar70 + 0x78) == 0) {
                        iVar46 = iVar45;
                      }
                      else {
                        iVar46 = *(int *)(*(long *)(lVar70 + 0x70) + (long)iVar45 * 4);
                      }
                      if (iVar46 == -1) {
                        __src = (void *)(*(long *)(lVar70 + 0x58) + (long)(iVar47 * iVar45) * 4);
                        lVar70 = *(long *)(lVar70 + 0x28) + (long)iVar45 * 0x14;
                      }
                      else {
                        __src = (void *)(*(long *)(lVar70 + 0x130) + (long)(iVar46 * iVar47) * 4);
                        lVar70 = *(long *)(lVar70 + 0xc0) + (long)iVar46 * 0x14;
                      }
                    }
                    else {
                      __src = (void *)(*(long *)(lVar70 + 0x150) + (long)(iVar47 * iVar46) * 4);
                      lVar70 = *(long *)(lVar70 + 0xe0) + (long)iVar46 * 0x14;
                    }
                  }
                  else {
                    iVar47 = (uint)uVar19 - (int)(short)*(ushort *)((long)piVar36 + 10);
                    lVar70 = *local_170 + (long)iVar47 * 0x14;
                    __src = (void *)(local_170[2] + (long)(iVar47 * iVar13) * 4);
                    iVar47 = iVar13;
                  }
                  *(byte *)(psVar72 + -0x14) = *(byte *)(lVar70 + 0x10) & 0x60 | 0x14;
                  psVar72[-0x13] = *(short *)(lVar70 + 0x12);
                  if ((int)(*(uint *)(psVar72 + -10) & 0x7fffffff) < iVar47) {
                    FUN_02f5f190(psVar72 + -0x10,PTR_PTR_047d1a50,(long)iVar47);
                  }
                  memcpy(*(void **)(psVar72 + -0x10),__src,(long)iVar47 << 2);
                  *(int *)(psVar72 + -0xc) = iVar47;
                  uVar63 = uVar63 + 1;
                  lVar58 = lVar58 + 8;
                  uVar59 = (ulong)((int)uVar59 + 1);
                  *psVar72 = puVar66[3] + (short)piVar36[2];
                  psVar72 = psVar72 + 0x20;
                } while (uVar63 < uVar67);
              }
              puVar61 = puVar61 + 3;
              uVar30 = (uint)uVar4;
              uVar29 = (uint)uVar67;
            } while (puVar61 != puVar39);
          }
          FUN_0308f9c4(lVar73,lVar49,uVar48);
          local_f0 = CONCAT44(local_f0._4_4_,iVar51);
          FUN_0308f710(lVar73,&local_f0,lVar38,local_1d0 & 0xffffffff);
          if ((int)local_1d0 != 0) {
            lVar33 = (local_1d0 & 0xffffffff) * 0x38;
            do {
              lVar58 = lVar38 + lVar33;
              *(undefined4 *)(lVar58 + -0x18) = 0;
              if ((-1 < (int)*(uint *)(lVar58 + -0x14)) && (*(long *)(lVar58 + -0x20) != 0)) {
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                          (PTR_PTR_047d1a50,*(long *)(lVar58 + -0x20),
                           (ulong)*(uint *)(lVar58 + -0x14) << 2);
              }
              lVar33 = lVar33 + -0x38;
              *(undefined8 *)(lVar58 + -0x20) = 0;
              *(undefined4 *)(lVar58 + -0x14) = 0x80000000;
            } while (lVar33 != 0);
          }
          if (local_2d0 == 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar38,local_2f8);
          }
          else {
            uVar35 = local_2f8 + 0x3f & 0xffffffffffffffc0;
            if ((*(ulong *)(local_2d0 + 0x28) < uVar35) ||
               (*(long *)(local_2d0 + 0x38) != uVar35 + lVar38)) {
              if (lVar38 != 0) {
                if (*(ulong *)(local_2d0 + 0x28) < uVar35 + 0x40) {
                  *(int *)(*(long *)(local_2d0 + 0x30) + 0x20) =
                       *(int *)(*(long *)(local_2d0 + 0x30) + 0x20) + -1;
                  (**(code **)(**(long **)(local_2d0 + 0x10) + 0x18))
                            (*(long **)(local_2d0 + 0x10),lVar38 - *(int *)(lVar38 + -4),
                             uVar35 + 0x44);
                }
                else {
                  if (*(long *)(local_2d0 + 0x38) == uVar35 + lVar38) {
                    *(long *)(local_2d0 + 0x38) = lVar38;
                    goto LAB_030dd208;
                  }
                  FUN_031cf778(local_2d0,lVar38);
                }
              }
            }
            else {
              *(long *)(local_2d0 + 0x38) = lVar38;
              if (*(long *)(local_2d0 + 0x48) == lVar38) {
LAB_030dd208:
                FUN_031cf578(local_2d0);
              }
            }
          }
          if ((int)local_2f0 != 0) {
            uVar35 = -(local_2f0 >> 0x1f) & 0xffffffc000000000 | local_2f0 << 6;
            do {
              lVar33 = lVar49 + uVar35;
              *(undefined4 *)(lVar33 + -0x20) = 0;
              if ((-1 < (int)*(uint *)(lVar33 + -0x1c)) && (*(long *)(lVar33 + -0x28) != 0)) {
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                          (PTR_PTR_047d1a50,*(long *)(lVar33 + -0x28),
                           (ulong)*(uint *)(lVar33 + -0x1c) << 2);
              }
              uVar35 = uVar35 - 0x40;
              *(undefined8 *)(lVar33 + -0x28) = 0;
              *(undefined4 *)(lVar33 + -0x1c) = 0x80000000;
            } while (uVar35 != 0);
          }
          if ((lVar49 != 0) && (-1 < (int)local_2e4)) {
            (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                      (PTR_PTR_047d1a50 + 0x20,lVar49,(ulong)local_2e4 << 6);
          }
          if (local_2c0 == 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_2d8,local_2e0);
          }
          else {
            uVar35 = local_2e0 + 0x3f & 0xffffffffffffffc0;
            if ((*(ulong *)(local_2c0 + 0x28) < uVar35) ||
               (*(long *)(local_2c0 + 0x38) != uVar35 + local_2d8)) {
              if (local_2d8 != 0) {
                if (*(ulong *)(local_2c0 + 0x28) < uVar35 + 0x40) {
                  *(int *)(*(long *)(local_2c0 + 0x30) + 0x20) =
                       *(int *)(*(long *)(local_2c0 + 0x30) + 0x20) + -1;
                  (**(code **)(**(long **)(local_2c0 + 0x10) + 0x18))
                            (*(long **)(local_2c0 + 0x10),local_2d8 - *(int *)(local_2d8 + -4),
                             uVar35 + 0x44);
                }
                else {
                  if (*(long *)(local_2c0 + 0x38) == uVar35 + local_2d8) {
                    *(long *)(local_2c0 + 0x38) = local_2d8;
                    goto LAB_030dd34c;
                  }
                  FUN_031cf778();
                }
              }
            }
            else {
              *(long *)(local_2c0 + 0x38) = local_2d8;
              if (*(long *)(local_2c0 + 0x48) == local_2d8) {
LAB_030dd34c:
                FUN_031cf578();
              }
            }
          }
        }
        lVar33 = uStack_b8;
        uVar35 = (ulong)uStack_b8._4_4_;
        uStack_b8 = (ulong)uStack_b8._4_4_ << 0x20;
        if ((-1 < lVar33) && (local_c0 != 0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_c0,uVar35 << 2);
        }
        break;
      case 1:
        iVar28 = *piVar65;
        if (*(char *)(lVar73 + 0x30) == '\x01') {
          lVar58 = *plVar5;
          lVar33 = lVar58;
        }
        else {
          lVar58 = FUN_0307d71c(plVar5);
          lVar33 = *(long *)(lVar73 + 0x20);
        }
        local_c0 = CONCAT44(local_c0._4_4_,iVar28);
        if ((*(int *)(lVar33 + 0x108) == 0) ||
           ((*(byte *)(*(long *)(lVar33 + 0x100) + (long)iVar28) >> 3 & 1) == 0)) {
          plVar40 = (long *)0x0;
        }
        else {
          lVar49 = FUN_03095288((long *)(lVar33 + 0x188),&local_c0);
          if (lVar49 == 0) {
            uVar30 = 0;
            uVar44 = 0xffffffff;
          }
          else {
            uVar44 = *(uint *)(lVar49 + 4);
            uVar30 = ((int)lVar49 - (int)*(undefined8 *)(lVar33 + 0x198)) * 0x20000000;
          }
          plVar40 = (long *)(*(long *)(lVar33 + 0x188) + (long)(int)(uVar44 | uVar30) * 0x38 + 8);
        }
        if ((int)plVar40[1] == 0) {
          iVar51 = 0;
        }
        else {
          uVar59 = (long)(int)plVar40[1] * 0x14 - 0x14;
          lVar33 = *plVar40;
          uVar35 = uVar59 / 0x14 + 1;
          uVar48 = uVar35 & 3;
          if (uVar59 < 0x3c) {
            iVar51 = 0;
          }
          else {
            iVar51 = 0;
            lVar49 = -(uVar35 & 0x1ffffffffffffffc);
            do {
              pbVar37 = (byte *)(lVar33 + 0x10);
              pbVar1 = (byte *)(lVar33 + 0x24);
              pbVar2 = (byte *)(lVar33 + 0x38);
              pbVar3 = (byte *)(lVar33 + 0x4c);
              lVar33 = lVar33 + 0x50;
              iVar51 = iVar51 + ((*pbVar37 >> 3 ^ 0xffffffff) & 1) +
                       ((*pbVar1 >> 3 ^ 0xffffffff) & 1) + ((*pbVar2 >> 3 ^ 0xffffffff) & 1) +
                       ((*pbVar3 >> 3 ^ 0xffffffff) & 1);
              lVar49 = lVar49 + 4;
            } while (lVar49 != 0);
          }
          if (uVar48 != 0) {
            lVar49 = -uVar48;
            pbVar37 = (byte *)(lVar33 + 0x10);
            do {
              iVar51 = iVar51 + ((*pbVar37 >> 3 ^ 0xffffffff) & 1);
              bVar25 = lVar49 != -1;
              lVar49 = lVar49 + 1;
              pbVar37 = pbVar37 + 0x14;
            } while (bVar25);
          }
        }
        local_f0 = CONCAT44(local_f0._4_4_,iVar28);
        FUN_030de590(&local_c0,lVar73,&local_f0,iVar51);
        iVar32 = (int)plVar40[1];
        if (0 < iVar32) {
          lVar49 = 0;
          lVar70 = 0;
          lVar33 = 0;
          lVar52 = *(long *)(lVar73 + 0x20);
          lVar38 = *(long *)(lVar52 + 0x18) + (long)iVar28 * 0x10;
          sVar15 = *(short *)(lVar38 + 8);
          sVar16 = *(short *)(lVar38 + 10);
          lVar38 = *(long *)(lVar52 + 0xd0) + (long)(int)local_c0 * 0x10;
          iVar28 = ((*(int *)(lVar38 + 4) - iVar51) - *(int *)(lVar52 + 0x30)) +
                   (int)*(short *)(lVar38 + 10);
          iVar51 = *(int *)(lVar52 + 0x60);
          do {
            puVar55 = (undefined4 *)(*plVar40 + lVar49);
            if ((*(byte *)(puVar55 + 4) >> 3 & 1) == 0) {
              iVar32 = *(int *)(lVar58 + 0x60);
              lVar52 = *(long *)(lVar58 + 0x150);
              puVar53 = (undefined4 *)(*(long *)(lVar58 + 0xe0) + (long)iVar28 * 0x14);
              lVar38 = plVar40[2];
              *puVar53 = *puVar55;
              puVar53[1] = puVar55[1];
              uVar26 = *(undefined8 *)(puVar55 + 2);
              *(undefined2 *)(puVar53 + 4) = *(undefined2 *)(puVar55 + 4);
              *(undefined8 *)(puVar53 + 2) = uVar26;
              *(undefined2 *)((long)puVar53 + 0x12) = *(undefined2 *)((long)puVar55 + 0x12);
              memcpy((void *)(lVar52 + (long)(iVar32 * iVar28) * 4),(void *)(lVar38 + lVar70),
                     (long)iVar32 << 2);
              *(short *)(*(long *)(lVar58 + 0x110) + (long)iVar28 * 2) =
                   sVar16 + sVar15 + (short)lVar33;
              iVar32 = (int)plVar40[1];
              iVar28 = iVar28 + 1;
            }
            lVar33 = lVar33 + 1;
            lVar70 = lVar70 + (long)iVar51 * 4;
            lVar49 = lVar49 + 0x14;
          } while (lVar33 < iVar32);
        }
        break;
      case 2:
        local_130[0] = *piVar65;
        FUN_030de590(&local_c0,lVar73,local_130,0);
        break;
      case 3:
        break;
      default:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_030d9db8(param_2 + 0xb8,piVar65);
      iVar28 = *(int *)PTR_DAT_047e4f38;
      lVar33 = *(long *)(lVar22 + 0x1000b8);
      if (lVar33 == 0) {
        lVar33 = FUN_00e5d3b4();
        *(long *)(lVar22 + 0x1000b8) = lVar33;
      }
      if (*(long *)(lVar33 + (long)iVar28 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      if (0 < iVar20) {
        local_138[0] = *piVar65;
        FUN_03096684(lVar73,local_138,&local_c0);
        lVar33 = *(long *)(lVar22 + 0x1000b8);
        if (lVar33 == 0) {
          lVar33 = FUN_00e5d3b4();
          *(long *)(lVar22 + 0x1000b8) = lVar33;
        }
        lVar33 = *(long *)(lVar33 + 0x3e0);
        puVar50 = *(undefined8 **)(lVar33 + 0x10);
        if (puVar50 != (undefined8 *)0x0) {
          plVar40 = (long *)((long)puVar50 + 0x13U & 0xfffffffffffffffc);
          uVar35 = (long)plVar40 + 0x13U & 0xfffffffffffffff8;
          if (uVar35 <= *(ulong *)(lVar33 + 0x18)) {
            *(ulong *)(lVar33 + 0x10) = uVar35;
            *puVar50 = &DAT_03c1a9df;
            puVar50[1] = PTR_DAT_047e4f58;
            if (plVar40 != (long *)0x0) {
              *plVar40 = local_c0;
              *(int *)(plVar40 + 1) = (int)uStack_b8;
            }
          }
        }
      }
      if (plVar57 != (long *)0x0) {
        lVar33 = *plVar57;
        if (((*(byte *)(lVar33 + 0x38) & 1) != 0) && (plVar57[6] != 0)) {
          puVar50 = (undefined8 *)plVar57[2];
          uVar35 = (long)puVar50 + 0x17U & 0xfffffffffffffff8;
          if ((uVar35 <= (ulong)plVar57[3]) && (plVar57[2] = uVar35, puVar50 != (undefined8 *)0x0))
          {
            *puVar50 = &DAT_03c4e575;
            puVar50[1] = *(undefined8 *)(plVar57[6] + 8);
          }
        }
        puVar50 = (undefined8 *)plVar57[2];
        uVar35 = (long)puVar50 + 0x17U & 0xfffffffffffffff8;
        if ((uVar35 <= (ulong)plVar57[3]) && (plVar57[2] = uVar35, puVar50 != (undefined8 *)0x0)) {
          *puVar50 = &DAT_03c2d363;
          uVar26 = nn::os::GetSystemTick();
          puVar50[1] = uVar26;
        }
        if (*(code **)(lVar33 + 0x20) != (code *)0x0) {
          (**(code **)(lVar33 + 0x20))(*(undefined8 *)(lVar33 + 0x28));
        }
      }
      puVar64 = puVar64 + 0xc;
    } while (puVar64 != puVar34);
  }
  if (*(int *)(param_5 + 3) != 0) {
    puVar69 = (uint *)param_5[2];
    plVar5 = (long *)(lVar73 + 0x20);
    lVar33 = param_2 + 0xb8;
    puVar6 = puVar69 + (long)*(int *)(param_5 + 3) * 4;
    do {
      lVar58 = *(long *)(lVar22 + 0x1000b8);
      if (lVar58 == 0) {
        lVar58 = FUN_00e5d3b4();
        *(long *)(lVar22 + 0x1000b8) = lVar58;
      }
      plVar57 = *(long **)(lVar58 + 0x3e0);
      if (plVar57 != (long *)0x0) {
        lVar58 = *plVar57;
        if (*(code **)(lVar58 + 0x18) != (code *)0x0) {
          (**(code **)(lVar58 + 0x18))("updateOneEdge",0xd,*(undefined8 *)(lVar58 + 0x28));
        }
        puVar50 = (undefined8 *)plVar57[2];
        uVar35 = (long)puVar50 + 0x17U & 0xfffffffffffffff8;
        if ((uVar35 <= (ulong)plVar57[3]) && (plVar57[2] = uVar35, puVar50 != (undefined8 *)0x0)) {
          *puVar50 = "TtupdateOneEdge";
          uVar26 = nn::os::GetSystemTick();
          puVar50[1] = uVar26;
        }
        if (((*(byte *)(lVar58 + 0x38) & 1) != 0) && (plVar57[6] != 0)) {
          puVar50 = (undefined8 *)plVar57[2];
          uVar35 = (long)puVar50 + 0x17U & 0xfffffffffffffff8;
          if ((uVar35 <= (ulong)plVar57[3]) && (plVar57[2] = uVar35, puVar50 != (undefined8 *)0x0))
          {
            *puVar50 = &DAT_03c4e575;
            puVar50[1] = *(undefined8 *)(plVar57[6] + 8);
          }
        }
      }
      switch((char)puVar69[3]) {
      case '\0':
        FUN_030dea74(lVar73,puVar69);
        break;
      case '\x01':
        FUN_030dec10(param_2,lVar73,puVar69);
        break;
      case '\x02':
        if (*(char *)(lVar73 + 0x30) == '\x01') {
          lVar58 = *plVar5;
        }
        else {
          lVar58 = FUN_0307d71c(plVar5);
        }
        local_118 = 0;
        local_110 = 0x8000000000000000;
        local_108 = 0;
        local_100 = 0x8000000000000000;
        local_c8[0] = *puVar69;
        local_d0[0] = (undefined2)puVar69[2];
        FUN_030df010(param_2,lVar73,local_c8,local_d0);
        local_120[0] = *puVar69;
        local_128[0] = (undefined2)puVar69[2];
        FUN_030df1a8(lVar73,local_120,local_128,&local_118,0);
        uVar35 = local_118;
        uVar48 = local_110 & 0xffffffff;
        if (0 < (int)local_110) {
          uVar59 = 0;
          do {
            iVar28 = *(int *)(uVar35 + uVar59 * 8 + 4);
            iVar51 = iVar28 - *(int *)(lVar58 + 0x30);
            if (iVar28 < *(int *)(lVar58 + 0x30)) {
              if (*(int *)(lVar58 + 0x78) == 0) {
                iVar51 = iVar28;
              }
              else {
                iVar51 = *(int *)(*(long *)(lVar58 + 0x70) + (long)iVar28 * 4);
              }
              plVar40 = (long *)(lVar58 + 0xc0);
              if (iVar51 != -1) goto LAB_030dd784;
              lVar49 = 0;
            }
            else {
              plVar40 = (long *)(lVar58 + 0xe0);
LAB_030dd784:
              lVar49 = *plVar40 + (long)iVar51 * 0x14;
            }
            *(undefined8 *)(lVar49 + 8) = 0xffffffffffffffff;
            if (*(int *)(lVar73 + 0x40) != 0) {
              uVar9 = *(undefined4 *)(uVar35 + uVar59 * 8);
              lVar49 = (long)*(int *)(lVar73 + 0x40) * 0x18;
              plVar40 = *(long **)(lVar73 + 0x38);
              do {
                lVar38 = *plVar40;
                if (lVar38 != 0) {
                  if ((char)plVar40[2] != '\x01') {
                    lVar38 = FUN_03065a74(plVar40);
                  }
                  local_c0 = CONCAT44(local_c0._4_4_,uVar9);
                  FUN_03077488(lVar38,lVar73,&local_c0);
                }
                plVar40 = plVar40 + 3;
                lVar49 = lVar49 + -0x18;
              } while (lVar49 != 0);
            }
            uVar59 = uVar59 + 1;
          } while (uVar59 != uVar48);
        }
        local_c8[0] = puVar69[1];
        local_d0[0] = *(undefined2 *)((long)puVar69 + 10);
        FUN_030df010(param_2,lVar73,local_c8,local_d0);
        local_120[0] = puVar69[1];
        local_128[0] = *(undefined2 *)((long)puVar69 + 10);
        FUN_030df1a8(lVar73,local_120,local_128,&local_108,0);
        lVar49 = local_108;
        lVar38 = (long)(int)local_100;
        if (0 < (int)local_100) {
          uVar35 = 0;
          uVar48 = local_100 & 0xffffffff;
          do {
            iVar28 = *(int *)(lVar49 + uVar35 * 8 + 4);
            iVar51 = iVar28 - *(int *)(lVar58 + 0x30);
            if (iVar28 < *(int *)(lVar58 + 0x30)) {
              if (*(int *)(lVar58 + 0x78) == 0) {
                iVar51 = iVar28;
              }
              else {
                iVar51 = *(int *)(*(long *)(lVar58 + 0x70) + (long)iVar28 * 4);
              }
              plVar40 = (long *)(lVar58 + 0xc0);
              if (iVar51 != -1) goto LAB_030dd8c0;
              lVar70 = 0;
            }
            else {
              plVar40 = (long *)(lVar58 + 0xe0);
LAB_030dd8c0:
              lVar70 = *plVar40 + (long)iVar51 * 0x14;
            }
            *(undefined8 *)(lVar70 + 8) = 0xffffffffffffffff;
            if (*(int *)(lVar73 + 0x40) != 0) {
              uVar9 = *(undefined4 *)(lVar49 + uVar35 * 8);
              lVar70 = (long)*(int *)(lVar73 + 0x40) * 0x18;
              plVar40 = *(long **)(lVar73 + 0x38);
              do {
                lVar52 = *plVar40;
                if (lVar52 != 0) {
                  if ((char)plVar40[2] != '\x01') {
                    lVar52 = FUN_03065a74(plVar40);
                  }
                  local_c0 = CONCAT44(local_c0._4_4_,uVar9);
                  FUN_03077488(lVar52,lVar73,&local_c0);
                }
                plVar40 = plVar40 + 3;
                lVar70 = lVar70 + -0x18;
              } while (lVar70 != 0);
            }
            uVar35 = uVar35 + 1;
          } while (uVar35 != uVar48);
        }
        lVar58 = local_108;
        uVar35 = local_118;
        lVar49 = *(long *)(lVar73 + 0x20);
        uVar44 = *puVar69;
        iVar28 = *(int *)(lVar49 + 0x20);
        lVar70 = *(long *)(lVar49 + 0x18);
        if ((int)uVar44 < iVar28) {
          uVar30 = uVar44;
          if (*(int *)(lVar49 + 0x98) != 0) {
            uVar30 = *(uint *)(*(long *)(lVar49 + 0x90) + (long)(int)uVar44 * 4);
          }
          lVar52 = lVar70;
          if (uVar30 != 0xffffffff) {
            plVar40 = (long *)(lVar49 + 0xb0);
            uVar44 = uVar30;
            goto LAB_030ddb30;
          }
        }
        else {
          plVar40 = (long *)(lVar49 + 0xd0);
          uVar44 = uVar44 - iVar28;
LAB_030ddb30:
          lVar52 = *plVar40;
        }
        uVar19 = (ushort)puVar69[2];
        sVar15 = *(short *)(lVar52 + (long)(int)uVar44 * 0x10 + 8);
        if ((short)uVar19 < sVar15) {
          iVar51 = *(int *)(lVar52 + (long)(int)uVar44 * 0x10) + (uint)uVar19;
        }
        else {
          iVar51 = *(int *)(lVar52 + (long)(int)uVar44 * 0x10 + 4) +
                   ((uint)uVar19 - (int)sVar15 & 0xffff);
        }
        uVar44 = puVar69[1];
        if ((int)uVar44 < iVar28) {
          uVar30 = uVar44;
          if (*(int *)(lVar49 + 0x98) != 0) {
            uVar30 = *(uint *)(*(long *)(lVar49 + 0x90) + (long)(int)uVar44 * 4);
          }
          if (uVar30 != 0xffffffff) {
            plVar40 = (long *)(lVar49 + 0xb0);
            uVar44 = uVar30;
            goto LAB_030ddbb0;
          }
        }
        else {
          plVar40 = (long *)(lVar49 + 0xd0);
          uVar44 = uVar44 - iVar28;
LAB_030ddbb0:
          lVar70 = *plVar40;
        }
        uVar19 = *(ushort *)((long)puVar69 + 10);
        sVar15 = *(short *)(lVar70 + (long)(int)uVar44 * 0x10 + 8);
        if ((short)uVar19 < sVar15) {
          iVar28 = *(int *)(lVar70 + (long)(int)uVar44 * 0x10) + (uint)uVar19;
        }
        else {
          iVar28 = *(int *)(lVar70 + (long)(int)uVar44 * 0x10 + 4) +
                   ((uint)uVar19 - (int)sVar15 & 0xffff);
        }
        iVar32 = *(int *)(lVar49 + 0x30);
        lVar70 = *(long *)(lVar49 + 0x28);
        if (iVar51 < iVar32) {
          iVar60 = iVar51;
          if (*(int *)(lVar49 + 0x78) != 0) {
            iVar60 = *(int *)(*(long *)(lVar49 + 0x70) + (long)iVar51 * 4);
          }
          lVar52 = lVar70;
          if (iVar60 != -1) {
            plVar40 = (long *)(lVar49 + 0xc0);
            iVar51 = iVar60;
            goto LAB_030ddc40;
          }
        }
        else {
          plVar40 = (long *)(lVar49 + 0xe0);
          iVar51 = iVar51 - iVar32;
LAB_030ddc40:
          lVar52 = *plVar40;
        }
        piVar65 = (int *)(lVar52 + (long)iVar51 * 0x14);
        iVar10 = *(int *)(lVar49 + 0x40);
        iVar51 = *piVar65;
        iVar60 = piVar65[1];
        lVar52 = 0x38;
        if (iVar10 <= iVar51) {
          lVar52 = 0xf0;
        }
        iVar11 = 0;
        if (iVar10 <= iVar51) {
          iVar11 = iVar10;
        }
        lVar54 = 0x38;
        if (iVar10 <= iVar60) {
          lVar54 = 0xf0;
        }
        plVar40 = (long *)(*(long *)(lVar49 + lVar52) + (long)(iVar51 - iVar11) * 0x10);
        uStack_b8 = plVar40[1];
        local_c0 = *plVar40;
        iVar51 = 0;
        if (iVar10 <= iVar60) {
          iVar51 = iVar10;
        }
        puVar50 = (undefined8 *)(*(long *)(lVar49 + lVar54) + (long)(iVar60 - iVar51) * 0x10);
        uStack_a8 = puVar50[1];
        local_b0 = *puVar50;
        if (iVar28 < iVar32) {
          iVar51 = iVar28;
          if (*(int *)(lVar49 + 0x78) != 0) {
            iVar51 = *(int *)(*(long *)(lVar49 + 0x70) + (long)iVar28 * 4);
          }
          if (iVar51 != -1) {
            plVar40 = (long *)(lVar49 + 0xc0);
            iVar28 = iVar51;
            goto LAB_030ddcd4;
          }
        }
        else {
          plVar40 = (long *)(lVar49 + 0xe0);
          iVar28 = iVar28 - iVar32;
LAB_030ddcd4:
          lVar70 = *plVar40;
        }
        piVar65 = (int *)(lVar70 + (long)iVar28 * 0x14);
        iVar28 = *piVar65;
        iVar51 = piVar65[1];
        lVar70 = 0x38;
        if (iVar10 <= iVar28) {
          lVar70 = 0xf0;
        }
        iVar32 = 0;
        if (iVar10 <= iVar28) {
          iVar32 = iVar10;
        }
        iVar60 = 0;
        if (iVar10 <= iVar51) {
          iVar60 = iVar10;
        }
        puVar21 = (ulong *)(*(long *)(lVar49 + lVar70) + (long)(iVar28 - iVar32) * 0x10);
        uStack_e8 = puVar21[1];
        local_f0 = *puVar21;
        lVar70 = 0x38;
        if (iVar10 <= iVar51) {
          lVar70 = 0xf0;
        }
        puVar50 = (undefined8 *)(*(long *)(lVar49 + lVar70) + (long)(iVar51 - iVar60) * 0x10);
        uStack_d8 = puVar50[1];
        uStack_e0 = *puVar50;
        local_f8 = local_f8 & 0xffff0000;
        local_f4 = param_1;
        FUN_030eae80(*(undefined8 *)(param_2 + 0x18),lVar73,lVar73,&local_c0,&local_f0,local_118,
                     local_118 + (long)(int)local_110 * 8,in_x7,local_108,local_108 + lVar38 * 8,
                     &local_f8);
        FUN_030d9db8(lVar33,puVar69);
        FUN_030d9db8(lVar33,puVar69 + 1);
        uVar59 = local_100;
        uVar48 = local_100 >> 0x20;
        local_100 = uVar48 << 0x20;
        if ((lVar58 != 0) && (-1 < (long)uVar59)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,lVar58,uVar48 << 3);
        }
        uVar48 = local_110;
        local_108 = 0;
        uVar44 = (uint)(local_110 >> 0x20);
        local_110 = local_110 & 0xffffffff00000000;
        local_100 = CONCAT44(0x80000000,(int)local_100);
        if ((uVar35 != 0) && (-1 < (long)uVar48)) {
          plVar40 = (long *)(PTR_PTR_047d1a50 + 0x20);
          pcVar41 = *(code **)(*plVar40 + 0x20);
LAB_030de198:
          local_108 = 0;
          (*pcVar41)(plVar40,uVar35,(ulong)uVar44 << 3);
        }
        break;
      case '\x03':
        if (*(char *)(lVar73 + 0x30) == '\x01') {
          lVar58 = *plVar5;
        }
        else {
          lVar58 = FUN_0307d71c(plVar5);
        }
        local_118 = 0;
        local_110 = 0x8000000000000000;
        local_108 = 0;
        local_100 = 0x8000000000000000;
        local_f8 = *puVar69;
        local_120[0] = CONCAT22(local_120[0]._2_2_,(short)puVar69[2]);
        FUN_030df010(param_2,lVar73,&local_f8,local_120);
        local_c8[0] = *puVar69;
        local_d0[0] = (undefined2)puVar69[2];
        FUN_030df1a8(lVar73,local_c8,local_d0,&local_118,0);
        uVar35 = local_118;
        uVar48 = local_110 & 0xffffffff;
        if (0 < (int)local_110) {
          uVar59 = 0;
          do {
            iVar28 = *(int *)(uVar35 + uVar59 * 8 + 4);
            iVar51 = iVar28 - *(int *)(lVar58 + 0x30);
            if (iVar28 < *(int *)(lVar58 + 0x30)) {
              if (*(int *)(lVar58 + 0x78) == 0) {
                iVar51 = iVar28;
              }
              else {
                iVar51 = *(int *)(*(long *)(lVar58 + 0x70) + (long)iVar28 * 4);
              }
              plVar40 = (long *)(lVar58 + 0xc0);
              if (iVar51 != -1) goto LAB_030dda64;
              lVar49 = 0;
            }
            else {
              plVar40 = (long *)(lVar58 + 0xe0);
LAB_030dda64:
              lVar49 = *plVar40 + (long)iVar51 * 0x14;
            }
            *(undefined8 *)(lVar49 + 8) = 0xffffffffffffffff;
            if (*(int *)(lVar73 + 0x40) != 0) {
              uVar9 = *(undefined4 *)(uVar35 + uVar59 * 8);
              lVar49 = (long)*(int *)(lVar73 + 0x40) * 0x18;
              plVar40 = *(long **)(lVar73 + 0x38);
              do {
                lVar38 = *plVar40;
                if (lVar38 != 0) {
                  if ((char)plVar40[2] != '\x01') {
                    lVar38 = FUN_03065a74(plVar40);
                  }
                  local_f0 = CONCAT44(local_f0._4_4_,uVar9);
                  FUN_03077488(lVar38,lVar73,&local_f0);
                }
                plVar40 = plVar40 + 3;
                lVar49 = lVar49 + -0x18;
              } while (lVar49 != 0);
            }
            uVar59 = uVar59 + 1;
          } while (uVar59 != uVar48);
        }
        uVar44 = *puVar69;
        lVar38 = *(long *)(lVar73 + 0x20);
        lVar49 = *(long *)(lVar38 + 0x18);
        local_f0 = CONCAT44(local_f0._4_4_,uVar44);
        if ((*(int *)(lVar38 + 0x108) == 0) ||
           ((*(byte *)(*(long *)(lVar38 + 0x100) + (long)(int)uVar44) >> 3 & 1) == 0)) {
          plVar40 = (long *)0x0;
        }
        else {
          lVar70 = FUN_03095288((long *)(lVar38 + 0x188),&local_f0);
          if (lVar70 == 0) {
            uVar29 = 0;
            uVar30 = 0xffffffff;
          }
          else {
            uVar30 = *(uint *)(lVar70 + 4);
            uVar29 = ((int)lVar70 - (int)*(undefined8 *)(lVar38 + 0x198)) * 0x20000000;
          }
          plVar40 = (long *)(*(long *)(lVar38 + 0x188) + (long)(int)(uVar30 | uVar29) * 0x38 + 8);
          lVar38 = *(long *)(lVar73 + 0x20);
        }
        lVar49 = lVar49 + (long)(int)uVar44 * 0x10;
        piVar65 = (int *)(*plVar40 +
                         ((ulong)(((uint)(ushort)puVar69[2] - (uint)*(ushort *)(lVar49 + 8)) -
                                 (uint)*(ushort *)(lVar49 + 10)) & 0xffff) * 0x14);
        iVar28 = *(int *)(lVar38 + 0x40);
        iVar51 = *piVar65;
        lVar49 = 0x38;
        if (iVar28 <= iVar51) {
          lVar49 = 0xf0;
        }
        iVar32 = 0;
        if (iVar28 <= iVar51) {
          iVar32 = iVar28;
        }
        plVar40 = (long *)(*(long *)(lVar38 + lVar49) + (long)(iVar51 - iVar32) * 0x10);
        uStack_b8 = plVar40[1];
        local_c0 = *plVar40;
        iVar51 = piVar65[1];
        lVar49 = 0x38;
        if (iVar28 <= iVar51) {
          lVar49 = 0xf0;
        }
        iVar32 = 0;
        if (iVar28 <= iVar51) {
          iVar32 = iVar28;
        }
        puVar50 = (undefined8 *)(*(long *)(lVar38 + lVar49) + (long)(iVar51 - iVar32) * 0x10);
        uStack_a8 = puVar50[1];
        local_b0 = *puVar50;
        local_f8 = puVar69[1];
        local_120[0] = CONCAT22(local_120[0]._2_2_,*(undefined2 *)((long)puVar69 + 10));
        FUN_030df010(param_2,lVar73,&local_f8,local_120);
        local_c8[0] = puVar69[1];
        local_d0[0] = *(undefined2 *)((long)puVar69 + 10);
        FUN_030df1a8(lVar73,local_c8,local_d0,&local_108,0);
        lVar49 = local_108;
        iVar28 = (int)local_100;
        uVar35 = local_100 & 0xffffffff;
        if (0 < (int)local_100) {
          uVar48 = 0;
          do {
            iVar51 = *(int *)(lVar49 + uVar48 * 8 + 4);
            iVar32 = iVar51 - *(int *)(lVar58 + 0x30);
            if (iVar51 < *(int *)(lVar58 + 0x30)) {
              if (*(int *)(lVar58 + 0x78) == 0) {
                iVar32 = iVar51;
              }
              else {
                iVar32 = *(int *)(*(long *)(lVar58 + 0x70) + (long)iVar51 * 4);
              }
              plVar40 = (long *)(lVar58 + 0xc0);
              if (iVar32 != -1) goto LAB_030ddf44;
              lVar38 = 0;
            }
            else {
              plVar40 = (long *)(lVar58 + 0xe0);
LAB_030ddf44:
              lVar38 = *plVar40 + (long)iVar32 * 0x14;
            }
            *(undefined8 *)(lVar38 + 8) = 0xffffffffffffffff;
            if (*(int *)(lVar73 + 0x40) != 0) {
              uVar9 = *(undefined4 *)(lVar49 + uVar48 * 8);
              lVar38 = (long)*(int *)(lVar73 + 0x40) * 0x18;
              plVar40 = *(long **)(lVar73 + 0x38);
              do {
                lVar70 = *plVar40;
                if (lVar70 != 0) {
                  if ((char)plVar40[2] != '\x01') {
                    lVar70 = FUN_03065a74(plVar40);
                  }
                  local_f0 = CONCAT44(local_f0._4_4_,uVar9);
                  FUN_03077488(lVar70,lVar73,&local_f0);
                }
                plVar40 = plVar40 + 3;
                lVar38 = lVar38 + -0x18;
              } while (lVar38 != 0);
            }
            uVar48 = uVar48 + 1;
          } while (uVar48 != uVar35);
        }
        uVar44 = puVar69[1];
        lVar49 = *(long *)(lVar73 + 0x20);
        lVar58 = *(long *)(lVar49 + 0x18);
        local_f0 = CONCAT44(local_f0._4_4_,uVar44);
        if ((*(int *)(lVar49 + 0x108) == 0) ||
           ((*(byte *)(*(long *)(lVar49 + 0x100) + (long)(int)uVar44) >> 3 & 1) == 0)) {
          plVar40 = (long *)0x0;
        }
        else {
          lVar38 = FUN_03095288((long *)(lVar49 + 0x188),&local_f0);
          if (lVar38 == 0) {
            uVar29 = 0;
            uVar30 = 0xffffffff;
          }
          else {
            uVar30 = *(uint *)(lVar38 + 4);
            uVar29 = ((int)lVar38 - (int)*(undefined8 *)(lVar49 + 0x198)) * 0x20000000;
          }
          plVar40 = (long *)(*(long *)(lVar49 + 0x188) + (long)(int)(uVar30 | uVar29) * 0x38 + 8);
          lVar49 = *(long *)(lVar73 + 0x20);
        }
        lVar38 = local_108;
        uVar35 = local_118;
        lVar58 = lVar58 + (long)(int)uVar44 * 0x10;
        piVar65 = (int *)(*plVar40 +
                         ((ulong)(((uint)*(ushort *)((long)puVar69 + 10) -
                                  (uint)*(ushort *)(lVar58 + 8)) - (uint)*(ushort *)(lVar58 + 10)) &
                         0xffff) * 0x14);
        iVar51 = *(int *)(lVar49 + 0x40);
        iVar32 = *piVar65;
        lVar58 = 0x38;
        if (iVar51 <= iVar32) {
          lVar58 = 0xf0;
        }
        iVar60 = 0;
        if (iVar51 <= iVar32) {
          iVar60 = iVar51;
        }
        puVar50 = (undefined8 *)(*(long *)(lVar49 + lVar58) + (long)(iVar32 - iVar60) * 0x10);
        uStack_98 = puVar50[1];
        local_a0 = *puVar50;
        iVar32 = piVar65[1];
        lVar58 = 0x38;
        if (iVar51 <= iVar32) {
          lVar58 = 0xf0;
        }
        iVar60 = 0;
        if (iVar51 <= iVar32) {
          iVar60 = iVar51;
        }
        puVar50 = (undefined8 *)(*(long *)(lVar49 + lVar58) + (long)(iVar32 - iVar60) * 0x10);
        uStack_88 = puVar50[1];
        local_90 = *puVar50;
        local_f0 = CONCAT44(param_1,(int)local_f0) & 0xffffffffffff0000;
        FUN_030eae80(*(undefined8 *)(param_2 + 0x18),lVar73,lVar73,&local_c0,&local_a0,local_118,
                     local_118 + (long)(int)local_110 * 8,in_x7,local_108,
                     local_108 + (long)iVar28 * 8,&local_f0);
        FUN_030d9db8(lVar33,puVar69);
        FUN_030d9db8(lVar33,puVar69 + 1);
        uVar59 = local_100;
        uVar48 = local_100 >> 0x20;
        local_100 = uVar48 << 0x20;
        if ((lVar38 != 0) && (-1 < (long)uVar59)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,lVar38,uVar48 << 3);
        }
        uVar48 = local_110;
        local_108 = 0;
        local_100 = CONCAT44(0x80000000,(int)local_100);
        uVar44 = (uint)(local_110 >> 0x20);
        local_110 = local_110 & 0xffffffff00000000;
        if ((uVar35 != 0) && (-1 < (long)uVar48)) {
          plVar40 = (long *)(PTR_PTR_047d1a50 + 0x20);
          pcVar41 = *(code **)(*plVar40 + 0x20);
          goto LAB_030de198;
        }
        break;
      default:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar28 = *(int *)PTR_DAT_047e4f38;
      lVar58 = *(long *)(lVar22 + 0x1000b8);
      if (lVar58 == 0) {
        lVar58 = FUN_00e5d3b4();
        *(long *)(lVar22 + 0x1000b8) = lVar58;
      }
      if (*(long *)(lVar58 + (long)iVar28 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      if (0 < iVar20) {
        lVar58 = *(long *)(lVar73 + 0x20);
        uVar44 = *puVar69;
        if ((int)uVar44 < *(int *)(lVar58 + 0x20)) {
          lVar49 = *(long *)(lVar58 + 0x18);
          uVar30 = uVar44;
          if (*(int *)(lVar58 + 0x98) != 0) {
            uVar30 = *(uint *)(*(long *)(lVar58 + 0x90) + (long)(int)uVar44 * 4);
          }
          if (uVar30 != 0xffffffff) {
            plVar40 = (long *)(lVar58 + 0xb0);
            uVar44 = uVar30;
            goto LAB_030de22c;
          }
        }
        else {
          plVar40 = (long *)(lVar58 + 0xd0);
          uVar44 = uVar44 - *(int *)(lVar58 + 0x20);
LAB_030de22c:
          lVar49 = *plVar40;
        }
        piVar65 = (int *)(lVar49 + (long)(int)uVar44 * 0x10);
        piVar36 = piVar65 + 1;
        if (*(short *)((long)piVar65 + 10) < 1) {
          piVar36 = piVar65;
        }
        iVar28 = *piVar36 + (uint)(ushort)puVar69[2];
        if (iVar28 < *(int *)(lVar58 + 0x30)) {
          lVar49 = *(long *)(lVar58 + 0x28);
          iVar51 = iVar28;
          if (*(int *)(lVar58 + 0x78) != 0) {
            iVar51 = *(int *)(*(long *)(lVar58 + 0x70) + (long)iVar28 * 4);
          }
          if (iVar51 != -1) {
            plVar40 = (long *)(lVar58 + 0xc0);
            iVar28 = iVar51;
            goto LAB_030de28c;
          }
        }
        else {
          plVar40 = (long *)(lVar58 + 0xe0);
          iVar28 = iVar28 - *(int *)(lVar58 + 0x30);
LAB_030de28c:
          lVar49 = *plVar40;
        }
        piVar65 = (int *)(lVar49 + (long)iVar28 * 0x14);
        iVar32 = *(int *)(lVar58 + 0x40);
        uVar84 = *(undefined8 *)(lVar73 + 0x68);
        uVar83 = *(undefined8 *)(lVar73 + 0x60);
        uVar86 = *(undefined8 *)(lVar73 + 0x78);
        uVar85 = *(undefined8 *)(lVar73 + 0x70);
        uVar88 = *(undefined8 *)(lVar73 + 0x88);
        uVar87 = *(undefined8 *)(lVar73 + 0x80);
        uVar82 = *(undefined8 *)(lVar73 + 0x98);
        uVar26 = *(undefined8 *)(lVar73 + 0x90);
        iVar28 = *piVar65;
        iVar51 = piVar65[1];
        puVar50 = (undefined8 *)(*(long *)(lVar58 + 0x38) + (long)iVar28 * 0x10);
        if (iVar32 <= iVar28) {
          puVar50 = (undefined8 *)(*(long *)(lVar58 + 0xf0) + (long)(iVar28 - iVar32) * 0x10);
        }
        puVar42 = (undefined8 *)(*(long *)(lVar58 + 0x38) + (long)iVar51 * 0x10);
        if (iVar32 <= iVar51) {
          puVar42 = (undefined8 *)(*(long *)(lVar58 + 0xf0) + (long)(iVar51 - iVar32) * 0x10);
        }
        uVar81 = puVar50[1];
        uVar80 = *puVar50;
        uVar79 = puVar42[1];
        uVar76 = *puVar42;
        lVar58 = *(long *)(lVar22 + 0x1000b8);
        if (lVar58 == 0) {
          lVar58 = FUN_00e5d3b4();
          *(long *)(lVar22 + 0x1000b8) = lVar58;
        }
        lVar58 = *(long *)(lVar58 + 0x3e0);
        puVar50 = *(undefined8 **)(lVar58 + 0x10);
        if (puVar50 != (undefined8 *)0x0) {
          puVar42 = (undefined8 *)((long)puVar50 + 0x13U & 0xfffffffffffffffc);
          uVar35 = (long)puVar42 + 0x13U & 0xfffffffffffffff8;
          if (uVar35 <= *(ulong *)(lVar58 + 0x18)) {
            *(ulong *)(lVar58 + 0x10) = uVar35;
            *puVar50 = &DAT_03c1a9df;
            puVar50[1] = PTR_DAT_047e4f58;
            if (puVar42 != (undefined8 *)0x0) {
              fVar75 = (float)uVar80;
              fVar77 = (float)((ulong)uVar80 >> 0x20);
              fVar75 = fVar75 + ((float)uVar76 - fVar75) * 0.5;
              fVar77 = fVar77 + ((float)((ulong)uVar76 >> 0x20) - fVar77) * 0.5;
              fVar78 = (float)uVar81 + ((float)uVar79 - (float)uVar81) * 0.5;
              *puVar42 = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                  (float)((ulong)uVar87 >> 0x20) * fVar78 +
                                  (float)((ulong)uVar83 >> 0x20) * fVar75 +
                                  (float)((ulong)uVar85 >> 0x20) * fVar77,
                                  (float)uVar26 +
                                  (float)uVar87 * fVar78 +
                                  (float)uVar83 * fVar75 + (float)uVar85 * fVar77);
              *(float *)(puVar42 + 1) =
                   (float)uVar82 +
                   (float)uVar88 * fVar78 + (float)uVar84 * fVar75 + (float)uVar86 * fVar77;
            }
          }
        }
      }
      if (plVar57 != (long *)0x0) {
        lVar58 = *plVar57;
        if (((*(byte *)(lVar58 + 0x38) & 1) != 0) && (plVar57[6] != 0)) {
          puVar50 = (undefined8 *)plVar57[2];
          uVar35 = (long)puVar50 + 0x17U & 0xfffffffffffffff8;
          if ((uVar35 <= (ulong)plVar57[3]) && (plVar57[2] = uVar35, puVar50 != (undefined8 *)0x0))
          {
            *puVar50 = &DAT_03c4e575;
            puVar50[1] = *(undefined8 *)(plVar57[6] + 8);
          }
        }
        puVar50 = (undefined8 *)plVar57[2];
        uVar35 = (long)puVar50 + 0x17U & 0xfffffffffffffff8;
        if ((uVar35 <= (ulong)plVar57[3]) && (plVar57[2] = uVar35, puVar50 != (undefined8 *)0x0)) {
          *puVar50 = &DAT_03c2d363;
          uVar26 = nn::os::GetSystemTick();
          puVar50[1] = uVar26;
        }
        if (*(code **)(lVar58 + 0x20) != (code *)0x0) {
          (**(code **)(lVar58 + 0x20))(*(undefined8 *)(lVar58 + 0x28));
        }
      }
      puVar69 = puVar69 + 4;
    } while (puVar69 != puVar6);
  }
  return;
}


