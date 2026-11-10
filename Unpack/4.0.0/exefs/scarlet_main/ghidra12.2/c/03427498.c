/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03427498; name: FUN_03427498
 */


void FUN_03427498(long *param_1,undefined4 *param_2,long *param_3,undefined8 param_4,long param_5,
                 long *param_6,undefined8 param_7,long param_8)

{
  float *pfVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  uint *puVar25;
  ulong *puVar26;
  long lVar27;
  void *__s;
  long lVar28;
  undefined4 *puVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  long local_118;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  uVar9 = (uint)*(byte *)(param_8 + 0x19);
  if (*(byte *)(param_8 + 0x19) != 0) {
    uVar9 = *(uint *)(param_8 + 0x28);
    if (uVar9 < 2) {
      if (*(int *)(param_8 + 0x2c) == 0) {
        lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))
                           (9,*(undefined8 *)(param_8 + 0x20),(1 - (ulong)uVar9) * 0x160,0x10);
        if (lVar14 == 0) goto LAB_03427580;
        *(long *)(param_8 + 0x20) = lVar14;
        *(int *)(param_8 + 0x2c) = (int)(1 - (ulong)uVar9);
      }
      if ((uVar9 == 0) && (__s = *(void **)(param_8 + 0x20), __s != (void *)0x0)) {
        memset(__s,0,0x8c);
        *(undefined8 *)((long)__s + 0x8c) = 0x42c80000;
        memset((void *)((long)__s + 0xb8),0xff,0x80);
        uVar9 = 1;
        *(undefined8 *)((long)__s + 0x94) = 0;
        *(undefined8 *)((long)__s + 0x9c) = 0;
        *(undefined8 *)((long)__s + 0xa4) = 0;
        *(undefined8 *)((long)__s + 0xac) = 0;
        goto LAB_0342757c;
      }
    }
    uVar9 = 1;
  }
LAB_0342757c:
  *(uint *)(param_8 + 0x28) = uVar9;
LAB_03427580:
  puVar7 = PTR_DAT_047e2fd0;
  if ((int)param_1[1] != 0) {
    uVar30 = 0;
    do {
      uVar9 = *(uint *)(param_6 + 1);
      if (uVar9 != 0) {
        plVar15 = (long *)(*param_1 + uVar30 * 0x90);
        uVar21 = *(ulong *)(plVar15[*(uint *)(plVar15 + 0x10) - 1] + 0x68);
        lVar14 = *param_6;
        iVar18 = 0;
        do {
          iVar3 = iVar18 + (uVar9 >> 1);
          lVar16 = (long)iVar3;
          uVar24 = *(ulong *)(lVar14 + (long)iVar3 * 0x90);
          if (uVar24 == uVar21) {
            puVar20 = (uint *)(lVar14 + lVar16 * 0x90 + 0x30);
            uVar9 = *puVar20;
            if (((uVar9 != 0) && (*(char *)(lVar14 + lVar16 * 0x90 + 0x22) == '\0')) &&
               (uVar19 = *(uint *)(param_3 + 1), uVar19 != 0)) {
              iVar18 = 0;
              uVar21 = *(ulong *)(*plVar15 + 0x68);
              lVar22 = *param_3;
              goto LAB_03427658;
            }
            break;
          }
          if (uVar24 < uVar21) {
            iVar18 = iVar3 + 1;
          }
          uVar9 = uVar9 - (uVar24 < uVar21) >> 1;
        } while (uVar9 != 0);
      }
LAB_03427620:
      uVar30 = uVar30 + 1;
    } while (uVar30 < *(uint *)(param_1 + 1));
    if ((*(uint *)(param_1 + 1) != 0) && (*(int *)(param_8 + 0x28) == 0)) {
      *(undefined1 *)(param_8 + 0x1a) = 1;
    }
  }
  return;
LAB_03427658:
  iVar3 = iVar18 + (uVar19 >> 1);
  lVar27 = (long)iVar3;
  uVar24 = *(ulong *)(lVar22 + (long)iVar3 * 0x90);
  if (uVar24 != uVar21) goto code_r0x03427670;
  puVar25 = (uint *)(lVar22 + lVar27 * 0x90 + 0x30);
  uVar19 = *puVar25;
  if ((uVar19 != 0) && (*(char *)(lVar22 + lVar27 * 0x90 + 0x22) == '\0')) {
    plVar23 = (long *)(lVar22 + lVar27 * 0x90 + 0x28);
    lVar22 = *plVar23;
    plVar2 = (long *)(lVar14 + lVar16 * 0x90 + 0x28);
    if (*(uint *)(plVar15 + 0x10) < 2) {
      uVar21 = 1;
      local_118 = lVar22;
      do {
        if ((int)uVar21 != 0) {
          lVar14 = *plVar2;
          do {
            uVar19 = *(uint *)(param_8 + 0x28);
            uVar9 = *(uint *)(param_8 + 0x2c);
            if (uVar19 < uVar9) {
LAB_03427c08:
              if (uVar19 < uVar9) {
                uVar9 = *(uint *)(param_8 + 0x28);
                lVar16 = *(long *)(param_8 + 0x20);
                *(uint *)(param_8 + 0x28) = uVar9 + 1;
                if (lVar16 != 0) {
                  puVar29 = (undefined4 *)(lVar16 + (ulong)uVar9 * 0x160);
                  lVar16 = lVar16 + (ulong)uVar9 * 0x160;
                  memset(puVar29,0,0x8c);
                  *(undefined8 *)(lVar16 + 0x8c) = 0x42c80000;
                  memset((void *)(lVar16 + 0xb8),0xff,0x80);
                  *(undefined8 *)(lVar16 + 0x94) = 0;
                  *(undefined8 *)(lVar16 + 0x9c) = 0;
                  *(undefined8 *)(lVar16 + 0xa4) = 0;
                  *(undefined8 *)(lVar16 + 0xac) = 0;
                  uVar4 = param_2[1];
                  uVar6 = param_2[2];
                  *puVar29 = *param_2;
                  *(undefined4 *)(lVar16 + 4) = uVar4;
                  *(undefined4 *)(lVar16 + 8) = uVar6;
                  *(undefined4 *)(lVar16 + 0x80) = 0;
                  *(undefined4 *)(lVar16 + 0x8c) = 0x42c80000;
                  local_d0 = *(undefined4 *)(local_118 + 0x74);
                  local_d8 = *(undefined8 *)(local_118 + 0x6c);
                  FUN_03425e28(puVar29,local_118,&local_d8,param_4);
                  if (*(int *)(lVar14 + 0x78) == 0) {
                    local_e8 = *(undefined8 *)(param_5 + 0x18);
                    local_e0 = *(undefined4 *)(param_5 + 0x20);
                  }
                  else {
                    local_e8 = *(undefined8 *)(lVar14 + 0xc);
                    local_e0 = *(undefined4 *)(lVar14 + 0x14);
                  }
                  FUN_034263b8(puVar29,plVar15,0,&local_e8,1);
                  local_f8 = *(undefined4 *)(param_5 + 0x18);
                  uStack_f4 = *(undefined4 *)(param_5 + 0x1c);
                  local_f0 = *(undefined4 *)(param_5 + 0x20);
                  FUN_03425e28(puVar29,lVar14,&local_f8,param_7);
                }
              }
            }
            else {
              iVar18 = uVar9 + (uVar9 >> 1);
              if (uVar9 == 0) {
                iVar18 = 1;
              }
              uVar9 = iVar18 + uVar9;
              lVar16 = (**(code **)(puVar7 + 0x28))
                                 (9,*(undefined8 *)(param_8 + 0x20),(ulong)uVar9 * 0x160,0x10);
              if (lVar16 != 0) {
                *(long *)(param_8 + 0x20) = lVar16;
                *(uint *)(param_8 + 0x2c) = uVar9;
                goto LAB_03427c08;
              }
            }
            lVar14 = lVar14 + 0x94;
            uVar21 = (ulong)*puVar20;
          } while (lVar14 != *plVar2 + uVar21 * 0x94);
          lVar22 = *plVar23;
          uVar19 = *puVar25;
        }
        local_118 = local_118 + 0x94;
      } while (local_118 != lVar22 + (ulong)uVar19 * 0x94);
      goto LAB_03427620;
    }
    lVar14 = *param_1 + uVar30 * 0x90;
    goto LAB_034276dc;
  }
  goto LAB_03427620;
code_r0x03427670:
  if (uVar24 < uVar21) {
    iVar18 = iVar3 + 1;
  }
  uVar19 = uVar19 - (uVar24 < uVar21) >> 1;
  if (uVar19 == 0) goto LAB_03427620;
  goto LAB_03427658;
LAB_034276dc:
  if (uVar9 == 0) {
    lVar16 = 0;
  }
  else {
    lVar12 = *plVar2;
    uVar21 = (ulong)uVar9 * 0x94 - 0x94;
    uVar19 = ((uint)(uVar21 / 0x94) & 0x1ffffff) + 1;
    lVar16 = 0;
    lVar27 = lVar12;
    if ((uVar19 & 3) == 0) {
      fVar31 = 3.4028235e+38;
    }
    else {
      lVar17 = -((ulong)uVar19 & 3);
      lVar28 = lVar16;
      fVar32 = 3.4028235e+38;
      do {
        fVar31 = (float)NEON_fminnm(*(float *)(lVar27 + 0x80),fVar32);
        lVar16 = lVar27;
        if (fVar32 <= *(float *)(lVar27 + 0x80)) {
          lVar16 = lVar28;
        }
        lVar27 = lVar27 + 0x94;
        bVar8 = lVar17 != -1;
        lVar17 = lVar17 + 1;
        lVar28 = lVar16;
        fVar32 = fVar31;
      } while (bVar8);
    }
    if (0x1bb < uVar21) {
      do {
        fVar32 = (float)NEON_fminnm(*(float *)(lVar27 + 0x80),fVar31);
        lVar17 = lVar27;
        if (fVar31 <= *(float *)(lVar27 + 0x80)) {
          lVar17 = lVar16;
        }
        fVar31 = (float)NEON_fminnm(*(float *)(lVar27 + 0x114),fVar32);
        lVar16 = lVar27 + 0x94;
        if (fVar32 <= *(float *)(lVar27 + 0x114)) {
          lVar16 = lVar17;
        }
        fVar32 = (float)NEON_fminnm(*(float *)(lVar27 + 0x1a8),fVar31);
        pfVar1 = (float *)(lVar27 + 0x23c);
        lVar17 = lVar27 + 0x128;
        if (fVar31 <= *(float *)(lVar27 + 0x1a8)) {
          lVar17 = lVar16;
        }
        fVar31 = (float)NEON_fminnm(*pfVar1,fVar32);
        lVar16 = lVar27 + 0x1bc;
        lVar27 = lVar27 + 0x250;
        if (fVar32 <= *pfVar1) {
          lVar16 = lVar17;
        }
      } while (lVar12 + (ulong)uVar9 * 0x94 != lVar27);
    }
  }
  lVar27 = *(long *)(lVar14 + 0x48);
  uVar24 = *(ulong *)(*plVar15 + 0x68);
  uVar13 = *(ulong *)(*(long *)(lVar14 + 8) + 0x68);
  uVar9 = *(uint *)(lVar27 + 0x88);
  uVar21 = uVar13;
  if (uVar13 <= uVar24) {
    uVar21 = uVar24;
    uVar24 = uVar13;
  }
  if (uVar9 != 0) {
    lVar27 = *(long *)(lVar27 + 0x80);
    iVar18 = 0;
    do {
      iVar3 = iVar18 + (uVar9 >> 1);
      puVar26 = (ulong *)(lVar27 + (long)iVar3 * 0x48);
      uVar13 = *puVar26;
      uVar5 = puVar26[1];
      if (uVar13 == uVar24 && uVar5 == uVar21) {
        if (*(float *)(lVar27 + (long)iVar3 * 0x48 + 0x14) != 3.4028235e+38) {
          lVar27 = lVar27 + (long)iVar3 * 0x48;
          puVar11 = (uint *)(lVar27 + 0x40);
          if (*puVar11 == 0) goto LAB_03427b70;
          plVar10 = (long *)(lVar27 + 0x38);
          lVar27 = *plVar10;
          goto LAB_034279d8;
        }
        break;
      }
      bVar8 = uVar5 < uVar21;
      if (uVar13 != uVar24) {
        bVar8 = uVar13 < uVar24;
      }
      if (bVar8 != 0) {
        iVar18 = iVar3 + 1;
      }
      uVar9 = uVar9 - bVar8 >> 1;
    } while (uVar9 != 0);
  }
  uVar19 = *(uint *)(param_8 + 0x28);
  uVar9 = *(uint *)(param_8 + 0x2c);
  if (uVar19 < uVar9) {
LAB_034278ac:
    if (uVar19 < uVar9) {
      uVar9 = *(uint *)(param_8 + 0x28);
      lVar27 = *(long *)(param_8 + 0x20);
      *(uint *)(param_8 + 0x28) = uVar9 + 1;
      if (lVar27 != 0) {
        puVar29 = (undefined4 *)(lVar27 + (ulong)uVar9 * 0x160);
        lVar27 = lVar27 + (ulong)uVar9 * 0x160;
        memset(puVar29,0,0x8c);
        *(undefined8 *)(lVar27 + 0x8c) = 0x42c80000;
        memset((void *)(lVar27 + 0xb8),0xff,0x80);
        *(undefined8 *)(lVar27 + 0x94) = 0;
        *(undefined8 *)(lVar27 + 0x9c) = 0;
        *(undefined8 *)(lVar27 + 0xa4) = 0;
        *(undefined8 *)(lVar27 + 0xac) = 0;
        uVar4 = param_2[1];
        uVar6 = param_2[2];
        *puVar29 = *param_2;
        *(undefined4 *)(lVar27 + 4) = uVar4;
        *(undefined4 *)(lVar27 + 8) = uVar6;
        *(undefined4 *)(lVar27 + 0x80) = 0;
        *(undefined4 *)(lVar27 + 0x8c) = 0x42c80000;
        local_a0 = *(undefined4 *)(lVar22 + 0x74);
        local_a8 = *(undefined8 *)(lVar22 + 0x6c);
        FUN_03425e28(puVar29,lVar22,&local_a8,param_4);
        local_b8 = *(undefined4 *)(param_5 + 0x18);
        uStack_b4 = *(undefined4 *)(param_5 + 0x1c);
        local_b0 = *(undefined4 *)(param_5 + 0x20);
        FUN_034263b8(puVar29,plVar15,0,&local_b8,0);
        local_c8 = *(undefined4 *)(param_5 + 0x18);
        uStack_c4 = *(undefined4 *)(param_5 + 0x1c);
        local_c0 = *(undefined4 *)(param_5 + 0x20);
        FUN_03425e28(puVar29,lVar16,&local_c8,param_7);
      }
    }
  }
  else {
    iVar18 = uVar9 + (uVar9 >> 1);
    if (uVar9 == 0) {
      iVar18 = 1;
    }
    uVar9 = iVar18 + uVar9;
    lVar27 = (**(code **)(puVar7 + 0x28))
                       (9,*(undefined8 *)(param_8 + 0x20),(ulong)uVar9 * 0x160,0x10);
    if (lVar27 != 0) {
      *(long *)(param_8 + 0x20) = lVar27;
      *(uint *)(param_8 + 0x2c) = uVar9;
      goto LAB_034278ac;
    }
  }
  goto LAB_03427b70;
LAB_034279d8:
  do {
    uVar19 = *(uint *)(param_8 + 0x28);
    uVar9 = *(uint *)(param_8 + 0x2c);
    if (uVar19 < uVar9) {
LAB_03427a1c:
      if (uVar19 < uVar9) {
        uVar9 = *(uint *)(param_8 + 0x28);
        lVar12 = *(long *)(param_8 + 0x20);
        *(uint *)(param_8 + 0x28) = uVar9 + 1;
        if (lVar12 != 0) {
          puVar29 = (undefined4 *)(lVar12 + (ulong)uVar9 * 0x160);
          lVar12 = lVar12 + (ulong)uVar9 * 0x160;
          memset(puVar29,0,0x8c);
          *(undefined8 *)(lVar12 + 0x8c) = 0x42c80000;
          memset((void *)(lVar12 + 0xb8),0xff,0x80);
          *(undefined8 *)(lVar12 + 0x94) = 0;
          *(undefined8 *)(lVar12 + 0x9c) = 0;
          *(undefined8 *)(lVar12 + 0xa4) = 0;
          *(undefined8 *)(lVar12 + 0xac) = 0;
          uVar4 = param_2[1];
          uVar6 = param_2[2];
          *puVar29 = *param_2;
          *(undefined4 *)(lVar12 + 4) = uVar4;
          *(undefined4 *)(lVar12 + 8) = uVar6;
          *(undefined4 *)(lVar12 + 0x80) = 0;
          *(undefined4 *)(lVar12 + 0x8c) = 0x42c80000;
          local_70 = *(undefined4 *)(lVar22 + 0x74);
          local_78 = *(undefined8 *)(lVar22 + 0x6c);
          FUN_03425e28(puVar29,lVar22,&local_78,param_4);
          FUN_034260b4(puVar29,lVar27,*plVar15,*(long *)(lVar14 + 8),
                       *(undefined8 *)(*(long *)(lVar14 + 0x40) + 0x70),
                       *(undefined8 *)(*(long *)(lVar14 + 0x48) + 0x70));
          uStack_84 = *(undefined4 *)(param_5 + 0x1c);
          local_88 = *(undefined4 *)(param_5 + 0x18);
          local_80 = *(undefined4 *)(param_5 + 0x20);
          FUN_034263b8(puVar29,plVar15,1,&local_88,1);
          local_98 = *(undefined4 *)(param_5 + 0x18);
          uStack_94 = *(undefined4 *)(param_5 + 0x1c);
          local_90 = *(undefined4 *)(param_5 + 0x20);
          FUN_03425e28(puVar29,lVar16,&local_98,param_7);
        }
      }
    }
    else {
      iVar18 = uVar9 + (uVar9 >> 1);
      if (uVar9 == 0) {
        iVar18 = 1;
      }
      uVar9 = iVar18 + uVar9;
      lVar12 = (**(code **)(puVar7 + 0x28))
                         (9,*(undefined8 *)(param_8 + 0x20),(ulong)uVar9 * 0x160,0x10);
      if (lVar12 != 0) {
        *(long *)(param_8 + 0x20) = lVar12;
        *(uint *)(param_8 + 0x2c) = uVar9;
        goto LAB_03427a1c;
      }
    }
    lVar27 = lVar27 + 0x94;
  } while (lVar27 != *plVar10 + (ulong)*puVar11 * 0x94);
LAB_03427b70:
  lVar22 = lVar22 + 0x94;
  if (lVar22 == *plVar23 + (ulong)*puVar25 * 0x94) goto LAB_03427620;
  uVar9 = *puVar20;
  goto LAB_034276dc;
}


