/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002db27c; name: FUN_002db27c
 */


uint FUN_002db27c(long param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  
  uVar11 = (ulong)param_2;
  uVar6 = FUN_002db578();
  iVar5 = (int)uVar6;
  if (iVar5 == 0) {
    if ((*(char *)(param_1 + 0x48) == '\0') &&
       (uVar12 = *(uint *)(param_1 + 0x68), (int)uVar12 < *(int *)(param_1 + 0x6c))) {
      uVar2 = *(uint *)(param_1 + 0x60);
      if ((int)uVar2 <= (int)uVar12) {
        uVar3 = 8;
        if (uVar2 != 0) {
          uVar3 = uVar2;
        }
        do {
          uVar2 = uVar3;
          uVar3 = uVar2 << 1;
        } while ((int)uVar2 <= (int)uVar12);
        pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                      -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar2 << 3);
        if (*(void **)(param_1 + 0x58) != (void *)0x0) {
          memmove(pvVar8,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
        }
        uVar12 = uVar2 - *(int *)(param_1 + 0x68);
        memset((void *)((long)pvVar8 + (long)*(int *)(param_1 + 0x68) * 8),0,
               -(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3);
        lVar9 = *(long *)(param_1 + 0x58);
        *(void **)(param_1 + 0x58) = pvVar8;
        if (lVar9 != 0) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
        uVar12 = *(uint *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x60) = uVar2;
      }
      *(uint *)(param_1 + 0x68) = uVar12 + 1;
      if ((int)uVar12 < 0) {
        return 0;
      }
      FUN_002d0308(*(long *)(param_1 + 0x58) + (ulong)uVar12 * 8,uVar11,param_3);
      return uVar12;
    }
    goto LAB_002db4a0;
  }
  iVar13 = (int)(uVar6 >> 0x20);
  if (iVar13 == 0) {
LAB_002db2cc:
    uVar12 = (uint)uVar11;
    uVar7 = FUN_002db014(param_1,uVar11);
  }
  else {
    if ((uVar6 & 0x100000000) == 0) {
      uVar11 = (ulong)(*(uint *)(*(long *)(param_1 + 0x58) + (long)iVar5 * 8) >> 4);
      goto LAB_002db2cc;
    }
    uVar12 = *(uint *)(*(long *)(param_1 + 0x58) + (long)iVar5 * 8 + 4);
    uVar11 = (ulong)uVar12;
    uVar7 = FUN_002db014(param_1,uVar11);
  }
  if ((uVar7 & 1) != 0) {
    if ((*(char *)(param_1 + 0x48) != '\0') ||
       (uVar2 = *(uint *)(param_1 + 0x68), *(int *)(param_1 + 0x6c) <= (int)uVar2)) {
LAB_002db4a0:
      *(undefined1 *)(param_1 + 0x48) = 1;
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 0x60);
    if ((int)uVar3 <= (int)uVar2) {
      uVar4 = 8;
      if (uVar3 != 0) {
        uVar4 = uVar3;
      }
      do {
        uVar3 = uVar4;
        uVar4 = uVar3 << 1;
      } while ((int)uVar3 <= (int)uVar2);
      pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,
                                    -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3
                                   );
      if (*(void **)(param_1 + 0x58) != (void *)0x0) {
        memmove(pvVar8,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
      }
      uVar2 = uVar3 - *(int *)(param_1 + 0x68);
      memset((void *)((long)pvVar8 + (long)*(int *)(param_1 + 0x68) * 8),0,
             -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
      lVar9 = *(long *)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = pvVar8;
      if (lVar9 != 0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
      uVar2 = *(uint *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x60) = uVar3;
    }
    uVar11 = (ulong)uVar2;
    *(uint *)(param_1 + 0x68) = uVar2 + 1;
    if ((int)uVar2 < 0) {
      return 0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 0x58) + (long)(int)uVar12 * 8);
    FUN_002d031c(*(long *)(param_1 + 0x58) + uVar11 * 8,(char)puVar1[1],
                 *(undefined1 *)((long)puVar1 + 5),*(ushort *)((long)puVar1 + 6) & 1,*puVar1 >> 4);
    if (iVar13 == 0) {
      param_2 = uVar2;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x58);
      if ((uVar6 & 0x100000000) == 0) {
        lVar10 = (long)iVar5 * 8;
        uVar12 = *(uint *)(lVar9 + lVar10);
        *(uint *)(lVar9 + lVar10) = uVar12 & 8 | uVar2 << 4 | uVar12 & 7;
      }
      else {
        *(uint *)(lVar9 + (long)iVar5 * 8 + 4) = uVar2;
      }
    }
  }
  lVar9 = *(long *)(param_1 + 0x58);
  puVar1 = (uint *)(lVar9 + (long)param_3 * 8);
  uVar12 = *puVar1;
  uVar6 = FUN_002db014(param_1,param_3);
  if ((uVar6 & 1) == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    lVar9 = *(long *)(param_1 + 0x58);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  iVar5 = FUN_002db27c(param_1,*(uint *)(lVar9 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 |
                                                 uVar11 << 3)) >> 4,uVar12 >> 4);
  if (iVar5 == 0) {
    return 0;
  }
  lVar9 = (long)(int)uVar11 * 8;
  uVar12 = *(uint *)(*(long *)(param_1 + 0x58) + lVar9);
  *(uint *)(*(long *)(param_1 + 0x58) + lVar9) = uVar12 & 8 | iVar5 << 4 | uVar12 & 7;
  return param_2;
}


