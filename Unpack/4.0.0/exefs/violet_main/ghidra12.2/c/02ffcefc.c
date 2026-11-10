/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ffcefc; name: FUN_02ffcefc
 */


void FUN_02ffcefc(long param_1,long *param_2,long *param_3,float *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  long *plVar7;
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  ulong uVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  float local_b0;
  float local_ac;
  ulong local_a8;
  undefined4 local_a0;
  float local_9c;
  ulong local_78;
  
  uVar22 = *(uint *)((long)param_2 + 0xc);
  uVar23 = (ulong)uVar22;
  if (uVar22 == 0) {
    uVar23 = (ulong)*(uint *)(param_1 + 0x20);
    if (0 < (int)*(uint *)(param_1 + 0x20)) {
      do {
        if (0 < (int)*(uint *)(param_1 + 0x100)) {
          lVar12 = *(long *)(param_1 + 0x18);
          uVar17 = (ulong)*(uint *)(param_1 + 0x100);
          do {
            plVar9 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar17 - 1) * 8);
            (**(code **)(*plVar9 + 0x30))(plVar9,param_1,lVar12 + (uVar23 - 1) * 0x40);
            bVar1 = 1 < (long)uVar17;
            uVar17 = uVar17 - 1;
          } while (bVar1);
        }
        bVar1 = 1 < (long)uVar23;
        uVar23 = uVar23 - 1;
      } while (bVar1);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar12 = tpidr_el0;
    lVar10 = *(long *)(lVar12 + 0x1000b8);
    if (lVar10 == 0) {
      lVar10 = FUN_00e5d3b4();
      *(long *)(lVar12 + 0x1000b8) = lVar10;
    }
    lVar12 = (long)(int)uVar22;
    lVar10 = *(long *)(*(long *)(lVar10 + 0x3d0) + 0x10);
    if (*(long *)(lVar10 + 8) == 0) {
      uVar17 = lVar12 * 0x40;
      local_78 = uVar17;
      if (lVar10 == 0) goto LAB_02ffd044;
      local_d0 = uVar17;
      if (*(ulong *)(lVar10 + 0x28) < uVar17) {
LAB_02ffcf98:
        puVar6 = (undefined8 *)FUN_031cf3b4(lVar10,&local_d0);
      }
      else {
        puVar6 = *(undefined8 **)(lVar10 + 0x38);
        if (*(undefined8 **)(lVar10 + 0x40) < puVar6 + lVar12 * 8) goto LAB_02ffcf98;
        *(undefined8 **)(lVar10 + 0x38) = puVar6 + lVar12 * 8;
      }
    }
    else {
      local_78 = lVar12 << 6;
LAB_02ffd044:
      uVar17 = local_78;
      puVar6 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
      lVar10 = 0;
    }
    lVar12 = (**(code **)(*param_2 + 0x20))(param_2);
    if ((int)uVar22 < 1) {
      fVar24 = 3.40282e+38;
    }
    else {
      fVar24 = 3.40282e+38;
      lVar11 = 0;
      puVar14 = (undefined8 *)(lVar12 + 0x50);
      do {
        uVar25 = puVar14[-10];
        puVar21 = (undefined8 *)((long)puVar6 + lVar11);
        lVar11 = lVar11 + 0x40;
        fVar28 = *(float *)(puVar14 + -6);
        fVar29 = *(float *)(param_1 + 0x140);
        puVar21[1] = puVar14[-9];
        *puVar21 = uVar25;
        uVar25 = puVar14[-8];
        if (fVar28 <= fVar24) {
          fVar24 = fVar28;
        }
        puVar21[3] = puVar14[-7];
        puVar21[2] = uVar25;
        puVar21[5] = *puVar14;
        uVar3 = *(undefined4 *)(puVar14 + 2);
        *(undefined4 *)((long)puVar21 + 0x24) = 0;
        *(undefined4 *)(puVar21 + 6) = uVar3;
        fVar28 = *(float *)(puVar14 + -6);
        *(float *)(puVar21 + 4) = fVar28;
        fVar28 = fVar29 - fVar28;
        if (fVar28 <= fVar29) {
          fVar29 = fVar28;
        }
        fVar26 = 0.0;
        if (0.0 <= fVar28) {
          fVar26 = fVar29;
        }
        puVar14 = puVar14 + 0x10;
        *(float *)((long)puVar21 + 0x34) = fVar26;
      } while (uVar23 * 0x40 != lVar11);
    }
    plVar9 = (long *)(param_1 + 0x18);
    if (0 < (int)*(uint *)(param_1 + 0x20)) {
      uVar16 = (ulong)*(uint *)(param_1 + 0x20);
      do {
        uVar13 = uVar16 - 1;
        puVar14 = (undefined8 *)(*plVar9 + uVar13 * 0x40);
        uVar22 = (uint)uVar23;
        uVar4 = uVar22 - 1;
        if (((int)uVar22 < 1) || (puVar14[5] == -1)) {
LAB_02ffd2d0:
          uVar23 = (ulong)*(uint *)(param_1 + 0x100);
          if (0 < (int)*(uint *)(param_1 + 0x100)) {
            do {
              plVar7 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar23 - 1) * 8);
              (**(code **)(*plVar7 + 0x30))(plVar7,param_1,puVar14);
              bVar1 = 1 < (long)uVar23;
              uVar23 = uVar23 - 1;
            } while (bVar1);
          }
          iVar18 = *(int *)(param_1 + 0x20);
          lVar12 = (long)iVar18 + -1;
          *(int *)(param_1 + 0x20) = (int)lVar12;
          if (iVar18 != (int)uVar16) {
            memcpy((void *)(*(long *)(param_1 + 0x18) + uVar13 * 0x40),
                   (void *)(*(long *)(param_1 + 0x18) + lVar12 * 0x40),0x38);
          }
        }
        else {
          fVar29 = 1.1;
          uVar19 = 0;
          puVar21 = puVar6;
          uVar20 = 0xffffffff;
          do {
            fVar28 = (float)FUN_02ffd8cc(param_1,puVar14,puVar21);
            uVar2 = (uint)uVar19;
            if (fVar29 <= fVar28) {
              uVar2 = uVar20;
              fVar28 = fVar29;
            }
            fVar29 = fVar28;
            uVar19 = uVar19 + 1;
            puVar21 = puVar21 + 8;
            uVar20 = uVar2;
          } while (uVar23 != uVar19);
          if ((int)uVar2 < 0) goto LAB_02ffd2d0;
          puVar21 = puVar6 + (ulong)uVar2 * 8;
          if (((puVar21[5] != puVar14[5]) || (*(int *)(puVar21 + 6) != *(int *)(puVar14 + 6))) &&
             (uVar23 = (ulong)*(uint *)(param_1 + 0x100), 0 < (int)*(uint *)(param_1 + 0x100))) {
            do {
              plVar7 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar23 - 1) * 8);
              (**(code **)(*plVar7 + 0x30))(plVar7,param_1,puVar14);
              bVar1 = 1 < (long)uVar23;
              uVar23 = uVar23 - 1;
            } while (bVar1);
            uVar23 = (ulong)*(uint *)(param_1 + 0x100);
            if (0 < (int)*(uint *)(param_1 + 0x100)) {
              do {
                plVar7 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar23 - 1) * 8);
                (**(code **)(*plVar7 + 0x28))(plVar7,param_1,puVar21);
                bVar1 = 1 < (long)uVar23;
                uVar23 = uVar23 - 1;
              } while (bVar1);
            }
          }
          fVar28 = *(float *)(param_1 + 0x140) - *(float *)(puVar21 + 4);
          uVar25 = *puVar21;
          puVar14[1] = puVar21[1];
          *puVar14 = uVar25;
          fVar29 = *(float *)((long)puVar14 + 0x34);
          if (fVar28 <= *(float *)((long)puVar14 + 0x34)) {
            fVar29 = fVar28;
          }
          uVar25 = puVar21[2];
          puVar14[3] = puVar21[3];
          puVar14[2] = uVar25;
          puVar14[5] = puVar21[5];
          puVar14[4] = puVar21[4];
          uVar3 = *(undefined4 *)(puVar21 + 6);
          fVar26 = 0.0;
          if (0.0 <= fVar28) {
            fVar26 = fVar29;
          }
          *(float *)((long)puVar14 + 0x34) = fVar26;
          *(undefined4 *)(puVar14 + 6) = uVar3;
          uVar22 = uVar2;
          if (uVar4 != uVar2) {
            memcpy(puVar21,puVar6 + (long)(int)uVar4 * 8,0x38);
            uVar22 = uVar4;
          }
        }
        uVar23 = (ulong)uVar22;
        bVar1 = 1 < (long)uVar16;
        uVar16 = uVar13;
      } while (bVar1);
    }
    if (0 < (int)uVar22) {
      uVar23 = (ulong)uVar22;
      puVar14 = puVar6;
LAB_02ffd370:
      if (*(float *)(puVar14 + 4) != fVar24) goto code_r0x02ffd37c;
      if ((puVar14[5] == -1) || (*(int *)(param_1 + 0x20) < 1)) goto LAB_02ffd4f8;
      fVar24 = 0.1;
      lVar11 = 0;
      lVar12 = 0;
      uVar22 = 0xffffffff;
      do {
        fVar29 = (float)FUN_02ffd8cc(param_1,puVar14,*(long *)(param_1 + 0x18) + lVar11);
        uVar4 = (uint)lVar12;
        if (fVar24 <= fVar29) {
          uVar4 = uVar22;
          fVar29 = fVar24;
        }
        fVar24 = fVar29;
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x40;
        uVar22 = uVar4;
      } while (lVar12 < *(int *)(param_1 + 0x20));
      if ((int)uVar4 < 0) {
LAB_02ffd4f8:
        uVar23 = (ulong)*(uint *)(param_1 + 0x100);
        if (0 < (int)*(uint *)(param_1 + 0x100)) {
          do {
            plVar7 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar23 - 1) * 8);
            (**(code **)(*plVar7 + 0x28))(plVar7,param_1,puVar14);
            bVar1 = 1 < (long)uVar23;
            uVar23 = uVar23 - 1;
          } while (bVar1);
        }
        iVar18 = *(int *)(param_1 + 0x20);
        lVar12 = (long)iVar18;
        if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar18) {
          FUN_02ffc0e4(plVar9,PTR_PTR_047d1a50,lVar12 + 1);
          iVar18 = *(int *)(param_1 + 0x20);
        }
        memcpy((void *)(*(long *)(param_1 + 0x18) + (long)iVar18 * 0x40),puVar14,0x38);
        *(int *)(param_1 + 0x20) = (int)(lVar12 + 1);
        goto LAB_02ffd580;
      }
      puVar21 = (undefined8 *)(*plVar9 + (ulong)uVar4 * 0x40);
      if (((puVar14[5] != puVar21[5]) || (*(int *)(puVar14 + 6) != *(int *)(puVar21 + 6))) &&
         (uVar23 = (ulong)*(uint *)(param_1 + 0x100), 0 < (int)*(uint *)(param_1 + 0x100))) {
        do {
          plVar9 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar23 - 1) * 8);
          (**(code **)(*plVar9 + 0x30))(plVar9,param_1,puVar21);
          bVar1 = 1 < (long)uVar23;
          uVar23 = uVar23 - 1;
        } while (bVar1);
        uVar23 = (ulong)*(uint *)(param_1 + 0x100);
        if (0 < (int)*(uint *)(param_1 + 0x100)) {
          do {
            plVar9 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar23 - 1) * 8);
            (**(code **)(*plVar9 + 0x28))(plVar9,param_1,puVar14);
            bVar1 = 1 < (long)uVar23;
            uVar23 = uVar23 - 1;
          } while (bVar1);
        }
      }
      fVar29 = *(float *)(param_1 + 0x140) - *(float *)(puVar14 + 4);
      uVar25 = *puVar14;
      puVar21[1] = puVar14[1];
      *puVar21 = uVar25;
      fVar24 = *(float *)((long)puVar21 + 0x34);
      if (fVar29 <= *(float *)((long)puVar21 + 0x34)) {
        fVar24 = fVar29;
      }
      uVar25 = puVar14[2];
      puVar21[3] = puVar14[3];
      puVar21[2] = uVar25;
      puVar21[5] = puVar14[5];
      fVar28 = 0.0;
      if (0.0 <= fVar29) {
        fVar28 = fVar24;
      }
      puVar21[4] = puVar14[4];
      *(undefined4 *)(puVar21 + 6) = *(undefined4 *)(puVar14 + 6);
      *(float *)((long)puVar21 + 0x34) = fVar28;
    }
LAB_02ffd580:
    if (lVar10 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar6,uVar17);
    }
    else if ((*(ulong *)(lVar10 + 0x28) < uVar17) ||
            (*(long *)(lVar10 + 0x38) != uVar17 + (long)puVar6)) {
      if (puVar6 != (undefined8 *)0x0) {
        if (*(ulong *)(lVar10 + 0x28) < uVar17 + 0x40) {
          *(int *)(*(long *)(lVar10 + 0x30) + 0x20) = *(int *)(*(long *)(lVar10 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar10 + 0x10) + 0x18))
                    (*(long **)(lVar10 + 0x10),(long)puVar6 - (long)*(int *)((long)puVar6 + -4),
                     uVar17 + 0x44);
        }
        else {
          if (*(long *)(lVar10 + 0x38) == uVar17 + (long)puVar6) {
            *(undefined8 **)(lVar10 + 0x38) = puVar6;
            goto LAB_02ffd64c;
          }
          FUN_031cf778(lVar10,puVar6);
        }
      }
    }
    else {
      *(undefined8 **)(lVar10 + 0x38) = puVar6;
      if (*(undefined8 **)(lVar10 + 0x48) == puVar6) {
LAB_02ffd64c:
        FUN_031cf578(lVar10);
      }
    }
  }
  if (*(int *)((long)param_3 + 0xc) == 0) {
    uVar23 = (ulong)*(uint *)(param_1 + 0x20);
  }
  else {
    puVar8 = (ulong *)(**(code **)(*param_3 + 0x20))(param_3);
    uStack_c8 = puVar8[1];
    local_d0 = *puVar8;
    uStack_b8 = puVar8[3];
    uStack_c0 = puVar8[2];
    fVar24 = *(float *)(param_1 + 0x140);
    local_a8 = puVar8[10];
    local_a0 = (undefined4)puVar8[0xc];
    local_ac = *(float *)(puVar8 + 4);
    fVar29 = (float)uStack_c0 * *param_4;
    fVar28 = (float)(uStack_c0 >> 0x20) * param_4[1];
    fVar26 = (float)uStack_b8 * param_4[2];
    fVar27 = (float)(uStack_b8 >> 0x20) * param_4[3];
    auVar30._4_4_ = fVar28;
    auVar30._0_4_ = fVar29;
    auVar30._8_4_ = fVar26;
    auVar30._12_4_ = fVar27;
    auVar5._4_4_ = fVar28;
    auVar5._0_4_ = fVar29;
    auVar5._8_4_ = fVar26;
    auVar5._12_4_ = fVar27;
    auVar30 = NEON_ext(auVar30,auVar5,8,1);
    local_b0 = -local_ac * (fVar29 + fVar28 + auVar30._0_4_);
    fVar29 = fVar24 - local_b0;
    if (fVar29 <= fVar24) {
      fVar24 = fVar29;
    }
    local_9c = 0.0;
    if (0.0 <= fVar29) {
      local_9c = fVar24;
    }
    if ((local_a8 != 0xffffffffffffffff) && (0 < *(int *)(param_1 + 0x20))) {
      fVar24 = 0.1;
      lVar10 = 0;
      lVar12 = 0;
      iVar18 = -1;
      do {
        fVar29 = (float)FUN_02ffd8cc(param_1,&local_d0,*(long *)(param_1 + 0x18) + lVar10);
        uVar23 = (ulong)*(int *)(param_1 + 0x20);
        iVar15 = (int)lVar12;
        if (fVar24 <= fVar29) {
          iVar15 = iVar18;
          fVar29 = fVar24;
        }
        fVar24 = fVar29;
        lVar12 = lVar12 + 1;
        lVar10 = lVar10 + 0x40;
        iVar18 = iVar15;
      } while (lVar12 < (long)uVar23);
      if (iVar15 != -1) goto LAB_02ffd7c8;
    }
    uVar23 = (ulong)*(uint *)(param_1 + 0x100);
    if (0 < (int)*(uint *)(param_1 + 0x100)) {
      do {
        plVar9 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar23 - 1) * 8);
        (**(code **)(*plVar9 + 0x28))(plVar9,param_1,&local_d0);
        bVar1 = 1 < (long)uVar23;
        uVar23 = uVar23 - 1;
      } while (bVar1);
    }
    iVar18 = *(int *)(param_1 + 0x20);
    uVar23 = (long)iVar18 + 1;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= iVar18) {
      FUN_02ffc0e4(param_1 + 0x18,PTR_PTR_047d1a50,uVar23);
      iVar18 = *(int *)(param_1 + 0x20);
    }
    memcpy((void *)(*(long *)(param_1 + 0x18) + (long)iVar18 * 0x40),&local_d0,0x38);
    *(int *)(param_1 + 0x20) = (int)uVar23;
  }
LAB_02ffd7c8:
  iVar18 = (int)uVar23;
  if (iVar18 < 2) {
    return;
  }
  lVar12 = (ulong)(iVar18 - 2) << 6;
  uVar23 = uVar23 & 0xffffffff;
  do {
    iVar18 = iVar18 + -1;
    uVar17 = uVar23 - 1;
    lVar10 = lVar12;
    iVar15 = iVar18;
    while (fVar24 = (float)FUN_02ffd8cc(param_1,*(long *)(param_1 + 0x18) + uVar17 * 0x40,
                                        *(long *)(param_1 + 0x18) + lVar10), 0.1 <= fVar24) {
      iVar15 = iVar15 + -1;
      lVar10 = lVar10 + -0x40;
      if (iVar15 < 1) goto LAB_02ffd894;
    }
    lVar10 = *(long *)(param_1 + 0x18);
    if (0 < (int)*(uint *)(param_1 + 0x100)) {
      uVar16 = (ulong)*(uint *)(param_1 + 0x100);
      do {
        plVar9 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar16 - 1) * 8);
        (**(code **)(*plVar9 + 0x30))(plVar9,param_1,lVar10 + uVar17 * 0x40);
        bVar1 = 1 < (long)uVar16;
        uVar16 = uVar16 - 1;
      } while (bVar1);
      lVar10 = *(long *)(param_1 + 0x18);
    }
    iVar15 = *(int *)(param_1 + 0x20);
    lVar11 = (long)iVar15 + -1;
    *(int *)(param_1 + 0x20) = (int)lVar11;
    if (iVar15 != (int)uVar23) {
      memcpy((void *)(lVar10 + uVar17 * 0x40),(void *)(lVar10 + lVar11 * 0x40),0x38);
    }
LAB_02ffd894:
    lVar12 = lVar12 + -0x40;
    bVar1 = (long)uVar23 < 3;
    uVar23 = uVar17;
    if (bVar1) {
      return;
    }
  } while( true );
code_r0x02ffd37c:
  puVar14 = puVar14 + 8;
  uVar23 = uVar23 - 1;
  if (uVar23 == 0) goto LAB_02ffd580;
  goto LAB_02ffd370;
}


