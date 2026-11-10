/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001a1f60; name: FUN_001a1f60
 */


undefined1 *
FUN_001a1f60(float *param_1,int *param_2,void *param_3,undefined8 *param_4,long param_5,int *param_6
            ,undefined8 *param_7,long *param_8,long param_9)

{
  bool bVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  undefined2 *puVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  void *pvVar23;
  undefined2 *puVar24;
  undefined8 *puVar25;
  size_t __n;
  void *pvVar26;
  undefined1 *puVar27;
  size_t sVar28;
  undefined1 *puVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 in_stack_fffffffffffffec0;
  undefined8 uVar37;
  undefined4 uVar38;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar40;
  undefined8 uVar39;
  float local_b4;
  float fStack_b0;
  float local_ac;
  long local_a8;
  long local_a0;
  long local_98;
  float local_8c [3];
  
  uVar40 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  uVar38 = (undefined4)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  iVar5 = *param_6;
  iVar9 = (int)param_8[0xf];
  puVar29 = (undefined1 *)(long)iVar9;
  if (iVar5 == 0xb) {
    bVar1 = true;
    lVar10 = param_8[6] - param_8[5];
    uVar15 = *param_7;
  }
  else {
    bVar1 = param_6[1] < -3;
    lVar10 = param_8[6] - param_8[5];
    uVar15 = *param_7;
  }
  if (lVar10 == 0) {
    if (bVar1) {
      return puVar29;
    }
    if (param_8[3] == 0) {
      return puVar29;
    }
    bVar1 = false;
    if (*(int *)PTR_DAT_047cb8d8 < 6) {
      return puVar29;
    }
  }
  if (param_9 == 0) {
    fVar35 = 8.0;
    puVar25 = param_4 + 1;
    *param_4 = *(undefined8 *)param_8[0x10];
  }
  else {
    fVar35 = 0.0;
    puVar25 = param_4;
  }
  iVar6 = param_6[0x12];
  iVar7 = param_6[1];
  lVar18 = *(long *)(param_6 + 2);
  fVar34 = (float)param_6[0x11];
  local_8c[0] = 1.0737418e+09;
  lVar13 = param_8[3];
  lVar16 = param_8[4];
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uVar20 = param_8[2] - param_8[1];
  if (bVar1) {
    pvVar23 = (void *)0x0;
    pvVar26 = (void *)0x0;
    if (uVar20 == 0) goto LAB_001a207c;
LAB_001a2144:
    lVar13 = uVar20 + 3;
    fVar36 = (float)lVar13;
    if ((bool)(0x1f < (long)uVar20 & (bVar1 ^ 1U))) {
      FUN_0015edc0(param_8[1],uVar20,pvVar26,0x100,0);
      if (param_8[3] == 0) {
        lVar13 = -1;
LAB_001a232c:
        local_8c[0] = 1.0737418e+09;
LAB_001a2334:
        uVar37 = uVar15;
        lVar16 = FUN_00174230(fVar34,0x53800000,puVar25,param_5,param_8[1],uVar20,pvVar26,iVar6,
                              lVar18,local_8c,uVar15,CONCAT44(uVar40,iVar7));
        uVar38 = (undefined4)((ulong)uVar37 >> 0x20);
        if (0 < lVar16) {
          *param_2 = 1;
          lVar13 = lVar16;
        }
      }
      else {
        FUN_0015edc0(param_8[3],uVar20,pvVar23,0x100,0);
        fVar31 = (float)(**(code **)(lVar18 + 0x78))(uVar20);
        if (iVar7 < 6) {
          iVar11 = FUN_001845e0(pvVar26,0x100,uVar20 & 0xffffffff);
          iVar12 = FUN_001845e0(pvVar23,0x100,uVar20 & 0xffffffff);
          if ((float)iVar11 * 0.125 <= fVar34 * fVar31 + (float)iVar12 * 0.125) {
            lVar13 = -1;
            goto LAB_001a232c;
          }
        }
        *param_2 = 0;
        uVar39 = CONCAT44(uVar40,iVar7);
        uVar37 = uVar15;
        lVar13 = FUN_00174230(fVar34,0x53800000,puVar25,param_5,param_8[3],uVar20,pvVar23,iVar6,
                              lVar18,local_8c,uVar15,uVar39);
        uVar38 = (undefined4)((ulong)uVar37 >> 0x20);
        uVar40 = (undefined4)((ulong)uVar39 >> 0x20);
        local_8c[0] = fVar34 * fVar31 + local_8c[0];
        if ((((long)uVar20 <= lVar13) || (lVar13 < 0)) || (fVar36 < local_8c[0])) goto LAB_001a232c;
        if (5 < iVar7) goto LAB_001a2334;
      }
      if (param_3 != (void *)0x0) {
        if (*param_2 == 1) {
          pvVar23 = pvVar26;
        }
        memcpy(param_3,pvVar23,0x400);
      }
    }
    else {
      *param_2 = 1;
      local_8c[0] = fVar36;
      if (bVar1) {
        *(char *)puVar25 = (char)(uVar20 >> 0x10);
        *(char *)((long)puVar25 + 1) = (char)(uVar20 >> 8);
        *(char *)((long)puVar25 + 2) = (char)uVar20;
      }
      else {
        FUN_00174980(puVar25,param_5,param_8[1],uVar20);
      }
    }
    if (lVar13 < 0) goto joined_r0x001a2310;
  }
  else {
    pvVar26 = (void *)FUN_001617e8(&local_a8,0x800);
    pvVar23 = (void *)((long)pvVar26 + 0x400);
    if (uVar20 != 0) goto LAB_001a2144;
LAB_001a207c:
    uVar30 = lVar16 - lVar13;
    if ((long)uVar30 < 1) goto LAB_001a2144;
    *param_2 = 0;
    FUN_0015edc0(param_8[3],uVar30,pvVar23,0x100,0);
    uVar37 = uVar15;
    lVar13 = FUN_00174230(fVar34,0x53800000,puVar25,param_5,param_8[3],uVar30,pvVar23,iVar6,lVar18,
                          local_8c,uVar15,CONCAT44(uVar40,iVar7));
    uVar38 = (undefined4)((ulong)uVar37 >> 0x20);
    if ((lVar13 < 0) || ((long)uVar30 < lVar13)) {
      puVar29 = (undefined1 *)(long)(iVar9 + 1);
      goto joined_r0x001a2310;
    }
    if (param_3 != (void *)0x0) {
      memcpy(param_3,pvVar23,0x400);
    }
    uVar20 = uVar30;
  }
  puVar27 = (undefined1 *)((long)puVar25 + lVar13);
  local_ac = 1.0737418e+09;
  if (iVar5 == 0xb) {
    local_ac = (float)lVar10 + 3.0;
    lVar13 = FUN_00174980(puVar27,param_5,param_8[5],lVar10);
  }
  else {
    lVar13 = 0;
    if (param_3 != (void *)0x0) {
      lVar13 = (long)param_3 + 0x400;
    }
    uVar37 = CONCAT44(uVar38,iVar7);
    lVar13 = FUN_00174a40(fVar34,0x53800000,puVar27,param_5,param_8[5],lVar10,iVar6,lVar18,&local_ac
                          ,uVar15,uVar37,lVar13);
    uVar38 = (undefined4)((ulong)uVar37 >> 0x20);
  }
  if (lVar13 < 0) goto joined_r0x001a2310;
  puVar2 = (undefined2 *)(puVar27 + lVar13);
  if (param_5 - (long)puVar2 < 0x11) goto joined_r0x001a2310;
  if (iVar9 < 0x10001) {
    puVar24 = puVar2;
  }
  else {
    *puVar2 = (short)*(undefined4 *)((long)param_8 + 0xa4);
    puVar24 = puVar2 + 1;
  }
  puVar19 = (undefined2 *)param_8[7];
  __n = param_8[8] - (long)puVar19;
  fVar36 = (float)(long)__n;
  uVar30 = __n;
  if ((long)__n < 0) {
    uVar30 = __n + 1;
  }
  uVar30 = (long)uVar30 >> 1;
  if (((*(int *)PTR_DAT_047cb8d8 < 4) || ((long)__n < 0x40)) || (iVar5 == 0xb)) {
LAB_001a269c:
    if (param_5 - (long)puVar24 <= (long)(__n + 2)) goto joined_r0x001a2310;
    *puVar24 = (short)uVar30;
    memcpy(puVar24 + 1,(void *)param_8[7],__n);
    puVar27 = (undefined1 *)((long)(puVar24 + 1) + __n);
  }
  else {
    lVar16 = *param_8;
    lVar13 = lVar16 + uVar30;
    if ((__n & 0xfffffffffffffffe) == 2) {
      lVar22 = 0;
    }
    else {
      lVar22 = 0;
      do {
        uVar8 = *puVar19;
        puVar27 = (undefined1 *)(lVar13 + lVar22);
        *puVar27 = (char)uVar8;
        puVar3 = (undefined1 *)(lVar16 + lVar22);
        lVar22 = lVar22 + 2;
        *puVar3 = (char)((ushort)uVar8 >> 8);
        uVar8 = puVar19[1];
        puVar19 = puVar19 + 2;
        puVar27[1] = (char)uVar8;
        puVar3[1] = (char)((ushort)uVar8 >> 8);
      } while (uVar30 - (uVar30 & 1) != lVar22);
    }
    if ((uVar30 & 1) != 0) {
      uVar8 = *puVar19;
      *(char *)(lVar13 + lVar22) = (char)uVar8;
      *(char *)(lVar16 + lVar22) = (char)((ushort)uVar8 >> 8);
    }
    lVar14 = param_8[7];
    local_b4 = 1.0737418e+09;
    fStack_b0 = 1.0737418e+09;
    pvVar23 = (void *)(*param_8 + uVar30 * 2);
    lVar22 = (long)param_3 + 0xc00;
    lVar4 = (long)param_3 + 0x800;
    if (param_3 == (void *)0x0) {
      lVar22 = 0;
      lVar4 = 0;
    }
    lVar16 = FUN_00174a40(fVar34,0x53800000,pvVar23,lVar14,lVar16,uVar30,iVar6,lVar18,&fStack_b0,
                          uVar15,CONCAT44(uVar38,iVar7),lVar22);
    lVar13 = FUN_00174a40(fVar34,0x53800000,(long)pvVar23 + lVar16,lVar14,lVar13,uVar30,iVar6,lVar18
                          ,&local_b4,uVar15,iVar7,lVar4);
    fVar31 = (float)(**(code **)(lVar18 + 0x18))(uVar30);
    fVar31 = fVar34 * fVar31 + fStack_b0 + local_b4;
    if (fVar36 <= fVar31) goto LAB_001a269c;
    __n = lVar13 + lVar16;
    if (param_5 - (long)puVar24 <= (long)(__n + 2)) goto joined_r0x001a2310;
    *puVar24 = 0xffff;
    memcpy(puVar24 + 1,pvVar23,__n);
    puVar27 = (undefined1 *)((long)(puVar24 + 1) + __n);
    fVar36 = fVar31;
  }
  lVar16 = (long)(*(int *)((long)param_8 + 0xac) + (int)param_8[0x15]);
  lVar13 = FUN_00151010(*param_6,puVar29);
  if (lVar13 < (long)(lVar10 + uVar20 + (uVar30 + lVar16) * 4 + 0xd044)) {
    FUN_0015c3d0();
    if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
      (**(code **)PTR_PTR_047cb868)
                (0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",0x9a0,
                 "OODLE ERROR : newLZF chunk needs too much scratch!\n");
    }
    FUN_0015c3f0();
  }
  else if (7 < param_5 - (long)puVar27) {
    uVar21 = *(uint *)((long)param_8 + 0xac);
    uVar17 = (int)param_8[0x15] << 0xc;
    if (0xffe < (int)param_8[0x15]) {
      uVar17 = 0xfff000;
    }
    if (0xffe < (int)uVar21) {
      uVar21 = 0xfff;
    }
    *puVar27 = (char)uVar21;
    puVar27[1] = (char)((uVar21 | uVar17) >> 8);
    puVar27[2] = (char)((uVar21 | uVar17) >> 0x10);
    if ((int)param_8[0x15] < 0xfff) {
      puVar24 = (undefined2 *)(puVar27 + 3);
      iVar5 = *(int *)((long)param_8 + 0xac);
    }
    else {
      puVar24 = (undefined2 *)(puVar27 + 5);
      *(short *)(puVar27 + 3) = (short)param_8[0x15];
      iVar5 = *(int *)((long)param_8 + 0xac);
    }
    if (0xffe < iVar5) {
      *puVar24 = (short)iVar5;
      puVar24 = puVar24 + 1;
    }
    sVar28 = param_8[10] - param_8[9];
    if ((long)sVar28 < param_5 - (long)puVar24) {
      memcpy(puVar24,(void *)param_8[9],sVar28);
      puVar27 = (undefined1 *)((long)puVar24 + sVar28);
      sVar28 = param_8[0xc] - param_8[0xb];
      if ((long)sVar28 < param_5 - (long)puVar27) {
        memcpy(puVar27,(void *)param_8[0xb],sVar28);
        if ((long)(puVar27 + (sVar28 - (long)param_4)) < (long)puVar29) {
          if (*param_6 == 9) {
            fVar31 = (float)(**(code **)(lVar18 + 0x70))(puVar29,lVar10,(long)(int)param_8[0xe]);
          }
          else {
            fVar31 = (float)(**(code **)(lVar18 + 0x68))
                                      (puVar29,lVar10,(long)(int)param_8[0xe],uVar20);
          }
          fVar33 = local_8c[0] + local_ac;
          fVar32 = (float)(**(code **)(lVar18 + 0x40))(lVar16);
          *param_1 = fVar34 * fVar32 +
                     fVar35 + fVar36 + fVar34 * fVar31 +
                                       (float)(long)(puVar27 + (sVar28 - (__n + (long)puVar2))) +
                                       fVar33;
          puVar29 = puVar27 + (sVar28 - (long)param_4);
        }
      }
    }
  }
joined_r0x001a2310:
  if (local_a0 != 0) {
    if ((local_a8 == 0) ||
       ((local_98 + 0xfU & 0xfffffffffffffff0) + local_a0 != *(long *)(local_a8 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(long *)(local_a8 + 8) = local_a0;
    }
  }
  return puVar29;
}


