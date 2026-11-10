/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346db58; name: FUN_0346db58
 */


ulong FUN_0346db58(undefined4 param_1,long *param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *__dest;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  *(undefined4 *)(param_2 + 0x30) = param_1;
  if ((*(byte *)(param_2 + 0x33) >> 6 & 1) == 0) {
    FUN_034b10d8(param_2[0x2e],param_2 + 2,param_2 + 0x20,param_2 + 0x25);
    if ((((*(byte *)(param_2 + 0x22) >> 3 & 1) != 0) &&
        ((ushort)((*(ushort *)((long)param_2 + 0x13c) & 7) - 1) < 2)) && (param_2[0x2d] == 0)) {
      lVar11 = param_2[0x2e];
      do {
        lVar9 = lVar11;
        lVar11 = *(long *)(lVar9 + 0x98);
      } while (*(long *)(lVar9 + 0x98) != 0 && (*(ulong *)(lVar9 + 0xb8) & 0x20020000ffe) == 0);
      if (*(long *)(lVar9 + 0x88) == 0) {
        __dest = (undefined8 *)0x0;
      }
      else {
        __dest = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x38);
        if (__dest != (undefined8 *)0x0) {
          __dest[5] = 0;
          __dest[6] = 0;
          *__dest = 0;
          __dest[3] = 0;
          __dest[4] = 0;
          __dest[1] = 0;
          __dest[2] = 0;
          memcpy(__dest,*(void **)(lVar9 + 0x88),0x38);
        }
      }
      param_2[0x2d] = (long)__dest;
    }
  }
  else {
    param_2[0x20] = 0x3f8000003f000000;
    param_2[0x21] = 0x42c8000000000000;
    *(byte *)(param_2 + 0x22) = *(byte *)(param_2 + 0x22) & 0xf0;
  }
  lVar11 = param_2[0x28];
  if (lVar11 == 0) {
    uVar6 = *(uint *)((long)param_2 + 300);
    if (uVar6 != 0) {
      lVar11 = *(long *)PTR_DAT_047e6f28;
      pMVar1 = (MutexType *)(lVar11 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar8 = *(uint *)(lVar11 + 0x178);
      if (uVar8 != 0) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        for (lVar11 = *(long *)(*(long *)(lVar11 + 0x170) + (ulong)(uVar6 - uVar3 * uVar8) * 8);
            lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
          if (*(uint *)(lVar11 + 0x10) == uVar6) {
            *(int *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            param_2[0x28] = lVar11;
            goto LAB_0346dc70;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      param_2[0x28] = 0;
    }
  }
  else {
LAB_0346dc70:
    *(undefined4 *)(param_2 + 0x26) = *(undefined4 *)(lVar11 + 0x20);
    *(undefined4 *)((long)param_2 + 0x134) = *(undefined4 *)(lVar11 + 0x24);
    *(undefined4 *)(param_2 + 0x27) = *(undefined4 *)(lVar11 + 0x28);
    puVar4 = PTR_DAT_047e6fd8;
    if (((*(byte *)(param_2 + 0x33) >> 6 & 1) == 0) && (*(int *)(lVar11 + 0xe8) != 0)) {
      puVar10 = *(undefined4 **)(lVar11 + 0xe0);
      do {
        iVar2 = 0;
        if (puVar10[8] != 0) {
          iVar2 = puVar10[8] + -2;
        }
        uVar7 = FUN_034b5ad4(*(undefined8 *)puVar4,param_2,*puVar10,puVar10[1],puVar10[2],puVar10[3]
                             ,puVar10[4],puVar10[9],*(long *)(puVar10 + 6) + 0xc,iVar2,param_2 + 2,0
                             ,1);
        if ((int)uVar7 != 1) {
          return uVar7;
        }
        puVar10 = puVar10 + 0xc;
      } while (puVar10 !=
               (undefined4 *)(*(long *)(lVar11 + 0xe0) + (ulong)*(uint *)(lVar11 + 0xe8) * 0x30));
    }
  }
  if ((param_2[0x2d] != 0) && (param_2[0x1e] == 0)) {
    uVar6 = FUN_0346e2e0(param_2,param_3);
    if (uVar6 != 1) goto LAB_0346dd88;
    if (param_2[0x1e] != 0) {
      uVar6 = FUN_034b27d0(*(undefined8 *)PTR_DAT_047e7040,param_2[0x1e],param_2);
      if (uVar6 == 2) {
        param_2[0x1e] = 0;
      }
      else {
        (**(code **)(*param_2 + 0x68))(param_2,param_2[0x1e]);
      }
      goto LAB_0346dd88;
    }
  }
  uVar6 = 1;
LAB_0346dd88:
  if ((*(ushort *)(param_2 + 0x33) & 1) == 0) {
    (**(code **)(*param_2 + 0x58))(param_2,param_6);
  }
  else if ((*(ushort *)(param_2 + 0x33) >> 4 & 1) != 0) {
    (**(code **)(*param_2 + 0x60))(param_2);
  }
  if (-37.0 <= *(float *)(param_2 + 0xc) * 0.05) {
    uVar8 = (uint)(*(float *)(param_2 + 0xc) * 1393317.6 + 1.0653532e+09);
    fVar12 = (float)(uVar8 & 0x7fffff | 0x3f800000);
    fVar12 = (fVar12 * (fVar12 * 0.32518977 + 0.020805772) + 0.65304345) *
             (float)(uVar8 & 0xff800000);
  }
  else {
    fVar12 = 0.0;
  }
  fVar13 = *(float *)(param_2 + 0x19);
  fVar14 = *(float *)PTR_DAT_047e70f8;
  bVar5 = uVar6 == 1;
  *(bool *)param_7 = fVar13 * fVar12 <= fVar14;
  if (bVar5 && (param_4 & 1) == 0) {
    uVar6 = 1;
  }
  uVar7 = (ulong)uVar6;
  if ((bVar5 && (param_4 & 1) == 0) && (fVar13 * fVar12 <= fVar14)) {
    if ((*(byte *)(param_2 + 0x33) >> 6 & 1) == 0) {
      uVar7 = 3;
      *param_5 = 0x29;
    }
    else {
      uVar7 = 1;
    }
  }
  return uVar7;
}


