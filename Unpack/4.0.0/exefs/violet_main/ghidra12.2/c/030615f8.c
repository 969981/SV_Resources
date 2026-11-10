/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030615f8; name: FUN_030615f8
 */


/* WARNING: Removing unreachable block (ram,0x03061ba4) */

undefined8
FUN_030615f8(long param_1,uint param_2,long param_3,long param_4,long param_5,undefined8 param_6,
            ulong param_7,int *param_8,undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ushort *__src;
  undefined1 *puVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  float *pfVar21;
  ulong uVar22;
  uint uVar23;
  ushort *puVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint local_168 [2];
  undefined1 *local_160;
  undefined8 local_158;
  long local_150;
  undefined1 *local_148;
  long local_140;
  float *local_138;
  undefined8 local_130;
  ulong local_128;
  undefined8 local_120;
  undefined8 *local_118;
  ulong local_110;
  float *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_a0;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_78;
  ulong local_70 [2];
  
  lVar13 = nn::os::GetSystemTick();
  lVar14 = nn::os::GetSystemTick();
  lVar15 = *(long *)(param_1 + 0x30);
  fVar31 = *(float *)(param_1 + 0x3c);
  uVar29 = (uint)param_7;
  if (*(float *)(lVar15 + (long)*(int *)(param_1 + 0x38) * 4 + 0x60) + *(float *)(param_1 + 0x40) <
      fVar31) {
    uVar23 = *(uint *)(param_3 + 8);
    uVar3 = 0xffffffff;
    if (uVar23 != 0xffffffff) {
      uVar3 = uVar23 & 0x3fffff | param_2 & 0xffc00000;
    }
    uVar4 = uVar23;
    if ((*(byte *)(param_3 + 0x10) & 0x40) == 0) {
      uVar4 = uVar3;
    }
    uVar3 = uVar4 & 0x3fffff;
    uVar22 = (ulong)uVar3;
    lVar18 = *(long *)(*(long *)(*(long *)(lVar15 + 0x38) + ((ulong)(uVar4 >> 0xe) & 0x3ff00)) +
                      0x20);
    iVar26 = *(int *)(lVar18 + 0x30);
    if (*(int *)(param_1 + 0x14) < 0) {
      iVar8 = *(int *)(lVar18 + 0x60);
      uVar23 = uVar3 - iVar26;
      if ((int)uVar3 < iVar26) {
        if (*(int *)(lVar18 + 0x78) == 0) {
          uVar23 = uVar3;
LAB_03061a38:
          lVar30 = *(long *)(lVar18 + 0x130) + (long)(int)(uVar23 * iVar8) * 4;
          lVar18 = *(long *)(lVar18 + 0xc0);
          goto LAB_03061a48;
        }
        uVar23 = *(uint *)(*(long *)(lVar18 + 0x70) + uVar22 * 4);
        if (uVar23 != 0xffffffff) goto LAB_03061a38;
        lVar30 = *(long *)(lVar18 + 0x58) + (long)(int)(iVar8 * uVar3) * 4;
        lVar18 = *(long *)(lVar18 + 0x28) + uVar22 * 0x14;
        lVar27 = lVar30 + (long)iVar8 * 4;
      }
      else {
        lVar30 = *(long *)(lVar18 + 0x150) + (long)(int)(iVar8 * uVar23) * 4;
        lVar18 = *(long *)(lVar18 + 0xe0);
LAB_03061a48:
        lVar27 = lVar30 + (long)iVar8 * 4;
        lVar18 = lVar18 + (long)(int)uVar23 * 0x14;
      }
      local_100 = CONCAT44(fVar31,fVar31);
      iVar26 = FUN_03073010(lVar15,*(undefined8 *)(param_1 + 0x20),uVar4,lVar18,lVar30,lVar27,
                            param_7 & 0xffffffff,param_8,param_9,param_10,param_11,param_1,
                            &local_100,param_1 + 0x7d8);
    }
    else {
      uVar25 = uVar3 - iVar26;
      if ((int)uVar3 < iVar26) {
        if (*(int *)(lVar18 + 0x78) == 0) {
          uVar25 = uVar3;
LAB_03061758:
          lVar18 = *(long *)(lVar18 + 0xc0);
          goto LAB_0306175c;
        }
        uVar25 = *(uint *)(*(long *)(lVar18 + 0x70) + uVar22 * 4);
        if (uVar25 != 0xffffffff) goto LAB_03061758;
        lVar18 = *(long *)(lVar18 + 0x28) + uVar22 * 0x14;
      }
      else {
        lVar18 = *(long *)(lVar18 + 0xe0);
LAB_0306175c:
        lVar18 = lVar18 + (long)(int)uVar25 * 0x14;
      }
      lVar27 = (param_7 >> 0x16 & 0x3ff) * 0x100;
      lVar30 = *(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 0x38) + lVar27) + 0x38) +
                        (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
      uVar5 = *(ushort *)(*(long *)(lVar30 + 0x50) + ((ulong)uVar23 & 0x3fffff) * 2);
      uVar7 = uVar5 >> 8;
      if (0xfe < uVar7) {
        sVar6 = (short)param_8[2];
        local_100 = 0;
        local_f8 = 0x8000000000000000;
        lVar15 = tpidr_el0;
        lVar30 = *(long *)(lVar15 + 0x1000b8);
        if (lVar30 == 0) {
          lVar30 = FUN_00e5d3b4();
          *(long *)(lVar15 + 0x1000b8) = lVar30;
        }
        local_f0 = *(long *)(*(long *)(lVar30 + 0x3d0) + 0x10);
        if (*(long *)(local_f0 + 8) != 0) {
          local_f0 = 0;
        }
        local_160 = (undefined1 *)
                    (-((ulong)(long)sVar6 >> 0x1f & 1) & 0xfffffff800000000 |
                    ((long)sVar6 & 0xffffffffU) << 3);
        local_e0 = local_160;
        if (local_f0 == 0) {
          local_e8 = (**(code **)PTR_DAT_047d1a08)(1,&local_160,0x40);
        }
        else {
          local_128 = (ulong)(local_160 + 0x3f) & 0xffffffffffffffc0;
          if (local_128 <= *(ulong *)(local_f0 + 0x28)) {
            local_e8 = *(long *)(local_f0 + 0x38);
            if (local_128 + local_e8 <= *(ulong *)(local_f0 + 0x40)) {
              *(ulong *)(local_f0 + 0x38) = local_128 + local_e8;
              goto LAB_03061858;
            }
          }
          local_e8 = FUN_031cf3b4(local_f0,&local_128);
        }
LAB_03061858:
        local_f8 = CONCAT44((int)sVar6,(int)local_f8) | 0x8000000000000000;
        iVar26 = param_8[2];
        sVar6 = *(short *)((long)param_8 + 10);
        local_128 = 0;
        local_120 = (undefined1 **)0x8000000000000000;
        lVar30 = *(long *)(lVar15 + 0x1000b8);
        local_100 = local_e8;
        if (lVar30 == 0) {
          lVar30 = FUN_00e5d3b4();
          *(long *)(lVar15 + 0x1000b8) = lVar30;
        }
        uVar3 = (int)sVar6 + (int)(short)iVar26;
        local_118 = *(undefined8 **)(*(long *)(lVar30 + 0x3d0) + 0x10);
        if (local_118[1] != 0) {
          local_118 = (undefined8 *)0x0;
        }
        local_138 = (float *)(-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
        local_108 = local_138;
        if (local_118 == (undefined8 *)0x0) {
          local_110 = (**(code **)PTR_DAT_047d1a08)(1,&local_138,0x40);
        }
        else {
          local_160 = (undefined1 *)((long)local_138 + 0x3fU & 0xffffffffffffffc0);
          if (local_160 <= (undefined1 *)local_118[5]) {
            local_110 = local_118[7];
            if (local_160 + local_110 <= (undefined1 *)local_118[8]) {
              local_118[7] = local_160 + local_110;
              goto LAB_0306190c;
            }
          }
          local_110 = FUN_031cf3b4(local_118,&local_160);
        }
LAB_0306190c:
        local_120 = (undefined1 **)(CONCAT44(uVar3,(int)local_120) | 0x8000000000000000);
        local_138 = (float *)0x0;
        local_130 = 0x8000000000000000;
        lVar16 = *(long *)(param_1 + 0x30);
        plVar19 = (long *)(*(long *)(*(long *)(*(long *)(lVar16 + 0x38) + lVar27) + 0x38) +
                          (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
        local_128 = local_110;
        if ((char)plVar19[2] == '\x01') {
          lVar30 = *plVar19;
        }
        else {
          lVar30 = FUN_03065a74(plVar19);
          lVar16 = *(long *)(param_1 + 0x30);
        }
        local_160 = (undefined1 *)
                    CONCAT44(*(undefined4 *)(lVar30 + 0x18),*(undefined4 *)(lVar30 + 0x18));
        FUN_0306bd40(lVar16,*(undefined8 *)(param_1 + 0x20),param_7 & 0xffffffff,param_8,param_9,
                     param_10,param_1,&local_160,&local_100,&local_128,&local_138,param_1 + 0x638);
        lVar16 = (long)(int)local_120;
        lVar27 = *(long *)(lVar15 + 0x1000b8);
        if (lVar27 == 0) {
          lVar27 = FUN_00e5d3b4();
          *(long *)(lVar15 + 0x1000b8) = lVar27;
        }
        uVar22 = lVar16 * 2;
        lVar27 = *(long *)(*(long *)(lVar27 + 0x3d0) + 0x10);
        local_70[0] = uVar22;
        if ((*(long *)(lVar27 + 8) == 0) && (lVar27 != 0)) {
          local_160 = (undefined1 *)(uVar22 + 0x3f & 0xffffffffffffffc0);
          if (local_160 <= *(undefined1 **)(lVar27 + 0x28)) {
            __src = *(ushort **)(lVar27 + 0x38);
            if (local_160 + (long)__src <= *(undefined1 **)(lVar27 + 0x40)) {
              *(undefined1 **)(lVar27 + 0x38) = local_160 + (long)__src;
              goto LAB_03061b4c;
            }
          }
          __src = (ushort *)FUN_031cf3b4(lVar27,&local_160);
        }
        else {
          __src = (ushort *)(**(code **)PTR_DAT_047d1a08)(1,local_70,0x40);
          lVar27 = 0;
        }
LAB_03061b4c:
        uVar20 = (ulong)local_120 & 0xffffffff;
        if (0 < (int)local_120) {
          pfVar21 = (float *)(local_128 + 4);
          puVar24 = __src;
          do {
            fVar34 = *(float *)(lVar30 + 0x1c);
            pfVar1 = pfVar21 + -1;
            fVar33 = *pfVar21;
            pfVar21 = pfVar21 + 2;
            iVar26 = (int)((fVar33 - fVar34) * *(float *)(lVar30 + 0x24));
            fVar32 = *pfVar1 * 253.0 + 0.5;
            fVar31 = 0.0;
            if (0.0 <= fVar32) {
              fVar31 = fVar32;
            }
            bVar10 = false;
            bVar11 = true;
            bVar12 = false;
            if (iVar26 == 0) {
              bVar10 = false;
              bVar11 = false;
              bVar12 = true;
              if (!NAN(fVar33) && !NAN(fVar34)) {
                bVar10 = fVar33 < fVar34;
                bVar11 = fVar33 == fVar34;
                bVar12 = false;
              }
            }
            uVar5 = 0x100;
            if (bVar11 || bVar10 != bVar12) {
              uVar5 = (ushort)(iVar26 << 8);
            }
            uVar20 = uVar20 - 1;
            *puVar24 = uVar5 | (ushort)(int)fVar31;
            puVar24 = puVar24 + 1;
          } while (uVar20 != 0);
        }
        iVar26 = param_8[1];
        iVar8 = param_8[2];
        uVar5 = *(ushort *)((long)param_8 + 10);
        memcpy((void *)(*(long *)(lVar30 + 0x50) + (long)*param_8 * 2),__src,(long)(short)iVar8 << 1
              );
        if (0 < (short)uVar5) {
          memcpy((void *)(*(long *)(lVar30 + 0x50) + (long)iVar26 * 2),__src + (short)iVar8,
                 (ulong)uVar5 << 1);
        }
        uVar5 = __src[(int)((ulong)uVar23 & 0x3fffff) - *param_8];
        if (lVar27 == 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1,__src,uVar22);
        }
        else {
          uVar22 = uVar22 + 0x3f & 0xffffffffffffffc0;
          if ((*(ulong *)(lVar27 + 0x28) < uVar22) ||
             (*(long *)(lVar27 + 0x38) != uVar22 + (long)__src)) {
            if (*(ulong *)(lVar27 + 0x28) < uVar22 + 0x40) {
              *(int *)(*(long *)(lVar27 + 0x30) + 0x20) =
                   *(int *)(*(long *)(lVar27 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(lVar27 + 0x10) + 0x18))
                        (*(long **)(lVar27 + 0x10),(long)__src - (long)*(int *)(__src + -2),
                         uVar22 + 0x44);
            }
            else {
              if (*(long *)(lVar27 + 0x38) == uVar22 + (long)__src) {
                *(ushort **)(lVar27 + 0x38) = __src;
                goto LAB_03061d04;
              }
              FUN_031cf778(lVar27,__src);
            }
          }
          else {
            *(ushort **)(lVar27 + 0x38) = __src;
            if (*(ushort **)(lVar27 + 0x48) == __src) {
LAB_03061d04:
              FUN_031cf578(lVar27);
            }
          }
        }
        uVar3 = (uint)local_130;
        lVar16 = (long)(int)(uint)local_130;
        local_160 = (undefined1 *)0x0;
        local_158 = 0x8000000000000000;
        lVar27 = *(long *)(lVar15 + 0x1000b8);
        if (lVar27 == 0) {
          lVar27 = FUN_00e5d3b4();
          *(long *)(lVar15 + 0x1000b8) = lVar27;
        }
        local_150 = *(long *)(*(long *)(lVar27 + 0x3d0) + 0x10);
        if (*(long *)(local_150 + 8) != 0) {
          local_150 = 0;
        }
        local_140 = lVar16;
        local_78 = lVar16;
        if (local_150 == 0) {
          local_148 = (undefined1 *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
        }
        else {
          local_70[0] = lVar16 + 0x3fU & 0xffffffffffffffc0;
          if (local_70[0] <= *(ulong *)(local_150 + 0x28)) {
            local_148 = *(undefined1 **)(local_150 + 0x38);
            if (local_148 + local_70[0] <= *(undefined1 **)(local_150 + 0x40)) {
              *(undefined1 **)(local_150 + 0x38) = local_148 + local_70[0];
              goto LAB_03061dbc;
            }
          }
          local_148 = (undefined1 *)FUN_031cf3b4(local_150,local_70);
        }
LAB_03061dbc:
        local_158._4_4_ = uVar3 | 0x80000000;
        uVar22 = local_130 & 0xffffffff;
        if ((int)local_158 != (uint)local_130) {
          local_158._0_4_ = (uint)local_130;
        }
        if (0 < (int)(uint)local_130) {
          puVar17 = local_148;
          pfVar21 = local_138;
          do {
            uVar22 = uVar22 - 1;
            *puVar17 = (char)(int)((*pfVar21 - *(float *)(lVar30 + 0x1c)) *
                                  *(float *)(lVar30 + 0x24));
            puVar17 = puVar17 + 1;
            pfVar21 = pfVar21 + 1;
          } while (uVar22 != 0);
        }
        local_168[0] = uVar29 & 0x3fffff;
        local_160 = local_148;
        FUN_03076bfc(lVar30,local_168,&local_160);
        if (local_148 == local_160) {
          local_158._0_4_ = 0;
        }
        if (local_150 == 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1);
        }
        else {
          uVar22 = local_140 + 0x3fU & 0xffffffffffffffc0;
          if ((*(ulong *)(local_150 + 0x28) < uVar22) ||
             (*(undefined1 **)(local_150 + 0x38) != local_148 + uVar22)) {
            if (local_148 != (undefined1 *)0x0) {
              if (*(ulong *)(local_150 + 0x28) < uVar22 + 0x40) {
                *(int *)(*(long *)(local_150 + 0x30) + 0x20) =
                     *(int *)(*(long *)(local_150 + 0x30) + 0x20) + -1;
                (**(code **)(**(long **)(local_150 + 0x10) + 0x18))
                          (*(long **)(local_150 + 0x10),
                           (long)local_148 - (long)*(int *)(local_148 + -4),uVar22 + 0x44);
              }
              else {
                if (*(undefined1 **)(local_150 + 0x38) == local_148 + uVar22) {
                  *(undefined1 **)(local_150 + 0x38) = local_148;
                  goto LAB_03061ef0;
                }
                FUN_031cf778();
              }
            }
          }
          else {
            *(undefined1 **)(local_150 + 0x38) = local_148;
            if (*(undefined1 **)(local_150 + 0x48) == local_148) {
LAB_03061ef0:
              FUN_031cf578();
            }
          }
        }
        uVar3 = local_158._4_4_;
        puVar9 = PTR_PTR_047d1a50;
        local_158 = (ulong)local_158._4_4_ << 0x20;
        if ((-1 < (int)uVar3) && (local_160 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50);
        }
        if (0 < (int)local_f8) {
          lVar15 = 0;
          do {
            piVar2 = (int *)(local_100 + lVar15);
            lVar15 = lVar15 + 8;
            *(char *)(*(long *)(lVar30 + 0x60) + (long)*piVar2) =
                 (char)(int)(((float)piVar2[1] - *(float *)(lVar30 + 0x1c)) *
                            *(float *)(lVar30 + 0x24));
          } while ((local_f8 & 0xffffffff) * 8 != lVar15);
        }
        plVar19 = *(long **)(param_1 + 0x50);
        if (plVar19 != (long *)0x0) {
          iVar26 = (int)plVar19[1];
          lVar15 = (long)iVar26;
          if ((int)(*(uint *)((long)plVar19 + 0xc) & 0x7fffffff) <= iVar26) {
            FUN_0305c42c(plVar19,PTR_PTR_047d1a50,lVar15 + 1);
            iVar26 = (int)plVar19[1];
          }
          *(uint *)(*plVar19 + (long)iVar26 * 4) = uVar29;
          *(int *)(plVar19 + 1) = (int)(lVar15 + 1);
        }
        uVar22 = local_130;
        uVar20 = (ulong)local_130._4_4_;
        local_130 = (ulong)local_130._4_4_ << 0x20;
        if ((-1 < (long)uVar22) && (local_138 != (float *)0x0)) {
          (**(code **)(*(long *)(puVar9 + 0x20) + 0x20))(puVar9 + 0x20,local_138,uVar20 << 2);
        }
        if (local_110 == local_128) {
          local_120 = (undefined1 **)((ulong)local_120 & 0xffffffff00000000);
        }
        if (local_118 == (undefined8 *)0x0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1);
        }
        else {
          uVar22 = (long)local_108 + 0x3fU & 0xffffffffffffffc0;
          if (((ulong)local_118[5] < uVar22) || (local_118[7] != uVar22 + local_110)) {
            if (local_110 != 0) {
              if ((ulong)local_118[5] < uVar22 + 0x40) {
                *(int *)(local_118[6] + 0x20) = *(int *)(local_118[6] + 0x20) + -1;
                (**(code **)(*(long *)local_118[2] + 0x18))
                          ((long *)local_118[2],local_110 - (long)*(int *)(local_110 - 4),
                           uVar22 + 0x44);
              }
              else {
                if (local_118[7] == uVar22 + local_110) {
                  local_118[7] = local_110;
                  goto LAB_030620a4;
                }
                FUN_031cf778();
              }
            }
          }
          else {
            local_118[7] = local_110;
            if (local_118[9] == local_110) {
LAB_030620a4:
              FUN_031cf578();
            }
          }
        }
        uVar22 = (ulong)local_120;
        uVar20 = (ulong)local_120._4_4_;
        local_120 = (undefined1 **)((ulong)local_120._4_4_ << 0x20);
        if ((-1 < (long)uVar22) && (local_128 != 0)) {
          (**(code **)(*(long *)puVar9 + 0x20))(puVar9,local_128,uVar20 << 3);
        }
        if (local_e8 == local_100) {
          local_f8 = local_f8 & 0xffffffff00000000;
        }
        if (local_f0 == 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1);
        }
        else {
          uVar22 = (ulong)(local_e0 + 0x3f) & 0xffffffffffffffc0;
          if ((*(ulong *)(local_f0 + 0x28) < uVar22) ||
             (*(long *)(local_f0 + 0x38) != uVar22 + local_e8)) {
            if (local_e8 != 0) {
              if (*(ulong *)(local_f0 + 0x28) < uVar22 + 0x40) {
                *(int *)(*(long *)(local_f0 + 0x30) + 0x20) =
                     *(int *)(*(long *)(local_f0 + 0x30) + 0x20) + -1;
                (**(code **)(**(long **)(local_f0 + 0x10) + 0x18))
                          (*(long **)(local_f0 + 0x10),local_e8 - *(int *)(local_e8 + -4),
                           uVar22 + 0x44);
              }
              else {
                if (*(long *)(local_f0 + 0x38) == uVar22 + local_e8) {
                  *(long *)(local_f0 + 0x38) = local_e8;
                  goto LAB_030621a0;
                }
                FUN_031cf778();
              }
            }
          }
          else {
            *(long *)(local_f0 + 0x38) = local_e8;
            if (*(long *)(local_f0 + 0x48) == local_e8) {
LAB_030621a0:
              FUN_031cf578();
            }
          }
        }
        uVar22 = local_f8;
        uVar20 = (ulong)local_f8._4_4_;
        local_f8 = (ulong)local_f8._4_4_ << 0x20;
        if ((-1 < (long)uVar22) && (local_100 != 0)) {
          (**(code **)(*(long *)puVar9 + 0x20))(puVar9,local_100,uVar20 << 3);
        }
        uVar7 = uVar5 >> 8;
        fVar31 = *(float *)(param_1 + 0x3c);
        lVar15 = *(long *)(param_1 + 0x30);
      }
      local_100 = CONCAT44(*(float *)(lVar30 + 0x20) * (float)uVar7 + *(float *)(lVar30 + 0x1c),
                           (float)(uVar5 & 0xff) * 0.0039525693);
      local_128 = CONCAT44(fVar31,fVar31);
      iVar26 = FUN_03071c50(lVar15,*(undefined8 *)(param_1 + 0x20),param_11,param_7 & 0xffffffff,
                            param_8,param_9,param_10,uVar4,lVar18,param_1,&local_128,&local_100,
                            param_1 + 0x720);
    }
    if (iVar26 == 0) {
      uVar28 = 0;
      goto LAB_030622dc;
    }
  }
  plVar19 = *(long **)(param_1 + 0x28);
  if (plVar19 != (long *)0x0) {
    local_d0 = 0xffffffff;
    local_c8 = 0;
    uStack_c0 = 0;
    local_120 = &local_160;
    local_b8 = 0;
    local_100 = CONCAT44(local_100._4_4_,param_2);
    local_d8 = 0;
    local_e0 = (undefined1 *)0x0;
    local_160 = (undefined1 *)
                CONCAT44(local_160._4_4_,*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c));
    local_158 = *(long *)(param_1 + 0x48);
    local_128 = *(ulong *)(param_1 + 0x30);
    local_118 = &local_100;
    local_110 = CONCAT71(local_110._1_7_,0x80);
    local_f8 = param_3;
    local_f0 = param_4;
    local_e8 = param_5;
    local_a0 = uVar29;
    local_98 = param_8;
    uStack_90 = param_9;
    local_88 = param_10;
    uVar22 = (**(code **)(*plVar19 + 0x20))(plVar19,&local_128);
    uVar28 = 0;
    if ((uVar22 & 1) == 0) goto LAB_030622dc;
  }
  uVar28 = 1;
LAB_030622dc:
  lVar15 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x628) = (lVar15 - lVar14) + *(long *)(param_1 + 0x628);
  *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
  lVar14 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x60) = (lVar14 - lVar13) + *(long *)(param_1 + 0x60);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return uVar28;
}


