/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00138a70; name: FUN_00138a70
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_00138a70(uint *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  long extraout_x8;
  byte *pbVar8;
  long lVar9;
  ulong extraout_x9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  uint *puVar18;
  uint *puVar19;
  long unaff_x29;
  char unaff_w30;
  undefined1 auStack_e0 [128];
  
  puVar19 = param_1 + 0x12;
  plVar15 = (long *)&DAT_00000120;
  *(undefined8 *)(*(long *)puVar19 + 8) = 0;
  puVar18 = param_1 + 0x10;
  plVar17 = (long *)0x2d;
LAB_00138acc:
  uVar4 = *param_1;
  plVar12 = (long *)(ulong)uVar4;
  switch(uVar4) {
  default:
    plVar17 = (long *)&UNK_03cb5f2a;
    if (((&DAT_03cb5f2b)[(int)uVar4] & 1) == 0) {
      lVar9 = **(long **)puVar18;
      **(long **)puVar18 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_00145730();
      }
      else {
        pbVar7 = *(byte **)(*(long *)puVar18 + 8);
        *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
        uVar4 = (uint)*pbVar7;
      }
      *param_1 = uVar4;
      return plVar12;
    }
    goto LAB_00139a64;
  case 9:
  case 0xb:
  case 0xc:
  case 0x20:
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
      *param_1 = uVar4;
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      *param_1 = (uint)*pbVar7;
    }
    goto LAB_00138acc;
  case 10:
  case 0xd:
    FUN_0013a380(param_1);
    goto LAB_00138acc;
  case 0x22:
  case 0x27:
    plVar17 = *(long **)puVar19;
    lVar9 = plVar17[1];
    uVar1 = plVar17[2];
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar1,uVar1 << 1);
      lVar9 = plVar17[1];
      uVar5 = lVar9 + 1;
      *plVar17 = lVar6;
      plVar17[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar17;
    }
    plVar17[1] = uVar5;
    *(char *)(lVar6 + lVar9) = (char)uVar4;
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar5 = FUN_00145730();
      plVar15 = (long *)(uVar5 & 0xffffffff);
      uVar11 = (uint)uVar5;
      *param_1 = uVar11;
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      bVar2 = *pbVar7;
      plVar15 = (long *)(ulong)bVar2;
      uVar11 = (uint)bVar2;
      *param_1 = uVar11;
    }
    goto joined_r0x00138d74;
  case 0x2d:
    goto switchD_00138ae8_caseD_2d;
  case 0x2e:
    plVar15 = *(long **)puVar19;
    lVar9 = plVar15[1];
    uVar1 = plVar15[2];
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar15,uVar1,uVar1 << 1);
      lVar9 = plVar15[1];
      uVar5 = lVar9 + 1;
      *plVar15 = lVar6;
      plVar15[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar15;
    }
    plVar15[1] = uVar5;
    *(undefined1 *)(lVar6 + lVar9) = 0x2e;
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
      *param_1 = uVar4;
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
      *param_1 = uVar4;
    }
    if (uVar4 == 0x2e) {
      lVar9 = **(long **)puVar18;
      **(long **)puVar18 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_00145730();
      }
      else {
        pbVar7 = *(byte **)(*(long *)puVar18 + 8);
        *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
        uVar4 = (uint)*pbVar7;
      }
      *param_1 = uVar4;
      if (uVar4 != 0x2e) {
        return (long *)0x117;
      }
      lVar9 = **(long **)puVar18;
      **(long **)puVar18 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_00145730();
      }
      else {
        pbVar7 = *(byte **)(*(long *)puVar18 + 8);
        *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
        uVar4 = (uint)*pbVar7;
      }
      *param_1 = uVar4;
      return (long *)&DAT_00000118;
    }
    if (((byte)(&DAT_03cb5f2b)[(int)uVar4] >> 1 & 1) == 0) {
      return (long *)0x2e;
    }
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    plVar17 = *(long **)(param_1 + 0x12);
    lVar9 = plVar17[1];
    uVar1 = plVar17[2];
    uVar4 = *param_1;
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_0013ae9c;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar1,uVar1 << 1);
      lVar9 = plVar17[1];
      uVar5 = lVar9 + 1;
      *plVar17 = lVar6;
      plVar17[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar17;
    }
    plVar17[1] = uVar5;
    *(char *)(lVar6 + lVar9) = (char)uVar4;
    lVar9 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = lVar9 + -1;
    if (lVar9 == 0) {
      uVar11 = FUN_00145730();
      *param_1 = uVar11;
    }
    else {
      pbVar7 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
      *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar7 + 1;
      bVar2 = *pbVar7;
      uVar11 = (uint)bVar2;
      *param_1 = (uint)bVar2;
    }
    if ((uVar4 != 0x30) || ((uVar11 | 0x20) != 0x78)) {
      pbVar7 = &UNK_03c1cf55;
      break;
    }
    plVar17 = *(long **)(param_1 + 0x12);
    lVar9 = plVar17[1];
    uVar1 = plVar17[2];
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_0013ae9c;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar1,uVar1 << 1);
      lVar9 = plVar17[1];
      uVar5 = lVar9 + 1;
      *plVar17 = lVar6;
      plVar17[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar17;
    }
    plVar17[1] = uVar5;
    *(char *)(lVar6 + lVar9) = (char)uVar11;
    lVar9 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = lVar9 + -1;
    if (lVar9 == 0) {
      uVar11 = FUN_00145730();
    }
    else {
      pbVar7 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
      *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar7 + 1;
      uVar11 = (uint)*pbVar7;
    }
    pbVar7 = &DAT_03c74bc2;
    *param_1 = uVar11;
    break;
  case 0x2f:
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
      *param_1 = uVar4;
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
      *param_1 = uVar4;
    }
    if (uVar4 != 0x2f) {
      return (long *)0x2f;
    }
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
    }
    *param_1 = uVar4;
    return (long *)0x116;
  case 0x3a:
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
      *param_1 = uVar4;
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
      *param_1 = uVar4;
    }
    if (uVar4 != 0x3a) {
      return (long *)0x3a;
    }
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
    }
    *param_1 = uVar4;
    return (long *)0x11f;
  case 0x3c:
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
    }
    *param_1 = uVar4;
    if (uVar4 == 0x3c) {
      lVar9 = **(long **)puVar18;
      **(long **)puVar18 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_00145730();
      }
      else {
        pbVar7 = *(byte **)(*(long *)puVar18 + 8);
        *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
        uVar4 = (uint)*pbVar7;
      }
      *param_1 = uVar4;
      return (long *)0x11d;
    }
    if (uVar4 != 0x3d) {
      return (long *)&DAT_0000003c;
    }
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
    }
    *param_1 = uVar4;
    return (long *)0x11b;
  case 0x3d:
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
      *param_1 = uVar4;
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
      *param_1 = uVar4;
    }
    if (uVar4 != 0x3d) {
      return (long *)&DAT_0000003d;
    }
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
    }
    *param_1 = uVar4;
    return (long *)0x119;
  case 0x3e:
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
    }
    *param_1 = uVar4;
    if (uVar4 == 0x3e) {
      lVar9 = **(long **)puVar18;
      **(long **)puVar18 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_00145730();
      }
      else {
        pbVar7 = *(byte **)(*(long *)puVar18 + 8);
        *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
        uVar4 = (uint)*pbVar7;
      }
      *param_1 = uVar4;
      return (long *)0x11e;
    }
    if (uVar4 != 0x3d) {
      return (long *)0x3e;
    }
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
    }
    *param_1 = uVar4;
    return (long *)0x11a;
  case 0x5b:
    uVar5 = FUN_0013a450(param_1);
    if (1 < uVar5) {
      FUN_0013a600(param_1,param_2);
      return (long *)0x124;
    }
    if (uVar5 != 0) {
      return (long *)0x5b;
    }
    lVar9 = FUN_00138780(param_1,"invalid long string delimiter",0x124);
    goto LAB_0013a2a4;
  case 0x7e:
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
      *param_1 = uVar4;
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
      *param_1 = uVar4;
    }
    if (uVar4 != 0x3d) {
      return (long *)0x7e;
    }
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_00145730();
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar4 = (uint)*pbVar7;
    }
    *param_1 = uVar4;
    return (long *)0x11c;
  case 0xffffffff:
    goto switchD_00138ae8_caseD_ffffffff;
  }
LAB_0013ac20:
  if ((uVar11 != *pbVar7) && (uVar11 != pbVar7[1])) {
    if ((uVar11 == 0x2e) || (((byte)(&DAT_03cb5f2b)[(int)uVar11] >> 4 & 1) != 0)) goto LAB_0013acf4;
    if (((&DAT_03cb5f2b)[(int)uVar11] & 1) != 0) {
      plVar17 = *(long **)(param_1 + 0x12);
      lVar9 = plVar17[1];
      uVar1 = plVar17[2];
      uVar5 = lVar9 + 1;
      if (uVar1 < uVar5) {
        if (0x3ffffffffffffffe < uVar1) goto LAB_0013ae9c;
        lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar1,uVar1 << 1);
        lVar9 = plVar17[1];
        uVar5 = lVar9 + 1;
        *plVar17 = lVar6;
        plVar17[2] = uVar1 << 1;
      }
      else {
        lVar6 = *plVar17;
      }
      plVar17[1] = uVar5;
      *(char *)(lVar6 + lVar9) = (char)uVar11;
      lVar9 = **(long **)(param_1 + 0x10);
      **(long **)(param_1 + 0x10) = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_00145730();
      }
      else {
        pbVar7 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
        *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar7 + 1;
        uVar4 = (uint)*pbVar7;
      }
      *param_1 = uVar4;
    }
    plVar17 = *(long **)(param_1 + 0x12);
    lVar9 = plVar17[1];
    uVar1 = plVar17[2];
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) {
      if (0x3ffffffffffffffe < uVar1) {
LAB_0013ae9c:
        FUN_00138780(param_1,"lexical element too long",0);
LAB_0013aeb0:
        FUN_00138780(param_1,"malformed number",0x121);
                    /* WARNING: Does not return */
        pcVar3 = (code *)UndefinedInstructionException(0,0x13aec4);
        (*pcVar3)();
      }
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar1,uVar1 << 1);
      lVar9 = plVar17[1];
      uVar5 = lVar9 + 1;
      *plVar17 = lVar6;
      plVar17[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar17;
    }
    plVar17[1] = uVar5;
    *(undefined1 *)(lVar6 + lVar9) = 0;
    lVar9 = FUN_0012dc70(**(undefined8 **)(param_1 + 0x12),auStack_e0 + 0x80);
    if (lVar9 != 0) {
      *param_2 = unaff_x29;
      uVar4 = 0x121;
      if (unaff_w30 == '\x03') {
        uVar4 = 0x122;
      }
      return (long *)(ulong)uVar4;
    }
    goto LAB_0013aeb0;
  }
  plVar17 = *(long **)(param_1 + 0x12);
  lVar9 = plVar17[1];
  uVar1 = plVar17[2];
  uVar5 = lVar9 + 1;
  if (uVar1 < uVar5) {
    if (0x3ffffffffffffffe < uVar1) goto LAB_0013ae9c;
    lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar1,uVar1 << 1);
    lVar9 = plVar17[1];
    uVar5 = lVar9 + 1;
    *plVar17 = lVar6;
    plVar17[2] = uVar1 << 1;
  }
  else {
    lVar6 = *plVar17;
  }
  plVar17[1] = uVar5;
  *(char *)(lVar6 + lVar9) = (char)uVar11;
  lVar9 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar9 + -1;
  if (lVar9 == 0) {
    uVar11 = FUN_00145730();
    *param_1 = uVar11;
    uVar4 = uVar11;
    if (uVar11 != 0x2d) goto LAB_0013acd4;
    goto LAB_0013acf4;
  }
  pbVar8 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
  *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar8 + 1;
  bVar2 = *pbVar8;
  uVar11 = (uint)bVar2;
  *param_1 = (uint)bVar2;
  uVar4 = (uint)bVar2;
  if (bVar2 == 0x2d) goto LAB_0013acf4;
LAB_0013acd4:
  uVar11 = uVar4;
  if (uVar11 == 0x2b) {
    uVar11 = 0x2b;
LAB_0013acf4:
    plVar17 = *(long **)(param_1 + 0x12);
    lVar9 = plVar17[1];
    uVar1 = plVar17[2];
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_0013ae9c;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar1,uVar1 << 1);
      lVar9 = plVar17[1];
      uVar5 = lVar9 + 1;
      *plVar17 = lVar6;
      plVar17[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar17;
    }
    plVar17[1] = uVar5;
    *(char *)(lVar6 + lVar9) = (char)uVar11;
    lVar9 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = lVar9 + -1;
    if (lVar9 == 0) {
      uVar11 = FUN_00145730();
      *param_1 = uVar11;
    }
    else {
      pbVar8 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
      *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar8 + 1;
      bVar2 = *pbVar8;
      uVar11 = (uint)bVar2;
      *param_1 = (uint)bVar2;
    }
  }
  goto LAB_0013ac20;
switchD_00138ae8_caseD_2d:
  lVar9 = **(long **)puVar18;
  **(long **)puVar18 = lVar9 + -1;
  if (lVar9 == 0) {
    uVar4 = FUN_00145730();
    *param_1 = uVar4;
  }
  else {
    pbVar7 = *(byte **)(*(long *)puVar18 + 8);
    *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
    uVar4 = (uint)*pbVar7;
    *param_1 = uVar4;
  }
  if (uVar4 != 0x2d) {
    return (long *)0x2d;
  }
  lVar9 = **(long **)puVar18;
  **(long **)puVar18 = lVar9 + -1;
  if (lVar9 == 0) {
    uVar4 = FUN_00145730();
    *param_1 = uVar4;
  }
  else {
    pbVar7 = *(byte **)(*(long *)puVar18 + 8);
    *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
    uVar4 = (uint)*pbVar7;
    *param_1 = uVar4;
  }
  if (uVar4 != 0x5b) goto joined_r0x00138c1c;
  uVar5 = FUN_0013a450(param_1);
  *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
  if (uVar5 < 2) {
    uVar4 = *param_1 + 1;
    if (uVar4 < 0xf) goto LAB_00138c20;
    do {
      do {
        lVar9 = **(long **)puVar18;
        **(long **)puVar18 = lVar9 + -1;
        if (lVar9 == 0) {
          uVar4 = FUN_00145730();
          *param_1 = uVar4;
        }
        else {
          pbVar7 = *(byte **)(*(long *)puVar18 + 8);
          *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
          bVar2 = *pbVar7;
          uVar4 = (uint)bVar2;
          *param_1 = (uint)bVar2;
        }
joined_r0x00138c1c:
        uVar4 = uVar4 + 1;
      } while (0xe < uVar4);
LAB_00138c20:
    } while ((1 << (ulong)(uVar4 & 0x1f) & 0x4801U) == 0);
  }
  else {
    FUN_0013a600(param_1,0,uVar5);
    *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
  }
  goto LAB_00138acc;
joined_r0x00138d74:
  if (uVar11 == uVar4) goto LAB_00138f90;
  iVar13 = (int)plVar15;
  if (iVar13 < 0x5c) {
    if (iVar13 != -1) {
      if ((iVar13 != 10) && (iVar13 != 0xd)) goto LAB_0013907c;
      FUN_00138780(param_1,"unfinished string",0x124);
    }
    FUN_00138780(param_1,"unfinished string",0x120);
    if ((int)plVar17 == -1) goto LAB_00139fd8;
    plVar12 = *(long **)puVar19;
    lVar9 = plVar12[1];
    uVar1 = plVar12[2];
    uVar5 = lVar9 + 1;
    if (uVar5 <= uVar1) goto LAB_00139f20;
    if (uVar1 < 0x3fffffffffffffff) {
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
      lVar9 = plVar12[1];
      uVar5 = lVar9 + 1;
      *plVar12 = lVar6;
      plVar12[2] = uVar1 << 1;
      goto LAB_00139f9c;
    }
    goto LAB_00139f0c;
  }
  if (iVar13 == 0x5c) {
    plVar17 = *(long **)puVar19;
    lVar9 = plVar17[1];
    uVar1 = plVar17[2];
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
      plVar15 = (long *)(uVar1 << 1);
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar1,plVar15);
      lVar9 = plVar17[1];
      uVar5 = lVar9 + 1;
      *plVar17 = lVar6;
      plVar17[2] = (long)plVar15;
    }
    else {
      lVar6 = *plVar17;
    }
    plVar17[1] = uVar5;
    *(undefined1 *)(lVar6 + lVar9) = 0x5c;
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar5 = FUN_00145730();
      plVar17 = (long *)(uVar5 & 0xffffffff);
      uVar11 = (uint)uVar5;
      *param_1 = uVar11;
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      bVar2 = *pbVar7;
      plVar17 = (long *)(ulong)bVar2;
      uVar11 = (uint)bVar2;
      *param_1 = uVar11;
    }
    if (uVar11 + 1 < 0x7c) {
                    /* WARNING: Could not recover jumptable at 0x00139180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar17 = (long *)(*(code *)((ulong)*(ushort *)(&DAT_03cb6338 + (ulong)(uVar11 + 1) * 2) * 4 +
                                  0x139000))();
      return plVar17;
    }
    iVar13 = (int)plVar17;
    if (((byte)(&DAT_03cb5f2b)[iVar13] >> 1 & 1) == 0) {
      if (iVar13 == -1) goto LAB_0013a308;
      plVar12 = *(long **)puVar19;
      lVar9 = plVar12[1];
      uVar1 = plVar12[2];
      uVar5 = lVar9 + 1;
      if (uVar1 < uVar5) {
        if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
        lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
        lVar9 = plVar12[1];
        uVar5 = lVar9 + 1;
        *plVar12 = lVar6;
        plVar12[2] = uVar1 << 1;
      }
      else {
        lVar6 = *plVar12;
      }
      plVar12[1] = uVar5;
      *(char *)(lVar6 + lVar9) = (char)plVar17;
      lVar6 = **(long **)puVar18;
      **(long **)puVar18 = lVar6 + -1;
      lVar9 = *(long *)puVar18;
      if (lVar6 != 0) goto LAB_0013a2f4;
      uVar4 = FUN_00145730();
      goto LAB_0013a304;
    }
    plVar10 = *(long **)puVar19;
    lVar9 = plVar10[1];
    uVar1 = plVar10[2];
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,uVar1 << 1);
      lVar9 = plVar10[1];
      uVar5 = lVar9 + 1;
      *plVar10 = lVar6;
      plVar10[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar10;
    }
    plVar10[1] = uVar5;
    *(char *)(lVar6 + lVar9) = (char)plVar17;
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar5 = FUN_00145730();
      plVar15 = (long *)(uVar5 & 0xffffffff);
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      plVar15 = (long *)(ulong)*pbVar7;
    }
    uVar11 = (uint)plVar15;
    bVar2 = (&DAT_03cb5f2b)[(int)uVar11];
    iVar13 = iVar13 + -0x30;
    *param_1 = uVar11;
    if ((bVar2 >> 1 & 1) == 0) {
      lVar9 = -1;
    }
    else {
      plVar10 = *(long **)puVar19;
      lVar9 = plVar10[1];
      uVar1 = plVar10[2];
      uVar5 = lVar9 + 1;
      if (uVar1 < uVar5) {
        if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
        plVar17 = (long *)(uVar1 << 1);
        lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,plVar17);
        lVar9 = plVar10[1];
        uVar5 = lVar9 + 1;
        *plVar10 = lVar6;
        plVar10[2] = (long)plVar17;
      }
      else {
        lVar6 = *plVar10;
      }
      plVar10[1] = uVar5;
      *(char *)(lVar6 + lVar9) = (char)plVar15;
      lVar9 = **(long **)puVar18;
      **(long **)puVar18 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar5 = FUN_00145730();
        plVar15 = (long *)(uVar5 & 0xffffffff);
      }
      else {
        pbVar7 = *(byte **)(*(long *)puVar18 + 8);
        *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
        plVar15 = (long *)(ulong)*pbVar7;
      }
      uVar14 = (uint)plVar15;
      bVar2 = (&DAT_03cb5f2b)[(int)uVar14];
      iVar13 = uVar11 + iVar13 * 10 + -0x30;
      *param_1 = uVar14;
      if ((bVar2 >> 1 & 1) == 0) {
        lVar9 = -2;
      }
      else {
        plVar17 = *(long **)puVar19;
        lVar9 = plVar17[1];
        uVar1 = plVar17[2];
        uVar5 = lVar9 + 1;
        if (uVar1 < uVar5) {
          if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
          lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar1,uVar1 << 1);
          lVar9 = plVar17[1];
          uVar5 = lVar9 + 1;
          *plVar17 = lVar6;
          plVar17[2] = uVar1 << 1;
        }
        else {
          lVar6 = *plVar17;
        }
        plVar17[1] = uVar5;
        *(char *)(lVar6 + lVar9) = (char)plVar15;
        iVar13 = uVar14 + iVar13 * 10 + -0x30;
        lVar9 = **(long **)puVar18;
        **(long **)puVar18 = lVar9 + -1;
        if (lVar9 == 0) {
          uVar5 = FUN_00145730();
          plVar15 = (long *)(uVar5 & 0xffffffff);
        }
        else {
          pbVar7 = *(byte **)(*(long *)puVar18 + 8);
          *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
          plVar15 = (long *)(ulong)*pbVar7;
        }
        *param_1 = (uint)plVar15;
        lVar9 = -3;
      }
    }
    if (0xff < iVar13) {
      if ((int)plVar15 == -1) goto LAB_0013a330;
      plVar12 = *(long **)puVar19;
      lVar9 = plVar12[1];
      uVar1 = plVar12[2];
      uVar5 = lVar9 + 1;
      if (uVar1 < uVar5) {
        if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
        lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
        lVar9 = plVar12[1];
        uVar5 = lVar9 + 1;
        *plVar12 = lVar6;
        plVar12[2] = uVar1 << 1;
      }
      else {
        lVar6 = *plVar12;
      }
      plVar12[1] = uVar5;
      *(char *)(lVar6 + lVar9) = (char)plVar15;
      lVar6 = **(long **)puVar18;
      **(long **)puVar18 = lVar6 + -1;
      lVar9 = *(long *)puVar18;
      if (lVar6 != 0) goto LAB_0013a31c;
      uVar4 = FUN_00145730();
      goto LAB_0013a32c;
    }
    *(long *)(*(long *)puVar19 + 8) = *(long *)(*(long *)puVar19 + 8) + lVar9;
    *(long *)(*(long *)puVar19 + 8) = *(long *)(*(long *)puVar19 + 8) + -1;
    plVar10 = *(long **)puVar19;
    lVar9 = plVar10[1];
    uVar1 = plVar10[2];
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,uVar1 << 1);
      lVar9 = plVar10[1];
      uVar5 = lVar9 + 1;
      *plVar10 = lVar6;
      plVar10[2] = uVar1 << 1;
    }
    else {
      lVar6 = *plVar10;
    }
    plVar10[1] = uVar5;
    *(char *)(lVar6 + lVar9) = (char)iVar13;
  }
  else {
LAB_0013907c:
    plVar10 = *(long **)puVar19;
    lVar9 = plVar10[1];
    uVar1 = plVar10[2];
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) {
      if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
      plVar17 = (long *)(uVar1 << 1);
      lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,plVar17);
      lVar9 = plVar10[1];
      uVar5 = lVar9 + 1;
      *plVar10 = lVar6;
      plVar10[2] = (long)plVar17;
    }
    else {
      lVar6 = *plVar10;
    }
    plVar10[1] = uVar5;
    *(char *)(lVar6 + lVar9) = (char)plVar15;
    lVar9 = **(long **)puVar18;
    **(long **)puVar18 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar11 = FUN_00145730();
    }
    else {
      pbVar7 = *(byte **)(*(long *)puVar18 + 8);
      *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
      uVar11 = (uint)*pbVar7;
    }
    *param_1 = uVar11;
  }
  uVar11 = *param_1;
  plVar15 = (long *)(ulong)uVar11;
  goto joined_r0x00138d74;
LAB_00139a64:
  plVar10 = *(long **)puVar19;
  lVar9 = plVar10[1];
  uVar1 = plVar10[2];
  uVar5 = lVar9 + 1;
  if (uVar1 < uVar5) {
    if (0x3ffffffffffffffe < uVar1) goto LAB_00139f0c;
    plVar15 = (long *)(uVar1 << 1);
    lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,plVar15);
    lVar9 = plVar10[1];
    uVar5 = lVar9 + 1;
    *plVar10 = lVar6;
    plVar10[2] = (long)plVar15;
  }
  else {
    lVar6 = *plVar10;
  }
  plVar10[1] = uVar5;
  *(char *)(lVar6 + lVar9) = (char)plVar12;
  lVar9 = **(long **)puVar18;
  **(long **)puVar18 = lVar9 + -1;
  if (lVar9 == 0) {
    uVar5 = FUN_00145730();
    plVar12 = (long *)(uVar5 & 0xffffffff);
  }
  else {
    pbVar7 = *(byte **)(*(long *)puVar18 + 8);
    *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
    plVar12 = (long *)(ulong)*pbVar7;
  }
  bVar2 = (&DAT_03cb5f2b)[(int)(uint)plVar12];
  *param_1 = (uint)plVar12;
  if ((bVar2 & 3) == 0) {
    lVar16 = *(long *)(param_1 + 0xe);
    lVar9 = FUN_0013be00(lVar16,**(undefined8 **)(param_1 + 0x12),
                         (*(undefined8 **)(param_1 + 0x12))[1]);
    lVar6 = FUN_0013d320(*(undefined8 *)(param_1 + 0x14),lVar9);
    if ((*(byte *)(lVar6 + 8) & 0xf) == 0) {
      plVar17 = *(long **)(lVar16 + 0x10);
      *(long **)(lVar16 + 0x10) = plVar17 + 2;
      *plVar17 = lVar9;
      *(byte *)(plVar17 + 1) = *(byte *)(lVar9 + 8) | 0x40;
      FUN_0013d7c0(lVar16,*(undefined8 *)(param_1 + 0x14),plVar17,lVar6,plVar17);
      if (0 < *(long *)(*(long *)(lVar16 + 0x18) + 0x18)) {
        FUN_0012ac30(lVar16);
      }
      *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + -0x10;
    }
    else {
      lVar9 = *(long *)(lVar6 + 0x10);
    }
    *param_2 = lVar9;
    if ((*(char *)(lVar9 + 8) == '\x04') && (*(byte *)(lVar9 + 10) != 0)) {
      return (long *)(ulong)(*(byte *)(lVar9 + 10) + 0xff);
    }
    return (long *)0x123;
  }
  goto LAB_00139a64;
LAB_00138f90:
  plVar17 = *(long **)puVar19;
  lVar9 = plVar17[1];
  uVar1 = plVar17[2];
  uVar5 = lVar9 + 1;
  if (uVar1 < uVar5) {
    if (0x3ffffffffffffffe < uVar1) {
LAB_00139f0c:
      do {
        FUN_00138780(param_1,"lexical element too long",0);
        lVar9 = extraout_x8;
        uVar5 = extraout_x9;
LAB_00139f20:
        lVar6 = *plVar12;
LAB_00139f9c:
        plVar12[1] = uVar5;
        *(char *)(lVar6 + lVar9) = (char)plVar17;
        lVar9 = **(long **)puVar18;
        **(long **)puVar18 = lVar9 + -1;
        if (lVar9 == 0) {
          uVar4 = FUN_00145730();
        }
        else {
          pbVar7 = *(byte **)(*(long *)puVar18 + 8);
          *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
          uVar4 = (uint)*pbVar7;
        }
        *param_1 = uVar4;
LAB_00139fd8:
        FUN_00138780(param_1,"UTF-8 value too large",0x124);
        if ((int)plVar15 == -1) goto LAB_0013a2b8;
        plVar12 = *(long **)puVar19;
        lVar9 = plVar12[1];
        uVar1 = plVar12[2];
        uVar5 = lVar9 + 1;
        if (uVar5 <= uVar1) {
          lVar6 = *plVar12;
          goto LAB_0013a190;
        }
        if (uVar1 < 0x3fffffffffffffff) {
          lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar12,uVar1,uVar1 << 1);
          lVar9 = plVar12[1];
          uVar5 = lVar9 + 1;
          *plVar12 = lVar6;
          plVar12[2] = uVar1 << 1;
LAB_0013a190:
          plVar12[1] = uVar5;
          *(char *)(lVar6 + lVar9) = (char)plVar15;
          lVar6 = **(long **)puVar18;
          **(long **)puVar18 = lVar6 + -1;
          lVar9 = *(long *)puVar18;
          if (lVar6 == 0) {
            uVar4 = FUN_00145730();
          }
          else {
LAB_0013a2a4:
            pbVar7 = *(byte **)(lVar9 + 8);
            *(byte **)(lVar9 + 8) = pbVar7 + 1;
            uVar4 = (uint)*pbVar7;
          }
          *param_1 = uVar4;
LAB_0013a2b8:
          lVar9 = FUN_00138780(param_1,"missing \'{\'",0x124);
          pbVar7 = *(byte **)(lVar9 + 8);
          *(byte **)(lVar9 + 8) = pbVar7 + 1;
          *param_1 = (uint)*pbVar7;
          lVar9 = FUN_00138780(param_1,"missing \'}\'",0x124);
LAB_0013a2f4:
          pbVar7 = *(byte **)(lVar9 + 8);
          *(byte **)(lVar9 + 8) = pbVar7 + 1;
          uVar4 = (uint)*pbVar7;
LAB_0013a304:
          *param_1 = uVar4;
LAB_0013a308:
          lVar9 = FUN_00138780(param_1,"invalid escape sequence",0x124);
LAB_0013a31c:
          pbVar7 = *(byte **)(lVar9 + 8);
          *(byte **)(lVar9 + 8) = pbVar7 + 1;
          uVar4 = (uint)*pbVar7;
LAB_0013a32c:
          *param_1 = uVar4;
LAB_0013a330:
          FUN_00138780(param_1,"decimal escape too large",0x124);
                    /* WARNING: Does not return */
          pcVar3 = (code *)UndefinedInstructionException(0,0x13a344);
          (*pcVar3)();
        }
      } while( true );
    }
    lVar6 = FUN_0012d4f0(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar1,uVar1 << 1);
    lVar9 = plVar17[1];
    uVar5 = lVar9 + 1;
    *plVar17 = lVar6;
    plVar17[2] = uVar1 << 1;
  }
  else {
    lVar6 = *plVar17;
  }
  plVar17[1] = uVar5;
  *(char *)(lVar6 + lVar9) = (char)uVar4;
  lVar9 = **(long **)puVar18;
  **(long **)puVar18 = lVar9 + -1;
  if (lVar9 == 0) {
    uVar4 = FUN_00145730();
  }
  else {
    pbVar7 = *(byte **)(*(long *)puVar18 + 8);
    *(byte **)(*(long *)puVar18 + 8) = pbVar7 + 1;
    uVar4 = (uint)*pbVar7;
  }
  *param_1 = uVar4;
  lVar16 = *(long *)(param_1 + 0xe);
  lVar9 = FUN_0013be00(lVar16,**(long **)(param_1 + 0x12) + 1,(*(long **)(param_1 + 0x12))[1] + -2);
  lVar6 = FUN_0013d320(*(undefined8 *)(param_1 + 0x14),lVar9);
  if ((*(byte *)(lVar6 + 8) & 0xf) == 0) {
    plVar17 = *(long **)(lVar16 + 0x10);
    *(long **)(lVar16 + 0x10) = plVar17 + 2;
    *plVar17 = lVar9;
    *(byte *)(plVar17 + 1) = *(byte *)(lVar9 + 8) | 0x40;
    FUN_0013d7c0(lVar16,*(undefined8 *)(param_1 + 0x14),plVar17,lVar6,plVar17);
    if (0 < *(long *)(*(long *)(lVar16 + 0x18) + 0x18)) {
      FUN_0012ac30(lVar16);
    }
    *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + -0x10;
  }
  else {
    lVar9 = *(long *)(lVar6 + 0x10);
  }
  *param_2 = lVar9;
  plVar15 = (long *)0x124;
switchD_00138ae8_caseD_ffffffff:
  return plVar15;
}


