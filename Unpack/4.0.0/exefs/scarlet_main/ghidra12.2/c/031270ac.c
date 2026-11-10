/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031270ac; name: FUN_031270ac
 */


long FUN_031270ac(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *__dest;
  void *__src;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  
  if (param_2 != param_1) {
    uVar5 = *(uint *)(param_2 + 0x20);
    lVar14 = *(long *)(param_2 + 0x18);
    plVar1 = (long *)(param_1 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < (int)uVar5) {
      FUN_03127434(plVar1,PTR_PTR_047d1a50,(long)(int)uVar5);
    }
    puVar7 = PTR_PTR_047d1a50;
    uVar8 = *(uint *)(param_1 + 0x20);
    if ((int)uVar5 < (int)uVar8) {
      lVar9 = *plVar1;
      lVar10 = (long)(int)uVar5 * 0x120;
      do {
        lVar2 = lVar9 + (long)(int)uVar8 * 0x120;
        *(undefined4 *)(lVar2 + -0x58) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + -0x54)) && (*(long *)(lVar2 + -0x60) != 0)) {
          (**(code **)(*(long *)puVar7 + 0x20))
                    (puVar7,*(long *)(lVar2 + -0x60),(ulong)*(uint *)(lVar2 + -0x54) << 2);
        }
        *(undefined8 *)(lVar2 + -0x60) = 0;
        *(undefined4 *)(lVar2 + -0x54) = 0x80000000;
        *(undefined4 *)(lVar2 + -0x78) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + -0x74)) && (*(long *)(lVar2 + -0x80) != 0)) {
          (**(code **)(*(long *)puVar7 + 0x20))
                    (puVar7,*(long *)(lVar2 + -0x80),(ulong)*(uint *)(lVar2 + -0x74) << 2);
        }
        lVar10 = lVar10 + 0x120;
        lVar9 = lVar9 + -0x120;
        *(undefined8 *)(lVar2 + -0x80) = 0;
        *(undefined4 *)(lVar2 + -0x74) = 0x80000000;
      } while ((long)(int)uVar8 * 0x120 != lVar10);
      uVar8 = *(uint *)(param_1 + 0x20);
    }
    puVar7 = PTR_PTR_047d1a50;
    lVar10 = *plVar1;
    if ((int)uVar5 <= (int)uVar8) {
      uVar8 = uVar5;
    }
    if ((lVar10 != lVar14) && (0 < (int)uVar8)) {
      lVar9 = 0;
      do {
        puVar3 = (undefined8 *)(lVar14 + lVar9);
        uVar15 = *puVar3;
        puVar4 = (undefined8 *)(lVar10 + lVar9);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar15;
        uVar15 = puVar3[2];
        puVar4[3] = puVar3[3];
        puVar4[2] = uVar15;
        uVar15 = puVar3[4];
        puVar4[5] = puVar3[5];
        puVar4[4] = uVar15;
        uVar15 = puVar3[6];
        puVar4[7] = puVar3[7];
        puVar4[6] = uVar15;
        uVar15 = puVar3[8];
        puVar4[9] = puVar3[9];
        puVar4[8] = uVar15;
        uVar15 = puVar3[10];
        puVar4[0xb] = puVar3[0xb];
        puVar4[10] = uVar15;
        uVar15 = puVar3[0xc];
        puVar4[0xd] = puVar3[0xd];
        puVar4[0xc] = uVar15;
        uVar15 = puVar3[0xe];
        puVar4[0xf] = puVar3[0xf];
        puVar4[0xe] = uVar15;
        uVar15 = puVar3[0x10];
        puVar4[0x11] = puVar3[0x11];
        puVar4[0x10] = uVar15;
        uVar15 = puVar3[0x12];
        puVar4[0x13] = puVar3[0x13];
        puVar4[0x12] = uVar15;
        iVar13 = *(int *)(puVar3 + 0x15);
        pvVar11 = (void *)puVar3[0x14];
        if ((int)(*(uint *)((long)puVar4 + 0xac) & 0x7fffffff) < iVar13) {
          FUN_02f5f190(puVar4 + 0x14,puVar7,(long)iVar13);
        }
        memcpy((void *)puVar4[0x14],pvVar11,(long)iVar13 << 2);
        *(int *)(puVar4 + 0x15) = iVar13;
        iVar13 = *(int *)(puVar3 + 0x19);
        pvVar11 = (void *)puVar3[0x18];
        if ((int)(*(uint *)((long)puVar4 + 0xcc) & 0x7fffffff) < iVar13) {
          FUN_02f5f190(puVar4 + 0x18,puVar7,(long)iVar13);
        }
        memcpy((void *)puVar4[0x18],pvVar11,(long)iVar13 << 2);
        *(int *)(puVar4 + 0x19) = iVar13;
        puVar4[0x1c] = puVar3[0x1c];
        uVar15 = puVar3[0x1e];
        lVar9 = lVar9 + 0x120;
        puVar4[0x1f] = puVar3[0x1f];
        puVar4[0x1e] = uVar15;
        uVar15 = puVar3[0x20];
        puVar4[0x21] = puVar3[0x21];
        puVar4[0x20] = uVar15;
        puVar4[0x22] = puVar3[0x22];
      } while ((ulong)uVar8 * 0x120 != lVar9);
      lVar10 = *plVar1;
    }
    iVar13 = uVar5 - uVar8;
    if (0 < iVar13) {
      do {
        __dest = (void *)(lVar10 + (long)(int)uVar8 * 0x120);
        __src = (void *)(lVar14 + (long)(int)uVar8 * 0x120);
        memcpy(__dest,__src,0xa0);
        pvVar11 = (void *)((long)__dest + 0xb0);
        *(void **)((long)__dest + 0xa0) = pvVar11;
        *(undefined4 *)((long)__dest + 0xa8) = 0;
        *(undefined4 *)((long)__dest + 0xac) = 0x80000004;
        if (lVar10 != lVar14) {
          iVar6 = *(int *)((long)__src + 0xa8);
          pvVar12 = *(void **)((long)__src + 0xa0);
          if (4 < iVar6) {
            FUN_02f5f190((long)__dest + 0xa0,PTR_PTR_047d1a50,(long)iVar6);
            pvVar11 = *(void **)((long)__dest + 0xa0);
          }
          memcpy(pvVar11,pvVar12,(long)iVar6 << 2);
          *(int *)((long)__dest + 0xa8) = iVar6;
        }
        pvVar11 = (void *)((long)__dest + 0xd0);
        *(void **)((long)__dest + 0xc0) = pvVar11;
        *(undefined4 *)((long)__dest + 200) = 0;
        *(undefined4 *)((long)__dest + 0xcc) = 0x80000004;
        if (__dest != __src) {
          iVar6 = *(int *)((long)__src + 200);
          pvVar12 = *(void **)((long)__src + 0xc0);
          if (4 < iVar6) {
            FUN_02f5f190((long)__dest + 0xc0,PTR_PTR_047d1a50,(long)iVar6);
            pvVar11 = *(void **)((long)__dest + 0xc0);
          }
          memcpy(pvVar11,pvVar12,(long)iVar6 << 2);
          *(int *)((long)__dest + 200) = iVar6;
        }
        memcpy((void *)((long)__dest + 0xe0),(void *)((long)__src + 0xe0),0x38);
        iVar13 = iVar13 + -1;
        lVar10 = lVar10 + 0x120;
        lVar14 = lVar14 + 0x120;
      } while (iVar13 != 0);
    }
    *(uint *)(param_1 + 0x20) = uVar5;
  }
  return param_1;
}


