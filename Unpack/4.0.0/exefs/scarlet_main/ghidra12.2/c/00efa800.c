/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00efa800; name: FUN_00efa800
 */


void FUN_00efa800(long param_1)

{
  long lVar1;
  ReaderWriterLockType *pRVar2;
  long lVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float local_84;
  float local_80 [2];
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  float local_38;
  float local_34;
  
  if (((*PTR_DAT_047dd2e8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047dd2e8), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047dd9c8,PTR_DAT_047dd2f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd2e8);
  }
  *(undefined8 *)PTR_DAT_047dd2f8 = *(undefined8 *)PTR_DAT_047dd2f0;
  iVar12 = nn::oe::GetPerformanceMode();
  lVar1 = param_1 + (ulong)(iVar12 == 1) * 4;
  uVar7 = *(undefined4 *)(lVar1 + 0x430);
  uVar8 = *(undefined4 *)(lVar1 + 0x438);
  pRVar2 = (ReaderWriterLockType *)(param_1 + 0x2e8);
  local_80[0] = -9.293629e+12;
  local_80[1] = -2.3370406e+10;
  puStack_78 = PTR_s_ResolutionWidth2D_047d8e58;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  nn::os::AcquireWriteLock(pRVar2);
  lVar3 = param_1 + 0x218;
  puVar13 = (undefined4 *)FUN_00d3a40c(lVar3,local_80);
  *puVar13 = uVar7;
  nn::os::ReleaseWriteLock(pRVar2);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80[0] = 1.0735427e+19;
  local_80[1] = 1.5965915e+26;
  puStack_78 = PTR_s_ResolutionHeight2D_047d8e60;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  nn::os::AcquireWriteLock(pRVar2);
  puVar13 = (undefined4 *)FUN_00d3a40c(lVar3,local_80);
  *puVar13 = uVar8;
  nn::os::ReleaseWriteLock(pRVar2);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar10 = DAT_0485a0a0;
  *(undefined8 *)(DAT_0485a0a0 + 0xf8) = 0;
  *(undefined4 *)(lVar10 + 0x100) = uVar7;
  *(undefined4 *)(lVar10 + 0x104) = uVar8;
  iVar12 = *(int *)(lVar1 + 0x430);
  iVar19 = *(int *)(lVar1 + 0x438);
  local_34 = 1.0;
  nn::os::AcquireReadLock(pRVar2);
  uVar15 = *(ulong *)(param_1 + 0x80);
  fVar20 = 1.0;
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar15 - 1 & 0x4aa9ba3dccea94ea;
    }
    else if (uVar15 < 0x4aa9ba3dccea94eb) {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = 0x4aa9ba3dccea94ea / uVar15;
      }
      uVar17 = 0x4aa9ba3dccea94ea - uVar17 * uVar15;
    }
    else {
      uVar17 = 0x4aa9ba3dccea94ea;
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x78) + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar18[1] == 0x4aa9ba3dccea94ea) {
            if (plVar18[2] == 0x4aa9ba3dccea94ea) goto LAB_00efaa3c;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar17) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar18[1];
          if (uVar16 == 0x4aa9ba3dccea94ea) {
            if (plVar18[2] == 0x4aa9ba3dccea94ea) goto LAB_00efaa3c;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar9 = 0;
              if (uVar15 != 0) {
                uVar9 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar9 * uVar15;
            }
            if (uVar16 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_00efaa48:
  nn::os::ReleaseReadLock(pRVar2);
  local_38 = 1.0;
  nn::os::AcquireReadLock(pRVar2);
  uVar15 = *(ulong *)(param_1 + 0x80);
  if (uVar15 == 0) {
LAB_00efaccc:
    bVar11 = false;
  }
  else {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar15 - 1 & 0x66e7a756352d0d9f;
    }
    else if (uVar15 < 0x66e7a756352d0da0) {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = 0x66e7a756352d0d9f / uVar15;
      }
      uVar17 = 0x66e7a756352d0d9f - uVar17 * uVar15;
    }
    else {
      uVar17 = 0x66e7a756352d0d9f;
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x78) + uVar17 * 8);
    if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
    goto LAB_00efaccc;
    if (uVar16 < 2) {
      do {
        if (plVar18[1] == 0x66e7a756352d0d9f) {
          if (plVar18[2] == 0x66e7a756352d0d9f) goto LAB_00efab64;
        }
        else if ((plVar18[1] & uVar15 - 1) != uVar17) goto LAB_00efaccc;
        plVar18 = (long *)*plVar18;
        bVar11 = false;
      } while (plVar18 != (long *)0x0);
    }
    else {
      do {
        uVar16 = plVar18[1];
        if (uVar16 == 0x66e7a756352d0d9f) {
          if (plVar18[2] == 0x66e7a756352d0d9f) goto LAB_00efab64;
        }
        else {
          if (uVar15 <= uVar16) {
            uVar9 = 0;
            if (uVar15 != 0) {
              uVar9 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar9 * uVar15;
          }
          if (uVar16 != uVar17) goto LAB_00efaccc;
        }
        plVar18 = (long *)*plVar18;
        bVar11 = false;
      } while (plVar18 != (long *)0x0);
    }
  }
LAB_00efab84:
  nn::os::ReleaseReadLock(pRVar2);
  local_84 = 1.0;
  local_80[0] = 0.01;
  pfVar5 = local_80;
  if (0.01 <= fVar20) {
    pfVar5 = &local_34;
  }
  pfVar6 = &local_84;
  if (*pfVar5 <= 1.0) {
    pfVar6 = pfVar5;
  }
  local_34 = *pfVar6;
  local_84 = 1.0;
  local_80[0] = 0.01;
  pfVar5 = local_80;
  if (!bVar11) {
    pfVar5 = &local_38;
  }
  pfVar6 = &local_84;
  if (*pfVar5 <= 1.0) {
    pfVar6 = pfVar5;
  }
  local_38 = *pfVar6;
  fVar20 = (float)iVar12 * local_34;
  fVar21 = (float)iVar19 * local_38;
  nn::os::AcquireReadLock(pRVar2);
  uVar15 = *(ulong *)(param_1 + 0x220);
  if (uVar15 == 0) {
LAB_00efacc4:
    iVar12 = 0;
  }
  else {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar15 - 1 & 0x7ebb95ac4a09f984;
    }
    else if (uVar15 < 0x7ebb95ac4a09f985) {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = 0x7ebb95ac4a09f984 / uVar15;
      }
      uVar17 = 0x7ebb95ac4a09f984 - uVar17 * uVar15;
    }
    else {
      uVar17 = 0x7ebb95ac4a09f984;
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x218) + uVar17 * 8);
    if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
    goto LAB_00efacc4;
    if (1 < uVar16) {
      do {
        uVar16 = plVar18[1];
        if (uVar16 == 0x7ebb95ac4a09f984) {
          if (plVar18[2] == 0x7ebb95ac4a09f984) goto LAB_00efad1c;
        }
        else {
          if (uVar15 <= uVar16) {
            uVar9 = 0;
            if (uVar15 != 0) {
              uVar9 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar9 * uVar15;
          }
          if (uVar16 != uVar17) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      goto LAB_00efacc4;
    }
    do {
      if (plVar18[1] == 0x7ebb95ac4a09f984) {
        if (plVar18[2] == 0x7ebb95ac4a09f984) goto LAB_00efad1c;
      }
      else if ((plVar18[1] & uVar15 - 1) != uVar17) goto LAB_00efacc4;
      plVar18 = (long *)*plVar18;
      iVar12 = 0;
    } while (plVar18 != (long *)0x0);
  }
LAB_00efad20:
  nn::os::ReleaseReadLock(pRVar2);
  nn::os::AcquireReadLock(pRVar2);
  uVar15 = *(ulong *)(param_1 + 0x220);
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar15 - 1 & 0xbb12c6dec7a82e53;
    }
    else if (uVar15 < 0xbb12c6dec7a82e54) {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = 0xbb12c6dec7a82e53 / uVar15;
      }
      uVar17 = 0xbb12c6dec7a82e53 - uVar17 * uVar15;
    }
    else {
      uVar17 = 0xbb12c6dec7a82e53;
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x218) + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar18[1] == 0xbb12c6dec7a82e53) {
            if (plVar18[2] == -0x44ed39213857d1ad) goto LAB_00efae40;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar17) goto LAB_00efadf0;
          plVar18 = (long *)*plVar18;
          iVar19 = 0;
        } while (plVar18 != (long *)0x0);
        goto LAB_00efae44;
      }
      do {
        uVar16 = plVar18[1];
        if (uVar16 == 0xbb12c6dec7a82e53) {
          if (plVar18[2] == -0x44ed39213857d1ad) goto LAB_00efae40;
        }
        else {
          if (uVar15 <= uVar16) {
            uVar9 = 0;
            if (uVar15 != 0) {
              uVar9 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar9 * uVar15;
          }
          if (uVar16 != uVar17) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
LAB_00efadf0:
  iVar19 = 0;
LAB_00efae44:
  nn::os::ReleaseReadLock(pRVar2);
  local_80[0] = -0.331728;
  local_80[1] = 5.2947642e-05;
  puStack_78 = PTR_s_ResolutionWidth_047dcf98;
  iVar4 = (int)fVar20;
  if (iVar12 != 0) {
    iVar4 = iVar12;
  }
  iVar12 = (int)fVar21;
  if (iVar19 != 0) {
    iVar12 = iVar19;
  }
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  nn::os::AcquireWriteLock(pRVar2);
  piVar14 = (int *)FUN_00d3a40c(lVar3,local_80);
  *piVar14 = iVar4;
  nn::os::ReleaseWriteLock(pRVar2);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80[0] = 1.16441754e+33;
  local_80[1] = 0.0008987818;
  puStack_78 = PTR_s_ResolutionHeight_047dcfa0;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  nn::os::AcquireWriteLock(pRVar2);
  piVar14 = (int *)FUN_00d3a40c(lVar3,local_80);
  *piVar14 = iVar12;
  nn::os::ReleaseWriteLock(pRVar2);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
LAB_00efaa3c:
  fVar20 = *(float *)(plVar18 + 6);
  local_34 = fVar20;
  goto LAB_00efaa48;
LAB_00efab64:
  local_38 = *(float *)(plVar18 + 6);
  bVar11 = local_38 < 0.01;
  goto LAB_00efab84;
LAB_00efad1c:
  iVar12 = (int)plVar18[6];
  goto LAB_00efad20;
LAB_00efae40:
  iVar19 = (int)plVar18[6];
  goto LAB_00efae44;
}


