/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a7e98; name: FUN_031a7e98
 */


undefined8 * FUN_031a7e98(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  void *__dest;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *__src;
  ulong uVar14;
  long lVar15;
  ulong local_28;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar10 = param_2[2];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    param_1[1] = uVar3;
    param_1[2] = uVar10;
    *param_1 = uVar2;
    puVar6 = PTR_DAT_047d1a08;
    __src = (void *)param_2[0x26];
    __dest = (void *)param_1[0x26];
    if (__dest != __src) {
      uVar14 = param_2[0x27];
      if ((ulong)param_1[0x28] < uVar14) {
        if (*(char *)(param_1 + 0x29) == '\0') {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,__dest,0);
        }
        local_28 = uVar14;
        __dest = (void *)(**(code **)puVar6)(0,&local_28,0);
        param_1[0x26] = __dest;
        param_1[0x28] = uVar14;
      }
      memcpy(__dest,__src,uVar14);
      param_1[0x27] = uVar14;
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
    lVar15 = param_2[4];
    uVar4 = *(uint *)(param_2 + 5);
    if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) < (int)uVar4) {
      FUN_031a84a4(param_1 + 4,PTR_PTR_047d1a50,(long)(int)uVar4);
    }
    uVar5 = *(uint *)(param_1 + 5);
    lVar11 = param_1[4];
    uVar1 = uVar5;
    if ((int)uVar4 <= (int)uVar5) {
      uVar1 = uVar4;
    }
    if ((lVar11 != lVar15) && (0 < (int)uVar1)) {
      if (uVar1 == 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        puVar9 = (undefined8 *)(lVar15 + 0x10);
        puVar13 = (undefined8 *)(lVar11 + 0x10);
        do {
          uVar2 = puVar9[-1];
          uVar14 = uVar14 + 2;
          puVar13[-2] = puVar9[-2];
          puVar13[-1] = uVar2;
          uVar2 = puVar9[1];
          *puVar13 = *puVar9;
          puVar13[1] = uVar2;
          puVar9 = puVar9 + 4;
          puVar13 = puVar13 + 4;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar14);
      }
      if ((uVar1 & 1) != 0) {
        puVar9 = (undefined8 *)(lVar15 + uVar14 * 0x10);
        puVar13 = (undefined8 *)(lVar11 + uVar14 * 0x10);
        uVar2 = puVar9[1];
        *puVar13 = *puVar9;
        puVar13[1] = uVar2;
      }
      lVar11 = param_1[4];
    }
    if ((int)uVar5 < (int)uVar4) {
      puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 0x10);
      puVar13 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 0x10);
      if (uVar4 != uVar1 + 1) {
        iVar7 = -(uVar4 - uVar1 & 0xfffffffe);
        puVar8 = puVar9;
        puVar12 = puVar13;
        do {
          uVar2 = puVar8[1];
          puVar9 = puVar8 + 4;
          *puVar12 = *puVar8;
          puVar12[1] = uVar2;
          puVar13 = puVar12 + 4;
          uVar2 = puVar8[3];
          iVar7 = iVar7 + 2;
          puVar12[2] = puVar8[2];
          puVar12[3] = uVar2;
          puVar8 = puVar9;
          puVar12 = puVar13;
        } while (iVar7 != 0);
      }
      if ((uVar4 - uVar1 & 1) != 0) {
        uVar2 = puVar9[1];
        *puVar13 = *puVar9;
        puVar13[1] = uVar2;
      }
    }
    *(uint *)(param_1 + 5) = uVar4;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return param_1;
}


