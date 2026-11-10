/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081a4bc; name: FUN_0081a4bc
 */


undefined8 FUN_0081a4bc(long param_1,int *param_2)

{
  ushort uVar1;
  size_t __n;
  long *plVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  void *pvVar9;
  void *__dest;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  
  lVar13 = *(long *)(param_2 + 2);
  uVar16 = *(ulong *)(param_2 + 4);
  uVar14 = lVar13 + 2;
  uVar6 = *(ushort *)(param_1 + 8);
  iVar3 = *param_2;
  lVar12 = lVar13;
  if (uVar16 < uVar14) {
    uVar16 = uVar16 + (uVar16 >> 1);
    if (uVar16 <= uVar14) {
      uVar16 = uVar14;
    }
    pvVar9 = (void *)FUN_0049e7b0(PTR_FUN_047cba38,uVar16);
    memcpy(pvVar9,*(void **)(param_2 + 6),*(size_t *)(param_2 + 2));
    lVar12 = *(long *)(param_2 + 6);
    *(void **)(param_2 + 6) = pvVar9;
    if (lVar12 != 0) {
      FUN_0049e800(lVar12);
      FUN_0049e7e0(PTR_LAB_047cba48,lVar12);
    }
    lVar12 = *(long *)(param_2 + 2);
    *(ulong *)(param_2 + 4) = uVar16;
  }
  uVar1 = uVar6 >> 8 | uVar6 << 8;
  if (iVar3 != 0) {
    uVar1 = uVar6;
  }
  uVar16 = lVar13 + 4;
  *(ushort *)(*(long *)(param_2 + 6) + lVar12) = uVar1;
  *(ulong *)(param_2 + 2) = uVar14;
  uVar10 = *(ulong *)(param_2 + 4);
  uVar6 = *(ushort *)(param_1 + 10);
  iVar3 = *param_2;
  if (uVar10 < uVar16) {
    uVar10 = uVar10 + (uVar10 >> 1);
    if (uVar10 <= uVar16) {
      uVar10 = uVar16;
    }
    pvVar9 = (void *)FUN_0049e7b0(PTR_FUN_047cba38,uVar10);
    memcpy(pvVar9,*(void **)(param_2 + 6),*(size_t *)(param_2 + 2));
    lVar12 = *(long *)(param_2 + 6);
    *(void **)(param_2 + 6) = pvVar9;
    if (lVar12 != 0) {
      FUN_0049e800(lVar12);
      FUN_0049e7e0(PTR_LAB_047cba48,lVar12);
    }
    uVar14 = *(ulong *)(param_2 + 2);
    *(ulong *)(param_2 + 4) = uVar10;
  }
  uVar1 = uVar6 >> 8 | uVar6 << 8;
  if (iVar3 != 0) {
    uVar1 = uVar6;
  }
  *(ushort *)(*(long *)(param_2 + 6) + uVar14) = uVar1;
  *(ulong *)(param_2 + 2) = uVar16;
  bVar5 = *(byte *)(param_1 + 0x10);
  if ((bVar5 & 1) == 0) {
    if (bVar5 >> 1 == 0x10) goto LAB_0081a6b0;
  }
  else if (*(long *)(param_1 + 0x18) == 0x10) goto LAB_0081a6b0;
  uVar10 = *(ulong *)(param_2 + 4);
  uVar14 = lVar13 + 8;
  uVar4 = *(uint *)(param_1 + 0x40);
  iVar3 = *param_2;
  if (uVar10 < uVar14) {
    uVar10 = uVar10 + (uVar10 >> 1);
    if (uVar10 <= uVar14) {
      uVar10 = uVar14;
    }
    pvVar9 = (void *)FUN_0049e7b0(PTR_FUN_047cba38,uVar10);
    memcpy(pvVar9,*(void **)(param_2 + 6),*(size_t *)(param_2 + 2));
    lVar13 = *(long *)(param_2 + 6);
    *(void **)(param_2 + 6) = pvVar9;
    if (lVar13 != 0) {
      FUN_0049e800(lVar13);
      FUN_0049e7e0(PTR_LAB_047cba48,lVar13);
    }
    uVar16 = *(ulong *)(param_2 + 2);
    *(ulong *)(param_2 + 4) = uVar10;
  }
  uVar7 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  if (iVar3 != 0) {
    uVar7 = uVar4;
  }
  *(uint *)(*(long *)(param_2 + 6) + uVar16) = uVar7;
  *(ulong *)(param_2 + 2) = uVar14;
  bVar5 = *(byte *)(param_1 + 0x10);
  uVar16 = uVar14;
LAB_0081a6b0:
  pvVar9 = *(void **)(param_1 + 0x20);
  __n = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x18);
  }
  uVar10 = *(ulong *)(param_2 + 4);
  uVar14 = uVar16 + __n;
  if (uVar10 < uVar14) {
    uVar10 = uVar10 + (uVar10 >> 1);
    if (uVar10 <= uVar14) {
      uVar10 = uVar14;
    }
    __dest = (void *)FUN_0049e7b0(PTR_FUN_047cba38,uVar10);
    memcpy(__dest,*(void **)(param_2 + 6),*(size_t *)(param_2 + 2));
    lVar13 = *(long *)(param_2 + 6);
    *(void **)(param_2 + 6) = __dest;
    if (lVar13 != 0) {
      FUN_0049e800(lVar13);
      FUN_0049e7e0(PTR_LAB_047cba48,lVar13);
    }
    uVar16 = *(ulong *)(param_2 + 2);
    *(ulong *)(param_2 + 4) = uVar10;
  }
  if ((bVar5 & 1) == 0) {
    pvVar9 = (void *)(param_1 + 0x11);
  }
  memcpy((void *)(*(long *)(param_2 + 6) + uVar16),pvVar9,__n);
  *(ulong *)(param_2 + 2) = uVar14;
  puVar8 = PTR_FUN_047cba38;
  plVar2 = *(long **)(param_1 + 0x30);
  if (*(long **)(param_1 + 0x28) != plVar2) {
    plVar15 = *(long **)(param_1 + 0x28);
    while( true ) {
      uVar16 = uVar14 + 2;
      uVar10 = *(ulong *)(param_2 + 4);
      uVar6 = *(ushort *)(*plVar15 + 8);
      iVar3 = *param_2;
      uVar11 = uVar14;
      if (uVar10 < uVar16) {
        uVar10 = uVar10 + (uVar10 >> 1);
        if (uVar10 <= uVar16) {
          uVar10 = uVar16;
        }
        pvVar9 = (void *)FUN_0049e7b0(puVar8,uVar10);
        memcpy(pvVar9,*(void **)(param_2 + 6),*(size_t *)(param_2 + 2));
        lVar13 = *(long *)(param_2 + 6);
        *(void **)(param_2 + 6) = pvVar9;
        if (lVar13 != 0) {
          FUN_0049e800(lVar13);
          FUN_0049e7e0(PTR_LAB_047cba48,lVar13);
        }
        uVar11 = *(ulong *)(param_2 + 2);
        *(ulong *)(param_2 + 4) = uVar10;
      }
      uVar1 = uVar6 >> 8 | uVar6 << 8;
      if (iVar3 != 0) {
        uVar1 = uVar6;
      }
      *(ushort *)(*(long *)(param_2 + 6) + uVar11) = uVar1;
      *(ulong *)(param_2 + 2) = uVar16;
      uVar6 = *(ushort *)(*plVar15 + 10);
      uVar10 = *(ulong *)(param_2 + 4);
      iVar3 = *param_2;
      uVar14 = uVar14 + 4;
      if (uVar10 < uVar14) {
        uVar10 = uVar10 + (uVar10 >> 1);
        if (uVar10 <= uVar14) {
          uVar10 = uVar14;
        }
        pvVar9 = (void *)FUN_0049e7b0(puVar8,uVar10);
        memcpy(pvVar9,*(void **)(param_2 + 6),*(size_t *)(param_2 + 2));
        lVar13 = *(long *)(param_2 + 6);
        *(void **)(param_2 + 6) = pvVar9;
        if (lVar13 != 0) {
          FUN_0049e800(lVar13);
          FUN_0049e7e0(PTR_LAB_047cba48,lVar13);
        }
        uVar16 = *(ulong *)(param_2 + 2);
        *(ulong *)(param_2 + 4) = uVar10;
      }
      uVar1 = uVar6 >> 8 | uVar6 << 8;
      if (iVar3 != 0) {
        uVar1 = uVar6;
      }
      *(ushort *)(*(long *)(param_2 + 6) + uVar16) = uVar1;
      *(ulong *)(param_2 + 2) = uVar14;
      uVar14 = (**(code **)(*(long *)*plVar15 + 0x28))((long *)*plVar15,param_2);
      if ((uVar14 & 1) == 0) {
        return 0;
      }
      if (plVar2 + -1 == plVar15) break;
      uVar14 = *(ulong *)(param_2 + 2);
      plVar15 = plVar15 + 1;
    }
  }
  return 1;
}


