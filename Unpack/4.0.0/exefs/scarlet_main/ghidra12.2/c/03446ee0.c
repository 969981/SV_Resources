/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03446ee0; name: FUN_03446ee0
 */


void FUN_03446ee0(long param_1,long *param_2,long param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_bc;
  float local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  
  fVar19 = 0.0;
  if ((*(byte *)(param_1 + 0x13c) >> 6 & 1) == 0) {
LAB_03446f28:
    plVar9 = (long *)0x0;
    plVar8 = (long *)0x0;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x140);
    if (lVar10 == 0) {
      uVar2 = *(uint *)(param_1 + 300);
      if (uVar2 == 0) goto LAB_03446f28;
      lVar10 = *(long *)PTR_DAT_047e6f28;
      pMVar1 = (MutexType *)(lVar10 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar10 + 0x178);
      if (uVar3 != 0) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar2 / uVar3;
        }
        for (lVar10 = *(long *)(*(long *)(lVar10 + 0x170) + (ulong)(uVar2 - uVar5 * uVar3) * 8);
            lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
          if (*(uint *)(lVar10 + 0x10) == uVar2) {
            *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            *(long *)(param_1 + 0x140) = lVar10;
            goto LAB_03446f3c;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      plVar9 = (long *)0x0;
      plVar8 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    else {
LAB_03446f3c:
      if ((ulong)*(byte *)(lVar10 + 0xdb) == 0xff) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar9 = (long *)(lVar10 + (ulong)*(byte *)(lVar10 + 0xdb) * 0x18 + 0x30);
        plVar8 = (long *)0x0;
        if (*plVar9 != 0) {
          plVar8 = plVar9;
        }
      }
      if ((ulong)*(byte *)(lVar10 + 0xdc) == 0xff) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar6 = (long *)(lVar10 + (ulong)*(byte *)(lVar10 + 0xdc) * 0x18 + 0x30);
        plVar9 = (long *)0x0;
        if (*plVar6 != 0) {
          plVar9 = plVar6;
        }
      }
      if ((*(byte *)(lVar10 + 0xdf) & 1) != 0) {
        local_bc = *(float *)(param_1 + 0x134);
        fVar19 = *(float *)(param_1 + 0x138);
        goto LAB_03447000;
      }
    }
  }
  local_bc = 0.0;
LAB_03447000:
  lVar10 = *(long *)(param_3 + 0x1b0);
  if (*(long **)(param_1 + 0x178) == (long *)0x0) {
    local_b4 = 0;
    fVar21 = 100.0;
  }
  else {
    local_b4 = (**(code **)(**(long **)(param_1 + 0x178) + 0x38))();
    fVar21 = 0.0;
    if ((local_b4 & 1) == 0) {
      fVar21 = 100.0;
    }
  }
  lVar12 = *param_2;
  local_b8 = 0.0;
  plVar6 = (long *)PTR_DAT_047e6f30;
  fVar20 = fVar21;
  do {
    if (lVar10 == *(long *)(lVar12 + 0x60)) {
      uVar17 = *(undefined4 *)(lVar12 + 0x24);
      fVar13 = 0.0;
      if (plVar8 != (long *)0x0) {
        local_b0 = CONCAT44(local_b0._4_4_,(int)plVar8[2]);
        fVar13 = (float)FUN_03447dcc(uVar17,plVar8,&local_b0);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_b0;
      }
      fVar14 = 0.0;
      if (plVar9 != (long *)0x0) {
        local_b0 = CONCAT44(local_b0._4_4_,(int)plVar9[2]);
        fVar14 = (float)FUN_03447dcc(uVar17,plVar9,&local_b0);
        *(undefined4 *)(plVar9 + 2) = (undefined4)local_b0;
      }
      fVar18 = *(float *)(lVar12 + 0x68) * fVar19;
      fVar15 = *(float *)(lVar12 + 0x68) * local_bc;
      if (fVar13 <= fVar15) {
        fVar13 = fVar15;
      }
      fVar16 = *(float *)(lVar12 + 0x48);
      fVar15 = *(float *)(lVar12 + 0x3c);
      if (*(float *)(lVar12 + 0x3c) <= fVar16) {
        fVar15 = fVar16;
      }
      uVar11 = (ulong)(uint)(&DAT_03cb53f8)[fVar15 == fVar16];
      lVar7 = *plVar6;
      if (((*(char *)(lVar7 + uVar11 * 3 + 1) != '\0') && (fVar15 != 0.0)) &&
         (*(long *)(lVar7 + uVar11 * 0x48 + 0x20) != 0)) {
        lVar7 = lVar7 + uVar11 * 0x48;
        local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar7 + 0x30));
        fVar16 = (float)FUN_03447dcc(fVar15,lVar7 + 0x20,&local_b0);
        *(undefined4 *)(lVar7 + 0x30) = (undefined4)local_b0;
        if (fVar13 <= fVar16) {
          fVar13 = fVar16;
        }
        lVar7 = *(long *)PTR_DAT_047e6f30;
        plVar6 = (long *)PTR_DAT_047e6f30;
      }
      if (fVar14 <= fVar18) {
        fVar14 = fVar18;
      }
      if (((*(char *)(lVar7 + uVar11 * 3 + 2) != '\0') && (fVar15 != 0.0)) &&
         (*(long *)(lVar7 + uVar11 * 0x48 + 0x38) != 0)) {
        lVar7 = lVar7 + uVar11 * 0x48;
        local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar7 + 0x48));
        fVar15 = (float)FUN_03447dcc(fVar15,lVar7 + 0x38,&local_b0);
        *(undefined4 *)(lVar7 + 0x48) = (undefined4)local_b0;
        if (fVar14 <= fVar15) {
          fVar14 = fVar15;
        }
        plVar6 = (long *)PTR_DAT_047e6f30;
      }
      if (*(int *)(param_3 + 0x1d4) == 0) {
        if (*(long **)(param_1 + 0x178) != (long *)0x0) {
          uVar11 = (**(code **)(**(long **)(param_1 + 0x178) + 0x48))();
          if ((uVar11 & 1) != 0) goto LAB_034471d4;
        }
        local_b0 = 0;
        fVar18 = *(float *)(lVar12 + 0x44);
        fVar15 = *(float *)(lVar12 + 0x40);
        if (*(float *)(lVar12 + 0x40) <= fVar18) {
          fVar15 = fVar18;
        }
        uVar11 = (ulong)*(uint *)((ulong)&local_b0 | (ulong)(fVar15 == fVar18) << 2);
        lVar7 = *plVar6;
        if (((*(char *)(lVar7 + uVar11 * 3 + 1) != '\0') && (fVar15 != 0.0)) &&
           (*(long *)(lVar7 + uVar11 * 0x48 + 0x20) != 0)) {
          lVar7 = lVar7 + uVar11 * 0x48;
          local_a4 = *(undefined4 *)(lVar7 + 0x30);
          fVar18 = (float)FUN_03447dcc(fVar15,lVar7 + 0x20,&local_a4);
          *(undefined4 *)(lVar7 + 0x30) = local_a4;
          if (fVar13 <= fVar18) {
            fVar13 = fVar18;
          }
          lVar7 = *(long *)PTR_DAT_047e6f30;
          plVar6 = (long *)PTR_DAT_047e6f30;
        }
        if (((*(char *)(lVar7 + uVar11 * 3 + 2) != '\0') && (fVar15 != 0.0)) &&
           (*(long *)(lVar7 + uVar11 * 0x48 + 0x38) != 0)) {
          lVar7 = lVar7 + uVar11 * 0x48;
          local_a4 = *(undefined4 *)(lVar7 + 0x48);
          fVar15 = (float)FUN_03447dcc(fVar15,lVar7 + 0x38,&local_a4);
          *(undefined4 *)(lVar7 + 0x48) = local_a4;
          if (fVar14 <= fVar15) {
            fVar14 = fVar15;
          }
          plVar6 = (long *)PTR_DAT_047e6f30;
        }
      }
LAB_034471d4:
      *(float *)(lVar12 + 0x6c) = fVar13;
      *(float *)(lVar12 + 0x70) = fVar14;
      if ((local_b4 & 1) == 0) {
        fVar21 = (float)NEON_fminnm(fVar21,fVar13);
        fVar20 = (float)NEON_fminnm(fVar20,fVar14);
      }
      else {
        iVar4 = *(int *)(param_3 + 0x1d4);
        if (iVar4 == 2) {
          fVar15 = *(float *)(lVar12 + 0x38);
        }
        else if (iVar4 == 1) {
          fVar15 = *(float *)(lVar12 + 0x34);
        }
        else {
          fVar15 = 1.0;
          if (iVar4 == 0) {
            fVar15 = *(float *)(lVar12 + 0x30);
          }
        }
        fVar16 = (float)NEON_fminnm(fVar13,0x42c80000);
        fVar18 = (float)NEON_fminnm(fVar14,0x42c80000);
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar18 = (float)NEON_fminnm(fVar18 * (fVar18 * fVar18 * -1.3191276e-10 + 0.0031678583) +
                                    0.98224795,0x3f800000);
        fVar18 = fVar18 * (fVar16 * (fVar16 * (fVar16 * 9.302722e-07 + -0.00017546544) +
                                    -0.0011517591) + 0.9843052) * fVar15;
        fVar18 = fVar18 * fVar18;
        local_b8 = fVar18 + local_b8;
        fVar21 = fVar21 + fVar13 * fVar18;
        fVar20 = fVar20 + fVar14 * fVar18;
      }
    }
    lVar12 = lVar12 + 0x78;
    if (lVar12 == *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x78) {
      if (0.0 < local_b8 && ((local_b4 ^ 0xffffffff) & 1) == 0) {
        fVar20 = fVar20 / local_b8;
        fVar21 = fVar21 / local_b8;
      }
      *(float *)(param_3 + 0x1c0) = fVar21;
      *(float *)(param_3 + 0x1c4) = fVar20;
      return;
    }
  } while( true );
}


