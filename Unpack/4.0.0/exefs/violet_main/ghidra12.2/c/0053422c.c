/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053422c; name: FUN_0053422c
 */


ulong * FUN_0053422c(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulong uVar1;
  byte bVar2;
  void *__dest;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *__src;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong local_68;
  ulong local_60;
  undefined1 *local_58;
  
  bVar2 = (byte)*param_1;
  uVar11 = (long)param_3 - (long)param_2;
  if ((bVar2 & 1) == 0) {
    if (uVar11 == 0) {
      return param_1;
    }
    uVar10 = (ulong)(bVar2 >> 1);
    puVar5 = (undefined1 *)((long)param_1 + 1);
    uVar12 = 0x16;
    uVar6 = (ulong)bVar2;
  }
  else {
    if (uVar11 == 0) {
      return param_1;
    }
    uVar6 = *param_1;
    uVar10 = param_1[1];
    uVar12 = (uVar6 & 0xfffffffffffffffe) - 1;
    puVar5 = (undefined1 *)param_1[2];
  }
  if ((puVar5 <= param_2) && (param_2 < puVar5 + uVar10)) {
    if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar11 < 0x17) {
      local_68 = CONCAT71(local_68._1_7_,(char)((int)uVar11 << 1));
      puVar5 = (undefined1 *)((ulong)&local_68 | 1);
    }
    else {
      uVar6 = uVar11 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      local_68 = uVar6 | 1;
      local_60 = uVar11;
      local_58 = puVar5;
    }
    if (param_2 == param_3) {
      puVar3 = puVar5;
    }
    else {
      if ((uVar11 < 0x40) || ((puVar5 < param_3 && (param_2 < puVar5 + uVar11)))) {
        puVar4 = param_2;
      }
      else {
        uVar10 = uVar11 & 0xffffffffffffffc0;
        puVar4 = param_2 + uVar10;
        puVar3 = puVar5 + uVar10;
        puVar8 = (undefined8 *)(puVar5 + 0x20);
        puVar9 = (undefined8 *)(param_2 + 0x20);
        uVar6 = uVar10;
        do {
          uVar14 = puVar9[-3];
          uVar13 = puVar9[-4];
          uVar16 = puVar9[-1];
          uVar15 = puVar9[-2];
          uVar6 = uVar6 - 0x40;
          uVar17 = *puVar9;
          uVar19 = puVar9[3];
          uVar18 = puVar9[2];
          puVar8[1] = puVar9[1];
          *puVar8 = uVar17;
          puVar8[3] = uVar19;
          puVar8[2] = uVar18;
          puVar8[-3] = uVar14;
          puVar8[-4] = uVar13;
          puVar8[-1] = uVar16;
          puVar8[-2] = uVar15;
          puVar8 = puVar8 + 8;
          puVar9 = puVar9 + 8;
        } while (uVar6 != 0);
        puVar5 = puVar3;
        if (uVar11 == uVar10) goto LAB_00534378;
      }
      do {
        puVar7 = puVar4 + 1;
        puVar3 = puVar5 + 1;
        *puVar5 = *puVar4;
        puVar5 = puVar3;
        puVar4 = puVar7;
      } while (param_3 != puVar7);
    }
LAB_00534378:
    *puVar3 = 0;
    uVar11 = local_68 >> 1 & 0x7f;
    puVar5 = (undefined1 *)((ulong)&local_68 | 1);
    if ((local_68 & 1) != 0) {
      uVar11 = local_60;
      puVar5 = local_58;
    }
                    /* try { // try from 0053439c to 005343a3 has its CatchHandler @ 00534578 */
    FUN_0021d540(param_1,puVar5,uVar11);
    if ((local_68 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_58);
    }
    return param_1;
  }
  if (uVar12 - uVar10 < uVar11) {
    uVar6 = uVar11 + uVar10;
    if (-uVar12 - 0x11 < uVar6 - uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if ((bVar2 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
      if (0x7fffffffffffffe6 < uVar12) goto LAB_00534340;
LAB_005343d4:
      uVar1 = uVar12 << 1;
      if (uVar12 << 1 <= uVar6) {
        uVar1 = uVar6;
      }
      uVar6 = 0x17;
      if (0x16 < uVar1) {
        uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      __src = (void *)param_1[2];
      if (uVar12 < 0x7fffffffffffffe7) goto LAB_005343d4;
LAB_00534340:
      uVar6 = 0xffffffffffffffef;
    }
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    if (uVar10 != 0) {
      memcpy(__dest,__src,uVar10);
    }
    if (uVar12 != 0x16) {
      FUN_0049e790(PTR_LAB_047cba48,__src);
    }
    uVar6 = uVar6 | 1;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar6;
  }
  if ((uVar6 & 1) == 0) {
    uVar6 = (long)param_1 + 1;
  }
  else {
    uVar6 = param_1[2];
  }
  puVar5 = (undefined1 *)(uVar6 + uVar10);
  if (param_2 != param_3) {
    if (uVar11 < 0x40) {
      puVar4 = puVar5;
      puVar3 = param_2;
    }
    else if ((puVar5 < param_3) && (param_2 < param_3 + uVar6 + (uVar10 - (long)param_2))) {
      puVar4 = puVar5;
      puVar3 = param_2;
    }
    else {
      uVar12 = uVar11 & 0xffffffffffffffc0;
      puVar5 = puVar5 + uVar12;
      puVar3 = param_2 + uVar12;
      puVar8 = (undefined8 *)(uVar10 + uVar6 + 0x20);
      puVar9 = (undefined8 *)(param_2 + 0x20);
      uVar6 = uVar12;
      do {
        uVar13 = puVar9[-4];
        uVar15 = puVar9[-1];
        uVar14 = puVar9[-2];
        uVar6 = uVar6 - 0x40;
        uVar17 = puVar9[1];
        uVar16 = *puVar9;
        uVar19 = puVar9[3];
        uVar18 = puVar9[2];
        puVar8[-3] = puVar9[-3];
        puVar8[-4] = uVar13;
        puVar8[-1] = uVar15;
        puVar8[-2] = uVar14;
        puVar8[1] = uVar17;
        *puVar8 = uVar16;
        puVar8[3] = uVar19;
        puVar8[2] = uVar18;
        puVar8 = puVar8 + 8;
        puVar9 = puVar9 + 8;
      } while (uVar6 != 0);
      puVar4 = puVar5;
      if (uVar11 == uVar12) goto LAB_005344e8;
    }
    do {
      puVar7 = puVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = *puVar3;
      puVar4 = puVar5;
      puVar3 = puVar7;
    } while (param_3 != puVar7);
  }
LAB_005344e8:
  *puVar5 = 0;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)((int)(uVar11 + uVar10) << 1);
    return param_1;
  }
  param_1[1] = uVar11 + uVar10;
  return param_1;
}


