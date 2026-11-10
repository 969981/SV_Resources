/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03507bc0; name: FUN_03507bc0
 */


undefined8 * FUN_03507bc0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  size_t __n;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  puVar9 = *(undefined8 **)(param_1 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    if ((*param_1 == *(uint *)((long)puVar9 + 0x4c)) && (*(uint *)(puVar9 + 1) == param_1[1])) {
      return puVar9;
    }
    (**(code **)*puVar9)(puVar9);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xe,puVar9);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  puVar4 = PTR_DAT_047e2fd0;
  if (*param_1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar9 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0xe,0x50);
  if (puVar9 == (undefined8 *)0x0) goto LAB_03508314;
  uVar2 = param_1[1];
  *puVar9 = &PTR_FUN_047c6690;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(uint *)(puVar9 + 1) = uVar2;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar5 = PTR_DAT_047e6fa0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  uVar2 = *param_1;
  *(undefined8 **)(param_1 + 2) = puVar9;
  uVar3 = *(uint *)puVar5;
  if ((uVar2 & 1) == 0) {
LAB_03507ce8:
    if ((uVar2 >> 2 & 1) != 0) {
      pvVar6 = (void *)(**(code **)(puVar4 + 0x18))
                                 (5,(uint)*(byte *)(puVar9 + 1) * 4 + 0xc & 0x7f0,0x10);
      puVar9[3] = pvVar6;
      if (pvVar6 == (void *)0x0) goto LAB_035082e8;
      if (*(byte *)(puVar9 + 1) != 0) {
        memset(pvVar6,0,(ulong)*(byte *)(puVar9 + 1) << 2);
      }
    }
    if ((uVar2 >> 4 & 1) != 0) {
      uVar1 = *(uint *)(puVar9 + 1) & 0xff;
      if ((*(uint *)(puVar9 + 1) & 0xf00) == 0x200) {
        uVar1 = 1;
      }
      uVar7 = (**(code **)(puVar4 + 0x18))(5,uVar1 * 0x90,0x10);
      puVar9[7] = uVar7;
      lVar8 = (**(code **)(puVar4 + 0x18))(5,uVar1 * 0x90,0x10);
      puVar9[8] = lVar8;
      if (lVar8 == 0 || puVar9[7] == 0) goto LAB_035082e8;
      fVar21 = 9443.0 / (float)uVar3;
      fVar11 = sinf(fVar21);
      fVar21 = cosf(fVar21);
      if (uVar1 != 0) {
        fVar11 = fVar11 * 1.5803077;
        fVar14 = 2.2589254 - fVar21 * 0.25892544;
        fVar12 = fVar21 * 0.25892544 + 2.2589254;
        fVar17 = 1.0 / (fVar14 + fVar11);
        fVar16 = (fVar21 * -4.517851 + 0.5178509) * fVar17;
        fVar20 = (fVar12 + fVar11) * 1.2589254 * fVar17;
        fVar19 = (fVar21 * -5.6876373 + -0.65193564) * fVar17;
        fVar15 = (fVar12 - fVar11) * 1.2589254 * fVar17;
        fVar22 = fVar19 - fVar16 * fVar20;
        fVar17 = (fVar14 - fVar11) * fVar17;
        fVar18 = -fVar17;
        fVar25 = fVar17 * fVar16;
        fVar11 = fVar19 * fVar18;
        fVar23 = fVar15 - (fVar22 * fVar16 + fVar17 * fVar20);
        fVar12 = fVar15 - fVar19 * fVar16;
        fVar14 = fVar11 - fVar16 * fVar12;
        fVar24 = -fVar16;
        fVar13 = fVar15 * fVar24;
        fVar21 = fVar16 * fVar16;
        lVar10 = 0;
        if (lVar8 == 0) goto LAB_03507f54;
        do {
          memset((void *)(lVar8 + lVar10),0,0x90);
          lVar8 = puVar9[8];
          while( true ) {
            lVar8 = lVar8 + lVar10;
            *(float *)(lVar8 + 0x10) = fVar20;
            *(float *)(lVar8 + 0x14) = fVar20;
            *(float *)(lVar8 + 0x1c) = fVar20;
            *(undefined8 *)(lVar8 + 0x20) = 0;
            *(undefined4 *)(lVar8 + 0x28) = 0;
            *(float *)(lVar8 + 0x2c) = fVar22;
            *(undefined8 *)(lVar8 + 0x30) = 0;
            *(float *)(lVar8 + 0x38) = fVar22;
            *(float *)(lVar8 + 0x3c) = fVar23;
            *(undefined4 *)(lVar8 + 0x40) = 0;
            *(float *)(lVar8 + 0x44) = fVar22;
            *(float *)(lVar8 + 0x48) = fVar23;
            *(float *)(lVar8 + 0x4c) = (fVar11 + fVar20 * fVar25) - fVar16 * fVar23;
            *(float *)(lVar8 + 0x50) = fVar19;
            *(float *)(lVar8 + 0x54) = fVar12;
            *(float *)(lVar8 + 0x58) = fVar14;
            *(float *)(lVar8 + 0x5c) = fVar15 * fVar18 - fVar16 * (fVar14 + fVar11);
            *(float *)(lVar8 + 0x60) = fVar15;
            *(float *)(lVar8 + 100) = fVar13;
            *(float *)(lVar8 + 0x68) = fVar13 * fVar24 + fVar15 * fVar18;
            *(float *)(lVar8 + 0x6c) = fVar13 * fVar17 * -2.0 - fVar13 * fVar24 * fVar16;
            *(float *)(lVar8 + 0x74) = fVar21 - fVar17;
            *(float *)(lVar8 + 0x78) = fVar21 * fVar24 + fVar16 * (fVar17 + fVar17);
            *(float *)(lVar8 + 0x18) = fVar20;
            *(float *)(lVar8 + 0x70) = fVar24;
            *(float *)(lVar8 + 0x7c) =
                 -(fVar21 * fVar24 * fVar16) - (-(fVar17 * -3.0 * fVar21) - fVar17 * fVar17);
            *(float *)(lVar8 + 0x84) = fVar25;
            *(float *)(lVar8 + 0x88) = fVar25 * fVar24 + fVar17 * fVar17;
            *(float *)(lVar8 + 0x8c) = fVar25 * fVar17 * -2.0 - fVar25 * fVar24 * fVar16;
            *(float *)(lVar8 + 0x80) = fVar18;
            if ((ulong)uVar1 * 0x90 + -0x90 == lVar10) goto LAB_03508024;
            lVar8 = puVar9[8];
            lVar10 = lVar10 + 0x90;
            if (lVar8 != 0) break;
LAB_03507f54:
            lVar8 = 0;
          }
        } while( true );
      }
LAB_03508024:
      fVar21 = 238.76105 / (float)uVar3;
      fVar11 = sinf(fVar21);
      fVar21 = cosf(fVar21);
      if (uVar1 != 0) {
        fVar17 = 1.0 / (fVar11 + 1.0);
        fVar14 = fVar21 * -2.0 * fVar17;
        fVar13 = fVar17 - fVar17 * fVar11;
        fVar20 = (fVar21 + 1.0) * 0.5 * fVar17;
        fVar17 = -(fVar21 + 1.0) * fVar17;
        fVar22 = fVar17 - fVar14 * fVar20;
        fVar19 = -fVar13;
        fVar24 = fVar13 * fVar14;
        fVar11 = fVar17 * fVar19;
        fVar23 = fVar20 - (fVar22 * fVar14 + fVar13 * fVar20);
        fVar12 = fVar20 - fVar17 * fVar14;
        fVar15 = fVar11 - fVar14 * fVar12;
        fVar18 = -fVar14;
        fVar16 = fVar20 * fVar18;
        fVar21 = fVar14 * fVar14;
        lVar8 = 0;
        do {
          memset((void *)(puVar9[7] + lVar8),0,0x90);
          lVar10 = puVar9[7] + lVar8;
          *(float *)(lVar10 + 0x4c) = (fVar11 + fVar20 * fVar24) - fVar14 * fVar23;
          *(float *)(lVar10 + 0x50) = fVar17;
          *(float *)(lVar10 + 0x54) = fVar12;
          *(float *)(lVar10 + 0x58) = fVar15;
          *(float *)(lVar10 + 0x5c) = fVar20 * fVar19 - fVar14 * (fVar15 + fVar11);
          *(float *)(lVar10 + 100) = fVar16;
          *(float *)(lVar10 + 0x68) = fVar16 * fVar18 + fVar20 * fVar19;
          *(float *)(lVar10 + 0x6c) = fVar16 * fVar13 * -2.0 - fVar16 * fVar18 * fVar14;
          *(float *)(lVar10 + 0x74) = fVar21 - fVar13;
          *(float *)(lVar10 + 0x78) = fVar21 * fVar18 + fVar14 * (fVar13 + fVar13);
          lVar8 = lVar8 + 0x90;
          *(float *)(lVar10 + 0x10) = fVar20;
          *(float *)(lVar10 + 0x14) = fVar20;
          *(float *)(lVar10 + 0x18) = fVar20;
          *(float *)(lVar10 + 0x1c) = fVar20;
          *(undefined8 *)(lVar10 + 0x20) = 0;
          *(undefined4 *)(lVar10 + 0x28) = 0;
          *(float *)(lVar10 + 0x2c) = fVar22;
          *(undefined8 *)(lVar10 + 0x30) = 0;
          *(float *)(lVar10 + 0x38) = fVar22;
          *(float *)(lVar10 + 0x3c) = fVar23;
          *(undefined4 *)(lVar10 + 0x40) = 0;
          *(float *)(lVar10 + 0x44) = fVar22;
          *(float *)(lVar10 + 0x48) = fVar23;
          *(float *)(lVar10 + 0x60) = fVar20;
          *(float *)(lVar10 + 0x70) = fVar18;
          *(float *)(lVar10 + 0x7c) =
               -(fVar21 * fVar18 * fVar14) - (-(fVar13 * -3.0 * fVar21) - fVar13 * fVar13);
          *(float *)(lVar10 + 0x84) = fVar24;
          *(float *)(lVar10 + 0x88) = fVar24 * fVar18 + fVar13 * fVar13;
          *(float *)(lVar10 + 0x8c) = fVar24 * fVar13 * -2.0 - fVar24 * fVar18 * fVar14;
          *(float *)(lVar10 + 0x80) = fVar19;
        } while ((ulong)uVar1 * 0x90 != lVar8);
      }
    }
    if ((uVar2 >> 1 & 1) == 0) {
LAB_0350828c:
      if (((uVar2 >> 5 & 1) == 0) || ((*(uint *)(puVar9 + 1) & 0xf00) != 0x200)) {
LAB_035082dc:
        *(uint *)((long)puVar9 + 0x4c) = uVar2;
        return *(undefined8 **)(param_1 + 2);
      }
      pvVar6 = (void *)(**(code **)(puVar4 + 0x18))
                                 (5,(*(uint *)(puVar9 + 1) & 0xff) * 4 + 0xc & 0x7f0,0x10);
      puVar9[6] = pvVar6;
      if (pvVar6 != (void *)0x0) {
        if (*(byte *)(puVar9 + 1) != 0) {
          memset(pvVar6,0,(ulong)*(byte *)(puVar9 + 1) << 2);
        }
        goto LAB_035082dc;
      }
    }
    else {
      pvVar6 = (void *)(**(code **)(puVar4 + 0x18))
                                 (5,(uint)*(byte *)(puVar9 + 1) * 4 + 0xc & 0x7f0,0x10);
      puVar9[4] = pvVar6;
      if (pvVar6 != (void *)0x0) {
        if (*(byte *)(puVar9 + 1) == 0) {
          __n = 0;
        }
        else {
          memset(pvVar6,0,(ulong)*(byte *)(puVar9 + 1) << 2);
          __n = (ulong)*(byte *)(puVar9 + 1) * 0x30;
        }
        pvVar6 = (void *)(**(code **)(puVar4 + 0x18))(5,__n,0x10);
        puVar9[5] = pvVar6;
        if (pvVar6 != (void *)0x0) {
          memset(pvVar6,0,__n);
          goto LAB_0350828c;
        }
      }
    }
  }
  else {
    pvVar6 = (void *)(**(code **)(puVar4 + 0x18))
                               (5,(uint)*(byte *)(puVar9 + 1) * 4 + 0xc & 0x7f0,0x10);
    puVar9[2] = pvVar6;
    if (pvVar6 != (void *)0x0) {
      if (*(byte *)(puVar9 + 1) != 0) {
        memset(pvVar6,0,(ulong)*(byte *)(puVar9 + 1) << 2);
      }
      goto LAB_03507ce8;
    }
  }
LAB_035082e8:
  puVar9 = *(undefined8 **)(param_1 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9);
    (**(code **)(puVar4 + 0x30))(0xe,puVar9);
  }
LAB_03508314:
  param_1[2] = 0;
  param_1[3] = 0;
  return (undefined8 *)0x0;
}


