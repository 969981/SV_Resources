/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03062384; name: FUN_03062384
 */


/* WARNING: Removing unreachable block (ram,0x030629bc) */

void FUN_03062384(float param_1,long param_2,ulong param_3,int *param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7,int *param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,float *param_12,float *param_13)

{
  float *pfVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ushort *__src;
  ulong uVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  ushort *puVar23;
  int iVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint local_108 [2];
  undefined1 *local_100;
  ulong local_f8;
  long local_f0;
  undefined1 *local_e8;
  long local_e0;
  float *local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  long local_b8;
  ulong local_b0;
  float *local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined1 *local_80;
  long local_78;
  ulong local_70 [2];
  
  lVar14 = nn::os::GetSystemTick();
  lVar15 = nn::os::GetSystemTick();
  lVar16 = *(long *)(param_2 + 0x30);
  if (param_1 <=
      *(float *)(lVar16 + (long)*(int *)(param_2 + 0x38) * 4 + 0x60) + *(float *)(param_2 + 0x40)) {
    *param_12 = param_1;
    *param_13 = param_1;
    goto LAB_03062f58;
  }
  if (*(int *)(param_2 + 0x14) < 0) {
    local_a0 = CONCAT44(*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x3c));
    FUN_03075260(lVar16,*(undefined8 *)(param_2 + 0x20),param_3 & 0xffffffff,param_4,param_5,param_6
                 ,param_7,param_8,param_10,param_11,param_2,&local_a0,&local_c8,&local_100,
                 param_2 + 0xd00);
    *param_12 = (float)local_c8;
  }
  else {
    lVar22 = *(long *)(param_2 + 0x10) >> 0x20;
    lVar20 = *(long *)(*(long *)(*(long *)(lVar16 + 0x38) + (param_3 >> 0xe & 0x3ff00)) + 0x38);
    lVar27 = *(long *)(lVar20 + lVar22 * 0x18);
    fVar29 = *(float *)(lVar27 + 0x18);
    if (param_1 <= fVar29) {
      fVar28 = *(float *)(lVar27 + 0x1c);
      fVar30 = fVar29;
      if (fVar29 <= fVar28 + 0.001) {
LAB_03062588:
        *param_12 = fVar29;
        *param_13 = fVar30;
        goto LAB_03062f58;
      }
      uVar4 = (uint)param_3 & 0x3fffff;
      if (*(int *)(*(long *)(lVar27 + 0x28) + (ulong)uVar4 * 4) != -1) {
        bVar5 = *(byte *)(*(long *)(lVar27 + 0x60) + (long)*param_8);
        if ((bVar5 != 0xff) &&
           (bVar6 = *(byte *)(*(long *)(lVar27 + 0x60) + (long)param_8[1]), bVar6 != 0xff)) {
          fVar29 = fVar28 + *(float *)(lVar27 + 0x20) * (float)bVar5;
          fVar30 = fVar28 + *(float *)(lVar27 + 0x20) * (float)bVar6;
          goto LAB_03062588;
        }
      }
      if (*(char *)(lVar20 + lVar22 * 0x18 + 0x10) != '\x01') {
        lVar27 = FUN_03065a74(lVar20 + lVar22 * 0x18);
      }
      sVar7 = (short)param_4[2];
      local_a0 = 0;
      local_98 = 0x8000000000000000;
      lVar16 = tpidr_el0;
      lVar20 = *(long *)(lVar16 + 0x1000b8);
      if (lVar20 == 0) {
        lVar20 = FUN_00e5d3b4();
        *(long *)(lVar16 + 0x1000b8) = lVar20;
      }
      local_90 = *(long *)(*(long *)(lVar20 + 0x3d0) + 0x10);
      if (*(long *)(local_90 + 8) != 0) {
        local_90 = 0;
      }
      local_100 = (undefined1 *)
                  (-((ulong)(long)sVar7 >> 0x1f & 1) & 0xfffffff800000000 |
                  ((long)sVar7 & 0xffffffffU) << 3);
      local_80 = local_100;
      if (local_90 == 0) {
        local_88 = (**(code **)PTR_DAT_047d1a08)(1,&local_100,0x40);
      }
      else {
        local_c8 = (ulong)(local_100 + 0x3f) & 0xffffffffffffffc0;
        if (local_c8 <= *(ulong *)(local_90 + 0x28)) {
          local_88 = *(long *)(local_90 + 0x38);
          if (local_c8 + local_88 <= *(ulong *)(local_90 + 0x40)) {
            *(ulong *)(local_90 + 0x38) = local_c8 + local_88;
            goto LAB_03062670;
          }
        }
        local_88 = FUN_031cf3b4(local_90,&local_c8);
      }
LAB_03062670:
      local_98 = CONCAT44((int)sVar7,(int)local_98) | 0x8000000000000000;
      iVar24 = param_4[2];
      sVar7 = *(short *)((long)param_4 + 10);
      local_c8 = 0;
      local_c0 = 0x8000000000000000;
      lVar20 = *(long *)(lVar16 + 0x1000b8);
      local_a0 = local_88;
      if (lVar20 == 0) {
        lVar20 = FUN_00e5d3b4();
        *(long *)(lVar16 + 0x1000b8) = lVar20;
      }
      uVar2 = (int)sVar7 + (int)(short)iVar24;
      local_b8 = *(long *)(*(long *)(lVar20 + 0x3d0) + 0x10);
      if (*(long *)(local_b8 + 8) != 0) {
        local_b8 = 0;
      }
      local_d8 = (float *)(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
      local_a8 = local_d8;
      if (local_b8 == 0) {
        local_b0 = (**(code **)PTR_DAT_047d1a08)(1,&local_d8,0x40);
      }
      else {
        local_100 = (undefined1 *)((long)local_d8 + 0x3fU & 0xffffffffffffffc0);
        if (local_100 <= *(undefined1 **)(local_b8 + 0x28)) {
          local_b0 = *(ulong *)(local_b8 + 0x38);
          if (local_100 + local_b0 <= *(undefined1 **)(local_b8 + 0x40)) {
            *(undefined1 **)(local_b8 + 0x38) = local_100 + local_b0;
            goto LAB_0306272c;
          }
        }
        local_b0 = FUN_031cf3b4(local_b8,&local_100);
      }
LAB_0306272c:
      local_c0 = CONCAT44(uVar2,(int)local_c0) | 0x8000000000000000;
      local_d8 = (float *)0x0;
      local_d0 = 0x8000000000000000;
      local_100 = (undefined1 *)
                  CONCAT44(*(undefined4 *)(lVar27 + 0x18),*(undefined4 *)(lVar27 + 0x18));
      local_c8 = local_b0;
      FUN_0306bd40(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x20),
                   param_3 & 0xffffffff,param_4,param_5,param_6,param_2,&local_100,&local_a0,
                   &local_c8,&local_d8,param_2 + 0xc18);
      lVar22 = (long)(int)local_c0;
      lVar20 = *(long *)(lVar16 + 0x1000b8);
      if (lVar20 == 0) {
        lVar20 = FUN_00e5d3b4();
        *(long *)(lVar16 + 0x1000b8) = lVar20;
      }
      uVar18 = lVar22 * 2;
      lVar20 = *(long *)(*(long *)(lVar20 + 0x3d0) + 0x10);
      local_70[0] = uVar18;
      if ((*(long *)(lVar20 + 8) == 0) && (lVar20 != 0)) {
        local_100 = (undefined1 *)(uVar18 + 0x3f & 0xffffffffffffffc0);
        if (local_100 <= *(undefined1 **)(lVar20 + 0x28)) {
          __src = *(ushort **)(lVar20 + 0x38);
          if (local_100 + (long)__src <= *(undefined1 **)(lVar20 + 0x40)) {
            *(undefined1 **)(lVar20 + 0x38) = local_100 + (long)__src;
            goto LAB_030628c4;
          }
        }
        __src = (ushort *)FUN_031cf3b4(lVar20,&local_100);
      }
      else {
        __src = (ushort *)(**(code **)PTR_DAT_047d1a08)(1,local_70,0x40);
        lVar20 = 0;
      }
LAB_030628c4:
      iVar24 = (int)local_d0;
      lVar25 = (long)(int)local_d0;
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x8000000000000000;
      lVar22 = *(long *)(lVar16 + 0x1000b8);
      if (lVar22 == 0) {
        lVar22 = FUN_00e5d3b4();
        *(long *)(lVar16 + 0x1000b8) = lVar22;
      }
      local_f0 = *(long *)(*(long *)(lVar22 + 0x3d0) + 0x10);
      if (*(long *)(local_f0 + 8) != 0) {
        local_f0 = 0;
      }
      local_e0 = lVar25;
      local_78 = lVar25;
      if (local_f0 == 0) {
        local_e8 = (undefined1 *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
LAB_03062958:
      }
      else {
        local_70[0] = lVar25 + 0x3fU & 0xffffffffffffffc0;
        if (*(ulong *)(local_f0 + 0x28) < local_70[0]) {
LAB_03062930:
          local_e8 = (undefined1 *)FUN_031cf3b4(local_f0,local_70);
          goto LAB_03062958;
        }
        local_e8 = *(undefined1 **)(local_f0 + 0x38);
        if (*(undefined1 **)(local_f0 + 0x40) < local_e8 + local_70[0]) goto LAB_03062930;
        *(undefined1 **)(local_f0 + 0x38) = local_e8 + local_70[0];
      }
      iVar9 = (int)local_f8;
      local_f8 = CONCAT44(iVar24,(int)local_f8) | 0x8000000000000000;
      uVar17 = local_c0 & 0xffffffff;
      if (0 < (int)local_c0) {
        pfVar19 = (float *)(local_c8 + 4);
        puVar23 = __src;
        do {
          fVar31 = *(float *)(lVar27 + 0x1c);
          pfVar1 = pfVar19 + -1;
          fVar28 = *pfVar19;
          pfVar19 = pfVar19 + 2;
          iVar24 = (int)((fVar28 - fVar31) * *(float *)(lVar27 + 0x24));
          fVar30 = *pfVar1 * 253.0 + 0.5;
          fVar29 = 0.0;
          if (0.0 <= fVar30) {
            fVar29 = fVar30;
          }
          bVar11 = false;
          bVar12 = true;
          bVar13 = false;
          if (iVar24 == 0) {
            bVar11 = false;
            bVar12 = false;
            bVar13 = true;
            if (!NAN(fVar28) && !NAN(fVar31)) {
              bVar11 = fVar28 < fVar31;
              bVar12 = fVar28 == fVar31;
              bVar13 = false;
            }
          }
          uVar8 = 0x100;
          if (bVar12 || bVar11 != bVar13) {
            uVar8 = (ushort)(iVar24 << 8);
          }
          uVar17 = uVar17 - 1;
          *puVar23 = uVar8 | (ushort)(int)fVar29;
          puVar23 = puVar23 + 1;
        } while (uVar17 != 0);
      }
      uVar17 = local_d0 & 0xffffffff;
      if (iVar9 != (int)local_d0) {
        local_f8 = CONCAT44(local_f8._4_4_,(int)local_d0);
      }
      if (0 < (int)local_d0) {
        pfVar19 = local_d8;
        puVar21 = local_e8;
        do {
          uVar17 = uVar17 - 1;
          *puVar21 = (char)(int)((*pfVar19 - *(float *)(lVar27 + 0x1c)) * *(float *)(lVar27 + 0x24))
          ;
          pfVar19 = pfVar19 + 1;
          puVar21 = puVar21 + 1;
        } while (uVar17 != 0);
      }
      iVar24 = param_4[1];
      iVar9 = param_4[2];
      uVar8 = *(ushort *)((long)param_4 + 10);
      local_100 = local_e8;
      memcpy((void *)(*(long *)(lVar27 + 0x50) + (long)*param_4 * 2),__src,(long)(short)iVar9 << 1);
      if (0 < (short)uVar8) {
        memcpy((void *)(*(long *)(lVar27 + 0x50) + (long)iVar24 * 2),__src + (short)iVar9,
               (ulong)uVar8 << 1);
      }
      local_108[0] = uVar4;
      FUN_03076bfc(lVar27,local_108,&local_100);
      if (0 < (int)local_98) {
        lVar16 = 0;
        do {
          piVar3 = (int *)(local_a0 + lVar16);
          lVar16 = lVar16 + 8;
          *(char *)(*(long *)(lVar27 + 0x60) + (long)*piVar3) =
               (char)(int)(((float)piVar3[1] - *(float *)(lVar27 + 0x1c)) *
                          *(float *)(lVar27 + 0x24));
        } while ((local_98 & 0xffffffff) * 8 != lVar16);
      }
      plVar26 = *(long **)(param_2 + 0x50);
      if (plVar26 != (long *)0x0) {
        iVar24 = (int)plVar26[1];
        lVar16 = (long)iVar24;
        if ((int)(*(uint *)((long)plVar26 + 0xc) & 0x7fffffff) <= iVar24) {
          FUN_0305c42c(plVar26,PTR_PTR_047d1a50,lVar16 + 1);
          iVar24 = (int)plVar26[1];
        }
        *(uint *)(*plVar26 + (long)iVar24 * 4) = (uint)param_3;
        *(int *)(plVar26 + 1) = (int)(lVar16 + 1);
      }
      fVar28 = *(float *)(lVar27 + 0x18);
      fVar30 = *(float *)(lVar27 + 0x1c);
      fVar29 = fVar28;
      if (fVar30 + 0.001 < fVar28) {
        fVar31 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(lVar27 + 0x60) + (long)param_8[1]));
        fVar29 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(lVar27 + 0x60) + (long)*param_8));
        fVar28 = fVar30 + *(float *)(lVar27 + 0x20) * fVar29;
        fVar29 = fVar30 + *(float *)(lVar27 + 0x20) * fVar31;
      }
      *param_12 = fVar28;
      *param_13 = fVar29;
      if (local_e8 == local_100) {
        local_f8 = local_f8 & 0xffffffff00000000;
      }
      if (local_f0 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1);
      }
      else {
        uVar17 = local_e0 + 0x3fU & 0xffffffffffffffc0;
        if ((*(ulong *)(local_f0 + 0x28) < uVar17) ||
           (*(undefined1 **)(local_f0 + 0x38) != local_e8 + uVar17)) {
          if (local_e8 != (undefined1 *)0x0) {
            if (*(ulong *)(local_f0 + 0x28) < uVar17 + 0x40) {
              *(int *)(*(long *)(local_f0 + 0x30) + 0x20) =
                   *(int *)(*(long *)(local_f0 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(local_f0 + 0x10) + 0x18))
                        (*(long **)(local_f0 + 0x10),(long)local_e8 - (long)*(int *)(local_e8 + -4),
                         uVar17 + 0x44);
            }
            else {
              if (*(undefined1 **)(local_f0 + 0x38) == local_e8 + uVar17) {
                *(undefined1 **)(local_f0 + 0x38) = local_e8;
                goto LAB_03062c48;
              }
              FUN_031cf778();
            }
          }
        }
        else {
          *(undefined1 **)(local_f0 + 0x38) = local_e8;
          if (*(undefined1 **)(local_f0 + 0x48) == local_e8) {
LAB_03062c48:
            FUN_031cf578();
          }
        }
      }
      uVar17 = local_f8;
      puVar10 = PTR_PTR_047d1a50;
      local_f8 = local_f8 & 0xffffffff00000000;
      if ((-1 < (long)uVar17) && (local_100 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50);
      }
      if (lVar20 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1,__src,uVar18);
      }
      else {
        uVar18 = uVar18 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulong *)(lVar20 + 0x28) < uVar18) ||
           (*(long *)(lVar20 + 0x38) != uVar18 + (long)__src)) {
          if (__src != (ushort *)0x0) {
            if (*(ulong *)(lVar20 + 0x28) < uVar18 + 0x40) {
              *(int *)(*(long *)(lVar20 + 0x30) + 0x20) =
                   *(int *)(*(long *)(lVar20 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(lVar20 + 0x10) + 0x18))
                        (*(long **)(lVar20 + 0x10),(long)__src - (long)*(int *)(__src + -2),
                         uVar18 + 0x44);
            }
            else {
              if (*(long *)(lVar20 + 0x38) == uVar18 + (long)__src) {
                *(ushort **)(lVar20 + 0x38) = __src;
                goto LAB_03062d3c;
              }
              FUN_031cf778(lVar20,__src);
            }
          }
        }
        else {
          *(ushort **)(lVar20 + 0x38) = __src;
          if (*(ushort **)(lVar20 + 0x48) == __src) {
LAB_03062d3c:
            FUN_031cf578(lVar20);
          }
        }
      }
      uVar18 = local_d0;
      uVar17 = (ulong)local_d0._4_4_;
      local_d0 = (ulong)local_d0._4_4_ << 0x20;
      if ((-1 < (long)uVar18) && (local_d8 != (float *)0x0)) {
        (**(code **)(*(long *)(puVar10 + 0x20) + 0x20))(puVar10 + 0x20,local_d8,uVar17 << 2);
      }
      if (local_b0 == local_c8) {
        local_c0 = local_c0 & 0xffffffff00000000;
      }
      if (local_b8 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1);
      }
      else {
        uVar18 = (long)local_a8 + 0x3fU & 0xffffffffffffffc0;
        if ((*(ulong *)(local_b8 + 0x28) < uVar18) ||
           (*(long *)(local_b8 + 0x38) != uVar18 + local_b0)) {
          if (local_b0 != 0) {
            if (*(ulong *)(local_b8 + 0x28) < uVar18 + 0x40) {
              *(int *)(*(long *)(local_b8 + 0x30) + 0x20) =
                   *(int *)(*(long *)(local_b8 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(local_b8 + 0x10) + 0x18))
                        (*(long **)(local_b8 + 0x10),local_b0 - (long)*(int *)(local_b0 - 4),
                         uVar18 + 0x44);
            }
            else {
              if (*(long *)(local_b8 + 0x38) == uVar18 + local_b0) {
                *(ulong *)(local_b8 + 0x38) = local_b0;
                goto LAB_03062e34;
              }
              FUN_031cf778();
            }
          }
        }
        else {
          *(ulong *)(local_b8 + 0x38) = local_b0;
          if (*(ulong *)(local_b8 + 0x48) == local_b0) {
LAB_03062e34:
            FUN_031cf578();
          }
        }
      }
      uVar18 = local_c0;
      uVar17 = (ulong)local_c0._4_4_;
      local_c0 = (ulong)local_c0._4_4_ << 0x20;
      if ((-1 < (long)uVar18) && (local_c8 != 0)) {
        (**(code **)(*(long *)puVar10 + 0x20))(puVar10,local_c8,uVar17 << 3);
      }
      if (local_88 == local_a0) {
        local_98 = local_98 & 0xffffffff00000000;
      }
      if (local_90 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1);
      }
      else {
        uVar18 = (ulong)(local_80 + 0x3f) & 0xffffffffffffffc0;
        if ((*(ulong *)(local_90 + 0x28) < uVar18) ||
           (*(long *)(local_90 + 0x38) != uVar18 + local_88)) {
          if (local_88 != 0) {
            if (*(ulong *)(local_90 + 0x28) < uVar18 + 0x40) {
              *(int *)(*(long *)(local_90 + 0x30) + 0x20) =
                   *(int *)(*(long *)(local_90 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(local_90 + 0x10) + 0x18))
                        (*(long **)(local_90 + 0x10),local_88 - *(int *)(local_88 + -4),
                         uVar18 + 0x44);
            }
            else {
              if (*(long *)(local_90 + 0x38) == uVar18 + local_88) {
                *(long *)(local_90 + 0x38) = local_88;
                goto LAB_03062f28;
              }
              FUN_031cf778();
            }
          }
        }
        else {
          *(long *)(local_90 + 0x38) = local_88;
          if (*(long *)(local_90 + 0x48) == local_88) {
LAB_03062f28:
            FUN_031cf578();
          }
        }
      }
      uVar18 = local_98;
      uVar17 = (ulong)local_98._4_4_;
      local_98 = (ulong)local_98._4_4_ << 0x20;
      if ((-1 < (long)uVar18) && (local_a0 != 0)) {
        (**(code **)(*(long *)puVar10 + 0x20))(puVar10,local_a0,uVar17 << 3);
      }
      goto LAB_03062f58;
    }
    local_a0 = CONCAT44(param_1,param_1);
    FUN_03075260(lVar16,*(undefined8 *)(param_2 + 0x20),param_3 & 0xffffffff,param_4,param_5,param_6
                 ,param_7,param_8,param_10,param_11,param_2,&local_a0,&local_c8,&local_100,
                 param_2 + 0xd00);
    *param_12 = (float)local_c8;
  }
  *param_13 = local_100._0_4_;
LAB_03062f58:
  lVar16 = nn::os::GetSystemTick();
  *(long *)(param_2 + 0xc08) = (lVar16 - lVar15) + *(long *)(param_2 + 0xc08);
  *(int *)(param_2 + 0xc10) = *(int *)(param_2 + 0xc10) + 1;
  lVar15 = nn::os::GetSystemTick();
  *(long *)(param_2 + 0x60) = (lVar15 - lVar14) + *(long *)(param_2 + 0x60);
  *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
  return;
}


