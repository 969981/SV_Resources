/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d4c70; name: FUN_033d4c70
 */


void FUN_033d4c70(ulong *param_1,long param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  float *pfVar6;
  int iVar7;
  void *pvVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float *local_b0;
  undefined8 uStack_a8;
  ushort local_a0;
  ushort local_9e;
  void *local_98;
  undefined8 uStack_90;
  ushort local_88;
  ushort local_86;
  
  if (*(int *)((long)param_1 + 0xc) == 0x11) {
    uVar14 = *(uint *)(param_2 + 0x188);
    uVar2 = *(uint *)(param_2 + 400);
    if (uVar14 == 0xffffffff) {
LAB_033d4ce8:
      *(uint *)(param_2 + 0x188) = uVar2;
      uVar14 = uVar2;
LAB_033d4cf4:
      *(uint *)(param_2 + 0x18c) = uVar2;
    }
    else {
      if (uVar14 == 0) {
        if (*(short *)((long)param_1 + 0x12) == 0) {
          return;
        }
        goto LAB_033d4ce8;
      }
      if (*(short *)((long)param_1 + 0x12) != 0) goto LAB_033d4ce8;
      if (*(uint *)(param_2 + 0x18c) < uVar2) {
        uVar14 = (uVar14 + uVar2) - *(uint *)(param_2 + 0x18c);
        *(uint *)(param_2 + 0x188) = uVar14;
        goto LAB_033d4cf4;
      }
    }
    uVar2 = (uint)(ushort)param_1[2] - (uint)*(ushort *)((long)param_1 + 0x12);
    iVar7 = 0;
    if (uVar2 <= uVar14) {
      iVar7 = uVar14 - uVar2;
    }
    *(int *)(param_2 + 0x188) = iVar7;
    uVar4 = *(ushort *)((long)param_1 + 0x12);
    uVar12 = (ulong)uVar4;
    uVar5 = (ushort)param_1[2];
    uVar15 = (ulong)uVar5;
    uVar14 = (uint)uVar4;
    if ((uint)uVar5 <= (uint)uVar4) {
      uVar14 = (uint)uVar5;
    }
    uVar13 = (ulong)uVar14;
    if (uVar5 - uVar14 != 0) {
      bVar3 = (byte)param_1[1];
      if (bVar3 != 0) {
        uVar12 = (ulong)((uVar5 - uVar14) * 4);
        if (bVar3 == 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          lVar17 = 4;
          do {
            memset((void *)(*param_1 + (lVar17 + -4) * uVar15 + uVar13 * 4),0,uVar12);
            memset((void *)(*param_1 + lVar17 * (ulong)(ushort)param_1[2] + uVar13 * 4),0,uVar12);
            uVar15 = (ulong)(ushort)param_1[2];
            uVar16 = uVar16 + 2;
            lVar17 = lVar17 + 8;
          } while (((ulong)bVar3 & 0xfe) != uVar16);
        }
        if ((bVar3 & 1) != 0) {
          memset((void *)(*param_1 + uVar16 * uVar15 * 4 + uVar13 * 4),0,uVar12);
          uVar15 = (ulong)(ushort)param_1[2];
        }
      }
      *(short *)((long)param_1 + 0x12) = (short)uVar15;
      iVar7 = *(int *)(param_2 + 0x188);
      uVar12 = uVar15;
    }
    if (iVar7 != 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0x2d;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x188) = 0xffffffff;
    uVar12 = (ulong)*(ushort *)((long)param_1 + 0x12);
  }
  uVar14 = (uint)uVar12;
  if (uVar14 < 0x20) {
    return;
  }
  uVar2 = (uint)param_1[1];
  if ((uVar2 & 0xfffff000) == 0x8000) {
    return;
  }
  local_a0 = (ushort)uVar12;
  local_b0 = (float *)((long)param_3 + (ulong)(uVar14 << 1) * 4);
  uStack_90 = 0x2b00003102;
  uStack_a8 = 0x2b00003102;
  local_9e = local_a0;
  local_98 = param_3;
  local_88 = local_a0;
  local_86 = local_a0;
  switch(*(undefined4 *)(param_2 + 0x120)) {
  case 0:
    pvVar8 = (void *)*param_1;
    goto LAB_033d4f04;
  case 1:
    pvVar8 = (void *)(*param_1 +
                     (ulong)(((uVar2 ^ 0xffffffff) & 0x5000) == 0) * (ulong)(ushort)param_1[2] * 8);
LAB_033d4f04:
    memcpy(param_3,pvVar8,(ulong)(uVar14 << 2));
    break;
  case 2:
    pvVar8 = (void *)*param_1;
    if (((uVar2 ^ 0xffffffff) & 0x5000) != 0) goto LAB_033d4f04;
    FUN_033d5460(0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,pvVar8,
                 (void *)((long)pvVar8 + (ulong)(ushort)param_1[2] * 8),param_3,uVar12);
    break;
  case 3:
    memset(param_3,0,(ulong)(uVar14 << 2));
  }
  if (3 < *(uint *)(param_2 + 0x124)) goto LAB_033d4fe4;
  param_3 = (void *)((long)param_3 + uVar12 * 4);
  switch(*(uint *)(param_2 + 0x124)) {
  case 0:
    pvVar8 = (void *)*param_1;
    if ((uVar2 >> 0xd & 1) != 0) {
      uVar15 = (ulong)(ushort)param_1[2];
LAB_033d4fd4:
      pvVar8 = (void *)((long)pvVar8 + uVar15 * 4);
    }
    break;
  case 1:
    lVar17 = 8;
    if (((uVar2 ^ 0xffffffff) & 0x6000) != 0) {
      lVar17 = (ulong)((uVar2 - (uVar2 >> 0xf & 1) & 0xff) != 1) << 2;
    }
    pvVar8 = (void *)(*param_1 + lVar17 * (ulong)(ushort)param_1[2]);
    break;
  case 2:
    pvVar8 = (void *)*param_1;
    uVar15 = (ulong)(ushort)param_1[2];
    if ((~uVar2 & 0x6000) == 0) {
      FUN_033d5460(0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,0x3f34fdf4,(void *)((long)pvVar8 + uVar15 * 4),
                   (void *)((long)pvVar8 + uVar15 * 8),param_3,uVar12);
      goto LAB_033d4fe4;
    }
    if ((uVar2 >> 0xd & 1) != 0) goto LAB_033d4fd4;
    break;
  case 3:
    memset(param_3,0,(ulong)(uVar14 << 2));
    goto LAB_033d4fe4;
  }
  memcpy(param_3,pvVar8,(ulong)(uVar14 << 2));
LAB_033d4fe4:
  FUN_033d381c(param_2,&local_98,&local_b0,(void *)(param_2 + 0x148),(void *)(param_2 + 0x108),
               param_2 + 0x128,*(undefined1 *)(param_2 + 0x19c));
  uVar1 = uVar2 >> 0xc & 0x210;
  if (uVar1 == 0) {
    fVar21 = 1.0;
    fVar20 = 1.0;
    fVar19 = 1.0;
    fVar18 = 1.0;
  }
  else {
    fVar18 = ABS(*(float *)(param_2 + 0x140) * 0.005 + 0.5);
    fVar19 = SQRT(fVar18);
    fVar18 = SQRT(1.0 - fVar18);
    fVar20 = ABS(*(float *)(param_2 + 0x180) * 0.005 + 0.5);
    fVar21 = SQRT(fVar20);
    fVar20 = SQRT(1.0 - fVar20);
  }
  uVar15 = (ulong)local_a0;
  if ((uVar2 & 0xffff7000) == 0x4000) {
    fVar18 = *(float *)(param_2 + 0x178);
    fVar20 = *(float *)(param_2 + 0x17c);
    pfVar10 = (float *)*param_1;
    if ((*(float *)(param_2 + 0x138) == fVar18) && (*(float *)(param_2 + 0x13c) == fVar20)) {
      pfVar6 = local_b0;
      pfVar11 = pfVar10;
      do {
        uVar23 = *(undefined8 *)(pfVar6 + uVar15 + 2);
        uVar22 = *(undefined8 *)(pfVar6 + uVar15);
        uVar26 = *(undefined8 *)pfVar6;
        pfVar9 = pfVar11 + 4;
        *(ulong *)(pfVar11 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) * fVar18 +
                      fVar20 * ((float)((ulong)uVar23 >> 0x20) +
                               (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20)),
                      (float)*(undefined8 *)(pfVar11 + 2) * fVar18 +
                      fVar20 * ((float)uVar23 + (float)*(undefined8 *)(pfVar6 + 2)));
        *(ulong *)pfVar11 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar11 >> 0x20) * fVar18 +
                      fVar20 * ((float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar26 >> 0x20)),
                      (float)*(undefined8 *)pfVar11 * fVar18 +
                      fVar20 * ((float)uVar22 + (float)uVar26));
        pfVar6 = pfVar6 + 4;
        pfVar11 = pfVar9;
      } while (pfVar9 < pfVar10 + uVar12);
    }
    else {
      fVar31 = *(float *)(param_2 + 0x138) - fVar18;
      fVar24 = (*(float *)(param_2 + 0x13c) - fVar20) / (float)uVar12;
      pfVar6 = local_b0;
      pfVar11 = pfVar10;
      fVar30 = fVar20;
      do {
        fVar28 = *pfVar11 * fVar18;
        fVar25 = fVar20 * *pfVar6;
        pfVar9 = pfVar6 + uVar15;
        pfVar6 = pfVar6 + 1;
        fVar27 = fVar30 * *pfVar9;
        fVar18 = fVar18 + fVar31 / (float)uVar12;
        fVar20 = fVar20 + fVar24;
        fVar30 = fVar30 + fVar24;
        pfVar9 = pfVar11 + 1;
        *pfVar11 = fVar28 + fVar25 + fVar27;
        pfVar11 = pfVar9;
      } while (pfVar9 < pfVar10 + uVar12);
    }
  }
  else if ((uVar2 >> 0xc & 1) != 0) {
    pfVar10 = local_b0 + uVar15;
    FUN_033d5580(*(undefined4 *)(param_2 + 0x178),*(undefined4 *)(param_2 + 0x138),
                 *(float *)(param_2 + 0x17c) * fVar18,*(float *)(param_2 + 0x13c) * fVar20,*param_1,
                 local_b0,uVar12);
    FUN_033d5580(*(undefined4 *)(param_2 + 0x178),*(undefined4 *)(param_2 + 0x138),
                 *(float *)(param_2 + 0x17c) * fVar18,*(float *)(param_2 + 0x13c) * fVar20,
                 *param_1 + (ulong)(ushort)param_1[2] * 4,pfVar10,uVar12);
  }
  if (uVar1 != 0) {
    iVar7 = 2;
    if ((uVar2 & 0x4000) != 0) {
      iVar7 = 3;
    }
    FUN_033d4aa0(fVar19,fVar21,&local_98,&local_b0,param_1,param_2,iVar7,1);
    if (uVar1 == 0x210) {
      FUN_033d4aa0(fVar19,fVar21,&local_98,&local_b0,param_1,param_2,iVar7 + 2,2);
    }
  }
  if (((uVar2 >> 0xe & 1) != 0) && ((uVar2 & 0xffff7000) != 0x4000)) {
    fVar19 = *(float *)(param_2 + 0x178);
    pfVar10 = (float *)(*param_1 + (ulong)(ushort)param_1[2] * 8);
    if (*(float *)(param_2 + 0x138) == fVar19) {
      if (fVar19 != 1.0) {
        pfVar6 = pfVar10 + uVar12;
        if ((uVar12 & 0xfffc) != 0) {
          pfVar11 = pfVar10 + (uVar14 & 0xfffc);
          pfVar9 = pfVar10;
          do {
            pfVar10 = pfVar9 + 4;
            *(ulong *)(pfVar9 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) * fVar19,
                          (float)*(undefined8 *)(pfVar9 + 2) * fVar19);
            *(ulong *)pfVar9 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * fVar19,
                          (float)*(undefined8 *)pfVar9 * fVar19);
            pfVar9 = pfVar10;
          } while (pfVar10 < pfVar11);
        }
        for (; pfVar10 < pfVar6; pfVar10 = pfVar10 + 1) {
          *pfVar10 = *pfVar10 * fVar19;
        }
      }
    }
    else {
      fVar18 = *(float *)(param_2 + 0x138) - fVar19;
      pfVar6 = pfVar10 + uVar12;
      if ((uVar12 & 0xfffc) != 0) {
        pfVar11 = pfVar10 + (uVar14 & 0xfffc);
        fVar24 = fVar18 / (float)(uVar14 & 0xfffc);
        fVar30 = fVar24 + fVar19;
        fVar31 = fVar30 + fVar24;
        fVar21 = fVar24 * 4.0;
        fVar24 = fVar31 + fVar24;
        pfVar9 = pfVar10;
        fVar20 = fVar19;
        do {
          fVar25 = (float)*(undefined8 *)pfVar9 * fVar20;
          fVar27 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * fVar30;
          fVar28 = (float)*(undefined8 *)(pfVar9 + 2) * fVar31;
          fVar29 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) * fVar24;
          fVar20 = fVar20 + fVar21;
          fVar30 = fVar30 + fVar21;
          fVar31 = fVar31 + fVar21;
          fVar24 = fVar24 + fVar21;
          pfVar10 = pfVar9 + 4;
          *(ulong *)(pfVar9 + 2) = CONCAT44(fVar29,fVar28);
          *(ulong *)pfVar9 = CONCAT44(fVar27,fVar25);
          pfVar9 = pfVar10;
        } while (pfVar10 < pfVar11);
      }
      if (pfVar10 < pfVar6) {
        do {
          fVar20 = *pfVar10 * fVar19;
          fVar19 = fVar19 + fVar18 / (float)uVar12;
          pfVar11 = pfVar10 + 1;
          *pfVar10 = fVar20;
          pfVar10 = pfVar11;
        } while (pfVar11 < pfVar6);
      }
    }
  }
  if ((((uint)param_1[1] >> 0xf & 1) != 0) && (*param_1 != 0)) {
    fVar19 = *(float *)(param_2 + 0x178);
    pfVar10 = (float *)(*param_1 +
                       (ulong)(((uint)param_1[1] & 0xff) - 1) * (ulong)(ushort)param_1[2] * 4);
    if (*(float *)(param_2 + 0x138) == fVar19) {
      if (fVar19 != 1.0) {
        pfVar6 = pfVar10 + uVar12;
        if ((uVar12 & 0xfffc) != 0) {
          pfVar11 = pfVar10 + (uVar14 & 0xfffc);
          pfVar9 = pfVar10;
          do {
            pfVar10 = pfVar9 + 4;
            *(ulong *)(pfVar9 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) * fVar19,
                          (float)*(undefined8 *)(pfVar9 + 2) * fVar19);
            *(ulong *)pfVar9 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * fVar19,
                          (float)*(undefined8 *)pfVar9 * fVar19);
            pfVar9 = pfVar10;
          } while (pfVar10 < pfVar11);
        }
        for (; pfVar10 < pfVar6; pfVar10 = pfVar10 + 1) {
          *pfVar10 = *pfVar10 * fVar19;
        }
      }
    }
    else {
      fVar18 = *(float *)(param_2 + 0x138) - fVar19;
      pfVar6 = pfVar10 + uVar12;
      if ((uVar12 & 0xfffc) != 0) {
        pfVar11 = pfVar10 + (uVar14 & 0xfffc);
        fVar24 = fVar18 / (float)(uVar14 & 0xfffc);
        fVar30 = fVar24 + fVar19;
        fVar31 = fVar30 + fVar24;
        fVar21 = fVar24 * 4.0;
        fVar24 = fVar31 + fVar24;
        pfVar9 = pfVar10;
        fVar20 = fVar19;
        do {
          fVar25 = (float)*(undefined8 *)pfVar9 * fVar20;
          fVar27 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * fVar30;
          fVar28 = (float)*(undefined8 *)(pfVar9 + 2) * fVar31;
          fVar29 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) * fVar24;
          fVar20 = fVar20 + fVar21;
          fVar30 = fVar30 + fVar21;
          fVar31 = fVar31 + fVar21;
          fVar24 = fVar24 + fVar21;
          pfVar10 = pfVar9 + 4;
          *(ulong *)(pfVar9 + 2) = CONCAT44(fVar29,fVar28);
          *(ulong *)pfVar9 = CONCAT44(fVar27,fVar25);
          pfVar9 = pfVar10;
        } while (pfVar10 < pfVar11);
      }
      if (pfVar10 < pfVar6) {
        do {
          fVar20 = *pfVar10 * fVar19;
          fVar19 = fVar19 + fVar18 / (float)uVar12;
          pfVar11 = pfVar10 + 1;
          *pfVar10 = fVar20;
          pfVar10 = pfVar11;
        } while (pfVar11 < pfVar6);
      }
    }
  }
  memcpy((void *)(param_2 + 0x148),(void *)(param_2 + 0x108),0x3e);
  return;
}


