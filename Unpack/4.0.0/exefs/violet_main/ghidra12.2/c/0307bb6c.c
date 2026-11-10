/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307bb6c; name: FUN_0307bb6c
 */


void FUN_0307bb6c(long param_1,undefined4 param_2,float *param_3,long param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  char cVar7;
  undefined1 auVar8 [16];
  undefined *puVar9;
  bool bVar10;
  undefined1 (*pauVar11) [12];
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  float *pfVar22;
  uint *puVar23;
  long *plVar24;
  uint uVar25;
  int iVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  int local_80;
  int local_78 [2];
  int local_70 [2];
  undefined8 local_68;
  
  fVar2 = param_3[0xc];
  if (fVar2 == param_3[0xd]) {
    uVar20 = (ulong)*(uint *)(param_1 + 0x40);
    if ((int)*(uint *)(param_1 + 0x40) < 1) {
      lVar18 = -1;
    }
    else {
      lVar21 = 0;
      lVar18 = -1;
      plVar16 = *(long **)(param_1 + 0x38);
      do {
        if ((*(float *)((long)plVar16 + 0x1c) == fVar2) && (*plVar16 != 0)) {
          lVar18 = lVar21 >> 0x20;
          break;
        }
        lVar21 = lVar21 + 0x100000000;
        uVar20 = uVar20 - 1;
        plVar16 = plVar16 + 0x20;
      } while (uVar20 != 0);
    }
    FUN_0309035c((*(long **)(param_1 + 0x38))[lVar18 * 0x20],param_2,param_3,param_4);
    return;
  }
  uVar15 = *(uint *)(param_1 + 0x40);
  plVar16 = *(long **)(param_1 + 0x38);
  if (0 < (int)uVar15) {
    uVar20 = 0;
    plVar27 = plVar16;
    do {
      if ((*(float *)((long)plVar27 + 0x1c) == fVar2) && (*plVar27 != 0)) goto LAB_0307bc2c;
      uVar20 = uVar20 + 1;
      plVar27 = plVar27 + 0x20;
    } while (uVar15 != uVar20);
  }
  uVar20 = 0xffffffff;
LAB_0307bc2c:
  iVar26 = (int)uVar20;
  if (0 < (int)uVar15) {
    uVar19 = 0;
    plVar27 = plVar16;
    do {
      if ((*(float *)((long)plVar27 + 0x1c) == param_3[0xd]) && (*plVar27 != 0)) {
        local_80 = (int)uVar19;
        goto LAB_0307bcc4;
      }
      uVar19 = uVar19 + 1;
      plVar27 = plVar27 + 0x20;
    } while (uVar15 != uVar19);
  }
  uVar19 = 0xffffffffffffffff;
  local_80 = -1;
LAB_0307bcc4:
  uVar4 = *(ushort *)(param_3 + 0x20);
  uVar15 = (uint)uVar4;
  lVar18 = *(long *)((long)plVar16 +
                    (-(uVar20 >> 0x1f & 1) & 0xffffff0000000000 | (uVar20 & 0xffffffff) << 8));
  uVar5 = *(ushort *)((long)param_3 + 0x82);
  lVar21 = *(long *)((long)plVar16 +
                    (-(uVar19 >> 0x1f & 1) & 0xffffff0000000000 | (uVar19 & 0xffffffff) << 8));
  fVar2 = (float)((uint)uVar4 << 0x10);
  uVar25 = (uint)uVar5;
  if ((fVar2 < 0.0) || ((float)((uint)uVar5 << 0x10) < 0.0)) {
    pauVar11 = (undefined1 (*) [12])(param_3 + 8);
    uVar33 = (undefined4)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
    auVar37._12_4_ = uVar33;
    auVar37._0_12_ = *pauVar11;
    auVar8._12_4_ = uVar33;
    auVar8._0_12_ = *pauVar11;
    auVar37 = NEON_ext(auVar37,auVar8,8,1);
    fVar34 = (*param_3 + param_3[1]) * 0.5;
    fVar35 = (param_3[4] + param_3[5]) * 0.5;
    fVar36 = ((float)*(undefined8 *)*pauVar11 + (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20)) *
             0.5;
    fVar28 = (param_3[2] + param_3[3]) * 0.5;
    fVar30 = (param_3[6] + param_3[7]) * 0.5;
    fVar32 = (auVar37._0_4_ + auVar37._4_4_) * 0.5;
    fVar29 = ((float)*(undefined8 *)(lVar18 + 0x90) +
             (float)*(undefined8 *)(lVar18 + 0x80) * fVar36 +
             (float)*(undefined8 *)(lVar18 + 0x60) * fVar34 +
             (float)*(undefined8 *)(lVar18 + 0x70) * fVar35) -
             ((float)*(undefined8 *)(lVar21 + 0x90) +
             (float)*(undefined8 *)(lVar21 + 0x80) * fVar32 +
             (float)*(undefined8 *)(lVar21 + 0x60) * fVar28 +
             (float)*(undefined8 *)(lVar21 + 0x70) * fVar30);
    fVar31 = ((float)((ulong)*(undefined8 *)(lVar18 + 0x90) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar18 + 0x80) >> 0x20) * fVar36 +
             (float)((ulong)*(undefined8 *)(lVar18 + 0x60) >> 0x20) * fVar34 +
             (float)((ulong)*(undefined8 *)(lVar18 + 0x70) >> 0x20) * fVar35) -
             ((float)((ulong)*(undefined8 *)(lVar21 + 0x90) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar21 + 0x80) >> 0x20) * fVar32 +
             (float)((ulong)*(undefined8 *)(lVar21 + 0x60) >> 0x20) * fVar28 +
             (float)((ulong)*(undefined8 *)(lVar21 + 0x70) >> 0x20) * fVar30);
    fVar28 = ((float)*(undefined8 *)(lVar18 + 0x98) +
             (float)*(undefined8 *)(lVar18 + 0x88) * fVar36 +
             (float)*(undefined8 *)(lVar18 + 0x68) * fVar34 +
             (float)*(undefined8 *)(lVar18 + 0x78) * fVar35) -
             ((float)*(undefined8 *)(lVar21 + 0x98) +
             (float)*(undefined8 *)(lVar21 + 0x88) * fVar32 +
             (float)*(undefined8 *)(lVar21 + 0x68) * fVar28 +
             (float)*(undefined8 *)(lVar21 + 0x78) * fVar30);
    uVar6 = (uint)(SQRT(fVar29 * fVar29 + fVar31 * fVar31 + fVar28 * fVar28) * 1.0039062) >> 0x10;
    uVar15 = uVar6;
    if (0.0 <= fVar2) {
      uVar15 = (uint)uVar4;
    }
    if ((float)((uint)uVar5 << 0x10) < 0.0) {
      uVar25 = uVar6;
    }
  }
  local_78[0] = local_80;
  local_70[0] = iVar26;
  FUN_0309048c(lVar18,param_2,param_3,uVar15,param_4);
  FUN_0309048c(lVar21,param_2,param_3,uVar25,param_4 + 0x20);
  lVar21 = *(long *)(param_1 + 0x38);
  lVar18 = lVar21 + (long)iVar26 * 0x100;
  plVar16 = (long *)(lVar18 + 0xb0);
  lVar12 = FUN_03080134(plVar16,local_78);
  puVar9 = PTR_DAT_047d1a08;
  if (lVar12 == 0) {
    uVar20 = 0;
    uVar19 = 0xffffffff;
  }
  else {
    uVar19 = (ulong)*(uint *)(lVar12 + 4);
    uVar20 = (lVar12 - *(long *)(lVar18 + 0xc0)) * 0x20000000;
  }
  if ((int)(uVar19 | uVar20) < 0) {
    iVar3 = *(int *)(param_1 + 0x50);
    local_68 = 0x38;
    plVar27 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar9 + 0x10) != (code *)0x0) {
      (**(code **)(puVar9 + 0x10))(plVar27,"hkaiStreamingSetInstance");
    }
    plVar27[1] = 0xffffffff;
    plVar24 = plVar27 + 2;
    *plVar24 = 1;
    puVar9 = PTR_DAT_047e4f88;
    plVar27[4] = 0;
    plVar27[5] = 0;
    *(int *)(plVar27 + 3) = iVar26;
    *plVar27 = (long)(puVar9 + 0x10);
    plVar27[6] = -0x8000000000000000;
    *(int *)((long)plVar27 + 0x1c) = local_80;
    iVar26 = *(int *)(param_1 + 0x50);
    lVar12 = (long)iVar26;
    if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) <= iVar26) {
      FUN_0307fa60(param_1 + 0x48,lVar12 + 1);
      iVar26 = *(int *)(param_1 + 0x50);
    }
    plVar17 = (long *)(*(long *)(param_1 + 0x48) + (long)iVar26 * 0x18);
    *(int *)(param_1 + 0x50) = (int)(lVar12 + 1);
    *plVar17 = 0;
    plVar17[1] = 0;
    *(undefined1 *)(plVar17 + 2) = 1;
    *(undefined1 *)(plVar17 + 2) = 1;
    if (plVar27[1] == 0) {
      *plVar17 = (long)plVar27;
    }
    else {
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar10) {
          *plVar24 = *plVar24 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      plVar14 = (long *)*plVar17;
      *plVar17 = (long)plVar27;
      if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
        plVar17 = plVar14 + 2;
        do {
          lVar12 = *plVar17;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar10) {
            *plVar17 = lVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))();
        }
      }
    }
    lVar21 = lVar21 + (long)local_80 * 0x100;
    if (plVar27[1] != 0) {
      do {
        lVar12 = *plVar24;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar10) {
          *plVar24 = lVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar27 + 0x18))(plVar27);
      }
    }
    plVar24 = (long *)(lVar21 + 0xb0);
    uVar15 = FUN_0307fc58(plVar16,local_78);
    puVar23 = (uint *)(lVar18 + 0xb8);
    if (*puVar23 == uVar15) {
      uVar25 = uVar15 + 1;
      if ((int)(*(uint *)(lVar18 + 0xbc) & 0x7fffffff) <= (int)uVar15) {
        FUN_0307fd54(plVar16,(long)(int)uVar25);
        uVar15 = *puVar23;
      }
      piVar1 = (int *)(*plVar16 + (long)(int)uVar15 * 8);
      *piVar1 = local_78[0];
      piVar1[1] = iVar3;
      *puVar23 = uVar25;
    }
    else {
      *(int *)(*plVar16 + ((long)((ulong)uVar15 << 0x20) >> 0x1d) + 4) = iVar3;
    }
    uVar15 = FUN_0307fc58(plVar24,local_70);
    puVar23 = (uint *)(lVar21 + 0xb8);
    if (*puVar23 == uVar15) {
      uVar25 = uVar15 + 1;
      if ((int)(*(uint *)(lVar21 + 0xbc) & 0x7fffffff) <= (int)uVar15) {
        FUN_0307fd54(plVar24,(long)(int)uVar25);
        uVar15 = *puVar23;
      }
      piVar1 = (int *)(*plVar24 + (long)(int)uVar15 * 8);
      *piVar1 = local_70[0];
      piVar1[1] = iVar3;
      *puVar23 = uVar25;
    }
    else {
      *(int *)(*plVar24 + ((long)((ulong)uVar15 << 0x20) >> 0x1d) + 4) = iVar3;
    }
  }
  else {
    puVar13 = (undefined8 *)
              (*(long *)(param_1 + 0x48) +
              (long)*(int *)(*plVar16 + ((long)((uVar19 | uVar20) << 0x20) >> 0x1d) + 4) * 0x18);
    if (*(char *)(puVar13 + 2) == '\x01') {
      plVar27 = (long *)*puVar13;
    }
    else {
      plVar27 = (long *)FUN_03080464();
    }
  }
  iVar26 = (int)plVar27[6];
  lVar18 = (long)iVar26;
  if ((int)(*(uint *)((long)plVar27 + 0x34) & 0x7fffffff) <= iVar26) {
    FUN_0308081c(plVar27 + 5,lVar18 + 1);
    iVar26 = (int)plVar27[6];
  }
  lVar21 = plVar27[5];
  *(int *)(plVar27 + 6) = (int)(lVar18 + 1);
  pfVar22 = (float *)(lVar21 + (long)iVar26 * 0xc);
  bVar10 = (int)plVar27[3] != local_70[0];
  if (bVar10) {
    *pfVar22 = param_3[0xf];
    param_3 = param_3 + 0xe;
  }
  else {
    *pfVar22 = param_3[0xe];
    param_3 = param_3 + 0xf;
  }
  lVar21 = lVar21 + (long)iVar26 * 0xc;
  *(float *)(lVar21 + 4) = *param_3;
  *(undefined2 *)(lVar21 + 8) = *(undefined2 *)(param_4 + (ulong)bVar10 * 0x20 + 0x18);
  *(undefined2 *)(lVar21 + 10) = *(undefined2 *)(param_4 + (ulong)!bVar10 * 0x20 + 0x18);
  return;
}


