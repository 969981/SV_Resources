/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03192b0c; name: FUN_03192b0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03192b0c(float param_1,long param_2,char param_3,long *param_4,long *param_5,void **param_6
                 ,long *param_7,undefined8 param_8,undefined8 param_9)

{
  void **ppvVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined *puVar12;
  uint uVar13;
  ulong uVar14;
  void *pvVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  long local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  
  uVar7 = *(uint *)(param_2 + 0x20);
  uVar8 = *(uint *)(param_2 + 0x30);
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < (int)uVar7) {
    FUN_02e9b320(param_4,PTR_PTR_047d1a50,(long)(int)uVar7);
  }
  uVar13 = *(uint *)(param_4 + 1);
  if (*(uint *)(param_4 + 1) != uVar7) {
    *(uint *)(param_4 + 1) = uVar7;
    uVar13 = uVar7;
  }
  uVar7 = *(uint *)(param_2 + 0x20);
  uVar26 = (ulong)uVar7;
  lVar17 = (long)(int)uVar7;
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < (int)uVar7) {
    FUN_02e9b320(param_4,PTR_PTR_047d1a50,lVar17);
    uVar13 = *(uint *)(param_4 + 1);
  }
  if (uVar13 != uVar7) {
    *(uint *)(param_4 + 1) = uVar7;
  }
  ppvVar1 = (void **)(param_2 + 0x18);
  if ((int)param_7[1] != uVar7 + 4) {
    *(uint *)(param_7 + 1) = uVar7 + 4;
  }
  if (0 < (int)uVar7) {
    fVar28 = param_1 * 0.5;
    uVar14 = 0;
    lVar18 = 0xc;
    do {
      pfVar9 = (float *)((long)*ppvVar1 + uVar14 * 0x10);
      fVar33 = *pfVar9 - fVar28;
      fVar34 = pfVar9[1] - fVar28;
      fVar35 = pfVar9[2] - fVar28;
      fVar29 = fVar28 + *pfVar9;
      fVar31 = fVar28 + pfVar9[1];
      fVar32 = fVar28 + pfVar9[2];
      puVar3 = (undefined4 *)(*param_7 + lVar18);
      lVar18 = lVar18 + 0x20;
      *puVar3 = (int)uVar14;
      puVar3[1] = ((((int)fVar29 >> 0x1f | 0x80000000U) ^ (uint)fVar29) >> 1) + 1;
      puVar3[-3] = (((int)fVar33 >> 0x1f | 0x80000000U) ^ (uint)fVar33) >> 1;
      puVar3[-2] = (((int)fVar34 >> 0x1f | 0x80000000U) ^ (uint)fVar34) >> 1;
      puVar3[-1] = (((int)fVar35 >> 0x1f | 0x80000000U) ^ (uint)fVar35) >> 1;
      uVar14 = uVar14 + 1;
      puVar3[2] = ((((int)fVar31 >> 0x1f | 0x80000000U) ^ (uint)fVar31) >> 1) + 1;
      puVar3[3] = ((((int)fVar32 >> 0x1f | 0x80000000U) ^ (uint)fVar32) >> 1) + 1;
    } while (uVar26 != uVar14);
  }
  uVar11 = _UNK_03cac098;
  uVar6 = _DAT_03cac090;
  puVar22 = (undefined8 *)(*param_7 + lVar17 * 0x20);
  puVar22[1] = _UNK_03cac098;
  *puVar22 = uVar6;
  puVar22[3] = 0;
  puVar22[2] = 0;
  puVar22[5] = uVar11;
  puVar22[4] = uVar6;
  puVar22[7] = 0;
  puVar22[6] = 0;
  puVar22[9] = uVar11;
  puVar22[8] = uVar6;
  puVar22[0xb] = 0;
  puVar22[10] = 0;
  puVar22[0xd] = uVar11;
  puVar22[0xc] = uVar6;
  puVar22[0xf] = 0;
  puVar22[0xe] = 0;
  FUN_031bfac0(*param_7,uVar7,param_8,param_9);
  if (0 < (int)uVar7) {
    lVar18 = 0;
    uVar27 = 0;
    uVar14 = 1;
    do {
      iVar24 = *(int *)(*param_7 + uVar27 * 0x20 + 0xc);
      lVar25 = (long)iVar24;
      if (iVar24 != -1) {
        pvVar15 = *ppvVar1;
        *(undefined4 *)(*param_4 + lVar25 * 4) = *(undefined4 *)(param_6 + 1);
        pfVar9 = (float *)((long)pvVar15 + lVar25 * 0x10);
        iVar24 = *(int *)(param_6 + 1);
        lVar16 = (long)iVar24;
        if ((int)(*(uint *)((long)param_6 + 0xc) & 0x7fffffff) <= iVar24) {
          FUN_02e9b11c(param_6,PTR_PTR_047d1a50,lVar16 + 1);
          iVar24 = *(int *)(param_6 + 1);
        }
        puVar22 = (undefined8 *)((long)*param_6 + (long)iVar24 * 0x10);
        uVar6 = *(undefined8 *)(pfVar9 + 2);
        *puVar22 = *(undefined8 *)pfVar9;
        puVar22[1] = uVar6;
        *(int *)(param_6 + 1) = (int)(lVar16 + 1);
        if ((long)(uVar27 + 1) < lVar17) {
          lVar16 = lVar18;
          uVar19 = uVar26;
          do {
            lVar4 = *param_7 + lVar16;
            if (*(uint *)(*param_7 + uVar27 * 0x20 + 0x10) < *(uint *)(lVar4 + 0x20)) break;
            iVar24 = *(int *)(lVar4 + 0x2c);
            if (iVar24 != -1) {
              puVar22 = (undefined8 *)((long)*ppvVar1 + (long)iVar24 * 0x10);
              uVar11 = puVar22[1];
              uVar6 = *puVar22;
              fVar28 = *pfVar9 - (float)uVar6;
              fVar29 = pfVar9[1] - (float)((ulong)uVar6 >> 0x20);
              fVar31 = pfVar9[2] - (float)uVar11;
              fVar32 = pfVar9[3] - (float)((ulong)uVar11 >> 0x20);
              fVar28 = fVar28 * fVar28;
              fVar29 = fVar29 * fVar29;
              fVar31 = fVar31 * fVar31;
              fVar32 = fVar32 * fVar32;
              auVar30._4_4_ = fVar29;
              auVar30._0_4_ = fVar28;
              auVar30._8_4_ = fVar31;
              auVar30._12_4_ = fVar32;
              auVar10._4_4_ = fVar29;
              auVar10._0_4_ = fVar28;
              auVar10._8_4_ = fVar31;
              auVar10._12_4_ = fVar32;
              auVar30 = NEON_ext(auVar30,auVar10,8,1);
              if (fVar28 + fVar29 + auVar30._0_4_ <= param_1 * param_1) {
                *(undefined4 *)(*param_4 + (long)iVar24 * 4) =
                     *(undefined4 *)(*param_4 + lVar25 * 4);
                *(undefined4 *)(*param_7 + lVar16 + 0x2c) = 0xffffffff;
              }
            }
            uVar19 = uVar19 - 1;
            lVar16 = lVar16 + 0x20;
          } while (uVar14 != uVar19);
        }
      }
      uVar27 = uVar27 + 1;
      uVar14 = uVar14 + 1;
      lVar18 = lVar18 + 0x20;
    } while (uVar27 != uVar26);
  }
  if (param_3 == '\0') {
    if (ppvVar1 != param_6) {
      iVar24 = *(int *)(param_6 + 1);
      pvVar15 = *param_6;
      if ((int)(*(uint *)(param_2 + 0x24) & 0x7fffffff) < iVar24) {
        FUN_02f0842c(ppvVar1,PTR_PTR_047d1a50,(long)iVar24);
      }
      memcpy(*(void **)(param_2 + 0x18),pvVar15,(long)iVar24 << 4);
      *(int *)(param_2 + 0x20) = iVar24;
    }
  }
  else {
    local_80 = (void *)0x0;
    local_78 = -0x8000000000000000;
    iVar24 = *(int *)(param_6 + 1);
    if (0 < iVar24) {
      FUN_02e9b11c(&local_80,PTR_PTR_047d1a50,iVar24);
      iVar24 = *(int *)(param_6 + 1);
    }
    local_90 = 0;
    local_88 = -0x8000000000000000;
    if (iVar24 < 1) {
      local_88._0_4_ = 0;
    }
    else {
      FUN_02e9b320(&local_90,PTR_PTR_047d1a50,iVar24);
    }
    if ((int)(uint)local_88 < iVar24) {
      lVar17 = (long)(int)(uint)local_88;
      uVar7 = ~(uint)local_88;
      local_88 = CONCAT44(local_88._4_4_,iVar24);
      memset((void *)(local_90 + lVar17 * 4),0xff,(ulong)(iVar24 + uVar7) * 4 + 4);
    }
    else if (iVar24 < (int)(uint)local_88) {
      local_88 = CONCAT44(local_88._4_4_,iVar24);
    }
    puVar12 = PTR_PTR_047d1a50;
    if (0 < (int)param_4[1]) {
      lVar17 = 0;
      do {
        lVar18 = *param_4;
        lVar25 = (long)*(int *)(lVar18 + lVar17 * 4);
        iVar24 = *(int *)(local_90 + lVar25 * 4);
        if (iVar24 == -1) {
          iVar24 = (int)local_78;
          *(int *)(local_90 + lVar25 * 4) = (int)local_78;
          puVar22 = (undefined8 *)((long)*param_6 + lVar25 * 0x10);
          lVar18 = (long)(int)local_78;
          if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)local_78) {
            FUN_02e9b11c(&local_80,puVar12,lVar18 + 1);
          }
          puVar23 = (undefined8 *)((long)local_80 + (long)(int)local_78 * 0x10);
          uVar6 = puVar22[1];
          *puVar23 = *puVar22;
          puVar23[1] = uVar6;
          local_78 = CONCAT44(local_78._4_4_,(int)(lVar18 + 1));
          lVar18 = *param_4;
        }
        *(int *)(lVar18 + lVar17 * 4) = iVar24;
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)param_4[1]);
    }
    pvVar15 = local_80;
    if (&local_80 != ppvVar1) {
      iVar24 = (int)local_78;
      lVar17 = (long)(int)local_78;
      if ((int)(*(uint *)(param_2 + 0x24) & 0x7fffffff) < (int)local_78) {
        FUN_02f0842c(ppvVar1,PTR_PTR_047d1a50,lVar17);
      }
      memcpy(*(void **)(param_2 + 0x18),pvVar15,lVar17 << 4);
      *(int *)(param_2 + 0x20) = iVar24;
    }
    lVar17 = local_88;
    puVar12 = PTR_PTR_047d1a50;
    uVar26 = (ulong)local_88._4_4_;
    local_88 = (ulong)local_88._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_90 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_90,uVar26 << 2);
    }
    lVar17 = local_78;
    uVar26 = (ulong)local_78._4_4_;
    local_78 = (ulong)local_78._4_4_ << 0x20;
    if ((-1 < lVar17) && (local_80 != (void *)0x0)) {
      (**(code **)(*(long *)puVar12 + 0x20))(puVar12,local_80,uVar26 << 4);
    }
  }
  plVar2 = (long *)(param_2 + 0x28);
  if (0 < (int)uVar8) {
    lVar17 = 0;
    do {
      piVar5 = (int *)(*plVar2 + lVar17);
      *piVar5 = *(int *)(*param_4 + (long)*piVar5 * 4);
      lVar17 = lVar17 + 0x10;
      piVar5[1] = *(int *)(*param_4 + (long)piVar5[1] * 4);
      piVar5[2] = *(int *)(*param_4 + (long)piVar5[2] * 4);
    } while ((ulong)uVar8 * 0x10 != lVar17);
  }
  if ((int)(*(uint *)((long)param_5 + 0xc) & 0x7fffffff) < (int)uVar8) {
    FUN_02e9b320(param_5,PTR_PTR_047d1a50,(long)(int)uVar8);
  }
  if (*(uint *)(param_5 + 1) != uVar8) {
    *(uint *)(param_5 + 1) = uVar8;
  }
  puVar22 = (undefined8 *)*plVar2;
  puVar23 = puVar22;
  if (0 < (int)uVar8) {
    lVar17 = 0;
    uVar26 = 0;
    puVar20 = puVar22;
    do {
      piVar5 = (int *)((long)puVar23 + lVar17);
      if ((*piVar5 == piVar5[1]) || (*piVar5 == piVar5[2] || piVar5[1] == piVar5[2])) {
        uVar21 = 0xffffffff;
        puVar22 = puVar20;
      }
      else {
        uVar6 = *(undefined8 *)(piVar5 + 2);
        uVar21 = (undefined4)((ulong)((long)puVar20 - (long)puVar23) >> 4);
        puVar22 = puVar20 + 2;
        *puVar20 = *(undefined8 *)piVar5;
        puVar20[1] = uVar6;
      }
      *(undefined4 *)(*param_5 + uVar26 * 4) = uVar21;
      puVar23 = (undefined8 *)*plVar2;
      uVar26 = uVar26 + 1;
      lVar17 = lVar17 + 0x10;
      puVar20 = puVar22;
    } while (uVar8 != uVar26);
  }
  iVar24 = (int)((ulong)((long)puVar22 - (long)puVar23) >> 4);
  if ((int)(*(uint *)(param_2 + 0x34) & 0x7fffffff) < iVar24) {
    FUN_02ebb440(plVar2,PTR_PTR_047d1a50,((long)puVar22 - (long)puVar23) * 0x10000000 >> 0x20);
  }
  if (*(int *)(param_2 + 0x30) != iVar24) {
    *(int *)(param_2 + 0x30) = iVar24;
  }
  return;
}


