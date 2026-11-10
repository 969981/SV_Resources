/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342af8c; name: FUN_0342af8c
 */


void FUN_0342af8c(long param_1,undefined8 param_2)

{
  long *plVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  uint uVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  void *pvVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long *local_e0;
  uint local_d8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  long local_a8;
  ulong local_a0;
  
  puVar10 = PTR_DAT_047e6e90;
  lVar22 = *(long *)(param_1 + 0x60);
  lVar24 = *(long *)(lVar22 + 0x30);
  if (((lVar24 != 0) && (*(char *)(*(long *)PTR_DAT_047e6e90 + 0xf0) == '\0')) &&
     (iVar12 = FUN_0342bc28(lVar22,*(undefined8 *)(*(long *)(lVar24 + 8) + 0x78)), iVar12 != 2)) {
    FUN_0342a1d4(lVar22 + 0x38,lVar22);
    FUN_03429e34(lVar22 + 0x50,lVar22);
    lVar15 = *(long *)(lVar22 + 8);
    if (*(long *)(*(long *)(*(long *)(lVar24 + 8) + 0x58) + 0x68) !=
        *(long *)(*(long *)(lVar15 + 0x58) + 0x68)) {
      nn::os::LockMutex((MutexType *)(*(long *)puVar10 + 0xd0));
      plVar23 = *(long **)puVar10;
      uVar5 = *(uint *)(plVar23 + 1);
      if (uVar5 != 0) {
        lVar15 = *(long *)(*(long *)(*(long *)(lVar22 + 8) + 0x58) + 0x68);
        uVar8 = 0;
        uVar18 = (uint)lVar15;
        if (uVar5 != 0) {
          uVar8 = uVar18 / uVar5;
        }
        for (lVar26 = *(long *)(*plVar23 + (ulong)(uVar18 - uVar8 * uVar5) * 8); lVar26 != 0;
            lVar26 = *(long *)(lVar26 + 0x78)) {
          if (*(long *)(lVar26 + 0x70) == lVar15) {
            uVar21 = (ulong)*(ushort *)(*(long *)(*(long *)(lVar22 + 8) + 0x28) + 0x38);
            if (uVar21 != 0) {
              uVar28 = 0;
              do {
                local_a8 = 0;
                local_a0 = 0;
                FUN_0342025c(lVar26,lVar22,uVar28 & 0xffffffff,lVar24,&local_a8);
                FUN_03428974(&local_a8,lVar22,lVar24,plVar23);
                lVar15 = *(long *)(*(long *)(lVar24 + 8) + 0x40);
                local_b8 = *(undefined4 *)(lVar15 + 0x78);
                uStack_b4 = *(undefined4 *)(lVar15 + 0x7c);
                local_b0 = *(undefined4 *)(lVar15 + 0x80);
                uVar30 = *(undefined8 *)(*(long *)(*(long *)(lVar24 + 8) + 0x58) + 0x68);
                lVar15 = *(long *)(*(long *)(*(long *)(lVar22 + 8) + 0x28) + 0x20);
                lVar16 = *(long *)(lVar22 + 0x20);
                lVar17 = lVar16 + uVar28 * 0x90;
                lVar27 = *(long *)(*(long *)(lVar22 + 8) + 0x58);
                uVar29 = *(undefined8 *)(lVar27 + 0x68);
                if (*(char *)(lVar27 + 200) == '\0') {
                  fVar32 = *(float *)(lVar27 + 0xb4);
                }
                else {
                  fVar32 = 0.0;
                  for (lVar16 = *(long *)(lVar27 + 0xa0); lVar16 != 0;
                      lVar16 = *(long *)(lVar16 + 0x10)) {
                    fVar32 = (float)FUN_034cd368(lVar16);
                  }
                  if (fVar32 < *(float *)(lVar27 + 0xb4)) {
                    *(undefined4 *)(lVar27 + 0xc0) = 1;
                    *(undefined4 *)(lVar27 + 0xb8) = *(undefined4 *)(lVar27 + 0xb8);
                  }
                  *(float *)(lVar27 + 0xb4) = fVar32;
                  *(undefined1 *)(lVar27 + 200) = 0;
                  lVar16 = *(long *)(lVar22 + 0x20);
                }
                FUN_03427498(*(float *)(lVar22 + 0x74) +
                             fVar32 * *(float *)(*(long *)(*(long *)(lVar27 + 8) + 0x28) + 0x50),
                             &local_a8,&local_b8,lVar24 + 0x88,uVar30,lVar15 + uVar28 * 0x28,
                             lVar17 + 0x80,uVar29,lVar16 + uVar28 * 0x90);
                if (local_a8 != 0) {
                  local_a0 = local_a0 & 0xffffffff00000000;
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
                  local_a8 = 0;
                  local_a0 = local_a0 & 0xffffffff;
                }
                uVar28 = uVar28 + 1;
              } while (uVar28 != uVar21);
              plVar23 = *(long **)PTR_DAT_047e6e90;
            }
            break;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(plVar23 + 0x1a));
      lVar15 = *(long *)(lVar22 + 8);
    }
    lVar26 = *(long *)(lVar15 + 0x28);
    uVar7 = *(ushort *)(lVar26 + 0x38);
    if ((ulong)uVar7 != 0) {
      lVar26 = 0;
      lVar15 = 0;
      do {
        lVar16 = *(long *)(*(long *)(lVar24 + 8) + 0x40);
        local_a8 = *(long *)(lVar16 + 0x78);
        local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar16 + 0x80));
        FUN_0342708c(*(undefined4 *)(lVar22 + 0x74),*(undefined4 *)(lVar22 + 0x78),
                     *(long *)(lVar22 + 0x20) + lVar15,&local_a8,
                     *(long *)(*(long *)(*(long *)(lVar22 + 8) + 0x28) + 0x20) + lVar26);
        lVar15 = lVar15 + 0x90;
        lVar26 = lVar26 + 0x28;
      } while ((ulong)uVar7 * 0x90 != lVar15);
      lVar15 = *(long *)(lVar22 + 8);
      lVar26 = *(long *)(lVar15 + 0x28);
    }
    puVar10 = PTR_DAT_047e2fd0;
    uVar5 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar5 != 0) {
      lVar24 = *(long *)(*(long *)(*(long *)(lVar22 + 0x30) + 8) + 0x78);
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = (uint)lVar24 / uVar5;
      }
      plVar23 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                          (ulong)((uint)lVar24 - uVar8 * uVar5) * 8);
      if (plVar23 != (long *)0x0) {
        lVar15 = *(long *)(lVar15 + 0x58);
        do {
          if (plVar23[1] == lVar24) {
            lVar16 = plVar23[2];
            if (lVar16 == 0) {
              return;
            }
            local_e0 = *(long **)(lVar16 + 0x40);
            if (local_e0 == (long *)0x0) {
              local_e0 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x90);
              puVar11 = PTR_DAT_047e6d58;
              if (local_e0 == (long *)0x0) {
                return;
              }
              *local_e0 = (long)(PTR_DAT_047e6d50 + 0x10);
              local_e0[1] = 0;
              lVar17 = *(long *)(puVar11 + 8);
              local_e0[2] = 0;
              local_e0[3] = lVar17;
              plVar23 = (long *)(puVar11 + 0x10);
              if (*(long *)(puVar11 + 0x10) != 0) {
                plVar23 = (long *)(lVar17 + 0x10);
              }
              *plVar23 = (long)local_e0;
              *(long **)(puVar11 + 8) = local_e0;
              *(int *)puVar11 = *(int *)puVar11 + 1;
              puVar11 = PTR_DAT_047e6d60;
              local_e0[4] = 0;
              local_e0[5] = 0;
              local_e0[6] = 0;
              *(undefined4 *)(local_e0 + 7) = 0;
              *(undefined8 *)((long)local_e0 + 0x74) = 0;
              *(undefined8 *)((long)local_e0 + 0x7c) = 0;
              *(undefined8 *)((long)local_e0 + 0x44) = 0;
              *(undefined8 *)((long)local_e0 + 0x54) = 0;
              *(undefined1 *)(local_e0 + 0x11) = 1;
              *(undefined8 *)((long)local_e0 + 100) = 0x3f80000000000000;
              *(undefined8 *)((long)local_e0 + 0x6c) = 0x3f80000000000000;
              *local_e0 = (long)(puVar11 + 0x10);
              *(undefined4 *)((long)local_e0 + 0x84) = 0x3f800000;
              *(undefined8 *)((long)local_e0 + 0x3c) = 0x3f800000;
              *(undefined8 *)((long)local_e0 + 0x4c) = 0x3f800000;
              *(undefined8 *)((long)local_e0 + 0x5c) = 0x3f800000;
              *(long **)(lVar16 + 0x40) = local_e0;
              local_e0[1] = lVar16;
              iVar12 = (**(code **)(*local_e0 + 0x10))(local_e0,*(undefined8 *)(lVar16 + 0x78));
              if (iVar12 != 1) {
                (**(code **)*local_e0)(local_e0);
                (**(code **)(puVar10 + 0x30))(4,local_e0);
                *(undefined8 *)(lVar16 + 0x40) = 0;
                return;
              }
            }
            if (lVar26 == 0) {
              return;
            }
            if (lVar15 == 0) {
              return;
            }
            if (*(short *)(lVar26 + 0x38) == 0) {
              return;
            }
            fVar32 = *(float *)(lVar15 + 0x74);
            iVar12 = *(int *)(lVar15 + 0x70);
            lVar16 = -4;
            if (*(long *)(lVar15 + 0x68) != -1) {
              lVar16 = *(long *)(lVar15 + 0x68);
            }
            bVar9 = 0.0 < *(float *)(lVar15 + 0x8c) && *(int *)(lVar15 + 0x88) != 0;
            uVar21 = 0;
            lVar17 = -4;
            if (*(long *)(lVar15 + 0x80) != -1) {
              lVar17 = *(long *)(lVar15 + 0x80);
            }
            do {
              plVar23 = *(long **)(lVar26 + 0x28);
              uVar6 = *(undefined4 *)(*(long *)(lVar26 + 0x20) + uVar21 * 0x28 + 0x24);
              uVar5 = *(uint *)(lVar26 + 0x30);
              if ((uVar5 == 0) || (*plVar23 == lVar24)) {
                plVar19 = plVar23;
              }
              else {
                lVar15 = (ulong)uVar5 * 0x18;
                plVar20 = plVar23;
                do {
                  lVar15 = lVar15 + -0x18;
                  if (lVar15 == 0) {
                    fVar31 = 0.0;
                    fVar33 = 0.0;
                    goto LAB_0342b424;
                  }
                  plVar19 = plVar20 + 3;
                  plVar1 = plVar20 + 3;
                  plVar20 = plVar19;
                } while (*plVar1 != lVar24);
              }
              fVar31 = 0.0;
              fVar33 = 0.0;
              if (plVar19 != plVar23 + (ulong)uVar5 * 3) {
                fVar31 = 0.0;
                fVar33 = 0.0;
                if ((int)plVar19[2] != 0) {
                  uVar8 = (int)plVar19[2] - 1;
                  uVar5 = (uint)uVar21;
                  if (uVar8 <= uVar21) {
                    uVar5 = uVar8;
                  }
                  pfVar2 = (float *)(plVar19[1] + (ulong)uVar5 * 0x10);
                  fVar31 = *pfVar2;
                  fVar33 = pfVar2[1];
                }
              }
LAB_0342b424:
              lVar27 = *(long *)(lVar22 + 0x20) + uVar21 * 0x90;
              plVar23 = (long *)(lVar27 + 0x20);
              lVar15 = *plVar23;
              puVar25 = (uint *)(lVar27 + 0x28);
              if (*puVar25 != 0) {
                pfVar2 = (float *)(*(long *)(lVar22 + 0x20) + uVar21 * 0x90 + 0x14);
                local_d8 = (uint)uVar21 & 0xff;
                if (fVar32 <= 0.0 || iVar12 == 0) {
                  lVar27 = lVar15;
                  do {
                    fVar35 = *(float *)(lVar27 + 0x84);
                    uVar3 = *(undefined4 *)(lVar27 + 0x88);
                    uVar4 = *(undefined4 *)(lVar27 + 0x8c);
                    if (0.001 <= *(float *)(lVar27 + 0x7c)) {
                      uVar30 = 0xc;
                      uVar14 = 4;
                      fVar34 = 0.0;
                    }
                    else {
                      fVar34 = 0.0;
                      if (lVar27 == lVar15) {
                        fVar34 = *pfVar2;
                      }
                      uVar14 = 2;
                      if (fVar34 <= 0.0) {
                        uVar14 = 1;
                      }
                      uVar30 = 9;
                    }
                    pvVar13 = (void *)FUN_034ebdd8(param_2,uVar14,1);
                    if (pvVar13 != (void *)0x0) {
                      uVar5 = *(uint *)(lVar27 + 0x90);
                      fVar36 = *(float *)(lVar27 + 0x7c);
                      if (fVar35 <= fVar33) {
                        fVar35 = fVar33;
                      }
                      memcpy(pvVar13,(void *)(lVar27 + 0x138),0x24);
                      *(undefined4 *)((long)pvVar13 + 0x4c) = uVar3;
                      *(undefined4 *)((long)pvVar13 + 0x50) = uVar4;
                      *(undefined4 *)((long)pvVar13 + 0x58) = uVar6;
                      *(uint *)((long)pvVar13 + 0x5c) = uVar5 & 0xff000000 ^ uVar5 << 8 | local_d8;
                      *(long *)((long)pvVar13 + 0x60) = lVar24;
                      *(float *)((long)pvVar13 + 0x3c) = fVar31 * 100.0;
                      *(float *)((long)pvVar13 + 0x40) = fVar35 * 100.0;
                      *(float *)((long)pvVar13 + 0x44) = fVar36 * 100.0;
                      *(float *)((long)pvVar13 + 0x48) = fVar34 * 100.0;
                      FUN_03447c20(local_e0,lVar26,pvVar13);
                      if (bVar9) {
                        lVar15 = FUN_034ebf54(param_2,uVar30,lVar17,0);
                        *(undefined4 *)(lVar15 + 0x48) = 0;
                      }
                    }
                    lVar15 = *plVar23;
                    lVar27 = lVar27 + 0x160;
                  } while (lVar27 != lVar15 + (ulong)*puVar25 * 0x160);
                }
                else {
                  lVar27 = lVar15;
                  do {
                    fVar35 = *(float *)(lVar27 + 0x84);
                    uVar3 = *(undefined4 *)(lVar27 + 0x88);
                    uVar4 = *(undefined4 *)(lVar27 + 0x8c);
                    if (0.001 <= *(float *)(lVar27 + 0x7c)) {
                      uVar30 = 0xc;
                      uVar14 = 4;
                      fVar34 = 0.0;
                    }
                    else {
                      fVar34 = 0.0;
                      if (lVar27 == lVar15) {
                        fVar34 = *pfVar2;
                      }
                      uVar14 = 2;
                      if (fVar34 <= 0.0) {
                        uVar14 = 1;
                      }
                      uVar30 = 9;
                    }
                    pvVar13 = (void *)FUN_034ebdd8(param_2,uVar14,1);
                    if (pvVar13 != (void *)0x0) {
                      uVar5 = *(uint *)(lVar27 + 0x90);
                      fVar36 = *(float *)(lVar27 + 0x7c);
                      if (fVar35 <= fVar33) {
                        fVar35 = fVar33;
                      }
                      memcpy(pvVar13,(void *)(lVar27 + 0x138),0x24);
                      *(undefined4 *)((long)pvVar13 + 0x4c) = uVar3;
                      *(undefined4 *)((long)pvVar13 + 0x50) = uVar4;
                      *(undefined4 *)((long)pvVar13 + 0x58) = uVar6;
                      *(uint *)((long)pvVar13 + 0x5c) = uVar5 & 0xff000000 ^ uVar5 << 8 | local_d8;
                      *(long *)((long)pvVar13 + 0x60) = lVar24;
                      *(float *)((long)pvVar13 + 0x3c) = fVar31 * 100.0;
                      *(float *)((long)pvVar13 + 0x40) = fVar35 * 100.0;
                      *(float *)((long)pvVar13 + 0x44) = fVar36 * 100.0;
                      *(float *)((long)pvVar13 + 0x48) = fVar34 * 100.0;
                      FUN_03447c20(local_e0,lVar26,pvVar13);
                      lVar15 = FUN_034ebf54(param_2,uVar30,lVar16,0);
                      *(undefined4 *)(lVar15 + 0x48) = 0;
                      if (bVar9) {
                        lVar15 = FUN_034ebf54(param_2,uVar30,lVar17,0);
                        *(undefined4 *)(lVar15 + 0x48) = 0;
                      }
                    }
                    lVar15 = *plVar23;
                    lVar27 = lVar27 + 0x160;
                  } while (lVar27 != lVar15 + (ulong)*puVar25 * 0x160);
                }
              }
              uVar21 = uVar21 + 1;
              if (*(ushort *)(lVar26 + 0x38) <= uVar21) {
                return;
              }
            } while( true );
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
      }
    }
  }
  return;
}


