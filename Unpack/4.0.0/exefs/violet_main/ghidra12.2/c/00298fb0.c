/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00298fb0; name: FUN_00298fb0
 */


undefined8 * FUN_00298fb0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  size_t sVar4;
  size_t __n;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  void *__dest;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar11 = param_2;
    if (param_2 == puVar1) {
      *(undefined8 *)((long)param_2 + 0x44) = 0;
      *(undefined8 *)((long)param_2 + 0x3c) = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_1[1] = (long)param_2 + 0x4c;
    }
    else {
      sVar4 = (long)puVar1 + (-0x4c - (long)param_2);
      puVar5 = (undefined8 *)((long)puVar1 + -0x4c);
      puVar6 = puVar1;
      if (puVar5 < puVar1) {
        do {
          uVar13 = *puVar5;
          puVar6[1] = puVar5[1];
          *puVar6 = uVar13;
          uVar14 = puVar5[3];
          uVar13 = puVar5[2];
          uVar16 = puVar5[5];
          uVar15 = puVar5[4];
          uVar18 = puVar5[7];
          uVar17 = puVar5[6];
          puVar2 = (undefined8 *)((long)puVar5 + 0x44);
          uVar19 = *(undefined8 *)((long)puVar5 + 0x3c);
          puVar5 = (undefined8 *)((long)puVar5 + 0x4c);
          *(undefined8 *)((long)puVar6 + 0x44) = *puVar2;
          *(undefined8 *)((long)puVar6 + 0x3c) = uVar19;
          puVar6[5] = uVar16;
          puVar6[4] = uVar15;
          puVar6[7] = uVar18;
          puVar6[6] = uVar17;
          puVar6[3] = uVar14;
          puVar6[2] = uVar13;
          puVar6 = (undefined8 *)((long)puVar6 + 0x4c);
        } while (puVar5 < puVar1);
      }
      param_1[1] = (long)puVar6;
      if (sVar4 != 0) {
        memmove((void *)((long)puVar1 - sVar4),param_2,sVar4);
      }
      *(undefined8 *)((long)param_2 + 0x44) = 0;
      *(undefined8 *)((long)param_2 + 0x3c) = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
    }
  }
  else {
    lVar8 = *param_1;
    uVar10 = ((long)puVar1 - lVar8 >> 2) * -0x79435e50d79435e5 + 1;
    if (0x35e50d79435e50d < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - lVar8 >> 2;
    uVar9 = lVar7 * 0xd79435e50d79436;
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    if (0x1af286bca1af285 < (ulong)(lVar7 * -0x79435e50d79435e5)) {
      uVar10 = 0x35e50d79435e50d;
    }
    lVar7 = (long)param_2 - lVar8 >> 2;
    if (uVar10 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_0049e770(PTR_FUN_047cba38,uVar10 * 0x4c);
    }
    puVar11 = (undefined8 *)(lVar3 + lVar7 * 4);
    lVar12 = lVar3 + uVar10 * 0x4c;
    if (lVar7 * -0x79435e50d79435e5 == uVar10) {
      if ((long)param_2 - lVar8 < 1) {
        uVar9 = uVar10 << 1;
        if (uVar10 == 0) {
          uVar9 = 1;
        }
        lVar12 = FUN_0049e770(PTR_FUN_047cba38,uVar9 * 0x4c);
        puVar11 = (undefined8 *)(lVar12 + (uVar9 >> 2) * 0x4c);
        lVar12 = lVar12 + uVar9 * 0x4c;
        if (lVar3 != 0) {
          FUN_0049e790(PTR_LAB_047cba48,lVar3);
        }
      }
      else {
        lVar8 = uVar10 + 2;
        if (-1 < (long)(uVar10 + 1)) {
          lVar8 = uVar10 + 1;
        }
        puVar11 = (undefined8 *)((long)puVar11 + (lVar8 >> 1) * -0x4c);
      }
    }
    *(undefined8 *)((long)puVar11 + 0x44) = 0;
    *(undefined8 *)((long)puVar11 + 0x3c) = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[7] = 0;
    puVar11[6] = 0;
    __dest = (void *)((long)puVar11 + 0x4c);
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[3] = 0;
    puVar11[2] = 0;
    sVar4 = (long)param_2 - *param_1;
    if (0 < (long)sVar4) {
      memcpy((void *)((long)puVar11 - sVar4),(void *)*param_1,sVar4);
    }
    __n = param_1[1] - (long)param_2;
    if (0 < (long)__n) {
      memcpy(__dest,param_2,__n);
      __dest = (void *)((long)__dest + (__n / 0x4c) * 0x4c);
    }
    lVar8 = *param_1;
    *param_1 = (long)((long)puVar11 - sVar4);
    param_1[1] = (long)__dest;
    param_1[2] = lVar12;
    if (lVar8 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  return puVar11;
}


