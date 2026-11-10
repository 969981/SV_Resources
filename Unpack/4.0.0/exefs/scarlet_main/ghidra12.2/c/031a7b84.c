/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a7b84; name: FUN_031a7b84
 */


void FUN_031a7b84(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  void *__dest;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  size_t __n;
  void *__src;
  long *plVar13;
  undefined8 *puVar14;
  size_t local_28;
  
  uVar2 = *param_2;
  uVar6 = param_2[2];
  uVar3 = *(undefined4 *)(param_2 + 3);
  param_1[1] = param_2[1];
  param_1[2] = uVar6;
  puVar7 = param_1 + 6;
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  plVar13 = param_1 + 4;
  *plVar13 = (long)puVar7;
  param_1[5] = 0x8000001000000000;
  if (param_1 != param_2) {
    uVar4 = *(uint *)(param_2 + 5);
    puVar14 = (undefined8 *)param_2[4];
    if ((int)uVar4 < 0x11) {
      uVar10 = 0;
    }
    else {
      FUN_031a84a4(plVar13,PTR_PTR_047d1a50,uVar4);
      uVar10 = *(uint *)(param_1 + 5);
      puVar7 = (undefined8 *)param_1[4];
    }
    uVar1 = uVar10;
    if ((int)uVar4 <= (int)uVar10) {
      uVar1 = uVar4;
    }
    if ((puVar7 != puVar14) && (0 < (int)uVar1)) {
      if (uVar1 == 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        puVar8 = puVar14 + 2;
        puVar11 = puVar7 + 2;
        do {
          uVar2 = puVar8[-1];
          uVar12 = uVar12 + 2;
          puVar11[-2] = puVar8[-2];
          puVar11[-1] = uVar2;
          uVar2 = puVar8[1];
          *puVar11 = *puVar8;
          puVar11[1] = uVar2;
          puVar8 = puVar8 + 4;
          puVar11 = puVar11 + 4;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar12);
      }
      if ((uVar1 & 1) != 0) {
        uVar2 = (puVar14 + uVar12 * 2)[1];
        puVar7[uVar12 * 2] = puVar14[uVar12 * 2];
        (puVar7 + uVar12 * 2)[1] = uVar2;
      }
      puVar7 = (undefined8 *)*plVar13;
    }
    if ((int)uVar10 < (int)uVar4) {
      puVar14 = puVar14 + (long)(int)uVar1 * 2;
      puVar7 = puVar7 + (long)(int)uVar1 * 2;
      if (uVar4 != uVar1 + 1) {
        iVar9 = -(uVar4 - uVar1 & 0xfffffffe);
        puVar8 = puVar7;
        puVar11 = puVar14;
        do {
          uVar2 = puVar11[1];
          puVar14 = puVar11 + 4;
          *puVar8 = *puVar11;
          puVar8[1] = uVar2;
          puVar7 = puVar8 + 4;
          uVar2 = puVar11[3];
          iVar9 = iVar9 + 2;
          puVar8[2] = puVar11[2];
          puVar8[3] = uVar2;
          puVar8 = puVar7;
          puVar11 = puVar14;
        } while (iVar9 != 0);
      }
      if ((uVar4 - uVar1 & 1) != 0) {
        uVar2 = puVar14[1];
        *puVar7 = *puVar14;
        puVar7[1] = uVar2;
      }
    }
    *(uint *)(param_1 + 5) = uVar4;
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar5 = PTR_DAT_047d1a08;
  __src = (void *)param_2[0x26];
  if (__src != (void *)0x0) {
    __n = param_2[0x27];
    if (__n == 0) {
      __dest = (void *)0x0;
    }
    else {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,0,0);
      local_28 = __n;
      __dest = (void *)(**(code **)puVar5)(0,&local_28,0);
      param_1[0x26] = __dest;
      param_1[0x28] = __n;
    }
    memcpy(__dest,__src,__n);
    param_1[0x27] = __n;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}


