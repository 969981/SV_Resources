/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00162bb0; name: FUN_00162bb0
 */


void FUN_00162bb0(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  void *__s;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint *puVar13;
  size_t __n;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  
  iVar8 = (int)*(long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar14 = (uint *)0x0;
  }
  else {
    puVar14 = *(uint **)(param_1 + 8);
  }
  if (((int)param_2 < 1) || (iVar15 = iVar8 + -1, iVar15 < 5)) {
    uVar6 = *(ulong *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    lVar9 = 2;
    if (uVar6 < 3) {
      if ((*(ulong *)(param_1 + 0x58) < 2) && (lVar9 = FUN_001645b0(param_1 + 0x50,2), lVar9 != 0))
      {
        (**(code **)PTR_PTR_047cb898)();
      }
      lVar9 = (2 - uVar6) + *(long *)(param_1 + 0x60);
    }
    *(long *)(param_1 + 0x60) = lVar9;
    **(undefined4 **)(param_1 + 0x50) = 0;
    lVar9 = 1;
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x60);
    plVar2 = (long *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x68) = 0x20 - param_2;
    iVar4 = 1 << (ulong)(param_2 & 0x1f);
    uVar6 = (ulong)(iVar4 + 1);
    if (uVar6 < uVar7) {
      *(ulong *)(param_1 + 0x60) = uVar6;
      lVar10 = *plVar2;
    }
    else {
      if ((*(ulong *)(param_1 + 0x58) < uVar6) && (lVar9 = FUN_001645b0(plVar2), lVar9 != 0)) {
        (**(code **)PTR_PTR_047cb898)();
      }
      lVar9 = *(long *)(param_1 + 0x60) + (uVar6 - uVar7);
      *(long *)(param_1 + 0x60) = lVar9;
      if (lVar9 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar2;
      }
    }
    if (param_2 == 0x1f) {
      lVar9 = -0x80000000;
    }
    else {
      lVar11 = 0;
      iVar12 = 0;
      lVar9 = (long)iVar4;
      if (0 < iVar15) goto LAB_00162d2c;
LAB_00162d14:
      *(int *)(lVar10 + lVar11 * 4) = iVar12;
      lVar11 = lVar11 + 1;
      if (lVar11 < lVar9) {
        if (iVar12 < iVar15) {
LAB_00162d2c:
          puVar13 = puVar14 + (long)iVar12 * 2;
          do {
            if ((uint)((int)lVar11 << (ulong)(0x20 - param_2 & 0x1f)) <= *puVar13) break;
            iVar12 = iVar12 + 1;
            puVar13 = puVar13 + 2;
          } while (iVar15 != iVar12);
        }
        goto LAB_00162d14;
      }
    }
  }
  uVar16 = iVar8 - 1;
  *(uint *)(*(long *)(param_1 + 0x50) + lVar9 * 4) = uVar16;
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)PTR_PTR_047cb898)();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (0x1000 < (int)uVar16) {
    uVar1 = (int)LZCOUNT(uVar16) + 7;
    uVar5 = 0x10 << (ulong)(0x19U - (int)LZCOUNT(uVar16) & 0x1f);
    __n = (ulong)uVar5 << 2;
    sVar3 = __n;
    if (uVar5 < 0x11) {
      sVar3 = 0x40;
    }
    __s = (void *)(**(code **)PTR_PTR_047cb890)(sVar3,0x40);
    if (__s == (void *)0x0) {
      FUN_0015ed40(sVar3);
    }
    *(void **)(param_1 + 0x28) = __s;
    *(uint *)(param_1 + 0x20) = uVar1;
    memset(__s,0,__n);
    uVar6 = (ulong)uVar16;
    do {
      uVar6 = uVar6 - 1;
      uVar5 = *puVar14 * -0x24d264a7;
      lVar9 = *(long *)(param_1 + 0x28) + (ulong)((*puVar14 >> (ulong)(uVar1 & 0x1f)) << 4) * 4;
      lVar10 = (ulong)(uVar5 >> 5 & 0xf) * 4;
      uVar16 = (uVar5 >> 0x17) + uVar5;
      *(uint *)(lVar9 + lVar10) = 1 << (ulong)(uVar5 & 0x1f) | *(uint *)(lVar9 + lVar10);
      lVar11 = (ulong)(uVar16 >> 5 & 0xf) * 4;
      uVar5 = uVar16 + (uVar5 >> 0x17);
      lVar10 = (ulong)(uVar5 >> 5 & 0xf) * 4;
      *(uint *)(lVar9 + lVar11) = 1 << (ulong)(uVar16 & 0x1f) | *(uint *)(lVar9 + lVar11);
      *(uint *)(lVar9 + lVar10) = 1 << (ulong)(uVar5 & 0x1f) | *(uint *)(lVar9 + lVar10);
      puVar14 = puVar14 + 2;
    } while (uVar6 != 0);
  }
  return;
}


