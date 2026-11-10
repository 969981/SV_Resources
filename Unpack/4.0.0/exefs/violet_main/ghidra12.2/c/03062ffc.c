/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03062ffc; name: FUN_03062ffc
 */


/* WARNING: Removing unreachable block (ram,0x0306379c) */

void FUN_03062ffc(long param_1,ulong *param_2,ulong param_3,int *param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7)

{
  float *pfVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ushort *__dest;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  float *pfVar28;
  ushort *puVar29;
  int *piVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  void *__s;
  int iVar34;
  uint uVar35;
  void *pvVar36;
  long lVar37;
  int iVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  long local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  ulong local_120;
  ulong uStack_118;
  uint local_110;
  int *local_108;
  long lStack_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  uint local_e0;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint local_b8 [2];
  ulong local_b0;
  undefined8 local_a8;
  long *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  ulong local_78;
  ulong local_70 [2];
  
  lVar17 = nn::os::GetSystemTick();
  lVar18 = nn::os::GetSystemTick();
  sVar10 = (short)param_4[2];
  lVar19 = *(long *)(param_1 + 0x30);
  sVar11 = *(short *)((long)param_4 + 10);
  fVar40 = *(float *)(param_1 + 0x3c);
  iVar33 = (int)sVar11;
  iVar38 = (int)sVar10;
  uVar26 = (uint)param_3;
  if (fVar40 <= *(float *)(lVar19 + (long)*(int *)(param_1 + 0x38) * 4 + 0x60) +
                *(float *)(param_1 + 0x40)) {
    *(int *)(param_7 + 2) = iVar33 + iVar38;
    iVar31 = iVar33 + iVar38 + 0x1f >> 5;
    if ((int)(*(uint *)((long)param_7 + 0xc) & 0x7fffffff) < iVar31) {
      FUN_02eb1f88(param_7,PTR_PTR_047d1a50,(long)iVar31);
    }
    iVar34 = (int)param_7[1];
    if ((int)param_7[1] != iVar31) {
      *(int *)(param_7 + 1) = iVar31;
      iVar34 = iVar31;
    }
    __s = (void *)*param_7;
    uVar27 = (ulong)iVar34;
    pvVar36 = __s;
    if (((ulong)__s & 0xf) == 0) {
      uVar25 = uVar27;
    }
    else {
      uVar24 = 4 - (((ulong)__s & 0xf) >> 2);
      uVar25 = uVar27;
      if (uVar24 <= uVar27) {
        uVar25 = uVar24;
      }
      pvVar3 = (void *)((long)__s + uVar25 * 4);
      if (__s < pvVar3) {
        memset(__s,0xff,uVar25 * 4);
        uVar24 = uVar25 * 4 - 1;
        uVar39 = ((uint)(uVar24 >> 2) & 0x3fffffff) + 1;
        if ((uVar39 & 7) != 0) {
          lVar19 = -((ulong)uVar39 & 7);
          do {
            pvVar36 = (void *)((long)pvVar36 + 4);
            bVar14 = lVar19 != -1;
            lVar19 = lVar19 + 1;
          } while (bVar14);
        }
        if (0x1b < uVar24) {
          do {
            pvVar36 = (void *)((long)pvVar36 + 0x20);
          } while (pvVar36 < pvVar3);
        }
      }
      uVar25 = uVar27 - uVar25;
    }
    if ((3 < uVar25) && (0 < (long)(uVar25 & 0xfffffffffffffffc))) {
      pvVar3 = (void *)((long)pvVar36 + (uVar25 & 0xfffffffffffffffc) * 4);
      pvVar4 = pvVar3;
      if (pvVar3 <= (void *)((long)pvVar36 + 0x10U)) {
        pvVar4 = (void *)((long)pvVar36 + 0x10U);
      }
      memset(pvVar36,0xff,(long)pvVar4 + ~(ulong)pvVar36 + 0x10 & 0xfffffffffffffff0);
      do {
        pvVar36 = (void *)((long)pvVar36 + 0x10);
      } while (pvVar36 < pvVar3);
    }
    if (pvVar36 < (void *)((long)__s + (long)iVar34 * 4)) {
      memset(pvVar36,0xff,(long)__s + ~(ulong)pvVar36 + uVar27 * 4 + 4 & 0xfffffffffffffffc);
    }
    goto LAB_03063b20;
  }
  if (*(int *)(param_1 + 0x14) < 0) {
    local_140 = CONCAT44(fVar40,fVar40);
    FUN_0306ed40(lVar19,*(undefined8 *)(param_1 + 0x20),param_2,param_3 & 0xffffffff,param_4,param_5
                 ,param_6,param_1,&local_140,param_7,param_1 + 0x568);
    goto LAB_03063b20;
  }
  lVar21 = (param_3 >> 0x16 & 0x3ff) * 0x100;
  lVar37 = *(long *)(*(long *)(*(long *)(*(long *)(lVar19 + 0x38) + lVar21) + 0x38) +
                    (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
  local_140 = 0;
  local_138 = 0x8000000000000000;
  lVar19 = tpidr_el0;
  lVar22 = *(long *)(lVar19 + 0x1000b8);
  if (lVar22 == 0) {
    lVar22 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar22;
  }
  uVar39 = sVar11 + iVar38;
  local_130 = *(long *)(*(long *)(lVar22 + 0x3d0) + 0x10);
  if (*(long *)(local_130 + 8) != 0) {
    local_130 = 0;
  }
  local_120 = -(ulong)(uVar39 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar39 << 3;
  local_88 = local_120;
  if (local_130 == 0) {
    local_128 = (**(code **)PTR_DAT_047d1a08)(1,&local_88,0x40);
  }
  else {
    local_b0 = local_120 + 0x3f & 0xffffffffffffffc0;
    if (local_b0 <= *(ulong *)(local_130 + 0x28)) {
      local_128 = *(long *)(local_130 + 0x38);
      if (local_b0 + local_128 <= *(ulong *)(local_130 + 0x40)) {
        *(ulong *)(local_130 + 0x38) = local_b0 + local_128;
        goto LAB_03063270;
      }
    }
    local_128 = FUN_031cf3b4(local_130,&local_b0);
  }
LAB_03063270:
  local_138 = CONCAT44(uVar39,(uint)local_138) | 0x8000000000000000;
  lVar22 = *(long *)(lVar19 + 0x1000b8);
  local_140 = local_128;
  if (lVar22 == 0) {
    lVar22 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar22;
  }
  uVar27 = (long)(int)uVar39 * 2;
  lVar22 = *(long *)(*(long *)(lVar22 + 0x3d0) + 0x10);
  local_88 = uVar27;
  if ((*(long *)(lVar22 + 8) == 0) && (lVar22 != 0)) {
    local_b0 = uVar27 + 0x3f & 0xffffffffffffffc0;
    if (local_b0 <= *(ulong *)(lVar22 + 0x28)) {
      __dest = *(ushort **)(lVar22 + 0x38);
      if (local_b0 + (long)__dest <= *(ulong *)(lVar22 + 0x40)) {
        *(ulong *)(lVar22 + 0x38) = local_b0 + (long)__dest;
        goto LAB_03063424;
      }
    }
    __dest = (ushort *)FUN_031cf3b4(lVar22,&local_b0);
  }
  else {
    __dest = (ushort *)(**(code **)PTR_DAT_047d1a08)(1,&local_88,0x40);
    lVar22 = 0;
  }
LAB_03063424:
  sVar12 = (short)param_4[2];
  sVar11 = *(short *)((long)param_4 + 10);
  iVar31 = param_4[1];
  uVar39 = (int)sVar11 + (int)sVar12;
  memcpy(__dest,(void *)(*(long *)(lVar37 + 0x50) + (long)*param_4 * 2),(long)sVar12 << 1);
  if (0 < sVar11) {
    memcpy(__dest + sVar12,(void *)(*(long *)(lVar37 + 0x50) + (long)iVar31 * 2),(long)sVar11 << 1);
  }
  if (0 < (int)uVar39) {
    lVar23 = 0;
LAB_0306348c:
    if (*(char *)((long)__dest + lVar23 + 1) != -1) goto code_r0x0306349c;
    plVar20 = (long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + lVar21) +
                                0x38) + (*(long *)(param_1 + 0x10) >> 0x20) * 0x18);
    if ((char)plVar20[2] == '\x01') {
      lVar21 = *plVar20;
    }
    else {
      lVar21 = FUN_03065a74();
    }
    local_88 = 0;
    local_80 = -0x8000000000000000;
    local_b0 = 0;
    local_a8 = (ulong *)0x8000000000000000;
    lVar23 = *(long *)(lVar19 + 0x1000b8);
    if (lVar23 == 0) {
      lVar23 = FUN_00e5d3b4();
      *(long *)(lVar19 + 0x1000b8) = lVar23;
    }
    local_a0 = *(long **)(*(long *)(lVar23 + 0x3d0) + 0x10);
    if (local_a0[1] != 0) {
      local_a0 = (long *)0x0;
    }
    local_90 = -((ulong)(long)sVar10 >> 0x1f & 1) & 0xfffffff800000000 |
               ((long)sVar10 & 0xffffffffU) << 3;
    local_78 = local_90;
    if (local_a0 == (long *)0x0) {
      local_98 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    }
    else {
      local_70[0] = local_90 + 0x3f & 0xffffffffffffffc0;
      if (local_70[0] <= (ulong)local_a0[5]) {
        local_98 = local_a0[7];
        if (local_70[0] + local_98 <= (ulong)local_a0[8]) {
          local_a0[7] = local_70[0] + local_98;
          goto LAB_030635a4;
        }
      }
      local_98 = FUN_031cf3b4(local_a0,local_70);
    }
LAB_030635a4:
    local_a8 = (ulong *)(CONCAT44(iVar38,(int)local_a8) | 0x8000000000000000);
    local_70[0] = CONCAT44(*(undefined4 *)(lVar37 + 0x18),*(undefined4 *)(lVar37 + 0x18));
    local_b0 = local_98;
    FUN_0306bd40(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
                 param_3 & 0xffffffff,param_4,param_5,param_6,param_1,local_70,&local_b0,&local_140,
                 &local_88,param_1 + 0x3c8);
    if (0 < (int)local_a8) {
      lVar19 = 0;
      do {
        piVar30 = (int *)(local_b0 + lVar19);
        lVar19 = lVar19 + 8;
        *(char *)(*(long *)(lVar21 + 0x60) + (long)*piVar30) =
             (char)(int)(((float)piVar30[1] - *(float *)(lVar21 + 0x1c)) * *(float *)(lVar21 + 0x24)
                        );
      } while (((ulong)local_a8 & 0xffffffff) * 8 != lVar19);
    }
    if (local_98 == local_b0) {
      local_a8 = (ulong *)((ulong)local_a8 & 0xffffffff00000000);
    }
    if (local_a0 == (long *)0x0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    }
    else {
      uVar25 = local_90 + 0x3f & 0xffffffffffffffc0;
      if (((ulong)local_a0[5] < uVar25) || (local_a0[7] != uVar25 + local_98)) {
        if (local_98 != 0) {
          if ((ulong)local_a0[5] < uVar25 + 0x40) {
            *(int *)(local_a0[6] + 0x20) = *(int *)(local_a0[6] + 0x20) + -1;
            (**(code **)(*(long *)local_a0[2] + 0x18))
                      ((long *)local_a0[2],local_98 - (long)*(int *)(local_98 - 4),uVar25 + 0x44);
          }
          else {
            if (local_a0[7] == uVar25 + local_98) {
              local_a0[7] = local_98;
              goto LAB_03063718;
            }
            FUN_031cf778();
          }
        }
      }
      else {
        local_a0[7] = local_98;
        if (local_a0[9] == local_98) {
LAB_03063718:
          FUN_031cf578();
        }
      }
    }
    uVar25 = (ulong)local_a8;
    uVar24 = (ulong)local_a8._4_4_;
    local_a8 = (ulong *)((ulong)local_a8._4_4_ << 0x20);
    if ((-1 < (long)uVar25) && (local_b0 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_b0,uVar24 << 3);
    }
    uVar39 = (uint)local_138;
    uVar25 = local_138 & 0xffffffff;
    if (0 < (int)(uint)local_138) {
      pfVar28 = (float *)(local_140 + 4);
      puVar29 = __dest;
      do {
        fVar43 = *(float *)(lVar21 + 0x1c);
        pfVar1 = pfVar28 + -1;
        fVar41 = *pfVar28;
        pfVar28 = pfVar28 + 2;
        iVar31 = (int)((fVar41 - fVar43) * *(float *)(lVar21 + 0x24));
        fVar42 = *pfVar1 * 253.0 + 0.5;
        fVar40 = 0.0;
        if (0.0 <= fVar42) {
          fVar40 = fVar42;
        }
        bVar14 = false;
        bVar15 = true;
        bVar16 = false;
        if (iVar31 == 0) {
          bVar14 = false;
          bVar15 = false;
          bVar16 = true;
          if (!NAN(fVar41) && !NAN(fVar43)) {
            bVar14 = fVar41 < fVar43;
            bVar15 = fVar41 == fVar43;
            bVar16 = false;
          }
        }
        uVar9 = 0x100;
        if (bVar15 || bVar14 != bVar16) {
          uVar9 = (ushort)(iVar31 << 8);
        }
        uVar25 = uVar25 - 1;
        *puVar29 = uVar9 | (ushort)(int)fVar40;
        puVar29 = puVar29 + 1;
      } while (uVar25 != 0);
    }
    iVar34 = param_4[2];
    iVar31 = param_4[1];
    uVar9 = *(ushort *)((long)param_4 + 10);
    memcpy((void *)(*(long *)(lVar21 + 0x50) + (long)*param_4 * 2),__dest,(long)(short)iVar34 << 1);
    if (0 < (short)uVar9) {
      memcpy((void *)(*(long *)(lVar21 + 0x50) + (long)iVar31 * 2),__dest + (short)iVar34,
             (ulong)uVar9 << 1);
    }
    local_b8[0] = uVar26 & 0x3fffff;
    FUN_03076e30(lVar21,local_b8,&local_88);
    plVar20 = *(long **)(param_1 + 0x50);
    if (plVar20 != (long *)0x0) {
      iVar31 = (int)plVar20[1];
      lVar19 = (long)iVar31;
      if ((int)(*(uint *)((long)plVar20 + 0xc) & 0x7fffffff) <= iVar31) {
        FUN_0305c42c(plVar20,PTR_PTR_047d1a50,lVar19 + 1);
        iVar31 = (int)plVar20[1];
      }
      *(uint *)(*plVar20 + (long)iVar31 * 4) = uVar26;
      *(int *)(plVar20 + 1) = (int)(lVar19 + 1);
    }
    lVar19 = local_80;
    uVar25 = (ulong)local_80._4_4_;
    local_80 = (ulong)local_80._4_4_ << 0x20;
    lVar37 = lVar21;
    if ((-1 < lVar19) && (local_88 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_88,uVar25 << 2);
    }
  }
LAB_030638a4:
  if ((uint)local_138 != uVar39) {
    local_138 = CONCAT44(local_138._4_4_,uVar39);
  }
  if (0 < (int)uVar39) {
    uVar25 = (ulong)uVar39;
    pfVar28 = (float *)(local_140 + 4);
    puVar29 = __dest;
    do {
      uVar9 = *puVar29;
      fVar42 = *(float *)(lVar37 + 0x1c);
      fVar40 = *(float *)(lVar37 + 0x20);
      pfVar28[-1] = (float)(uVar9 & 0xff) * 0.0039525693;
      *pfVar28 = fVar42 + fVar40 * (float)(uVar9 >> 8);
      uVar25 = uVar25 - 1;
      pfVar28 = pfVar28 + 2;
      puVar29 = puVar29 + 1;
    } while (uVar25 != 0);
  }
  if (lVar22 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,__dest,uVar27);
  }
  else {
    uVar27 = uVar27 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar22 + 0x28) < uVar27) || (*(long *)(lVar22 + 0x38) != uVar27 + (long)__dest))
    {
      if (__dest != (ushort *)0x0) {
        if (*(ulong *)(lVar22 + 0x28) < uVar27 + 0x40) {
          *(int *)(*(long *)(lVar22 + 0x30) + 0x20) = *(int *)(*(long *)(lVar22 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar22 + 0x10) + 0x18))
                    (*(long **)(lVar22 + 0x10),(long)__dest - (long)*(int *)(__dest + -2),
                     uVar27 + 0x44);
        }
        else {
          if (*(long *)(lVar22 + 0x38) == uVar27 + (long)__dest) {
            *(ushort **)(lVar22 + 0x38) = __dest;
            goto LAB_030639d8;
          }
          FUN_031cf778(lVar22,__dest);
        }
      }
    }
    else {
      *(ushort **)(lVar22 + 0x38) = __dest;
      if (*(ushort **)(lVar22 + 0x48) == __dest) {
LAB_030639d8:
        FUN_031cf578(lVar22);
      }
    }
  }
  local_b0 = CONCAT44(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x3c));
  FUN_0306d9d0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2,
               param_3 & 0xffffffff,param_4,param_5,param_6,param_1,&local_b0,&local_140,param_7,
               param_1 + 0x4b0);
  if (local_128 == local_140) {
    local_138 = local_138 & 0xffffffff00000000;
  }
  if (local_130 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar27 = local_120 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_130 + 0x28) < uVar27) ||
       (*(long *)(local_130 + 0x38) != uVar27 + local_128)) {
      if (local_128 != 0) {
        if (*(ulong *)(local_130 + 0x28) < uVar27 + 0x40) {
          *(int *)(*(long *)(local_130 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_130 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_130 + 0x10) + 0x18))
                    (*(long **)(local_130 + 0x10),local_128 - *(int *)(local_128 + -4),uVar27 + 0x44
                    );
        }
        else {
          if (*(long *)(local_130 + 0x38) == uVar27 + local_128) {
            *(long *)(local_130 + 0x38) = local_128;
            goto LAB_03063af0;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_130 + 0x38) = local_128;
      if (*(long *)(local_130 + 0x48) == local_128) {
LAB_03063af0:
        FUN_031cf578();
      }
    }
  }
  uVar27 = local_138;
  uVar25 = (ulong)local_138._4_4_;
  local_138 = (ulong)local_138._4_4_ << 0x20;
  if ((-1 < (long)uVar27) && (local_140 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_140,uVar25 << 3);
  }
LAB_03063b20:
  if (*(long *)(param_1 + 0x28) != 0) {
    local_140 = CONCAT44(local_140._4_4_,0xffffffff);
    local_128 = 0;
    local_a8 = &local_88;
    uVar39 = (uint)sVar10;
    local_138 = 0;
    local_130 = 0;
    local_110 = 0xffffffff;
    local_f8 = 0;
    local_108 = (int *)0x0;
    lStack_100 = 0;
    uStack_118 = param_2[1];
    local_120 = *param_2;
    local_88 = CONCAT44(local_88._4_4_,*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c));
    local_80 = *(long *)(param_1 + 0x48);
    local_b0 = *(ulong *)(param_1 + 0x30);
    local_a0 = &local_140;
    local_98 = local_98 & 0xffffffffffffff00;
    lVar19 = *(long *)(*(long *)(local_b0 + 0x38) + (param_3 >> 0x16 & 0x3ff) * 0x100);
    local_e0 = uVar26;
    local_d8 = param_4;
    uStack_d0 = param_5;
    local_c8 = param_6;
    if (0 < iVar38) {
      uVar27 = 0;
      do {
        uVar25 = uVar27 >> 5;
        uVar35 = (uint)uVar27;
        uVar13 = 1 << (ulong)(uVar35 & 0x1f);
        if ((*(uint *)(*param_7 + uVar25 * 4) & uVar13) != 0) {
          lVar37 = *(long *)(lVar19 + 0x20);
          iVar31 = *(int *)(lVar37 + 0x60);
          uVar2 = uVar35 + *param_4;
          local_110 = uVar2 | uVar26 & 0xffc00000;
          iVar34 = uVar2 - *(int *)(lVar37 + 0x30);
          if ((int)uVar2 < *(int *)(lVar37 + 0x30)) {
            uVar32 = uVar2;
            if (*(int *)(lVar37 + 0x78) != 0) {
              uVar32 = *(uint *)(*(long *)(lVar37 + 0x70) + (long)(int)uVar2 * 4);
            }
            if (uVar32 == 0xffffffff) {
              lStack_100 = *(long *)(lVar37 + 0x58) + (long)(int)(iVar31 * uVar2) * 4;
              lVar22 = *(long *)(lVar37 + 0x28);
              uVar32 = uVar2;
            }
            else {
              lStack_100 = *(long *)(lVar37 + 0x130) + (long)(int)(uVar32 * iVar31) * 4;
              lVar22 = *(long *)(lVar37 + 0xc0);
            }
            local_f8 = lStack_100 + (long)iVar31 * 4;
            local_108 = (int *)(lVar22 + (long)(int)uVar32 * 0x14);
            if (*(int *)(lVar37 + 0x78) == 0) {
              uVar32 = uVar2;
            }
            else {
              uVar32 = *(uint *)(*(long *)(lVar37 + 0x70) + (long)(int)uVar2 * 4);
            }
            if (uVar32 == 0xffffffff) {
              piVar30 = (int *)(*(long *)(lVar37 + 0x28) + (long)(int)uVar2 * 0x14);
            }
            else {
              piVar30 = (int *)(*(long *)(lVar37 + 0xc0) + (long)(int)uVar32 * 0x14);
            }
          }
          else {
            lStack_100 = *(long *)(lVar37 + 0x150) + (long)(iVar31 * iVar34) * 4;
            local_f8 = lStack_100 + (long)iVar31 * 4;
            piVar30 = (int *)(*(long *)(lVar37 + 0xe0) + (long)iVar34 * 0x14);
            local_108 = piVar30;
          }
          iVar31 = *piVar30;
          iVar34 = piVar30[1];
          iVar7 = *(int *)(lVar37 + 0x40);
          puVar5 = (undefined8 *)(*(long *)(lVar37 + 0x38) + (long)iVar31 * 0x10);
          if (iVar7 <= iVar31) {
            puVar5 = (undefined8 *)(*(long *)(lVar37 + 0xf0) + (long)(iVar31 - iVar7) * 0x10);
          }
          puVar6 = (undefined8 *)(*(long *)(lVar37 + 0x38) + (long)iVar34 * 0x10);
          if (iVar7 <= iVar34) {
            puVar6 = (undefined8 *)(*(long *)(lVar37 + 0xf0) + (long)(iVar34 - iVar7) * 0x10);
          }
          fVar40 = (float)*puVar5;
          fVar42 = (float)((ulong)*puVar5 >> 0x20);
          fVar40 = fVar40 + ((float)*puVar6 - fVar40) * 0.5;
          fVar42 = fVar42 + ((float)((ulong)*puVar6 >> 0x20) - fVar42) * 0.5;
          fVar41 = (float)puVar5[1] + ((float)puVar6[1] - (float)puVar5[1]) * 0.5;
          local_f0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0x90) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar19 + 0x80) >> 0x20) * fVar41 +
                              (float)((ulong)*(undefined8 *)(lVar19 + 0x60) >> 0x20) * fVar40 +
                              (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20) * fVar42,
                              (float)*(undefined8 *)(lVar19 + 0x90) +
                              (float)*(undefined8 *)(lVar19 + 0x80) * fVar41 +
                              (float)*(undefined8 *)(lVar19 + 0x60) * fVar40 +
                              (float)*(undefined8 *)(lVar19 + 0x70) * fVar42);
          uStack_e8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar19 + 0x88) >> 0x20) * fVar41 +
                               (float)((ulong)*(undefined8 *)(lVar19 + 0x68) >> 0x20) * fVar40 +
                               (float)((ulong)*(undefined8 *)(lVar19 + 0x78) >> 0x20) * fVar42,
                               (float)*(undefined8 *)(lVar19 + 0x98) +
                               (float)*(undefined8 *)(lVar19 + 0x88) * fVar41 +
                               (float)*(undefined8 *)(lVar19 + 0x68) * fVar40 +
                               (float)*(undefined8 *)(lVar19 + 0x78) * fVar42);
          uVar27 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                             (*(long **)(param_1 + 0x28),&local_b0);
          if ((uVar27 & 1) == 0) {
            *(uint *)(*param_7 + uVar25 * 4) =
                 *(uint *)(*param_7 + uVar25 * 4) & (uVar13 ^ 0xffffffff);
          }
        }
        uVar27 = (ulong)(uVar35 + 1);
      } while (uVar39 != uVar35 + 1);
    }
    if (0 < iVar33) {
      iVar31 = 0;
      do {
        uVar13 = uVar39 + iVar31;
        uVar35 = 1 << (ulong)(uVar13 & 0x1f);
        if ((*(uint *)(*param_7 + (long)((int)uVar13 >> 5) * 4) & uVar35) != 0) {
          lVar37 = *(long *)(lVar19 + 0x20);
          iVar34 = *(int *)(lVar37 + 0x60);
          uVar2 = iVar31 + param_4[1];
          local_110 = uVar2 | uVar26 & 0xffc00000;
          iVar7 = uVar2 - *(int *)(lVar37 + 0x30);
          if ((int)uVar2 < *(int *)(lVar37 + 0x30)) {
            uVar32 = uVar2;
            if (*(int *)(lVar37 + 0x78) != 0) {
              uVar32 = *(uint *)(*(long *)(lVar37 + 0x70) + (long)(int)uVar2 * 4);
            }
            if (uVar32 == 0xffffffff) {
              lStack_100 = *(long *)(lVar37 + 0x58) + (long)(int)(iVar34 * uVar2) * 4;
              lVar22 = *(long *)(lVar37 + 0x28);
              uVar32 = uVar2;
            }
            else {
              lStack_100 = *(long *)(lVar37 + 0x130) + (long)(int)(uVar32 * iVar34) * 4;
              lVar22 = *(long *)(lVar37 + 0xc0);
            }
            local_f8 = lStack_100 + (long)iVar34 * 4;
            local_108 = (int *)(lVar22 + (long)(int)uVar32 * 0x14);
            if (*(int *)(lVar37 + 0x78) == 0) {
              uVar32 = uVar2;
            }
            else {
              uVar32 = *(uint *)(*(long *)(lVar37 + 0x70) + (long)(int)uVar2 * 4);
            }
            if (uVar32 == 0xffffffff) {
              piVar30 = (int *)(*(long *)(lVar37 + 0x28) + (long)(int)uVar2 * 0x14);
            }
            else {
              piVar30 = (int *)(*(long *)(lVar37 + 0xc0) + (long)(int)uVar32 * 0x14);
            }
          }
          else {
            lStack_100 = *(long *)(lVar37 + 0x150) + (long)(iVar34 * iVar7) * 4;
            local_f8 = lStack_100 + (long)iVar34 * 4;
            piVar30 = (int *)(*(long *)(lVar37 + 0xe0) + (long)iVar7 * 0x14);
            local_108 = piVar30;
          }
          iVar34 = *piVar30;
          iVar7 = piVar30[1];
          iVar8 = *(int *)(lVar37 + 0x40);
          puVar5 = (undefined8 *)(*(long *)(lVar37 + 0x38) + (long)iVar34 * 0x10);
          if (iVar8 <= iVar34) {
            puVar5 = (undefined8 *)(*(long *)(lVar37 + 0xf0) + (long)(iVar34 - iVar8) * 0x10);
          }
          puVar6 = (undefined8 *)(*(long *)(lVar37 + 0x38) + (long)iVar7 * 0x10);
          if (iVar8 <= iVar7) {
            puVar6 = (undefined8 *)(*(long *)(lVar37 + 0xf0) + (long)(iVar7 - iVar8) * 0x10);
          }
          fVar40 = (float)*puVar5;
          fVar42 = (float)((ulong)*puVar5 >> 0x20);
          fVar40 = fVar40 + ((float)*puVar6 - fVar40) * 0.5;
          fVar42 = fVar42 + ((float)((ulong)*puVar6 >> 0x20) - fVar42) * 0.5;
          fVar41 = (float)puVar5[1] + ((float)puVar6[1] - (float)puVar5[1]) * 0.5;
          local_f0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0x90) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar19 + 0x80) >> 0x20) * fVar41 +
                              (float)((ulong)*(undefined8 *)(lVar19 + 0x60) >> 0x20) * fVar40 +
                              (float)((ulong)*(undefined8 *)(lVar19 + 0x70) >> 0x20) * fVar42,
                              (float)*(undefined8 *)(lVar19 + 0x90) +
                              (float)*(undefined8 *)(lVar19 + 0x80) * fVar41 +
                              (float)*(undefined8 *)(lVar19 + 0x60) * fVar40 +
                              (float)*(undefined8 *)(lVar19 + 0x70) * fVar42);
          uStack_e8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0x98) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar19 + 0x88) >> 0x20) * fVar41 +
                               (float)((ulong)*(undefined8 *)(lVar19 + 0x68) >> 0x20) * fVar40 +
                               (float)((ulong)*(undefined8 *)(lVar19 + 0x78) >> 0x20) * fVar42,
                               (float)*(undefined8 *)(lVar19 + 0x98) +
                               (float)*(undefined8 *)(lVar19 + 0x88) * fVar41 +
                               (float)*(undefined8 *)(lVar19 + 0x68) * fVar40 +
                               (float)*(undefined8 *)(lVar19 + 0x78) * fVar42);
          uVar27 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                             (*(long **)(param_1 + 0x28),&local_b0);
          if ((uVar27 & 1) == 0) {
            lVar37 = (long)((ulong)uVar13 << 0x20) >> 0x25;
            *(uint *)(*param_7 + lVar37 * 4) =
                 *(uint *)(*param_7 + lVar37 * 4) & (uVar35 ^ 0xffffffff);
          }
        }
        iVar31 = iVar31 + 1;
      } while (iVar38 + iVar31 < (int)(iVar33 + uVar39));
    }
  }
  lVar19 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x3b8) = (lVar19 - lVar18) + *(long *)(param_1 + 0x3b8);
  *(int *)(param_1 + 0x3c0) = *(int *)(param_1 + 0x3c0) + 1;
  lVar18 = nn::os::GetSystemTick();
  *(long *)(param_1 + 0x60) = (lVar18 - lVar17) + *(long *)(param_1 + 0x60);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
code_r0x0306349c:
  lVar23 = lVar23 + 2;
  if ((ulong)uVar39 * 2 == lVar23) goto LAB_030638a4;
  goto LAB_0306348c;
}


