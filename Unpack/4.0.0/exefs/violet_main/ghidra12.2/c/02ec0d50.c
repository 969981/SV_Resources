/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ec0d50; name: FUN_02ec0d50
 */


void FUN_02ec0d50(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined2 *puVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (0 < (int)param_3) {
    uVar19 = 0;
    do {
      uVar18 = *(uint *)(param_2 + uVar19 * 4);
      uVar5 = uVar18 >> 8;
      if ((*(uint *)(param_1 + 0x94) != uVar5) || (*(uint *)(param_1 + 0x98) != uVar5)) {
        lVar12 = *(long *)(param_1 + 0x50);
        lVar14 = *(long *)(lVar12 + 0x40);
        *(uint *)(param_1 + 0x94) = uVar5;
        *(uint *)(param_1 + 0x98) = uVar5;
        lVar9 = lVar12 + 0x40 + (ulong)uVar5 * 0x60 + lVar14;
        *(long *)(param_1 + 0x60) = lVar9;
        lVar15 = *(long *)(lVar12 + 0x70);
        lVar14 = 0;
        if (lVar15 != 0) {
          lVar14 = lVar15 + lVar12 + 0x70;
        }
        *(ulong *)(param_1 + 0x70) = lVar14 + (ulong)*(uint *)(lVar9 + 0x48) * 4;
        lVar15 = *(long *)(lVar12 + 0x80);
        lVar14 = 0;
        if (lVar15 != 0) {
          lVar14 = lVar15 + lVar12 + 0x80;
        }
        *(ulong *)(param_1 + 0x78) = lVar14 + (ulong)*(byte *)(lVar9 + 0x5b) * 0x80000;
        lVar15 = *(long *)(lVar12 + 0x60);
        lVar14 = 0;
        if (lVar15 != 0) {
          lVar14 = lVar15 + lVar12 + 0x60;
        }
        lVar14 = lVar14 + (ulong)*(uint *)(lVar9 + 0x4c) * 2;
        *(long *)(param_1 + 0x80) = lVar14;
        lVar17 = *(long *)(lVar12 + 0x90);
        lVar15 = 0;
        if (lVar17 != 0) {
          lVar15 = lVar17 + lVar12 + 0x90;
        }
        *(ulong *)(param_1 + 0x88) = lVar15 + (ulong)*(uint *)(lVar9 + 0x54) * 4;
        *(uint *)(param_1 + 0x90) = (uint)*(byte *)(lVar9 + 0x58);
        lVar17 = *(long *)(lVar12 + 0x50);
        lVar15 = 0;
        if (lVar17 != 0) {
          lVar15 = lVar17 + lVar12 + 0x50;
        }
        *(ulong *)(param_1 + 0x68) = lVar15 + (ulong)*(uint *)(lVar9 + 0x50) * 4;
        uVar23 = *(undefined8 *)(lVar9 + 0x30);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar9 + 0x38);
        *(undefined8 *)(param_1 + 0x30) = uVar23;
        uVar23 = *(undefined8 *)(lVar9 + 0x3c);
        *(ulong *)(param_1 + 0x48) = (ulong)*(uint *)(lVar9 + 0x44);
        *(undefined8 *)(param_1 + 0x40) = uVar23;
        *(ulong *)(param_1 + 0x80) = lVar14 + (ulong)*(byte *)(lVar9 + 0x58) * -2;
      }
      if (*(char *)(param_1 + 0xf1) == '\0') {
        uVar22 = (ulong)(uVar18 >> 1) & 0x7f;
        lVar14 = *(long *)(param_1 + 0x68) + uVar22 * 4;
        bVar3 = *(byte *)(lVar14 + 3);
        iVar21 = (int)uVar22;
        if ((uint)*(byte *)(lVar14 + 1) == (uint)bVar3) {
          if (*(byte *)(lVar14 + 2) - 3 < 2) goto LAB_02ec0ef4;
        }
        else {
          if ((uint)*(byte *)(lVar14 + 2) == (uint)bVar3) {
LAB_02ec0ef4:
            uVar18 = uVar18 & 0xffffff00 | iVar21 << 1;
            iVar7 = 1;
          }
          else {
            uVar18 = uVar18 & 0xffffff00 | iVar21 << 1;
            iVar7 = 1;
            if ((*(byte *)(param_1 + 0x58) & *(byte *)(lVar14 + 1)) <= bVar3) {
              iVar7 = 2;
            }
          }
          iVar20 = 0;
          do {
            puVar8 = *(undefined8 **)(param_1 + 0xd8);
            lVar14 = puVar8[5];
            if (lVar14 == 0) {
LAB_02ec0f5c:
              uVar5 = *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)puVar8 + 0x1c) * 4) &
                      *(uint *)(puVar8 + 3) |
                      (uVar18 + 1 <<
                      (ulong)(-(*(int *)(*(long *)(param_1 + 0x50) + 0x34) +
                               *(int *)((long)puVar8 + 0x1c)) & 0x1f)) - 1;
              if (**(long **)(param_1 + 0xc0) != 0) {
                lVar14 = *(long *)(param_1 + 0x88);
                uVar10 = (uint)*(byte *)(*(long *)(param_1 + 0x60) + 0x5a);
                if (uVar10 < 5) {
                  iVar13 = 0;
                }
                else {
                  iVar13 = 0;
                  iVar11 = uVar10 - 1;
                  do {
                    iVar2 = iVar13 + iVar11 >> 1;
                    iVar4 = iVar21 - (uint)*(byte *)(lVar14 + (long)iVar2 * 4 + 2);
                    if (iVar4 < 0) {
                      iVar11 = iVar2;
                    }
                    else {
                      puVar16 = (undefined2 *)
                                (lVar14 + ((long)((ulong)(uint)(iVar13 + iVar11) << 0x20) >> 0x21) *
                                          4);
                      if (iVar4 < (int)(uint)*(byte *)((long)puVar16 + 3)) goto LAB_02ec1034;
                      iVar13 = iVar2 + 1;
                    }
                  } while (3 < iVar11 - iVar13);
                }
                for (puVar16 = (undefined2 *)(lVar14 + (long)iVar13 * 4);
                    ((int)(iVar21 - (uint)*(byte *)(puVar16 + 1)) < 0 ||
                    ((int)(uint)*(byte *)((long)puVar16 + 3) <=
                     (int)(iVar21 - (uint)*(byte *)(puVar16 + 1)))); puVar16 = puVar16 + 2) {
                }
LAB_02ec1034:
                local_78 = **(undefined8 **)(param_1 + 0xe0);
                uStack_70 = (*(undefined8 **)(param_1 + 0xe0))[1];
                plVar6 = (long *)**(long **)(param_1 + 0xc0);
                (**(code **)(*plVar6 + 0x40))
                          (plVar6,*puVar16,6,*puVar8,puVar8[1],*(undefined8 *)(param_1 + 0xd0),uVar5
                           ,0,&local_78);
                lVar14 = *(long *)(param_1 + 0xc0);
                if (*(long *)(lVar14 + 8) != 0) {
                  local_b0[0] = *(undefined2 *)(lVar14 + 0x10);
                  uVar23 = *(undefined8 *)(lVar14 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) =
                       *(undefined4 *)(lVar14 + 0x1c);
                  *(undefined8 *)((ulong)local_b0 | 4) = uVar23;
                  puVar8 = *(undefined8 **)(param_1 + 200);
                  local_a0 = *puVar8;
                  local_98 = puVar8[1];
                  local_90 = puVar8[2];
                  local_88 = *(undefined4 *)(puVar8 + 3);
                  local_e8[0] = (undefined2)local_78;
                  uVar23 = *(undefined8 *)((ulong)&local_78 | 4);
                  local_80 = 0;
                  *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) =
                       *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
                  *(undefined8 *)((ulong)local_e8 | 4) = uVar23;
                  local_d8 = **(undefined8 **)(param_1 + 0xd8);
                  local_d0 = (*(undefined8 **)(param_1 + 0xd8))[1];
                  uStack_c8 = *(undefined8 *)(param_1 + 0xd0);
                  local_b8 = 0;
                  local_c0 = uVar5;
                  uVar22 = (**(code **)(**(long **)(lVar14 + 8) + 0x40))
                                     (*(long **)(lVar14 + 8),6,1,local_b0,local_e8);
                  if ((uVar22 & 1) == 0) goto LAB_02ec1160;
                }
              }
              plVar6 = *(long **)(param_1 + 0xe8);
              iVar13 = (int)plVar6[1];
              lVar14 = (long)iVar13;
              if ((int)(*(uint *)((long)plVar6 + 0xc) & 0x7fffffff) <= iVar13) {
                FUN_02e931c8(plVar6,PTR_PTR_047d1a50,lVar14 + 1);
                iVar13 = (int)plVar6[1];
              }
              *(uint *)(*plVar6 + (long)iVar13 * 4) = uVar5;
              *(int *)(plVar6 + 1) = (int)(lVar14 + 1);
            }
            else {
              uVar22 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                    (ulong)*(byte *)(lVar14 + 0x18) * 0x40 + 0x4020))
                                 (lVar14,uVar18 << (ulong)(*(uint *)(param_1 + 0xa0) & 0x1f));
              if ((uVar22 & 1) != 0) {
                puVar8 = *(undefined8 **)(param_1 + 0xd8);
                goto LAB_02ec0f5c;
              }
            }
LAB_02ec1160:
            uVar18 = uVar18 + 1;
            iVar20 = iVar20 + 1;
          } while (iVar20 != iVar7);
          bVar1 = false;
          if (*(char *)(param_1 + 0xf0) != '\0') {
            bVar1 = 0 < *(int *)(*(long *)(param_1 + 0xe8) + 8);
          }
          *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) | bVar1;
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != param_3);
  }
  return;
}


