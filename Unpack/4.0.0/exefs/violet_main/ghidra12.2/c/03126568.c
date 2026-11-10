/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03126568; name: FUN_03126568
 */


long FUN_03126568(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  void *__src;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  undefined4 *puVar10;
  void *pvVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  
  if (param_2 != param_1) {
    uVar4 = *(uint *)(param_2 + 0x20);
    lVar14 = *(long *)(param_2 + 0x18);
    plVar1 = (long *)(param_1 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < (int)uVar4) {
      FUN_031268d8(plVar1,PTR_PTR_047d1a50,(long)(int)uVar4);
    }
    puVar7 = PTR_PTR_047d1a50;
    uVar8 = *(uint *)(param_1 + 0x20);
    if ((int)uVar4 < (int)uVar8) {
      lVar9 = (long)(int)uVar4 * 0x90 + (long)(int)uVar8 * -0x90;
      puVar10 = (undefined4 *)(*plVar1 + (long)(int)uVar8 * 0x90 + -0x28);
      do {
        *puVar10 = 0;
        if ((-1 < (int)puVar10[1]) && (*(long *)(puVar10 + -2) != 0)) {
          (**(code **)(*(long *)puVar7 + 0x20))
                    (puVar7,*(long *)(puVar10 + -2),(ulong)(uint)puVar10[1] << 2);
        }
        *(undefined8 *)(puVar10 + -2) = 0;
        puVar10[1] = 0x80000000;
        puVar10[-8] = 0;
        if ((-1 < (int)puVar10[-7]) && (*(long *)(puVar10 + -10) != 0)) {
          (**(code **)(*(long *)puVar7 + 0x20))
                    (puVar7,*(long *)(puVar10 + -10),(ulong)(uint)puVar10[-7] << 2);
        }
        *(undefined8 *)(puVar10 + -10) = 0;
        lVar9 = lVar9 + 0x90;
        puVar10[-7] = 0x80000000;
        puVar10 = puVar10 + -0x24;
      } while (lVar9 != 0);
      uVar8 = *(uint *)(param_1 + 0x20);
    }
    puVar7 = PTR_PTR_047d1a50;
    lVar9 = *plVar1;
    if ((int)uVar4 <= (int)uVar8) {
      uVar8 = uVar4;
    }
    if ((lVar9 != lVar14) && (0 < (int)uVar8)) {
      lVar13 = 0;
      do {
        puVar2 = (undefined8 *)(lVar14 + lVar13);
        uVar16 = *puVar2;
        puVar3 = (undefined8 *)(lVar9 + lVar13);
        puVar3[1] = puVar2[1];
        *puVar3 = uVar16;
        uVar16 = puVar2[2];
        puVar3[3] = puVar2[3];
        puVar3[2] = uVar16;
        uVar16 = puVar2[4];
        puVar3[5] = puVar2[5];
        puVar3[4] = uVar16;
        puVar3[6] = puVar2[6];
        *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(puVar2 + 7);
        *(undefined4 *)((long)puVar3 + 0x3c) = *(undefined4 *)((long)puVar2 + 0x3c);
        iVar15 = *(int *)(puVar2 + 9);
        pvVar11 = (void *)puVar2[8];
        if ((int)(*(uint *)((long)puVar3 + 0x4c) & 0x7fffffff) < iVar15) {
          FUN_02f5f190(puVar3 + 8,puVar7,(long)iVar15);
        }
        memcpy((void *)puVar3[8],pvVar11,(long)iVar15 << 2);
        *(int *)(puVar3 + 9) = iVar15;
        iVar15 = *(int *)(puVar2 + 0xd);
        pvVar11 = (void *)puVar2[0xc];
        if ((int)(*(uint *)((long)puVar3 + 0x6c) & 0x7fffffff) < iVar15) {
          FUN_02f5f190(puVar3 + 0xc,puVar7,(long)iVar15);
        }
        memcpy((void *)puVar3[0xc],pvVar11,(long)iVar15 << 2);
        *(int *)(puVar3 + 0xd) = iVar15;
        *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar2 + 0x10);
        *(undefined2 *)((long)puVar3 + 0x82) = *(undefined2 *)((long)puVar2 + 0x82);
        lVar13 = lVar13 + 0x90;
        *(undefined1 *)((long)puVar3 + 0x84) = *(undefined1 *)((long)puVar2 + 0x84);
      } while ((ulong)uVar8 * 0x90 != lVar13);
      lVar9 = *plVar1;
    }
    iVar15 = uVar4 - uVar8;
    if (0 < iVar15) {
      do {
        __dest = (void *)(lVar9 + (long)(int)uVar8 * 0x90);
        __src = (void *)(lVar14 + (long)(int)uVar8 * 0x90);
        memcpy(__dest,__src,0x38);
        *(undefined4 *)((long)__dest + 0x38) = *(undefined4 *)((long)__src + 0x38);
        uVar5 = *(undefined4 *)((long)__src + 0x3c);
        pvVar11 = (void *)((long)__dest + 0x50);
        *(void **)((long)__dest + 0x40) = pvVar11;
        *(undefined4 *)((long)__dest + 0x3c) = uVar5;
        *(undefined4 *)((long)__dest + 0x48) = 0;
        *(undefined4 *)((long)__dest + 0x4c) = 0x80000004;
        if (lVar9 != lVar14) {
          iVar6 = *(int *)((long)__src + 0x48);
          pvVar12 = *(void **)((long)__src + 0x40);
          if (4 < iVar6) {
            FUN_02f5f190((long)__dest + 0x40,PTR_PTR_047d1a50,(long)iVar6);
            pvVar11 = *(void **)((long)__dest + 0x40);
          }
          memcpy(pvVar11,pvVar12,(long)iVar6 << 2);
          *(int *)((long)__dest + 0x48) = iVar6;
        }
        pvVar11 = (void *)((long)__dest + 0x70);
        *(void **)((long)__dest + 0x60) = pvVar11;
        *(undefined4 *)((long)__dest + 0x68) = 0;
        *(undefined4 *)((long)__dest + 0x6c) = 0x80000004;
        if (__dest != __src) {
          iVar6 = *(int *)((long)__src + 0x68);
          pvVar12 = *(void **)((long)__src + 0x60);
          if (4 < iVar6) {
            FUN_02f5f190((long)__dest + 0x60,PTR_PTR_047d1a50,(long)iVar6);
            pvVar11 = *(void **)((long)__dest + 0x60);
          }
          memcpy(pvVar11,pvVar12,(long)iVar6 << 2);
          *(int *)((long)__dest + 0x68) = iVar6;
        }
        uVar5 = *(undefined4 *)((long)__src + 0x80);
        iVar15 = iVar15 + -1;
        lVar9 = lVar9 + 0x90;
        lVar14 = lVar14 + 0x90;
        *(undefined1 *)((long)__dest + 0x84) = *(undefined1 *)((long)__src + 0x84);
        *(undefined4 *)((long)__dest + 0x80) = uVar5;
      } while (iVar15 != 0);
    }
    *(uint *)(param_1 + 0x20) = uVar4;
  }
  return param_1;
}


