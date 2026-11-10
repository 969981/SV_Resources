/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ec120c; name: FUN_02ec120c
 */


void FUN_02ec120c(long param_1,long param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined2 *puVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 uVar26;
  undefined2 local_138 [8];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  uint local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if (0 < (int)param_3) {
    uVar22 = 0;
    puVar24 = (undefined8 *)((ulong)&local_100 | 4);
    do {
      uVar23 = *(uint *)(param_2 + uVar22 * 4);
      uVar4 = uVar23 >> 8;
      if ((*(uint *)(param_1 + 0x94) != uVar4) || (*(uint *)(param_1 + 0x98) != uVar4)) {
        lVar14 = *(long *)(param_1 + 0x50);
        lVar16 = *(long *)(lVar14 + 0x40);
        *(uint *)(param_1 + 0x94) = uVar4;
        *(uint *)(param_1 + 0x98) = uVar4;
        lVar10 = lVar14 + 0x40 + (ulong)uVar4 * 0x60 + lVar16;
        *(long *)(param_1 + 0x60) = lVar10;
        lVar17 = *(long *)(lVar14 + 0x70);
        lVar16 = 0;
        if (lVar17 != 0) {
          lVar16 = lVar17 + lVar14 + 0x70;
        }
        *(ulong *)(param_1 + 0x70) = lVar16 + (ulong)*(uint *)(lVar10 + 0x48) * 4;
        lVar17 = *(long *)(lVar14 + 0x80);
        lVar16 = 0;
        if (lVar17 != 0) {
          lVar16 = lVar17 + lVar14 + 0x80;
        }
        *(ulong *)(param_1 + 0x78) = lVar16 + (ulong)*(byte *)(lVar10 + 0x5b) * 0x80000;
        lVar17 = *(long *)(lVar14 + 0x60);
        lVar16 = 0;
        if (lVar17 != 0) {
          lVar16 = lVar17 + lVar14 + 0x60;
        }
        lVar16 = lVar16 + (ulong)*(uint *)(lVar10 + 0x4c) * 2;
        *(long *)(param_1 + 0x80) = lVar16;
        lVar19 = *(long *)(lVar14 + 0x90);
        lVar17 = 0;
        if (lVar19 != 0) {
          lVar17 = lVar19 + lVar14 + 0x90;
        }
        *(ulong *)(param_1 + 0x88) = lVar17 + (ulong)*(uint *)(lVar10 + 0x54) * 4;
        *(uint *)(param_1 + 0x90) = (uint)*(byte *)(lVar10 + 0x58);
        lVar19 = *(long *)(lVar14 + 0x50);
        lVar17 = 0;
        if (lVar19 != 0) {
          lVar17 = lVar19 + lVar14 + 0x50;
        }
        *(ulong *)(param_1 + 0x68) = lVar17 + (ulong)*(uint *)(lVar10 + 0x50) * 4;
        uVar26 = *(undefined8 *)(lVar10 + 0x30);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar10 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = uVar26;
        uVar26 = *(undefined8 *)(lVar10 + 0x3c);
        *(ulong *)(param_1 + 0x48) = (ulong)*(uint *)(lVar10 + 0x44);
        *(undefined8 *)(param_1 + 0x40) = uVar26;
        *(ulong *)(param_1 + 0x80) = lVar16 + (ulong)*(byte *)(lVar10 + 0x58) * -2;
      }
      if (*(char *)(param_1 + 0xf1) == '\0') {
        uVar21 = (ulong)(uVar23 >> 1) & 0x7f;
        lVar16 = *(long *)(param_1 + 0x68) + uVar21 * 4;
        bVar2 = *(byte *)(lVar16 + 3);
        iVar20 = (int)uVar21;
        if ((uint)*(byte *)(lVar16 + 1) == (uint)bVar2) {
          if (*(byte *)(lVar16 + 2) - 3 < 2) goto LAB_02ec13c0;
        }
        else {
          if ((uint)*(byte *)(lVar16 + 2) == (uint)bVar2) {
LAB_02ec13c0:
            uVar23 = uVar23 & 0xffffff00 | iVar20 << 1;
            iVar7 = 1;
          }
          else {
            uVar23 = uVar23 & 0xffffff00 | iVar20 << 1;
            iVar7 = 1;
            if ((*(byte *)(param_1 + 0x58) & *(byte *)(lVar16 + 1)) <= bVar2) {
              iVar7 = 2;
            }
          }
          iVar25 = 0;
          do {
            plVar8 = *(long **)(param_1 + 0xd8);
            lVar16 = plVar8[5];
            if (lVar16 == 0) {
LAB_02ec1428:
              uVar4 = *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)plVar8 + 0x1c) * 4) &
                      *(uint *)(plVar8 + 3) |
                      (uVar23 + 1 <<
                      (ulong)(-(*(int *)(*(long *)(param_1 + 0x50) + 0x34) +
                               *(int *)((long)plVar8 + 0x1c)) & 0x1f)) - 1;
              if (**(long **)(param_1 + 0xc0) == 0) {
                lVar16 = *plVar8;
                plVar8 = *(long **)(param_1 + 0xe8);
                lVar10 = **(long **)(param_1 + 200);
                uVar9 = 0xffffff;
                local_b0 = 0xffff;
                local_ac = 0;
                local_88 = 0xffff;
                local_84 = 0;
                uStack_80 = 0;
                uStack_7c = 0;
                uStack_a8 = 0;
                if (lVar10 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar10 + 0xb0);
                  uVar9 = *(undefined4 *)(lVar10 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar9);
                if (lVar16 == 0) {
                  local_98 = 0xffffff;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar16 + 0xb0);
                  local_98 = *(undefined4 *)(lVar16 + 0x50);
                }
              }
              else {
                lVar16 = *(long *)(param_1 + 0x88);
                uVar12 = (uint)*(byte *)(*(long *)(param_1 + 0x60) + 0x5a);
                if (uVar12 < 5) {
                  iVar15 = 0;
                }
                else {
                  iVar15 = 0;
                  iVar13 = uVar12 - 1;
                  do {
                    iVar1 = iVar15 + iVar13 >> 1;
                    iVar3 = iVar20 - (uint)*(byte *)(lVar16 + (long)iVar1 * 4 + 2);
                    if (iVar3 < 0) {
                      iVar13 = iVar1;
                    }
                    else {
                      puVar18 = (undefined2 *)
                                (lVar16 + ((long)((ulong)(uint)(iVar15 + iVar13) << 0x20) >> 0x21) *
                                          4);
                      if (iVar3 < (int)(uint)*(byte *)((long)puVar18 + 3)) goto LAB_02ec1578;
                      iVar15 = iVar1 + 1;
                    }
                  } while (3 < iVar13 - iVar15);
                }
                for (puVar18 = (undefined2 *)(lVar16 + (long)iVar15 * 4);
                    ((int)(iVar20 - (uint)*(byte *)(puVar18 + 1)) < 0 ||
                    ((int)(uint)*(byte *)((long)puVar18 + 3) <=
                     (int)(iVar20 - (uint)*(byte *)(puVar18 + 1)))); puVar18 = puVar18 + 2) {
                }
LAB_02ec1578:
                local_100 = **(undefined8 **)(param_1 + 0xe0);
                uStack_f8 = (*(undefined8 **)(param_1 + 0xe0))[1];
                plVar6 = (long *)**(long **)(param_1 + 0xc0);
                (**(code **)(*plVar6 + 0x40))
                          (plVar6,*puVar18,6,*plVar8,plVar8[1],*(undefined8 *)(param_1 + 0xd0),uVar4
                           ,0,&local_100);
                lVar16 = *(long *)(param_1 + 0xc0);
                if (*(long *)(lVar16 + 8) != 0) {
                  local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar16 + 0x10));
                  uVar26 = *(undefined8 *)(lVar16 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                       *(undefined4 *)(lVar16 + 0x1c);
                  *(undefined8 *)((ulong)&local_f0 | 4) = uVar26;
                  puVar11 = *(undefined8 **)(param_1 + 200);
                  local_e0 = *puVar11;
                  local_d8 = puVar11[1];
                  local_d0 = puVar11[2];
                  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar11 + 3));
                  local_138[0] = (undefined2)local_100;
                  uVar26 = *puVar24;
                  local_c0 = 0;
                  *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) =
                       *(undefined4 *)(puVar24 + 1);
                  *(undefined8 *)((ulong)local_138 | 4) = uVar26;
                  local_128 = **(undefined8 **)(param_1 + 0xd8);
                  local_120 = (*(undefined8 **)(param_1 + 0xd8))[1];
                  uStack_118 = *(undefined8 *)(param_1 + 0xd0);
                  local_108 = 0;
                  local_110 = uVar4;
                  uVar21 = (**(code **)(**(long **)(lVar16 + 8) + 0x40))
                                     (*(long **)(lVar16 + 8),6,1,&local_f0,local_138);
                  if ((uVar21 & 1) == 0) goto LAB_02ec178c;
                  lVar16 = *(long *)(param_1 + 0xc0);
                }
                plVar8 = *(long **)(param_1 + 0xe8);
                lVar14 = **(long **)(param_1 + 200);
                lVar10 = **(long **)(param_1 + 0xd8);
                uVar9 = 0xffffff;
                if (lVar14 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar14 + 0xb0);
                  uVar9 = *(undefined4 *)(lVar14 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar9);
                local_b0 = *(undefined2 *)(lVar16 + 0x10);
                local_ac = (undefined4)*(ulong *)(lVar16 + 0x14);
                uStack_a8 = *(ulong *)(lVar16 + 0x14) >> 0x20;
                if (lVar10 == 0) {
                  local_98 = 0xffffff;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar10 + 0xb0);
                  local_98 = *(undefined4 *)(lVar10 + 0x50);
                }
                uStack_7c = *(undefined4 *)(puVar24 + 1);
                local_88 = (undefined2)local_100;
                local_84 = (undefined4)*puVar24;
                uStack_80 = (undefined4)((ulong)*puVar24 >> 0x20);
              }
              uStack_74 = 0;
              local_78 = 6;
              local_8c = 0xf;
              local_b4 = 0xf;
              local_b8 = 0xffffffff;
              local_d0 = local_d0 & 0xffffffff00000000;
              local_d8 = 0;
              local_e0 = 0;
              uStack_e8 = 0;
              local_f0 = 0;
              local_90 = uVar4;
              (**(code **)(*plVar8 + 0x28))(plVar8,&local_f0);
            }
            else {
              uVar21 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                    (ulong)*(byte *)(lVar16 + 0x18) * 0x40 + 0x4020))
                                 (lVar16,uVar23 << (ulong)(*(uint *)(param_1 + 0xa0) & 0x1f));
              if ((uVar21 & 1) != 0) {
                plVar8 = *(long **)(param_1 + 0xd8);
                goto LAB_02ec1428;
              }
            }
LAB_02ec178c:
            uVar23 = uVar23 + 1;
            iVar25 = iVar25 + 1;
          } while (iVar25 != iVar7);
          bVar5 = false;
          if (*(char *)(param_1 + 0xf0) != '\0') {
            bVar5 = *(int *)(*(long *)(param_1 + 0xe8) + 0xc) != 0;
          }
          *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) | bVar5;
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != param_3);
  }
  return;
}


