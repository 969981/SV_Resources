/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03094834; name: FUN_03094834
 */


long * FUN_03094834(long *param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    lVar9 = *param_2;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < (int)uVar1) {
      FUN_03094bb0(param_1,PTR_PTR_047d1a50,(long)(int)uVar1);
    }
    puVar2 = PTR_PTR_047d1a50;
    uVar3 = *(uint *)(param_1 + 1);
    if ((int)uVar1 < (int)uVar3) {
      lVar5 = (long)(int)uVar3 * -0x38 + (long)(int)uVar1 * 0x38;
      puVar6 = (undefined4 *)(*param_1 + (long)(int)uVar3 * 0x38 + -0x18);
      do {
        puVar6[4] = 0;
        if ((-1 < (int)puVar6[5]) && (*(long *)(puVar6 + 2) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x20))
                    (puVar2,*(long *)(puVar6 + 2),(ulong)(uint)puVar6[5] << 2);
        }
        *(undefined8 *)(puVar6 + 2) = 0;
        puVar6[5] = 0x80000000;
        *puVar6 = 0;
        if ((-1 < (int)puVar6[1]) && (*(long *)(puVar6 + -2) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x20))
                    (puVar2,*(long *)(puVar6 + -2),(ulong)(uint)puVar6[1] << 2);
        }
        *(undefined8 *)(puVar6 + -2) = 0;
        puVar6[1] = 0x80000000;
        puVar6[-4] = 0;
        if ((-1 < (int)puVar6[-3]) && (*(long *)(puVar6 + -6) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x20))
                    (puVar2,*(long *)(puVar6 + -6),(ulong)(uint)puVar6[-3] * 0x14);
        }
        *(undefined8 *)(puVar6 + -6) = 0;
        lVar5 = lVar5 + 0x38;
        puVar6[-3] = 0x80000000;
        puVar6 = puVar6 + -0xe;
      } while (lVar5 != 0);
      uVar3 = *(uint *)(param_1 + 1);
    }
    puVar2 = PTR_PTR_047d1a50;
    lVar5 = *param_1;
    if ((int)uVar1 <= (int)uVar3) {
      uVar3 = uVar1;
    }
    if ((lVar5 != lVar9) && (0 < (int)uVar3)) {
      lVar10 = 0;
      do {
        puVar6 = (undefined4 *)(lVar9 + lVar10);
        puVar8 = (undefined4 *)(lVar5 + lVar10);
        *puVar8 = *puVar6;
        iVar4 = puVar6[4];
        pvVar7 = *(void **)(puVar6 + 2);
        if ((int)(puVar8[5] & 0x7fffffff) < iVar4) {
          FUN_0308f434(puVar8 + 2,puVar2,(long)iVar4);
        }
        memcpy(*(void **)(puVar8 + 2),pvVar7,(long)iVar4 * 0x14);
        puVar8[4] = iVar4;
        iVar4 = puVar6[8];
        pvVar7 = *(void **)(puVar6 + 6);
        if ((int)(puVar8[9] & 0x7fffffff) < iVar4) {
          FUN_02f5f190(puVar8 + 6,puVar2,(long)iVar4);
        }
        memcpy(*(void **)(puVar8 + 6),pvVar7,(long)iVar4 << 2);
        puVar8[8] = iVar4;
        iVar4 = puVar6[0xc];
        pvVar7 = *(void **)(puVar6 + 10);
        if ((int)(puVar8[0xd] & 0x7fffffff) < iVar4) {
          FUN_03094eb4(puVar8 + 10,puVar2,(long)iVar4);
        }
        memcpy(*(void **)(puVar8 + 10),pvVar7,(long)iVar4 << 2);
        lVar10 = lVar10 + 0x38;
        puVar8[0xc] = iVar4;
      } while ((ulong)uVar3 * 0x38 != lVar10);
      lVar5 = *param_1;
    }
    iVar4 = uVar1 - uVar3;
    if (0 < iVar4) {
      puVar6 = (undefined4 *)(lVar9 + (long)(int)uVar3 * 0x38);
      puVar8 = (undefined4 *)(lVar5 + (long)(int)uVar3 * 0x38);
      do {
        *puVar8 = *puVar6;
        FUN_03094f60(puVar8 + 2,puVar6 + 2);
        iVar4 = iVar4 + -1;
        puVar6 = puVar6 + 0xe;
        puVar8 = puVar8 + 0xe;
      } while (iVar4 != 0);
    }
    lVar9 = param_1[2];
    *(uint *)(param_1 + 1) = uVar1;
    if ((lVar9 != 0) && (*(int *)(lVar9 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar9,0);
      param_1[2] = (long)&DAT_03d7702c;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    if (*(int *)(param_2[2] + 4) == -2) {
      param_1[2] = (long)&DAT_03d7702c;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    else {
      *(int *)(param_1 + 3) = (int)param_2[3];
      pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(long)(int)param_2[3] * 8 + 8);
      param_1[2] = (long)pvVar7;
      memcpy(pvVar7,(void *)param_2[2],(long)(int)param_2[3] * 8 + 8);
    }
  }
  return param_1;
}


