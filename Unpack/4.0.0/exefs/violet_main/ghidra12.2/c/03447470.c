/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03447470; name: FUN_03447470
 */


void FUN_03447470(long param_1,long *param_2)

{
  MutexType *pMVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool local_8c;
  undefined1 local_8b;
  undefined8 local_88;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_74;
  
  if ((*(byte *)(param_1 + 0x13c) >> 6 & 1) == 0) {
LAB_034474b0:
    lVar14 = 0;
    plVar8 = (long *)0x0;
    plVar12 = (long *)0x0;
    plVar11 = (long *)0x0;
    bVar5 = true;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x140);
    if (lVar14 == 0) {
      uVar7 = *(uint *)(param_1 + 300);
      if (uVar7 != 0) {
        lVar14 = *(long *)PTR_DAT_047e6f28;
        pMVar1 = (MutexType *)(lVar14 + 0x150);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(lVar14 + 0x178);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar7 / uVar3;
          }
          for (lVar14 = *(long *)(*(long *)(lVar14 + 0x170) + (ulong)(uVar7 - uVar4 * uVar3) * 8);
              lVar14 != 0; lVar14 = *(long *)(lVar14 + 8)) {
            if (*(uint *)(lVar14 + 0x10) == uVar7) {
              *(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              *(long *)(param_1 + 0x140) = lVar14;
              goto LAB_034474c8;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      goto LAB_034474b0;
    }
LAB_034474c8:
    if ((ulong)*(byte *)(lVar14 + 0xd8) == 0xff) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar12 = (long *)(lVar14 + (ulong)*(byte *)(lVar14 + 0xd8) * 0x18 + 0x30);
      plVar11 = (long *)0x0;
      if (*plVar12 != 0) {
        plVar11 = plVar12;
      }
    }
    if ((ulong)*(byte *)(lVar14 + 0xd9) == 0xff) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(lVar14 + (ulong)*(byte *)(lVar14 + 0xd9) * 0x18 + 0x30);
      plVar12 = (long *)0x0;
      if (*plVar8 != 0) {
        plVar12 = plVar8;
      }
    }
    if ((ulong)*(byte *)(lVar14 + 0xda) == 0xff) {
      bVar5 = false;
      plVar8 = (long *)0x0;
    }
    else {
      bVar5 = false;
      plVar9 = (long *)(lVar14 + (ulong)*(byte *)(lVar14 + 0xda) * 0x18 + 0x30);
      plVar8 = (long *)0x0;
      if (*plVar9 != 0) {
        plVar8 = plVar9;
      }
    }
  }
  lVar13 = *param_2;
  local_88 = 0;
  pcVar10 = *(char **)PTR_DAT_047e6f30;
  local_78 = false;
  if (pcVar10[3] != '\0') {
    local_78 = *(long *)(pcVar10 + 0x50) != 0;
  }
  local_77 = local_78;
  if (*(long **)(param_1 + 0x178) == (long *)0x0) {
LAB_03447604:
    if (*pcVar10 != '\0') {
      local_8c = *(long *)(pcVar10 + 8) != 0;
      goto LAB_03447628;
    }
  }
  else {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x178) + 0x48))();
    if ((uVar6 & 1) == 0) {
      pcVar10 = *(char **)PTR_DAT_047e6f30;
      goto LAB_03447604;
    }
  }
  local_8c = false;
LAB_03447628:
  if (bVar5) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(lVar14 + 0xdf) & 1;
  }
  local_8b = local_8c;
  do {
    if (!bVar5) {
      uVar16 = 0x3f800000;
      if (plVar11 != (long *)0x0) {
        local_74 = (undefined4)plVar11[2];
        uVar16 = FUN_03447dcc(*(undefined4 *)(lVar13 + 0x24),plVar11,&local_74);
        *(undefined4 *)(plVar11 + 2) = local_74;
        *(undefined4 *)(lVar13 + 0x30) = uVar16;
      }
      if (plVar12 != (long *)0x0) {
        uVar17 = uVar16;
        if (plVar12 != plVar11) {
          local_74 = (undefined4)plVar12[2];
          uVar17 = FUN_03447dcc(*(undefined4 *)(lVar13 + 0x24),plVar12,&local_74);
          *(undefined4 *)(plVar12 + 2) = local_74;
        }
        *(undefined4 *)(lVar13 + 0x34) = uVar17;
      }
      if (plVar8 != (long *)0x0) {
        if (plVar8 != plVar11) {
          local_74 = (undefined4)plVar8[2];
          uVar16 = FUN_03447dcc(*(undefined4 *)(lVar13 + 0x24),plVar8,&local_74);
          *(undefined4 *)(plVar8 + 2) = local_74;
        }
        *(undefined4 *)(lVar13 + 0x38) = uVar16;
      }
      if (bVar2 != 0) {
        fVar18 = *(float *)(lVar14 + 0x18);
        fVar19 = *(float *)(lVar13 + 0x28);
        if (fVar19 <= fVar18) {
          *(undefined4 *)(lVar13 + 0x68) = 0;
          fVar18 = 1.0;
        }
        else {
          fVar20 = 1.0;
          if (fVar19 < *(float *)(lVar14 + 0x1c)) {
            fVar20 = (fVar19 - fVar18) / (*(float *)(lVar14 + 0x1c) - fVar18);
          }
          fVar19 = fVar20 * *(float *)(param_1 + 0x130);
          fVar18 = 0.0;
          *(float *)(lVar13 + 0x68) = fVar20;
          if (-37.0 <= fVar19 * 0.05) {
            uVar7 = (uint)(fVar19 * 1393317.6 + 1.0653532e+09);
            fVar18 = (float)(uVar7 & 0x7fffff | 0x3f800000);
            fVar18 = (fVar18 * (fVar18 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar7 & 0xff800000);
          }
        }
        *(float *)(lVar13 + 0x30) = *(float *)(lVar13 + 0x30) * fVar18;
      }
    }
    fVar19 = *(float *)(lVar13 + 0x48);
    fVar18 = *(float *)(lVar13 + 0x3c);
    if (*(float *)(lVar13 + 0x3c) <= fVar19) {
      fVar18 = fVar19;
    }
    if ((*(char *)((ulong)&local_78 | (ulong)(fVar18 == fVar19)) != '\0') && (fVar18 != 0.0)) {
      lVar15 = *(long *)PTR_DAT_047e6f30 + (ulong)(uint)(&DAT_03cb53f8)[fVar18 == fVar19] * 0x48;
      local_74 = *(undefined4 *)(lVar15 + 0x18);
      fVar18 = (float)FUN_03447dcc(lVar15 + 8,&local_74);
      *(undefined4 *)(lVar15 + 0x18) = local_74;
      *(float *)(lVar13 + 0x30) = *(float *)(lVar13 + 0x30) * fVar18;
      *(float *)(lVar13 + 0x34) = *(float *)(lVar13 + 0x34) * fVar18;
      *(float *)(lVar13 + 0x38) = *(float *)(lVar13 + 0x38) * fVar18;
    }
    fVar19 = *(float *)(lVar13 + 0x44);
    fVar18 = *(float *)(lVar13 + 0x40);
    if (*(float *)(lVar13 + 0x40) <= fVar19) {
      fVar18 = fVar19;
    }
    if ((*(char *)((ulong)&local_8c | (ulong)(fVar18 == fVar19)) != '\0') && (fVar18 != 0.0)) {
      lVar15 = *(long *)PTR_DAT_047e6f30 +
               (ulong)*(uint *)((ulong)&local_88 | (ulong)(fVar18 == fVar19) << 2) * 0x48;
      local_74 = *(undefined4 *)(lVar15 + 0x18);
      fVar18 = (float)FUN_03447dcc(lVar15 + 8,&local_74);
      *(undefined4 *)(lVar15 + 0x18) = local_74;
      *(float *)(lVar13 + 0x30) = *(float *)(lVar13 + 0x30) * fVar18;
    }
    lVar13 = lVar13 + 0x78;
  } while (lVar13 != *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x78);
  return;
}


