/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00174230; name: FUN_00174230
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00174230(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,
                 byte *param_5,ulong param_6,undefined8 param_7,uint param_8,long param_9,
                 float *param_10,undefined8 param_11,int param_12)

{
  long lVar1;
  byte bVar2;
  void *__src;
  float fVar3;
  bool bVar4;
  uint uVar5;
  size_t __n;
  size_t sVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar15;
  float local_ac;
  float local_a8;
  undefined4 uStack_a4;
  long local_a0;
  long local_98;
  uint local_88;
  undefined4 uStack_84;
  
  uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  lVar9 = param_4 - (long)param_3;
  if (lVar9 < 6) {
    return -1;
  }
  uVar5 = FUN_00160010(param_7);
  fVar12 = (float)param_1;
  if ((0 < (long)param_6) && (uVar5 == (uint)param_6)) {
    if (5 < (long)param_6) {
      if ((param_8 >> 7 & 1) != 0) {
        fVar11 = (float)(**(code **)(param_9 + 8))(param_6);
        fVar12 = fVar11 * fVar12 + 6.0;
        if (*param_10 <= fVar12) {
          return -1;
        }
        *param_10 = fVar12;
        bVar2 = *param_5;
        lVar9 = param_6 * 0x40000 + 0x2ffffc0001;
        uVar5 = (uint)lVar9;
        *param_3 = (char)((ulong)lVar9 >> 0x20);
        param_3[5] = bVar2;
        *(uint *)(param_3 + 1) = ((uVar5 & 0xff00ff00) >> 8 | uVar5 << 8) >> 0x10 | uVar5 << 0x18;
        return 6;
      }
      if (lVar9 < 8) {
        return -1;
      }
      fVar11 = (float)(**(code **)(param_9 + 8))(param_6);
      fVar12 = fVar11 * fVar12 + 8.0;
      if (*param_10 <= fVar12) {
        return -1;
      }
      *param_10 = fVar12;
      bVar2 = *param_5;
      param_3[5] = 0;
      lVar9 = param_6 * 0x40000 + 0x1ffffc0003;
      uVar5 = (uint)lVar9;
      *param_3 = (char)((ulong)lVar9 >> 0x20);
      param_3[7] = bVar2 << 6;
      param_3[6] = bVar2 >> 2 | 0x40;
      *(uint *)(param_3 + 1) = ((uVar5 & 0xff00ff00) >> 8 | uVar5 << 8) >> 0x10 | uVar5 << 0x18;
      return 8;
    }
    *param_10 = (float)(long)param_6 + 3.0;
    if (lVar9 < (long)(param_6 + 3)) {
      return -1;
    }
    param_3[2] = (char)param_6;
    *param_3 = (char)(uVar5 >> 0x10);
    param_3[1] = (char)(uVar5 >> 8);
    memcpy(param_3 + 3,param_5,param_6);
    puVar8 = param_3 + 3 + param_6;
    goto LAB_00174730;
  }
  fVar14 = (float)(long)param_6 + 3.0;
  fVar11 = *param_10;
  if (fVar14 <= *param_10) {
    fVar11 = fVar14;
  }
  if ((param_12 < 3) && (uVar5 < (uint)(param_6 >> 7))) {
    uVar10 = 0;
    sVar6 = param_6;
    fVar12 = 1.0737418e+09;
    if (fVar14 <= 1.0737418e+09) goto LAB_00174350;
LAB_00174704:
    fVar14 = fVar12;
    lVar9 = sVar6 + param_6 * 0x40000 + (uVar10 << 0x24) + -0x40000;
    uVar5 = (uint)lVar9;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    *(uint *)(param_3 + 1) = uVar5 >> 0x10 | uVar5 << 0x10;
    puVar8 = param_3 + sVar6 + 5;
    *param_3 = (char)((ulong)lVar9 >> 0x20);
  }
  else {
    if ((param_8 >> 2 & 1) == 0) {
LAB_0017454c:
      uVar10 = 0;
      fVar12 = 1.0737418e+09;
      __n = param_6;
      lVar1 = local_a0;
    }
    else {
      fVar13 = (float)(**(code **)(param_9 + 0x60))(param_6);
      lVar7 = (long)(fVar11 - (fVar13 * fVar12 + 5.0));
      lVar1 = lVar9 + -5;
      if (lVar7 <= lVar9 + -5) {
        lVar1 = lVar7;
      }
      if (lVar1 < 1) goto LAB_0017454c;
      FUN_0015c528(&local_a8,lVar1,param_11,&local_88);
      __src = (void *)CONCAT44(uStack_84,local_88);
      local_ac = 1.0737418e+09;
      __n = FUN_00175360(param_1,__src,(long)__src + lVar1,param_5,param_6,param_9,&local_ac,
                         param_11,param_8,CONCAT44(uVar15,param_12));
      fVar12 = local_ac;
      bVar4 = false;
      if (((long)__n <= lVar1) && (bVar4 = false, !NAN(local_ac) && !NAN(fVar11))) {
        bVar4 = local_ac < fVar11;
      }
      if (bVar4) {
        memcpy(param_3 + 5,__src,__n);
        if (fVar12 <= fVar11) {
          fVar11 = fVar12;
        }
        uVar10 = 3;
      }
      else {
        uVar10 = 0;
        fVar12 = 1.0737418e+09;
        __n = param_6;
      }
      lVar1 = 0;
      if (local_a0 != 0) {
        lVar1 = CONCAT44(uStack_a4,local_a8);
        if ((lVar1 == 0) ||
           ((local_98 + 0xfU & 0xfffffffffffffff0) + local_a0 != *(long *)(lVar1 + 8))) {
          (**(code **)PTR_PTR_047cb898)();
        }
        else {
          *(long *)(lVar1 + 8) = local_a0;
        }
        local_a0 = 0;
        lVar1 = local_a0;
      }
    }
    local_a0 = lVar1;
    sVar6 = __n;
    if (0x1f < (long)param_6) {
      uVar5 = (uint)uVar10;
      puVar8 = param_3 + 5;
      local_88 = 0;
      local_a8 = fVar11;
      sVar6 = FUN_00176360(param_1,param_2,puVar8,param_4,param_5,param_6,param_7,param_9,&local_a8,
                           &local_88,param_8,param_11,param_12);
      if ((long)param_6 < (long)sVar6) {
        fVar12 = 1.0737418e+09;
      }
      else {
        if (-1 < (long)sVar6) {
          uVar10 = (ulong)local_88;
          __n = sVar6;
          fVar12 = local_a8;
          fVar11 = local_a8;
        }
        uVar5 = (uint)uVar10;
      }
      if ((param_8 >> 1 & 1) != 0) {
        local_a8 = fVar11;
        sVar6 = FUN_0017a1d0(param_1,puVar8,param_4,param_5,param_6,param_7,param_9,&local_a8,
                             param_11);
        if (-1 < (long)sVar6) {
          uVar5 = 1;
        }
        uVar10 = (ulong)uVar5;
        fVar13 = local_a8;
        fVar3 = local_a8;
        if (-1 >= (long)sVar6) {
          sVar6 = __n;
          fVar13 = fVar11;
          fVar3 = fVar12;
        }
        fVar12 = fVar3;
        fVar11 = fVar13;
        __n = sVar6;
      }
      sVar6 = __n;
      if (((param_8 >> 4 & 1) != 0) &&
         (((8 < param_12 || ((long)param_6 < 0x20000)) || (fVar12 < *param_10)))) {
        local_a8 = 1.0737418e+09;
        sVar6 = FUN_001827d0(param_1,fVar11,puVar8,param_4,param_5,param_6,param_7,param_11,param_12
                             ,param_8,param_9,&local_a8);
        bVar4 = (long)sVar6 < 0;
        fVar11 = local_a8;
        if (bVar4) {
          fVar11 = fVar12;
        }
        uVar5 = 5;
        if (bVar4) {
          uVar5 = (uint)uVar10;
        }
        uVar10 = (ulong)uVar5;
        fVar12 = fVar11;
        if (bVar4) {
          sVar6 = __n;
        }
      }
    }
    if (fVar12 < fVar14) goto LAB_00174704;
LAB_00174350:
    if (*param_10 <= fVar14) {
      return -1;
    }
    if (0x3ffff < (long)param_6) {
      FUN_0015c3d0();
      if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
        (**(code **)PTR_PTR_047cb868)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.cpp",0x1e5,
                   "OODLE ERROR : from_len too big !?\n");
      }
      FUN_0015c3f0();
      return -1;
    }
    if (lVar9 < (long)(param_6 + 3)) {
      return -1;
    }
    param_3[2] = (char)param_6;
    *param_3 = (char)(param_6 >> 0x10);
    param_3[1] = (char)(param_6 >> 8);
    memcpy(param_3 + 3,param_5,param_6);
    puVar8 = param_3 + 3 + param_6;
  }
  *param_10 = fVar14;
LAB_00174730:
  return (long)puVar8 - (long)param_3;
}


