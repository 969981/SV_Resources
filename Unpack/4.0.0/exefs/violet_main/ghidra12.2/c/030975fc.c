/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030975fc; name: FUN_030975fc
 */


void FUN_030975fc(undefined4 *param_1,long param_2,undefined8 *param_3,int *param_4,
                 undefined8 *param_5,undefined8 *param_6,long *param_7,undefined8 param_8,
                 undefined8 param_9)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_90 [2];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70 [2];
  int local_68 [2];
  
  lVar7 = *(long *)(param_2 + 0x20);
  local_68[0] = *param_4;
  if ((*(int *)(lVar7 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar7 + 0x100) + (long)local_68[0]) & 1) == 0)) {
    if (param_7 != (long *)0x0) {
      iVar6 = (**(code **)(*param_7 + 0x28))(param_7,param_2,local_68,param_8,param_9);
      if (iVar6 == 0) {
        *param_1 = 0xffffffff;
        return;
      }
      lVar7 = *(long *)(param_2 + 0x20);
      local_68[0] = *param_4;
    }
    lVar7 = *(long *)(lVar7 + 0x68);
    local_b0 = 0;
    fVar18 = 0.0;
    fVar25 = 3.40282e+38;
    lVar10 = *(long *)(lVar7 + 0x18);
    lVar8 = *(long *)(lVar7 + 0x28);
    lVar7 = *(long *)(lVar7 + 0x38);
    uVar29 = param_5[1];
    uVar27 = *param_5;
    *param_1 = 0xffffffff;
    uVar3 = *(ushort *)(lVar10 + (long)local_68[0] * 0x10 + 8);
    if (0 < (short)uVar3) {
      uVar22 = param_3[1];
      fVar16 = (float)uVar27;
      fVar20 = (float)*param_3;
      fVar23 = fVar16 * fVar20;
      fVar17 = (float)((ulong)uVar27 >> 0x20);
      fVar21 = (float)((ulong)*param_3 >> 0x20);
      fVar25 = fVar17 * fVar21;
      fVar19 = (float)uVar29;
      fVar26 = fVar19 * (float)uVar22;
      fVar15 = fVar23 + fVar25;
      fVar23 = fVar23 + fVar25;
      fVar24 = fVar15 + fVar26;
      fVar26 = fVar23 + fVar26;
      uVar11 = (ulong)*(int *)(lVar10 + (long)local_68[0] * 0x10);
      fVar25 = 3.40282e+38;
      uVar27 = NEON_fmov(0x3f800000,4);
      lVar10 = uVar11 + uVar3;
      piVar9 = (int *)(lVar8 + uVar11 * 0x14 + 8);
      uVar13 = 0xffffffff;
      do {
        if (*piVar9 == -1) {
LAB_03097730:
          puVar4 = (undefined8 *)(lVar7 + (long)piVar9[-1] * 0x10);
          uVar32 = *puVar4;
          puVar5 = (undefined8 *)(lVar7 + (long)piVar9[-2] * 0x10);
          uVar29 = *puVar5;
          fVar28 = (float)uVar29;
          fVar33 = fVar16 * fVar28;
          fVar30 = (float)((ulong)uVar29 >> 0x20);
          fVar37 = fVar17 * fVar30;
          fVar31 = (float)puVar5[1];
          fVar40 = fVar19 * fVar31;
          fVar34 = fVar40 + fVar33 + fVar37;
          fVar28 = fVar28 - fVar16 * fVar34;
          fVar30 = fVar30 - fVar17 * (fVar40 + fVar33 + fVar37);
          fVar31 = fVar31 - fVar19 * fVar34;
          fVar33 = (float)uVar32;
          fVar35 = fVar16 * fVar33;
          fVar34 = (float)((ulong)uVar32 >> 0x20);
          fVar38 = fVar17 * fVar34;
          fVar37 = (float)puVar4[1];
          fVar41 = fVar19 * fVar37;
          fVar36 = fVar35 + fVar38 + fVar41;
          fVar40 = fVar28 - (fVar20 - fVar16 * fVar24);
          fVar39 = fVar30 - (fVar21 - fVar17 * fVar26);
          fVar42 = fVar31 - ((float)uVar22 - fVar19 * fVar24);
          fVar28 = fVar28 - (fVar33 - fVar16 * fVar36);
          fVar30 = fVar30 - (fVar34 - fVar17 * (fVar35 + fVar38 + fVar41));
          fVar31 = fVar31 - (fVar37 - fVar19 * fVar36);
          fVar33 = fVar40 * fVar28;
          fVar34 = fVar39 * fVar30;
          fVar37 = fVar42 * fVar31;
          uVar29 = NEON_fminnm(CONCAT44((fVar33 + fVar34 + fVar37) /
                                        (fVar28 * fVar28 + fVar30 * fVar30 + fVar31 * fVar31),
                                        (fVar33 + fVar34 + fVar37) /
                                        (fVar28 * fVar28 + fVar30 * fVar30 + fVar31 * fVar31)),
                               uVar27,4);
          uVar29 = NEON_fmax(uVar29,0,4);
          fVar33 = (float)uVar29;
          fVar40 = fVar40 - fVar33 * fVar28;
          fVar39 = fVar39 - (float)((ulong)uVar29 >> 0x20) * fVar30;
          fVar42 = fVar42 - fVar33 * fVar31;
          fVar28 = fVar40 * fVar40 + fVar39 * fVar39 + fVar42 * fVar42;
          if (fVar28 < fVar25) {
            uVar13 = uVar11 & 0xffffffff;
            *param_1 = (int)uVar11;
            fVar25 = fVar28;
            fVar15 = fVar33;
            fVar23 = fVar33;
          }
        }
        else if ((*(byte *)(piVar9 + 2) >> 5 & 1) != 0) goto LAB_03097730;
        uVar11 = uVar11 + 1;
        piVar9 = piVar9 + 5;
      } while ((long)uVar11 < lVar10);
      if ((int)uVar13 != -1) {
        piVar9 = (int *)(lVar8 + (long)(int)uVar13 * 0x14);
        puVar4 = (undefined8 *)(lVar7 + (long)piVar9[1] * 0x10);
        uVar29 = *puVar4;
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10);
        uVar27 = *puVar5;
        fVar16 = (float)uVar27;
        fVar17 = (float)((ulong)uVar27 >> 0x20);
        fVar18 = (float)puVar5[1];
        local_b0 = CONCAT44(fVar17 + fVar23 * ((float)((ulong)uVar29 >> 0x20) - fVar17),
                            fVar16 + fVar15 * ((float)uVar29 - fVar16));
        fVar18 = fVar18 + fVar15 * ((float)puVar4[1] - fVar18);
      }
    }
    uVar27 = CONCAT44(fVar25,fVar18);
  }
  else {
    *param_1 = 0xffffffff;
    uVar2 = *(uint *)(*(long *)(lVar7 + 0x168) + (long)local_68[0] * 4);
    uVar11 = (ulong)uVar2;
    uStack_a8 = param_6[1];
    local_b0 = *param_6;
    fVar25 = 3.40282e+38;
    if (-1 < (int)uVar2) {
      uVar12 = *(uint *)(lVar7 + 0x170);
      lVar8 = (long)(int)uVar12;
      if ((int)uVar12 <= (int)(uVar2 + 1)) {
        uVar12 = uVar2 + 1;
      }
      uVar13 = uVar11;
      do {
        uVar1 = uVar13 + 1;
        if (lVar8 <= (long)uVar1) goto LAB_03097880;
        lVar10 = uVar13 * 4;
        uVar13 = uVar1;
      } while (*(int *)(*(long *)(lVar7 + 0x168) + 4 + lVar10) == local_68[0]);
      uVar12 = (uint)uVar1;
LAB_03097880:
      if ((int)uVar2 < (int)uVar12) {
        if (param_7 == (long *)0x0) {
          fVar25 = 3.40282e+38;
          while( true ) {
            iVar6 = (int)uVar11;
            local_90[0] = iVar6;
            FUN_03097340(local_88,lVar7,param_3,local_90,param_5,&local_80);
            fVar18 = (float)((ulong)uStack_78 >> 0x20);
            if (fVar18 < fVar25) {
              *param_1 = local_88[0];
              uStack_a8 = uStack_78;
              local_b0 = local_80;
              fVar25 = fVar18;
            }
            if (uVar12 - 1 == iVar6) break;
            lVar7 = *(long *)(param_2 + 0x20);
            uVar11 = (ulong)(iVar6 + 1);
          }
        }
        else {
          fVar25 = 3.40282e+38;
          do {
            iVar14 = (int)uVar11;
            local_70[0] = iVar14;
            iVar6 = (**(code **)(*param_7 + 0x28))(param_7,param_2,local_70,param_8,param_9);
            if (iVar6 != 0) {
              local_90[0] = iVar14;
              FUN_03097340(local_88,*(undefined8 *)(param_2 + 0x20),param_3,local_90,param_5,
                           &local_80);
              fVar18 = (float)((ulong)uStack_78 >> 0x20);
              if (fVar18 < fVar25) {
                *param_1 = local_88[0];
                uStack_a8 = uStack_78;
                local_b0 = local_80;
                fVar25 = fVar18;
              }
            }
            uVar11 = (ulong)(iVar14 + 1U);
          } while (uVar12 != iVar14 + 1U);
        }
      }
    }
    uVar27 = CONCAT44(fVar25,(undefined4)uStack_a8);
  }
  param_6[1] = uVar27;
  *param_6 = local_b0;
  return;
}


