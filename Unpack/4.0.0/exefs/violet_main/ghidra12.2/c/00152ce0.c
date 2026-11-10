/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00152ce0; name: FUN_00152ce0
 */


/* WARNING: Removing unreachable block (ram,0x001531c4) */
/* WARNING: Removing unreachable block (ram,0x001531cc) */
/* WARNING: Removing unreachable block (ram,0x001531dc) */
/* WARNING: Removing unreachable block (ram,0x001544a0) */
/* WARNING: Removing unreachable block (ram,0x001531e8) */
/* WARNING: Removing unreachable block (ram,0x001531f8) */
/* WARNING: Removing unreachable block (ram,0x001531fc) */
/* WARNING: Removing unreachable block (ram,0x00153204) */
/* WARNING: Removing unreachable block (ram,0x00153208) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00152ce0(code *param_1,undefined8 param_2,uint *param_3,uint *param_4,long *param_5)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  undefined1 *puVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  ushort uVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  char *pcVar22;
  undefined4 *puVar23;
  double *pdVar24;
  undefined8 *puVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  uint *puVar32;
  int *piVar33;
  char *pcVar34;
  ulong *puVar35;
  long lVar36;
  ulong uVar37;
  int iVar38;
  uint uVar39;
  byte *pbVar40;
  byte bVar41;
  uint uVar42;
  uint uVar43;
  char *pcVar44;
  uint *puVar45;
  uint *__s;
  uint *puVar46;
  uint *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  uint uVar50;
  uint *puVar51;
  double dVar52;
  int local_2a4;
  uint *local_288;
  uint local_280;
  uint local_27c;
  undefined2 local_278;
  char local_276;
  char acStack_275 [5];
  undefined2 local_270;
  char local_26e;
  undefined1 auStack_268 [64];
  undefined1 local_228 [2];
  uint auStack_226 [111];
  byte bStack_69;
  uint auStack_68 [2];
  
  puVar31 = (uint *)((ulong)&local_270 | 1);
  puVar2 = (uint *)(local_228 + 1);
  local_2a4 = 0;
  puVar32 = (uint *)((ulong)&local_278 | 1);
  __s = param_3;
joined_r0x00152d80:
  if (param_1 == (code *)0x0) {
    if (((ulong)param_4 & 3) != 0) goto LAB_00152e74;
    do {
      uVar30 = *param_4;
      while( true ) {
        uVar26 = (uVar30 ^ 0xffffffff) & 0x80808080;
        if (((uVar30 ^ 0x25252525) + 0xfefefeff & uVar26) != 0) goto LAB_00152e74;
        if ((uVar26 & uVar30 + 0xfefefeff) != 0) break;
        *__s = uVar30;
        param_4 = param_4 + 1;
        uVar30 = *param_4;
        __s = __s + 1;
      }
      bVar41 = (byte)*param_4;
      puVar46 = __s;
      while( true ) {
        if (bVar41 == 0) goto LAB_001558cc;
        param_4 = (uint *)((long)param_4 + 1);
        __s = (uint *)((long)puVar46 + 1);
        *(byte *)puVar46 = bVar41;
        if (((ulong)param_4 & 3) == 0) break;
LAB_00152e74:
        bVar41 = (byte)*param_4;
        puVar46 = __s;
        if (bVar41 == 0x25) goto LAB_00152e98;
      }
    } while( true );
  }
  do {
    if (((ulong)param_4 & 3) == 0) {
      uVar30 = *param_4;
      while (uVar26 = (uVar30 ^ 0xffffffff) & 0x80808080,
            ((uVar30 ^ 0x25252525) + 0xfefefeff & uVar26) == 0) {
        puVar46 = __s;
        if ((uVar26 & uVar30 + 0xfefefeff) != 0) goto LAB_00152dec;
        if (((int)param_3 - (int)__s) + 0x200 < 4) break;
        *__s = uVar30;
        param_4 = param_4 + 1;
        __s = __s + 1;
        uVar30 = *param_4;
      }
    }
    else {
      uVar30 = (uint)(byte)*param_4;
    }
    puVar46 = __s;
    if ((uVar30 & 0xff) == 0x25) break;
LAB_00152dec:
    bVar41 = (byte)uVar30;
    if ((uVar30 & 0xff) == 0) goto LAB_001558cc;
    iVar16 = (int)puVar46 - (int)param_3;
    if (0x1ff < iVar16 + 1) {
      local_2a4 = local_2a4 + iVar16;
      param_3 = (uint *)(*param_1)(param_3,param_2);
      puVar46 = (uint *)0x0;
      if (param_3 == (uint *)0x0) goto LAB_0015590c;
      bVar41 = (byte)*param_4;
      puVar46 = param_3;
    }
    param_4 = (uint *)((long)param_4 + 1);
    __s = (uint *)((long)puVar46 + 1);
    *(byte *)puVar46 = bVar41;
  } while( true );
LAB_00152e98:
  uVar30 = 0;
  bVar12 = false;
  bVar41 = *(byte *)((long)param_4 + 1);
  pbVar21 = (byte *)((long)param_4 + 2);
  while (bVar41 - 0x20 < 0x11) {
    uVar26 = 2;
    bVar9 = 0;
    switch(bVar41 - 0x20) {
    case 0:
      uVar26 = 4;
      bVar9 = 0;
      break;
    default:
      goto switchD_00152ee8_caseD_1;
    case 3:
      uVar26 = 8;
      bVar9 = 0;
      break;
    case 4:
      uVar26 = 0x100;
      bVar9 = 0;
      break;
    case 7:
      uVar26 = 0x40;
      bVar9 = 0;
      break;
    case 0xb:
      break;
    case 0xd:
      uVar26 = 1;
      bVar9 = 1;
      break;
    case 0x10:
      bVar41 = *pbVar21;
      uVar30 = uVar30 | 0x10;
      goto joined_r0x00152f94;
    }
    uVar30 = uVar30 | uVar26;
    bVar12 = (bool)(bVar12 | bVar9);
    bVar41 = *pbVar21;
    pbVar21 = pbVar21 + 1;
  }
switchD_00152ee8_caseD_1:
  pbVar21 = pbVar21 + -1;
joined_r0x00152f94:
  uVar26 = (uint)bVar41;
  if (uVar26 == 0x2a) {
    iVar16 = (int)param_5[3];
    if ((iVar16 < 0) && (*(int *)(param_5 + 3) = iVar16 + 8, iVar16 + 8 < 1)) {
      piVar33 = (int *)(param_5[1] + (long)iVar16);
    }
    else {
      piVar33 = (int *)*param_5;
      *param_5 = (long)(piVar33 + 2);
    }
    iVar16 = *piVar33;
    pbVar21 = pbVar21 + 1;
    uVar26 = (uint)*pbVar21;
joined_r0x00153028:
    if (uVar26 != 0x2e) goto LAB_00152f50;
LAB_00152fcc:
    pbVar40 = pbVar21 + 1;
    uVar26 = (uint)*pbVar40;
    if (uVar26 == 0x2a) {
      iVar14 = (int)param_5[3];
      if ((iVar14 < 0) && (*(int *)(param_5 + 3) = iVar14 + 8, iVar14 + 8 < 1)) {
        puVar46 = (uint *)(param_5[1] + (long)iVar14);
      }
      else {
        puVar46 = (uint *)*param_5;
        *param_5 = (long)(puVar46 + 2);
      }
      uVar20 = *puVar46;
      uVar26 = (uint)pbVar21[2];
      pbVar40 = pbVar21 + 2;
    }
    else if (uVar26 - 0x30 < 10) {
      uVar20 = 0;
      do {
        uVar20 = (uVar20 * 10 + uVar26) - 0x30;
        pbVar40 = pbVar40 + 1;
        uVar26 = (uint)*pbVar40;
      } while (uVar26 - 0x30 < 10);
    }
    else {
      uVar20 = 0;
    }
  }
  else {
    if (9 < uVar26 - 0x30) {
      iVar16 = 0;
      goto joined_r0x00153028;
    }
    iVar16 = 0;
    do {
      iVar16 = iVar16 * 10 + uVar26 + -0x30;
      pbVar21 = pbVar21 + 1;
      uVar26 = (uint)*pbVar21;
    } while (uVar26 - 0x30 < 10);
    if (uVar26 == 0x2e) goto LAB_00152fcc;
LAB_00152f50:
    uVar20 = 0xffffffff;
    pbVar40 = pbVar21;
  }
  if (uVar26 - 0x49 < 0x32) {
                    /* WARNING: Could not recover jumptable at 0x00152f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar15 = (*(code *)(&UNK_00152f7c +
                       (ulong)(byte)"9ddddddddddddddddddddddddddddddEd"[uVar26 - 0x49] * 4))();
    return uVar15;
  }
  pcVar34 = "0123456789ABCDEFXP";
  pcVar44 = "0123456789ABCDEFXP";
  pcVar22 = "0123456789ABCDEFXP";
  iVar27 = (int)local_228;
  iVar14 = (int)auStack_68;
  puVar51 = auStack_68;
  switch(*pbVar40) {
  case 0x41:
    goto switchD_0015314c_caseD_41;
  case 0x42:
    goto switchD_0015314c_caseD_42;
  default:
    uVar42 = 0;
    uVar30 = 0;
    bVar12 = false;
    uVar26 = 0;
    uVar20 = 0;
    iVar16 = 0;
    local_280 = 0;
    local_27c = 1;
    local_270 = local_270 & 0xff00;
    local_278 = local_278 & 0xff00;
    puVar51 = (uint *)&bStack_69;
    bStack_69 = *pbVar40;
    break;
  case 0x45:
    goto switchD_0015314c_caseD_45;
  case 0x47:
    goto switchD_0015314c_caseD_47;
  case 0x58:
    goto switchD_0015314c_caseD_58;
  case 0x61:
    pcVar34 = "0123456789abcdefxp";
switchD_0015314c_caseD_41:
    iVar14 = *(int *)((long)param_5 + 0x1c);
    if ((iVar14 < 0) && (*(int *)((long)param_5 + 0x1c) = iVar14 + 0x10, iVar14 + 0x10 < 1)) {
      puVar35 = (ulong *)(param_5[2] + (long)iVar14);
    }
    else {
      puVar35 = (ulong *)*param_5;
      *param_5 = (long)(puVar35 + 1);
    }
    uVar15 = *puVar35;
    uVar42 = 6;
    if (uVar20 != 0xffffffff) {
      uVar42 = uVar20;
    }
    uVar26 = (uint)(uVar15 >> 0x34) & 0x7ff;
    iVar14 = uVar26 - 0x3ff;
    if ((long)uVar15 < 0) {
      uVar30 = uVar30 | 0x80;
    }
    bVar41 = 0x2d;
    if ((uVar30 >> 7 & 1) == 0) {
      if ((uVar30 >> 2 & 1) != 0) {
        bVar41 = 0x20;
        goto LAB_00153cfc;
      }
      bVar41 = 0x2b;
      if ((uVar30 >> 1 & 1) != 0) goto LAB_00153cfc;
      uVar37 = 0;
      if (uVar26 == 0) goto LAB_001534a4;
LAB_00153d10:
      uVar15 = uVar15 & 0xfffffffffffff | 0x10000000000000;
    }
    else {
LAB_00153cfc:
      uVar37 = 1;
      local_270._1_1_ = bVar41;
      if (uVar26 != 0) goto LAB_00153d10;
LAB_001534a4:
      uVar15 = uVar15 & 0xfffffffffffff;
      iVar14 = 0;
      if (uVar15 != 0) {
        iVar14 = -0x3fe;
      }
    }
    uVar15 = uVar15 * 0x100;
    if ((int)uVar42 < 0xf) {
      uVar15 = uVar15 + (0x800000000000000U >> ((ulong)(uVar42 << 2) & 0x3f));
    }
    *(undefined2 *)((uVar37 | (ulong)&local_270) + 1) = 0x7830;
    local_228[0] = pcVar34[uVar15 >> 0x3c];
    local_270 = CONCAT11(local_270._1_1_,(char)uVar37) | 2;
    local_288 = puVar2;
    if (uVar42 != 0) {
      local_228[1] = DAT_04484090;
      local_288 = auStack_226;
    }
    uVar20 = uVar42;
    if (0xc < uVar42) {
      uVar20 = 0xd;
    }
    uVar26 = uVar42 - uVar20;
    if (uVar26 == 0 || (int)uVar42 < (int)uVar20) {
      uVar26 = 0;
    }
    puVar46 = local_288;
    if (uVar20 != 0) {
      uVar39 = uVar20 - 1;
      uVar42 = uVar20 & 3;
      puVar51 = local_288;
      uVar37 = uVar15;
      if (uVar42 != 0) {
        do {
          uVar15 = uVar37 << 4;
          uVar20 = uVar20 - 1;
          uVar42 = uVar42 - 1;
          puVar46 = (uint *)((long)puVar51 + 1);
          *(char *)puVar51 = pcVar34[uVar37 >> 0x38 & 0xf];
          puVar51 = puVar46;
          uVar37 = uVar15;
        } while (uVar42 != 0);
      }
      puVar51 = puVar46;
      if (2 < uVar39) {
        do {
          cVar5 = pcVar34[uVar15 >> 0x34 & 0xf];
          *(char *)puVar51 = pcVar34[uVar15 >> 0x38 & 0xf];
          uVar37 = uVar15 >> 0x30;
          *(char *)((long)puVar51 + 1) = cVar5;
          uVar7 = uVar15 >> 0x2c;
          uVar15 = uVar15 << 0x10;
          uVar20 = uVar20 - 4;
          *(char *)((long)puVar51 + 2) = pcVar34[uVar37 & 0xf];
          puVar46 = puVar51 + 1;
          *(char *)((long)puVar51 + 3) = pcVar34[uVar7 & 0xf];
          puVar51 = puVar46;
        } while (uVar20 != 0);
      }
    }
    if (iVar14 < 0) {
      iVar14 = -iVar14;
      local_276 = '-';
      if (iVar14 < 1000) goto LAB_00154018;
LAB_00153ff8:
      uVar20 = 6;
    }
    else {
      local_276 = '+';
      if (999 < iVar14) goto LAB_00153ff8;
LAB_00154018:
      uVar20 = 5;
      if ((iVar14 < 100) && (uVar20 = 3, 9 < iVar14)) {
        uVar20 = 4;
      }
    }
    iVar28 = iVar14 / 10;
    uVar15 = (ulong)uVar20;
    local_278 = CONCAT11(pcVar34[0x11],(char)uVar20);
    acStack_275[uVar15 - 3] = (char)iVar14 + (char)iVar28 * -10 + '0';
    if (3 < uVar20) {
      if ((uVar20 & 1) == 0) {
        acStack_275[(ulong)(uVar20 - 1) - 3] =
             (char)iVar28 +
             ((char)((ulong)((long)iVar28 * 0x66666667) >> 0x22) - (char)(iVar28 >> 0x1f)) * -10 +
             '0';
        uVar15 = uVar15 - 1;
        iVar14 = iVar28;
      }
      if (uVar20 != 4) {
        pcVar44 = acStack_275 + ((ulong)((int)uVar15 - 2) - 3);
        do {
          iVar28 = iVar14 / 10;
          iVar14 = iVar14 / 100;
          iVar38 = (int)uVar15;
          uVar15 = uVar15 - 2;
          acStack_275[(ulong)(iVar38 - 1) - 3] =
               (char)iVar28 +
               ((char)((ulong)((long)iVar28 * 0x66666667) >> 0x22) - (char)(iVar28 >> 0x1f)) * -10 +
               '0';
          *pcVar44 = (char)iVar14 +
                     ((char)((ulong)((long)iVar14 * 0x66666667) >> 0x22) - (char)(iVar14 >> 0x1f)) *
                     -10 + '0';
          pcVar44 = pcVar44 + -2;
        } while (3 < (uint)uVar15);
      }
    }
    local_27c = (int)puVar46 - iVar27;
    local_280 = (int)puVar46 - (int)local_288;
    uVar20 = 0;
    uVar42 = 0x3000001;
    puVar51 = (uint *)local_228;
    break;
  case 0x62:
    pcVar22 = "0123456789abcdefxp";
    goto switchD_0015314c_caseD_42;
  case 99:
    iVar14 = (int)param_5[3];
    if ((iVar14 < 0) && (*(int *)(param_5 + 3) = iVar14 + 8, iVar14 + 8 < 1)) {
      puVar23 = (undefined4 *)(param_5[1] + (long)iVar14);
    }
    else {
      puVar23 = (undefined4 *)*param_5;
      *param_5 = (long)(puVar23 + 2);
    }
    uVar42 = 0;
    uVar26 = 0;
    uVar20 = 0;
    local_280 = 0;
    local_27c = 1;
    local_270 = (ushort)local_270._1_1_ << 8;
    local_278 = local_278 & 0xff00;
    bStack_69 = (byte)*puVar23;
    puVar51 = (uint *)&bStack_69;
    break;
  case 100:
  case 0x69:
  case 0x75:
    iVar28 = (int)param_5[3];
    if ((iVar28 < 0) && (*(int *)(param_5 + 3) = iVar28 + 8, iVar28 + 8 < 1)) {
      puVar46 = (uint *)(param_5[1] + (long)iVar28);
    }
    else {
      puVar46 = (uint *)*param_5;
      *param_5 = (long)(puVar46 + 2);
    }
    uVar42 = *puVar46;
    uVar26 = uVar30;
    uVar15 = (ulong)uVar42;
    if (*pbVar40 != 0x75) {
      uVar26 = uVar30 | 0x80;
      uVar15 = (ulong)-uVar42;
    }
    uVar37 = (ulong)uVar42;
    if ((uVar42 & 0x80000000) != 0) {
      uVar30 = uVar26;
      uVar37 = uVar15;
    }
    if (uVar30 >> 8 != 0) {
      if (uVar20 == 0xffffffff) {
        uVar20 = 1;
      }
      dVar52 = (double)uVar37;
      uVar26 = 0;
      if (0x3ff < uVar37) {
        uVar26 = uVar20;
      }
      uVar20 = uVar26;
      goto LAB_0015364c;
    }
    local_27c = 0;
    puVar46 = auStack_68;
LAB_00153224:
    puVar47 = puVar46 + -2;
    if (uVar37 < 100000000) {
      uVar15 = uVar37;
      uVar37 = 0;
    }
    else {
      uVar15 = uVar37 % 100000000;
      uVar37 = uVar37 / 100000000;
    }
    iVar27 = (int)uVar15;
    if ((uVar30 >> 6 & 1) == 0) {
      puVar45 = puVar46;
      if (iVar27 != 0) {
        do {
          uVar26 = (uint)uVar15;
          puVar46 = (uint *)((long)puVar46 + -2);
          *(undefined2 *)puVar46 =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (ulong)(uVar26 + (int)(uVar15 / 100) * -100) * 2);
          uVar15 = uVar15 / 100;
          puVar45 = puVar46;
        } while (99 < uVar26);
      }
    }
    else {
      while( true ) {
        puVar45 = puVar46;
        if (iVar27 == 0) break;
        while( true ) {
          if (local_27c != 3) break;
          local_27c = 0;
          puVar47 = (uint *)((long)puVar47 + -1);
          puVar46 = (uint *)((long)puVar46 + -1);
          *(undefined1 *)puVar46 = DAT_04484094;
          puVar45 = puVar46;
          if ((int)uVar15 == 0) goto joined_r0x00153390;
        }
        uVar7 = uVar15 / 10;
        puVar46 = (uint *)((long)puVar46 + -1);
        *(byte *)puVar46 = (char)uVar15 + (char)uVar7 * -10 | 0x30;
        iVar27 = (int)uVar7;
        uVar15 = uVar7;
        local_27c = local_27c + 1;
      }
    }
joined_r0x00153390:
    puVar46 = puVar47;
    if (uVar37 != 0) {
      if ((long)puVar45 - (long)puVar46 != 0) {
        if ((uVar30 >> 6 & 1) == 0) {
          memset(puVar46,0x30,(long)puVar45 - (long)puVar46);
          do {
            puVar45 = (uint *)((long)puVar45 + -1);
          } while (puVar46 != puVar45);
        }
        else {
          do {
            while (uVar26 = local_27c + 1, local_27c == 3) {
              local_27c = 0;
              puVar46 = (uint *)((long)puVar46 + -1);
              puVar45 = (uint *)((long)puVar45 + -1);
              *(undefined1 *)puVar45 = DAT_04484094;
              if (puVar45 == puVar46) goto LAB_00153224;
            }
            puVar45 = (uint *)((long)puVar45 + -1);
            *(undefined1 *)puVar45 = 0x30;
            local_27c = uVar26;
          } while (puVar45 != puVar46);
        }
      }
      goto LAB_00153224;
    }
    if ((puVar45 != auStack_68) && (puVar51 = (uint *)((long)puVar45 + 1), (char)*puVar45 != '0')) {
      puVar51 = puVar45;
    }
    uVar17 = 0x2d;
    local_278 = local_278 & 0xff00;
    local_270 = local_270 & 0xff00;
    if ((uVar30 >> 7 & 1) == 0) {
      if ((uVar30 >> 2 & 1) != 0) {
        uVar17 = 0x20;
        goto LAB_00154164;
      }
      uVar17 = 0x2b;
      if ((uVar30 >> 1 & 1) != 0) goto LAB_00154164;
    }
    else {
LAB_00154164:
      local_270 = CONCAT11(uVar17,1);
    }
    local_27c = iVar14 - (int)puVar51;
    if (local_27c == 0) {
      puVar51 = (uint *)((long)puVar51 + -1);
      *(undefined1 *)puVar51 = 0x30;
      local_27c = 1;
    }
    uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
    uVar26 = 0;
    uVar42 = local_27c + 0x3000000;
    break;
  case 0x65:
    pcVar44 = "0123456789abcdefxp";
switchD_0015314c_caseD_45:
    iVar14 = *(int *)((long)param_5 + 0x1c);
    if ((iVar14 < 0) && (*(int *)((long)param_5 + 0x1c) = iVar14 + 0x10, iVar14 + 0x10 < 1)) {
      puVar25 = (undefined8 *)(param_5[2] + (long)iVar14);
    }
    else {
      puVar25 = (undefined8 *)*param_5;
      *param_5 = (long)(puVar25 + 1);
    }
    uVar42 = 6;
    if (uVar20 != 0xffffffff) {
      uVar42 = uVar20;
    }
    iVar14 = FUN_00155940(*puVar25,&local_288,&local_27c,auStack_268,&local_280,uVar42 | 0x80000000)
    ;
    if (iVar14 != 0) {
      uVar30 = uVar30 | 0x80;
    }
    local_278 = local_278 & 0xff00;
    local_270 = local_270 & 0xff00;
joined_r0x00153dd0:
    uVar17 = 0x2d;
    if ((uVar30 >> 7 & 1) == 0) {
LAB_00153610:
      if ((uVar30 >> 2 & 1) != 0) {
        uVar17 = 0x20;
        goto LAB_00153dd4;
      }
      uVar17 = 0x2b;
      if ((uVar30 >> 1 & 1) != 0) goto LAB_00153dd4;
    }
    else {
LAB_00153dd4:
      local_270 = CONCAT11(uVar17,1);
    }
    if (local_280 == 0x7000) {
      uVar42 = 0;
      uVar26 = 0;
      uVar20 = 0;
      puVar51 = local_288;
    }
    else {
      local_228[0] = (char)*local_288;
      puVar46 = puVar2;
      if (uVar42 != 0) {
        local_228[1] = DAT_04484090;
        puVar46 = auStack_226;
      }
      if (uVar42 < local_27c - 1) {
        local_27c = uVar42 + 1;
      }
      puVar51 = puVar46;
      if (1 < local_27c) {
        puVar51 = (uint *)((long)puVar46 + 1);
        *(undefined *)puVar46 = *(undefined *)((long)local_288 + 1);
        if (2 < local_27c) {
          lVar36 = 0;
          do {
            lVar3 = lVar36 + 1;
            *(undefined *)((long)puVar51 + lVar36) = *(undefined *)((long)local_288 + lVar36 + 2);
            uVar15 = lVar36 + 3;
            lVar36 = lVar3;
          } while (uVar15 < local_27c);
          puVar51 = (uint *)((long)puVar51 + lVar3);
        }
      }
      iVar14 = (int)puVar51;
      iVar28 = local_280 - 1;
      if (iVar28 < 0) {
        local_276 = '-';
        iVar28 = 1 - local_280;
      }
      else {
        local_276 = '+';
      }
      uVar26 = (uVar42 - local_27c) + 1;
      uVar20 = 4;
      if (99 < iVar28) {
        uVar20 = 5;
      }
      local_278 = CONCAT11(pcVar44[0xe],(char)uVar20);
      local_280 = iVar28 / 10;
      acStack_275[(ulong)uVar20 - 3] = (char)iVar28 + (char)local_280 * -10 + '0';
      acStack_275[(ulong)(uVar20 - 1) - 3] =
           (char)local_280 +
           ((char)((ulong)((long)(int)local_280 * 0x66666667) >> 0x22) -
           (char)((int)local_280 >> 0x1f)) * -10 + '0';
      if (3 < uVar20 - 1) {
        local_280 = iVar28 / 100;
        acStack_275[(ulong)(uVar20 - 2) - 3] =
             (char)local_280 +
             ((char)((ulong)((long)(int)local_280 * 0x66666667) >> 0x22) -
             (char)((int)local_280 >> 0x1f)) * -10 + '0';
      }
      uVar42 = 0x3000001;
LAB_0015488c:
      local_27c = iVar14 - iVar27;
      uVar20 = 0;
      puVar51 = (uint *)local_228;
    }
    break;
  case 0x66:
    iVar14 = *(int *)((long)param_5 + 0x1c);
    if ((iVar14 < 0) && (*(int *)((long)param_5 + 0x1c) = iVar14 + 0x10, iVar14 + 0x10 < 1)) {
      pdVar24 = (double *)(param_5[2] + (long)iVar14);
    }
    else {
      pdVar24 = (double *)*param_5;
      *param_5 = (long)(pdVar24 + 1);
    }
    dVar52 = *pdVar24;
LAB_0015364c:
    if (((uVar30 & 0xfc000100) == 0x100) && ((1024.0 <= dVar52 || (dVar52 <= -1024.0)))) {
      dVar52 = dVar52 * 0.0009765625;
      bVar13 = false;
      bVar10 = true;
      bVar11 = false;
      if (dVar52 < 1024.0) {
        bVar13 = false;
        bVar10 = false;
        bVar11 = true;
        if (!NAN(dVar52)) {
          bVar13 = dVar52 < -1024.0;
          bVar10 = dVar52 == -1024.0;
          bVar11 = false;
        }
      }
      uVar26 = uVar30 + 0x1000000;
      if (bVar10 || bVar13 != bVar11) {
        dVar52 = dVar52 * 0.0009765625;
        bVar13 = false;
        bVar10 = true;
        bVar11 = false;
        if (dVar52 < 1024.0) {
          bVar13 = false;
          bVar10 = false;
          bVar11 = true;
          if (!NAN(dVar52)) {
            bVar13 = dVar52 < -1024.0;
            bVar10 = dVar52 == -1024.0;
            bVar11 = false;
          }
        }
        uVar26 = uVar30 + 0x2000000;
        if (bVar10 || bVar13 != bVar11) {
          dVar52 = dVar52 * 0.0009765625;
          bVar13 = false;
          bVar10 = true;
          bVar11 = false;
          if (dVar52 < 1024.0) {
            bVar13 = false;
            bVar10 = false;
            bVar11 = true;
            if (!NAN(dVar52)) {
              bVar13 = dVar52 < -1024.0;
              bVar10 = dVar52 == -1024.0;
              bVar11 = false;
            }
          }
          uVar26 = uVar30 + 0x3000000;
          if (bVar10 || bVar13 != bVar11) {
            uVar30 = uVar30 + 0x4000000;
            dVar52 = dVar52 * 0.0009765625;
            goto LAB_00153c5c;
          }
        }
      }
      uVar30 = uVar26;
    }
LAB_00153c5c:
    uVar26 = 6;
    if (uVar20 != 0xffffffff) {
      uVar26 = uVar20;
    }
    iVar14 = FUN_00155940(dVar52,&local_288,&local_27c,auStack_268,&local_280,uVar26);
    if (iVar14 != 0) {
      uVar30 = uVar30 | 0x80;
    }
    local_278 = local_278 & 0xff00;
    uVar8 = local_270 >> 8;
    cVar5 = local_228[0];
    uVar17 = local_228[1];
    bVar41 = bStack_69;
    goto joined_r0x00153ca8;
  case 0x67:
    pcVar44 = "0123456789abcdefxp";
switchD_0015314c_caseD_47:
    iVar14 = *(int *)((long)param_5 + 0x1c);
    if ((iVar14 < 0) && (*(int *)((long)param_5 + 0x1c) = iVar14 + 0x10, iVar14 + 0x10 < 1)) {
      puVar25 = (undefined8 *)(param_5[2] + (long)iVar14);
    }
    else {
      puVar25 = (undefined8 *)*param_5;
      *param_5 = (long)(puVar25 + 1);
    }
    if (uVar20 == 0xffffffff) {
      uVar20 = 6;
    }
    else if (uVar20 == 0) {
      uVar20 = 1;
    }
    iVar14 = FUN_00155940(*puVar25,&local_288,&local_27c,auStack_268,&local_280,
                          uVar20 - 1 | 0x80000000);
    if (iVar14 != 0) {
      uVar30 = uVar30 | 0x80;
    }
    if (uVar20 < local_27c) {
      local_27c = uVar20;
    }
    uVar42 = uVar20;
    if (local_27c < 2) {
      bVar13 = true;
    }
    else {
      while (uVar26 = local_27c - 1, *(char *)((long)local_288 + (ulong)uVar26) == '0') {
        uVar42 = uVar42 - 1;
        bVar13 = uVar42 != 0;
        local_27c = uVar26;
        if ((uVar42 == 0) || (uVar26 < 2)) goto joined_r0x00153cd4;
      }
      bVar13 = true;
    }
joined_r0x00153cd4:
    if (((int)local_280 < -3) || ((int)uVar20 < (int)local_280)) {
      if ((int)uVar42 <= (int)local_27c) {
        uVar42 = uVar42 - 1;
        if (!bVar13) {
          uVar42 = 0;
        }
        local_278 = (ushort)local_278._1_1_ << 8;
        local_270 = (ushort)local_270._1_1_ << 8;
        goto joined_r0x00153dd0;
      }
      uVar42 = local_27c - 1;
      uVar17 = 0x2d;
      local_278 = (ushort)local_278._1_1_ << 8;
      local_270 = (ushort)local_270._1_1_ << 8;
      if ((uVar30 >> 7 & 1) == 0) goto LAB_00153610;
      goto LAB_00153dd4;
    }
    if ((int)local_280 < 1) {
      uVar26 = local_27c;
      if ((int)uVar42 <= (int)local_27c) {
        uVar26 = uVar42;
      }
      uVar26 = uVar26 - local_280;
    }
    else {
      uVar26 = local_27c - local_280;
      if (uVar26 == 0 || (int)local_27c < (int)local_280) {
        uVar26 = 0;
      }
    }
    local_278 = (ushort)local_278._1_1_ << 8;
    uVar8 = (ushort)local_270._1_1_;
    cVar5 = local_228[0];
    uVar17 = local_228[1];
    bVar41 = bStack_69;
joined_r0x00153ca8:
    uVar18 = 0x2d;
    if ((uVar30 >> 7 & 1) == 0) {
      local_270 = uVar8 << 8;
      if ((uVar30 >> 2 & 1) != 0) {
        uVar18 = 0x20;
        goto LAB_001541c4;
      }
      uVar18 = 0x2b;
      if ((uVar30 >> 1 & 1) != 0) goto LAB_001541c4;
    }
    else {
LAB_001541c4:
      local_270 = CONCAT11(uVar18,1);
    }
    local_228[0] = cVar5;
    local_228[1] = uVar17;
    bStack_69 = bVar41;
    if (local_280 == 0x7000) {
      uVar42 = 0;
      uVar26 = 0;
      uVar20 = 0;
      puVar51 = local_288;
      break;
    }
    if ((int)local_280 < 1) {
      local_228[0] = '0';
      puVar46 = puVar2;
      if (uVar26 != 0) {
        puVar46 = auStack_226;
        local_228[1] = DAT_04484090;
      }
      uVar20 = uVar26;
      if ((int)-local_280 <= (int)uVar26) {
        uVar20 = -local_280;
      }
      uVar17 = local_228[1];
      if (uVar20 != 0) {
        uVar39 = uVar20 - 4;
        puVar51 = puVar46;
        uVar42 = uVar20;
LAB_0015425c:
        if (((ulong)puVar51 & 3) != 0) goto code_r0x00154264;
        uVar19 = uVar42 - 4;
        if (3 < (int)uVar42) {
          memset(puVar51,0x30,(ulong)(uVar19 & 0xfffffffc) + 4);
          if (((uVar19 >> 2) + 1 & 7) != 0) {
            iVar14 = 0;
            iVar28 = -((uVar39 >> 2) + 1 & 7);
            do {
              puVar51 = puVar51 + 1;
              iVar14 = iVar14 + 4;
              bVar13 = iVar28 != -1;
              iVar28 = iVar28 + 1;
            } while (bVar13);
            uVar42 = uVar42 - iVar14;
          }
          if (0x1b < uVar19) {
            do {
              uVar42 = uVar42 - 0x20;
              puVar51 = puVar51 + 8;
            } while (3 < (int)uVar42);
          }
          uVar42 = uVar19 & 3;
        }
        puVar46 = puVar51;
        uVar17 = local_228[1];
        bVar41 = bStack_69;
        if (uVar42 != 0) {
          memset(puVar51,0x30,(ulong)uVar42);
          uVar19 = uVar42 - 1;
          for (uVar39 = uVar42 & 7; uVar39 != 0; uVar39 = uVar39 - 1) {
            puVar46 = (uint *)((long)puVar46 + 1);
            uVar42 = uVar42 - 1;
          }
          uVar17 = local_228[1];
          bVar41 = bStack_69;
          if (6 < uVar19) {
            do {
              puVar46 = puVar46 + 2;
              uVar42 = uVar42 - 8;
            } while (uVar42 != 0);
          }
        }
      }
joined_r0x001545e8:
      uVar42 = local_27c + uVar20;
      if ((int)uVar26 < (int)uVar42) {
        local_27c = uVar26 - uVar20;
      }
      if (local_27c != 0) {
        uVar39 = uVar26;
        if ((int)uVar42 <= (int)uVar26) {
          uVar39 = uVar42;
        }
        uVar42 = local_27c;
        if ((local_27c & 3) != 0) {
          iVar14 = -(local_27c & 3);
          puVar51 = puVar46;
          do {
            puVar47 = (uint *)((long)local_288 + 1);
            uVar42 = uVar42 - 1;
            bVar13 = iVar14 != -1;
            iVar14 = iVar14 + 1;
            puVar46 = (uint *)((long)puVar51 + 1);
            *(char *)puVar51 = (char)*local_288;
            puVar51 = puVar46;
            local_288 = puVar47;
          } while (bVar13);
        }
        puVar51 = puVar46;
        if (2 < uVar39 + ~uVar20) {
          do {
            *(char *)puVar51 = (char)*local_288;
            *(undefined *)((long)puVar51 + 1) = *(undefined *)((long)local_288 + 1);
            puVar49 = (undefined *)((long)local_288 + 3);
            *(undefined *)((long)puVar51 + 2) = *(undefined *)((long)local_288 + 2);
            local_288 = local_288 + 1;
            puVar46 = puVar51 + 1;
            *(undefined *)((long)puVar51 + 3) = *puVar49;
            uVar42 = uVar42 - 4;
            puVar51 = puVar46;
          } while (uVar42 != 0);
        }
      }
      iVar14 = (int)puVar46;
      uVar26 = (uVar26 - uVar20) - local_27c;
      uVar42 = 0x3000001;
      local_228[1] = uVar17;
      bStack_69 = bVar41;
    }
    else {
      if ((uVar30 >> 6 & 1) == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = (600 - local_280) % 3;
      }
      if (local_280 < local_27c) {
        if ((uVar30 >> 6 & 1) == 0) {
          uVar15 = 0;
          do {
            uVar37 = uVar15;
            local_228[uVar37] = *(undefined *)((long)local_288 + uVar37);
            uVar15 = uVar37 + 1;
          } while (uVar15 < local_280);
          puVar46 = (uint *)(local_228 + uVar37);
          puVar49 = local_228 + uVar37 + 1;
          if (uVar26 == 0) goto LAB_001543d0;
LAB_00154300:
          uVar20 = (uint)uVar15;
          *puVar49 = DAT_04484090;
          puVar48 = (undefined *)((long)puVar46 + 2);
        }
        else {
          uVar15 = 0;
          puVar51 = (uint *)local_228;
          do {
            uVar20 = uVar20 + 1;
            puVar46 = puVar51;
            if (uVar20 == 4) {
              puVar46 = (uint *)((long)puVar51 + 1);
              *(undefined1 *)puVar51 = DAT_04484094;
              uVar20 = 1;
            }
            puVar49 = (undefined *)((long)local_288 + uVar15);
            uVar42 = (int)uVar15 + 1;
            uVar15 = (ulong)uVar42;
            puVar51 = (uint *)((long)puVar46 + 1);
            *(undefined *)puVar46 = *puVar49;
          } while (uVar42 < local_280);
          puVar49 = (undefined *)((long)puVar46 + 1);
          if (uVar26 != 0) goto LAB_00154300;
LAB_001543d0:
          uVar20 = (uint)uVar15;
          puVar48 = puVar49;
        }
        iVar28 = (int)puVar49 - iVar27;
        if (uVar26 < local_27c - local_280) {
          local_27c = local_280 + uVar26;
        }
        if (uVar20 < local_27c) {
          uVar15 = (ulong)uVar20;
          puVar49 = puVar48;
          do {
            puVar1 = (undefined *)((long)local_288 + uVar15);
            uVar15 = uVar15 + 1;
            puVar48 = puVar49 + 1;
            *puVar49 = *puVar1;
            puVar49 = puVar48;
          } while (uVar15 < local_27c);
        }
        iVar14 = (int)puVar48;
        uVar26 = (uVar26 - local_27c) + local_280;
      }
      else {
        if ((uVar30 >> 6 & 1) != 0) {
          uVar15 = 0;
          uVar20 = uVar20 + 1;
          puVar49 = local_228 + 1;
          if (uVar20 != 4) goto LAB_00154350;
          do {
            uVar20 = 0;
            puVar49[-1] = DAT_04484094;
            while( true ) {
              uVar20 = uVar20 + 1;
              puVar49 = puVar49 + 1;
              if (uVar20 == 4) break;
LAB_00154350:
              puVar49[-1] = *(undefined *)((long)local_288 + uVar15);
              uVar42 = (int)uVar15 + 1;
              uVar15 = (ulong)uVar42;
              if (local_27c <= uVar42) goto LAB_0015445c;
            }
          } while( true );
        }
        uVar15 = 0;
        do {
          *(undefined *)((long)local_228 + uVar15) = *(undefined *)((long)local_288 + uVar15);
          uVar15 = uVar15 + 1;
        } while (uVar15 < local_27c);
        puVar49 = (undefined *)((long)local_228 + uVar15);
LAB_0015445c:
        uVar42 = local_280 - (uint)uVar15;
        puVar48 = puVar49;
        if ((uint)uVar15 <= local_280 && uVar42 != 0) {
          if ((uVar30 >> 6 & 1) == 0) {
            if (uVar42 != 0) {
              uVar39 = uVar42 - 4;
LAB_00154478:
              if (((ulong)puVar49 & 3) != 0) goto code_r0x00154480;
              uVar19 = uVar42 - 4;
              puVar48 = puVar49;
              if (3 < uVar42) {
                memset(puVar49,0x30,(ulong)(uVar19 & 0xfffffffc) + 4);
                if (((uVar19 >> 2) + 1 & 7) != 0) {
                  iVar14 = 0;
                  iVar28 = -((uVar39 >> 2) + 1 & 7);
                  do {
                    puVar49 = puVar49 + 4;
                    iVar14 = iVar14 + 4;
                    bVar13 = iVar28 != -1;
                    iVar28 = iVar28 + 1;
                  } while (bVar13);
                  uVar42 = uVar42 - iVar14;
                }
                if (0x1b < uVar19) {
                  do {
                    uVar42 = uVar42 - 0x20;
                    puVar49 = puVar49 + 0x20;
                  } while (3 < uVar42);
                }
                uVar42 = uVar19 & 3;
                goto LAB_00154790;
              }
              goto joined_r0x00154798;
            }
          }
          else {
LAB_00154790:
            puVar48 = puVar49;
            cVar5 = local_228[0];
            uVar17 = local_228[1];
            bVar41 = bStack_69;
            if (uVar42 != 0) {
joined_r0x00154798:
              puVar49 = puVar48;
              local_228[0] = cVar5;
              local_228[1] = uVar17;
              bStack_69 = bVar41;
              if ((uVar30 >> 6 & 1) == 0) {
                memset(puVar48,0x30,(ulong)uVar42);
                uVar39 = uVar42 - 1;
                for (uVar20 = uVar42 & 7; uVar20 != 0; uVar20 = uVar20 - 1) {
                  uVar42 = uVar42 - 1;
                  puVar48 = puVar48 + 1;
                }
                if (6 < uVar39) {
                  do {
                    uVar42 = uVar42 - 8;
                    puVar48 = puVar48 + 8;
                  } while (uVar42 != 0);
                }
              }
              else {
                do {
                  while (uVar20 = uVar20 + 1, uVar20 != 4) {
                    puVar48 = puVar49 + 1;
                    *puVar49 = 0x30;
                    uVar42 = uVar42 - 1;
                    puVar49 = puVar48;
                    if (uVar42 == 0) goto LAB_00154834;
                  }
                  uVar20 = 0;
                  puVar48 = puVar49 + 1;
                  *puVar49 = DAT_04484094;
                  puVar49 = puVar48;
                } while (uVar42 != 0);
              }
            }
          }
        }
LAB_00154834:
        iVar28 = (int)puVar48 - iVar27;
        puVar49 = puVar48;
        if (uVar26 != 0) {
          puVar49 = puVar48 + 1;
          *puVar48 = DAT_04484090;
        }
        iVar14 = (int)puVar49;
      }
      uVar42 = iVar28 + 0x3000000;
    }
    if ((uVar30 >> 8 & 1) != 0) {
      local_278 = 0x2001;
      if (uVar30 >> 0x18 != 0) {
        local_276 = "_kmgt"[uVar30 >> 0x18];
        local_278 = 0x2002;
      }
    }
    goto LAB_0015488c;
  case 0x6e:
    iVar16 = (int)param_5[3];
    if ((iVar16 < 0) && (*(int *)(param_5 + 3) = iVar16 + 8, iVar16 + 8 < 1)) {
      puVar25 = (undefined8 *)(param_5[1] + (long)iVar16);
    }
    else {
      puVar25 = (undefined8 *)*param_5;
      *param_5 = (long)(puVar25 + 1);
    }
    *(int *)*puVar25 = local_2a4 + ((int)__s - (int)param_3);
    goto LAB_001558a0;
  case 0x6f:
    local_270 = (ushort)local_270._1_1_ << 8;
    if ((uVar30 >> 3 & 1) != 0) {
      local_270 = 0x3001;
    }
    local_27c = 0x330;
    uVar15 = 0x330;
    pcVar22 = "0123456789ABCDEFXP";
    lVar36 = (long)(int)param_5[3];
    goto LAB_00153978;
  case 0x70:
    uVar20 = 0x10;
    pcVar22 = "0123456789ABCDEFXP";
    uVar26 = uVar30 & 8;
    uVar30 = uVar30 & 0xffffffcf | 0x20;
    goto joined_r0x00153774;
  case 0x73:
    iVar14 = (int)param_5[3];
    if ((iVar14 < 0) && (*(int *)(param_5 + 3) = iVar14 + 8, iVar14 + 8 < 1)) {
      puVar25 = (undefined8 *)(param_5[1] + (long)iVar14);
    }
    else {
      puVar25 = (undefined8 *)*param_5;
      *param_5 = (long)(puVar25 + 1);
    }
    puVar51 = (uint *)&DAT_03be61b3;
    if ((uint *)*puVar25 != (uint *)0x0) {
      puVar51 = (uint *)*puVar25;
    }
    puVar46 = puVar51;
    if ((int)uVar20 < 0) {
      do {
        while ((local_288 = puVar46, ((ulong)local_288 & 3) == 0 &&
               (((*local_288 ^ 0xffffffff) & 0x80808080 & *local_288 + 0xfefefeff) == 0))) {
          iVar14 = 2;
          do {
            puVar46 = local_288;
            local_288 = puVar46 + 1;
            if (iVar14 == 0) {
              cVar5 = (char)*local_288;
              goto joined_r0x00153934;
            }
            iVar14 = iVar14 + 1;
          } while (((*local_288 ^ 0xffffffff) & 0x80808080 & *local_288 + 0xfefefeff) == 0);
          cVar5 = (char)*local_288;
joined_r0x00153934:
          puVar46 = (uint *)((long)puVar46 + 5);
          if (cVar5 == '\0') goto LAB_00154574;
        }
        puVar46 = (uint *)((long)local_288 + 1);
      } while ((char)*local_288 != '\0');
    }
    else {
      do {
        local_288 = puVar46;
        if (((ulong)local_288 & 3) == 0) {
          uVar42 = (int)local_288 - (int)puVar51;
          uVar26 = uVar20 - uVar42;
          if (uVar20 < uVar42 || uVar26 == 0) break;
          uVar26 = uVar26 >> 2;
          if (uVar26 == 0) {
            puVar46 = (uint *)((long)local_288 + 1);
            cVar5 = (char)*local_288;
          }
          else {
            if (((*local_288 ^ 0xffffffff) & 0x80808080 & *local_288 + 0xfefefeff) != 0) {
              cVar5 = (char)*local_288;
              goto joined_r0x001537e0;
            }
            do {
              puVar46 = local_288;
              uVar26 = uVar26 - 1;
              local_288 = puVar46 + 1;
              if (uVar26 == 0) {
                puVar46 = (uint *)((long)puVar46 + 5);
                cVar5 = (char)*local_288;
                goto joined_r0x00153890;
              }
            } while (((*local_288 ^ 0xffffffff) & 0x80808080 & *local_288 + 0xfefefeff) == 0);
            puVar46 = (uint *)((long)puVar46 + 5);
            cVar5 = (char)*local_288;
          }
        }
        else {
          cVar5 = (char)*local_288;
joined_r0x001537e0:
          puVar46 = (uint *)((long)local_288 + 1);
        }
joined_r0x00153890:
      } while (cVar5 != '\0');
    }
LAB_00154574:
    uVar26 = (int)local_288 - (int)puVar51;
    local_27c = uVar20;
    if (uVar26 <= uVar20) {
      local_27c = uVar26;
    }
    uVar42 = 0;
    uVar26 = 0;
    local_270 = (ushort)local_270._1_1_ << 8;
    local_278 = (ushort)local_278._1_1_ << 8;
    uVar20 = 0;
    local_280 = 0;
    break;
  case 0x78:
    pcVar22 = "0123456789abcdefxp";
switchD_0015314c_caseD_58:
    uVar26 = uVar30 >> 3 & 1;
joined_r0x00153774:
    local_270 = (ushort)local_270._1_1_ << 8;
    if (uVar26 != 0) {
      local_270 = 0x3002;
      local_26e = pcVar22[0x10];
    }
    local_27c = 0x440;
    uVar15 = 0x440;
    iVar27 = (int)param_5[3];
    lVar36 = (long)iVar27;
    if ((uVar30 >> 5 & 1) == 0) goto LAB_00153978;
    if ((iVar27 < 0) && (*(int *)(param_5 + 3) = iVar27 + 8, iVar27 + 8 < 1)) {
      uVar37 = *(ulong *)(param_5[1] + lVar36);
    }
    else {
      puVar35 = (ulong *)*param_5;
      *param_5 = (long)(puVar35 + 1);
      uVar37 = *puVar35;
    }
    goto LAB_0015399c;
  }
LAB_0015489c:
  uVar19 = (uint)(byte)local_270;
  uVar39 = local_27c;
  if ((int)local_27c <= (int)uVar20) {
    uVar39 = uVar20;
  }
  uVar20 = (uint)(byte)local_270;
  iVar14 = uVar26 + uVar20 + uVar39 + (uint)(byte)local_278;
  iVar27 = iVar14;
  if (iVar14 <= iVar16) {
    iVar27 = iVar16;
  }
  uVar43 = iVar27 - iVar14;
  uVar39 = uVar39 - local_27c;
  puVar47 = puVar31;
  if (bVar12) {
LAB_001548d8:
    uVar50 = uVar39;
    if (uVar43 + uVar39 == 0) goto LAB_001548e4;
LAB_00154ac4:
    if ((!bVar12) && (0 < (int)uVar43)) {
      do {
        if (param_1 == (code *)0x0) {
LAB_00154cc8:
          uVar39 = 0;
LAB_00154ccc:
          uVar20 = uVar43 - 4;
LAB_00154cd4:
          if (((ulong)__s & 3) != 0) goto code_r0x00154cdc;
          uVar19 = uVar43 - 4;
          if (3 < (int)uVar43) {
            memset(__s,0x20,(ulong)(uVar19 & 0xfffffffc) + 4);
            if (((uVar19 >> 2) + 1 & 7) != 0) {
              iVar16 = -((uVar20 >> 2) + 1 & 7);
              do {
                __s = __s + 1;
                uVar43 = uVar43 - 4;
                bVar13 = iVar16 != -1;
                iVar16 = iVar16 + 1;
              } while (bVar13);
            }
            if (0x1b < uVar19) {
              do {
                uVar43 = uVar43 - 0x20;
                __s = __s + 8;
              } while (3 < (int)uVar43);
            }
            uVar43 = uVar19 & 3;
          }
          if (uVar43 == 0) {
            uVar43 = uVar39;
            if (param_1 != (code *)0x0) goto LAB_00154dc4;
            goto joined_r0x00154ca0;
          }
          memset(__s,0x20,(ulong)uVar43);
          uVar19 = uVar43 - 1;
          puVar46 = __s;
          for (uVar20 = uVar43 & 7; uVar20 != 0; uVar20 = uVar20 - 1) {
            puVar46 = (uint *)((long)puVar46 + 1);
            uVar43 = uVar43 - 1;
          }
          if (6 < uVar19) {
            do {
              puVar46 = puVar46 + 2;
              uVar43 = uVar43 - 8;
            } while (uVar43 != 0);
          }
LAB_00154db8:
          __s = puVar46;
          uVar43 = uVar39;
          if (param_1 == (code *)0x0) goto joined_r0x00154ca0;
          goto LAB_00154dc4;
        }
        uVar20 = ((int)param_3 - (int)__s) + 0x200;
        uVar39 = uVar43 - uVar20;
        if (uVar39 == 0 || (int)uVar43 < (int)uVar20) goto LAB_00154cc8;
        uVar43 = uVar20;
        if (uVar20 != 0) goto LAB_00154ccc;
LAB_00154dc4:
        iVar16 = (int)__s - (int)param_3;
        uVar43 = uVar39;
        if (0x1ff < iVar16 + 1) {
          local_2a4 = local_2a4 + iVar16;
          param_3 = (uint *)(*param_1)(param_3,param_2);
          puVar46 = param_3;
          __s = param_3;
          if (param_3 == (uint *)0x0) goto LAB_0015590c;
        }
joined_r0x00154ca0:
      } while (0 < (int)uVar43);
      uVar20 = (uint)(byte)local_270;
    }
    local_288 = puVar31;
    if (uVar20 != 0) {
      if (param_1 == (code *)0x0) {
        local_270 = local_270 & 0xff00;
        uVar19 = uVar20 - 1;
        for (uVar39 = uVar20 & 3; uVar39 != 0; uVar39 = uVar39 - 1) {
          uVar20 = uVar20 - 1;
          *(char *)__s = (char)*local_288;
          __s = (uint *)((long)__s + 1);
          local_288 = (uint *)((long)local_288 + 1);
        }
        puVar46 = __s;
        if (2 < uVar19) {
          do {
            *(char *)puVar46 = (char)*local_288;
            *(undefined1 *)((long)puVar46 + 1) = *(undefined1 *)((long)local_288 + 1);
            puVar4 = (undefined1 *)((long)local_288 + 3);
            *(undefined1 *)((long)puVar46 + 2) = *(undefined1 *)((long)local_288 + 2);
            local_288 = local_288 + 1;
            __s = puVar46 + 1;
            *(undefined1 *)((long)puVar46 + 3) = *puVar4;
            uVar20 = uVar20 - 4;
            puVar46 = __s;
          } while (uVar20 != 0);
        }
      }
      else {
        do {
          iVar16 = (int)__s - (int)param_3;
          uVar39 = 0x200U - iVar16;
          if ((int)uVar20 <= (int)(0x200U - iVar16)) {
            uVar39 = uVar20;
          }
          local_270 = CONCAT11(local_270._1_1_,(char)uVar20 - (char)uVar39);
          if (uVar39 != 0) {
            uVar20 = uVar39 - 1;
            if ((uVar39 & 3) != 0) {
              iVar16 = -(uVar39 & 3);
              puVar46 = __s;
              do {
                puVar45 = (uint *)((long)local_288 + 1);
                uVar39 = uVar39 - 1;
                bVar13 = iVar16 != -1;
                iVar16 = iVar16 + 1;
                __s = (uint *)((long)puVar46 + 1);
                *(char *)puVar46 = (char)*local_288;
                puVar46 = __s;
                local_288 = puVar45;
              } while (bVar13);
            }
            puVar46 = __s;
            if (2 < uVar20) {
              do {
                *(char *)puVar46 = (char)*local_288;
                *(undefined1 *)((long)puVar46 + 1) = *(undefined1 *)((long)local_288 + 1);
                puVar4 = (undefined1 *)((long)local_288 + 3);
                *(undefined1 *)((long)puVar46 + 2) = *(undefined1 *)((long)local_288 + 2);
                local_288 = local_288 + 1;
                __s = puVar46 + 1;
                *(undefined1 *)((long)puVar46 + 3) = *puVar4;
                uVar39 = uVar39 - 4;
                puVar46 = __s;
              } while (uVar39 != 0);
            }
            iVar16 = (int)__s - (int)param_3;
          }
          if (0x1ff < iVar16 + 1) {
            local_2a4 = local_2a4 + iVar16;
            param_3 = (uint *)(*param_1)(param_3,param_2);
            puVar46 = param_3;
            if (param_3 == (uint *)0x0) goto LAB_0015590c;
            __s = param_3;
          }
          uVar20 = (uint)(byte)local_270;
        } while (uVar20 != 0);
      }
    }
    uVar39 = uVar42 >> 0x18;
    uVar20 = local_27c;
    if ((uVar30 >> 6 & 1) != 0) {
      uVar19 = uVar50 + (uVar42 & 0xffffff);
      uVar42 = uVar39 + 1;
      uVar29 = 0;
      if (uVar42 != 0) {
        uVar29 = uVar19 / uVar42;
      }
      uVar42 = uVar39 + (uVar29 * uVar42 - uVar19);
      if ((int)uVar50 < 1) goto joined_r0x00154e9c;
LAB_00155184:
      do {
        uVar20 = uVar50;
        if ((param_1 != (code *)0x0) &&
           (uVar20 = ((int)param_3 - (int)__s) + 0x200, (int)uVar50 <= (int)uVar20)) {
          uVar20 = uVar50;
        }
        if ((uVar30 >> 6 & 1) == 0) {
          puVar46 = __s;
          if (uVar20 != 0) {
            uVar19 = uVar20 - 4;
            uVar29 = uVar20;
LAB_001551b0:
            uVar15 = (ulong)uVar29;
            if (((ulong)__s & 3) != 0) goto code_r0x001551b8;
            uVar6 = uVar29 - 4;
            if (3 < (int)uVar29) {
              memset(__s,0x30,(ulong)(uVar6 & 0xfffffffc) + 4);
              if (((uVar6 >> 2) + 1 & 7) != 0) {
                iVar16 = -((uVar19 >> 2) + 1 & 7);
                do {
                  __s = __s + 1;
                  uVar15 = (ulong)((int)uVar15 - 4);
                  bVar13 = iVar16 != -1;
                  iVar16 = iVar16 + 1;
                } while (bVar13);
              }
              if (0x1b < uVar6) {
                do {
                  uVar19 = (int)uVar15 - 0x20;
                  uVar15 = (ulong)uVar19;
                  __s = __s + 8;
                } while (3 < (int)uVar19);
              }
              uVar15 = (ulong)(uVar6 & 3);
            }
            uVar19 = (uint)uVar15;
            goto joined_r0x00155210;
          }
        }
        else {
          uVar15 = (ulong)uVar20;
          uVar19 = uVar20;
joined_r0x00155210:
          puVar46 = __s;
          if (uVar19 != 0) {
            uVar19 = (uint)uVar15;
            if ((uVar30 >> 6 & 1) == 0) {
              memset(__s,0x30,uVar15);
              uVar29 = uVar19 & 7;
              if ((uVar15 & 7) != 0) {
                do {
                  __s = (uint *)((long)__s + 1);
                  uVar15 = (ulong)((int)uVar15 - 1);
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              puVar46 = __s;
              if (6 < uVar19 - 1) {
                do {
                  __s = __s + 2;
                  uVar19 = (int)uVar15 - 8;
                  uVar15 = (ulong)uVar19;
                  puVar46 = __s;
                } while (uVar19 != 0);
              }
            }
            else {
              uVar29 = uVar19 & 3;
              if ((uVar15 & 3) != 0) {
                do {
                  uVar17 = DAT_04484094;
                  uVar6 = 0;
                  if (uVar42 != uVar39) {
                    uVar17 = 0x30;
                    uVar6 = uVar42 + 1;
                  }
                  uVar42 = uVar6;
                  uVar15 = (ulong)((int)uVar15 - 1);
                  uVar29 = uVar29 - 1;
                  __s = (uint *)((long)puVar46 + 1);
                  *(undefined1 *)puVar46 = uVar17;
                  puVar46 = __s;
                } while (uVar29 != 0);
              }
              puVar46 = __s;
              if (2 < uVar19 - 1) {
                do {
                  uVar19 = 0;
                  uVar17 = DAT_04484094;
                  if (uVar42 != uVar39) {
                    uVar19 = uVar42 + 1;
                    uVar17 = 0x30;
                  }
                  *(undefined1 *)__s = uVar17;
                  uVar17 = DAT_04484094;
                  if (uVar19 != uVar39) {
                    uVar17 = 0x30;
                  }
                  *(undefined1 *)((long)__s + 1) = uVar17;
                  uVar42 = 0;
                  if (uVar19 != uVar39) {
                    uVar42 = uVar19 + 1;
                  }
                  uVar19 = 0;
                  uVar17 = DAT_04484094;
                  if (uVar42 != uVar39) {
                    uVar19 = uVar42 + 1;
                    uVar17 = 0x30;
                  }
                  *(undefined1 *)((long)__s + 2) = uVar17;
                  uVar17 = DAT_04484094;
                  if (uVar19 != uVar39) {
                    uVar17 = 0x30;
                  }
                  puVar46 = __s + 1;
                  uVar42 = 0;
                  if (uVar19 != uVar39) {
                    uVar42 = uVar19 + 1;
                  }
                  uVar19 = (int)uVar15 - 4;
                  uVar15 = (ulong)uVar19;
                  *(undefined1 *)((long)__s + 3) = uVar17;
                  __s = puVar46;
                } while (uVar19 != 0);
              }
            }
          }
        }
joined_r0x001553a0:
        __s = puVar46;
        if ((param_1 != (code *)0x0) && (iVar16 = (int)puVar46 - (int)param_3, 0x1ff < iVar16 + 1))
        {
          local_2a4 = local_2a4 + iVar16;
          param_3 = (uint *)(*param_1)(param_3,param_2);
          if (param_3 == (uint *)0x0) {
            puVar46 = param_3;
            goto LAB_0015590c;
          }
          __s = param_3;
        }
        uVar50 = uVar50 - uVar20;
      } while (0 < (int)uVar50);
      uVar19 = (uint)(byte)local_270;
      uVar20 = local_27c;
      if (uVar19 == 0) goto joined_r0x00154e9c;
      goto LAB_001548f4;
    }
    uVar42 = 0;
    if (0 < (int)uVar50) goto LAB_00155184;
  }
  else {
    if ((uVar30 >> 4 & 1) == 0) {
      uVar30 = 0;
      goto LAB_001548d8;
    }
    uVar50 = uVar43;
    if ((int)uVar43 <= (int)uVar39) {
      uVar50 = uVar39;
    }
    uVar43 = 0;
    if (uVar50 != 0) goto LAB_00154ac4;
LAB_001548e4:
    uVar20 = local_27c;
    if ((byte)local_270 != 0) {
LAB_001548f4:
      local_288 = puVar31;
      if (param_1 == (code *)0x0) {
        local_270 = local_270 & 0xff00;
        uVar42 = uVar19 - 1;
        for (uVar30 = uVar19 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
          uVar19 = uVar19 - 1;
          *(char *)__s = (char)*local_288;
          __s = (uint *)((long)__s + 1);
          local_288 = (uint *)((long)local_288 + 1);
        }
        puVar46 = __s;
        puVar47 = local_288;
        uVar20 = local_27c;
        if (2 < uVar42) {
          do {
            *(char *)puVar46 = (char)*local_288;
            *(undefined1 *)((long)puVar46 + 1) = *(undefined1 *)((long)local_288 + 1);
            puVar4 = (undefined1 *)((long)local_288 + 3);
            *(undefined1 *)((long)puVar46 + 2) = *(undefined1 *)((long)local_288 + 2);
            local_288 = local_288 + 1;
            __s = puVar46 + 1;
            *(undefined1 *)((long)puVar46 + 3) = *puVar4;
            uVar19 = uVar19 - 4;
            puVar46 = __s;
            puVar47 = local_288;
          } while (uVar19 != 0);
        }
      }
      else {
        do {
          iVar16 = (int)__s - (int)param_3;
          uVar30 = 0x200U - iVar16;
          if ((int)uVar19 <= (int)(0x200U - iVar16)) {
            uVar30 = uVar19;
          }
          local_270 = CONCAT11(local_270._1_1_,(char)uVar19 - (char)uVar30);
          if (uVar30 != 0) {
            uVar20 = uVar30 - 1;
            if ((uVar30 & 3) != 0) {
              iVar16 = -(uVar30 & 3);
              puVar46 = __s;
              do {
                puVar47 = (uint *)((long)local_288 + 1);
                uVar30 = uVar30 - 1;
                bVar13 = iVar16 != -1;
                iVar16 = iVar16 + 1;
                __s = (uint *)((long)puVar46 + 1);
                *(char *)puVar46 = (char)*local_288;
                puVar46 = __s;
                local_288 = puVar47;
              } while (bVar13);
            }
            puVar46 = __s;
            if (2 < uVar20) {
              do {
                *(char *)puVar46 = (char)*local_288;
                *(undefined1 *)((long)puVar46 + 1) = *(undefined1 *)((long)local_288 + 1);
                puVar4 = (undefined1 *)((long)local_288 + 3);
                *(undefined1 *)((long)puVar46 + 2) = *(undefined1 *)((long)local_288 + 2);
                local_288 = local_288 + 1;
                __s = puVar46 + 1;
                *(undefined1 *)((long)puVar46 + 3) = *puVar4;
                uVar30 = uVar30 - 4;
                puVar46 = __s;
              } while (uVar30 != 0);
            }
            iVar16 = (int)__s - (int)param_3;
          }
          if (0x1ff < iVar16 + 1) {
            local_2a4 = local_2a4 + iVar16;
            param_3 = (uint *)(*param_1)(param_3,param_2);
            puVar46 = param_3;
            if (param_3 == (uint *)0x0) goto LAB_0015590c;
            __s = param_3;
          }
          uVar19 = (uint)(byte)local_270;
          puVar47 = local_288;
          uVar20 = local_27c;
        } while (uVar19 != 0);
      }
    }
  }
joined_r0x00154e9c:
  local_288 = puVar47;
  local_27c = uVar20;
  if (uVar20 != 0) {
    if (param_1 == (code *)0x0) {
      if (3 < (int)uVar20) {
        uVar30 = (uVar20 - 4 >> 2) + 1 & 7;
        uVar42 = uVar20;
        if (uVar30 != 0) {
          puVar46 = __s;
          puVar47 = puVar51;
          do {
            puVar51 = puVar47 + 1;
            uVar42 = uVar42 - 4;
            uVar30 = uVar30 - 1;
            __s = puVar46 + 1;
            *puVar46 = *puVar47;
            puVar46 = __s;
            puVar47 = puVar51;
          } while (uVar30 != 0);
        }
        if (0x1b < uVar20 - 4) {
          do {
            *__s = *puVar51;
            __s[1] = puVar51[1];
            __s[2] = puVar51[2];
            __s[3] = puVar51[3];
            __s[4] = puVar51[4];
            __s[5] = puVar51[5];
            __s[6] = puVar51[6];
            puVar46 = puVar51 + 7;
            uVar42 = uVar42 - 0x20;
            puVar51 = puVar51 + 8;
            __s[7] = *puVar46;
            __s = __s + 8;
          } while (3 < (int)uVar42);
        }
        uVar20 = uVar20 & 3;
      }
      if (uVar20 != 0) {
        uVar42 = uVar20 - 1;
        for (uVar30 = uVar20 & 7; uVar30 != 0; uVar30 = uVar30 - 1) {
          uVar20 = uVar20 - 1;
          *(char *)__s = (char)*puVar51;
          __s = (uint *)((long)__s + 1);
          puVar51 = (uint *)((long)puVar51 + 1);
        }
        puVar46 = __s;
        if (6 < uVar42) {
          do {
            *(char *)puVar46 = (char)*puVar51;
            *(undefined *)((long)puVar46 + 1) = *(undefined *)((long)puVar51 + 1);
            *(undefined *)((long)puVar46 + 2) = *(undefined *)((long)puVar51 + 2);
            *(undefined *)((long)puVar46 + 3) = *(undefined *)((long)puVar51 + 3);
            *(char *)(puVar46 + 1) = (char)puVar51[1];
            *(undefined *)((long)puVar46 + 5) = *(undefined *)((long)puVar51 + 5);
            *(undefined *)((long)puVar46 + 6) = *(undefined *)((long)puVar51 + 6);
            __s = puVar46 + 2;
            uVar20 = uVar20 - 8;
            *(undefined *)((long)puVar46 + 7) = *(undefined *)((long)puVar51 + 7);
            puVar51 = puVar51 + 2;
            puVar46 = __s;
          } while (uVar20 != 0);
        }
      }
    }
    else {
      do {
        iVar16 = (int)param_3;
        uVar30 = (iVar16 - (int)__s) + 0x200;
        if ((int)uVar20 <= (int)uVar30) {
          uVar30 = uVar20;
        }
        if ((int)uVar30 < 4) {
          uVar42 = uVar30;
          if (uVar30 != 0) goto LAB_0015507c;
LAB_00155120:
          iVar16 = (int)__s - iVar16;
        }
        else {
          uVar42 = (uVar30 - 4 >> 2) + 1 & 7;
          uVar39 = uVar30;
          if (uVar42 != 0) {
            iVar14 = -uVar42;
            puVar46 = __s;
            puVar47 = puVar51;
            do {
              puVar51 = puVar47 + 1;
              uVar39 = uVar39 - 4;
              bVar13 = iVar14 != -1;
              iVar14 = iVar14 + 1;
              __s = puVar46 + 1;
              *puVar46 = *puVar47;
              puVar46 = __s;
              puVar47 = puVar51;
            } while (bVar13);
          }
          if (0x1b < uVar30 - 4) {
            do {
              *__s = *puVar51;
              __s[1] = puVar51[1];
              __s[2] = puVar51[2];
              __s[3] = puVar51[3];
              __s[4] = puVar51[4];
              __s[5] = puVar51[5];
              __s[6] = puVar51[6];
              puVar46 = puVar51 + 7;
              uVar39 = uVar39 - 0x20;
              puVar51 = puVar51 + 8;
              __s[7] = *puVar46;
              __s = __s + 8;
            } while (3 < (int)uVar39);
          }
          uVar42 = uVar30 & 3;
          if ((uVar30 & 3) == 0) goto LAB_00155120;
LAB_0015507c:
          uVar19 = uVar42 - 1;
          for (uVar39 = uVar42 & 7; uVar39 != 0; uVar39 = uVar39 - 1) {
            uVar42 = uVar42 - 1;
            *(char *)__s = (char)*puVar51;
            __s = (uint *)((long)__s + 1);
            puVar51 = (uint *)((long)puVar51 + 1);
          }
          puVar46 = __s;
          if (uVar19 < 7) goto LAB_00155120;
          do {
            *(char *)puVar46 = (char)*puVar51;
            *(undefined *)((long)puVar46 + 1) = *(undefined *)((long)puVar51 + 1);
            *(undefined *)((long)puVar46 + 2) = *(undefined *)((long)puVar51 + 2);
            *(undefined *)((long)puVar46 + 3) = *(undefined *)((long)puVar51 + 3);
            *(char *)(puVar46 + 1) = (char)puVar51[1];
            *(undefined *)((long)puVar46 + 5) = *(undefined *)((long)puVar51 + 5);
            *(undefined *)((long)puVar46 + 6) = *(undefined *)((long)puVar51 + 6);
            puVar49 = (undefined *)((long)puVar51 + 7);
            puVar51 = puVar51 + 2;
            __s = puVar46 + 2;
            uVar42 = uVar42 - 8;
            *(undefined *)((long)puVar46 + 7) = *puVar49;
            puVar46 = __s;
          } while (uVar42 != 0);
          iVar16 = (int)__s - iVar16;
        }
        if (0x1ff < iVar16 + 1) {
          local_2a4 = local_2a4 + iVar16;
          param_3 = (uint *)(*param_1)(param_3,param_2);
          puVar46 = param_3;
          if (param_3 == (uint *)0x0) goto LAB_0015590c;
          __s = param_3;
        }
        uVar20 = uVar20 - uVar30;
      } while (uVar20 != 0);
    }
  }
joined_r0x00154fc4:
  if (uVar26 != 0) {
    if (param_1 == (code *)0x0) {
LAB_00155424:
      uVar20 = 0;
    }
    else {
      uVar30 = ((int)param_3 - (int)__s) + 0x200;
      uVar20 = uVar26 - uVar30;
      if (uVar20 == 0 || (int)uVar26 < (int)uVar30) goto LAB_00155424;
      uVar26 = uVar30;
      if (uVar30 == 0) {
LAB_0015551c:
        iVar16 = (int)__s - (int)param_3;
        uVar26 = uVar20;
        if (0x1ff < iVar16 + 1) {
          local_2a4 = local_2a4 + iVar16;
          __s = (uint *)(*param_1)(param_3,param_2);
          puVar46 = __s;
          param_3 = __s;
          if (__s == (uint *)0x0) goto LAB_0015590c;
        }
        goto joined_r0x00154fc4;
      }
    }
    uVar30 = uVar26 - 4;
    puVar46 = __s;
LAB_0015542c:
    if (((ulong)puVar46 & 3) != 0) goto code_r0x00155434;
    uVar42 = uVar26 - 4;
    if (3 < (int)uVar26) {
      memset(puVar46,0x30,(ulong)(uVar42 & 0xfffffffc) + 4);
      if (((uVar42 >> 2) + 1 & 7) != 0) {
        iVar16 = -((uVar30 >> 2) + 1 & 7);
        do {
          puVar46 = puVar46 + 1;
          uVar26 = uVar26 - 4;
          bVar13 = iVar16 != -1;
          iVar16 = iVar16 + 1;
        } while (bVar13);
      }
      if (0x1b < uVar42) {
        do {
          uVar26 = uVar26 - 0x20;
          puVar46 = puVar46 + 8;
        } while (3 < (int)uVar26);
      }
      uVar26 = uVar42 & 3;
    }
    __s = puVar46;
    if (uVar26 != 0) {
      memset(puVar46,0x30,(ulong)uVar26);
      uVar42 = uVar26 - 1;
      for (uVar30 = uVar26 & 7; uVar30 != 0; uVar30 = uVar30 - 1) {
        puVar46 = (uint *)((long)puVar46 + 1);
        uVar26 = uVar26 - 1;
      }
      __s = puVar46;
      if (6 < uVar42) {
        do {
          puVar46 = puVar46 + 2;
          uVar26 = uVar26 - 8;
          __s = puVar46;
        } while (uVar26 != 0);
      }
    }
joined_r0x0015556c:
    uVar26 = uVar20;
    if (param_1 != (code *)0x0) goto LAB_0015551c;
    goto joined_r0x00154fc4;
  }
  uVar30 = (uint)(byte)local_278;
  local_288 = puVar32;
  if ((byte)local_278 != 0) {
    if (param_1 == (code *)0x0) {
      uVar26 = uVar30 & 3;
      bVar13 = (local_278 & 3) != 0;
      local_278 = local_278 & 0xff00;
      uVar20 = uVar30 - 1;
      while (bVar13) {
        uVar30 = uVar30 - 1;
        uVar26 = uVar26 - 1;
        bVar13 = uVar26 != 0;
        *(char *)__s = (char)*local_288;
        __s = (uint *)((long)__s + 1);
        local_288 = (uint *)((long)local_288 + 1);
      }
      puVar46 = __s;
      if (2 < uVar20) {
        do {
          *(char *)puVar46 = (char)*local_288;
          *(undefined *)((long)puVar46 + 1) = *(undefined *)((long)local_288 + 1);
          puVar49 = (undefined *)((long)local_288 + 3);
          *(undefined *)((long)puVar46 + 2) = *(undefined *)((long)local_288 + 2);
          local_288 = local_288 + 1;
          __s = puVar46 + 1;
          *(undefined *)((long)puVar46 + 3) = *puVar49;
          uVar30 = uVar30 - 4;
          puVar46 = __s;
        } while (uVar30 != 0);
      }
    }
    else {
      do {
        iVar16 = (int)__s - (int)param_3;
        uVar26 = 0x200U - iVar16;
        if ((int)uVar30 <= (int)(0x200U - iVar16)) {
          uVar26 = uVar30;
        }
        local_278 = CONCAT11(local_278._1_1_,(char)uVar30 - (char)uVar26);
        if (uVar26 != 0) {
          uVar30 = uVar26 - 1;
          if ((uVar26 & 3) != 0) {
            iVar16 = -(uVar26 & 3);
            puVar46 = __s;
            do {
              puVar51 = (uint *)((long)local_288 + 1);
              uVar26 = uVar26 - 1;
              bVar13 = iVar16 != -1;
              iVar16 = iVar16 + 1;
              __s = (uint *)((long)puVar46 + 1);
              *(char *)puVar46 = (char)*local_288;
              puVar46 = __s;
              local_288 = puVar51;
            } while (bVar13);
          }
          puVar46 = __s;
          if (2 < uVar30) {
            do {
              *(char *)puVar46 = (char)*local_288;
              *(undefined *)((long)puVar46 + 1) = *(undefined *)((long)local_288 + 1);
              puVar49 = (undefined *)((long)local_288 + 3);
              *(undefined *)((long)puVar46 + 2) = *(undefined *)((long)local_288 + 2);
              local_288 = local_288 + 1;
              __s = puVar46 + 1;
              *(undefined *)((long)puVar46 + 3) = *puVar49;
              uVar26 = uVar26 - 4;
              puVar46 = __s;
            } while (uVar26 != 0);
          }
          iVar16 = (int)__s - (int)param_3;
        }
        if (0x1ff < iVar16 + 1) {
          local_2a4 = local_2a4 + iVar16;
          param_3 = (uint *)(*param_1)(param_3,param_2);
          puVar46 = param_3;
          if (param_3 == (uint *)0x0) goto LAB_0015590c;
          __s = param_3;
        }
        uVar30 = (uint)(byte)local_278;
      } while (uVar30 != 0);
    }
  }
  if ((bVar12) && (0 < (int)uVar43)) {
    do {
      if (param_1 == (code *)0x0) {
LAB_00155754:
        uVar26 = 0;
LAB_00155758:
        uVar30 = uVar43 - 4;
LAB_00155760:
        if (((ulong)__s & 3) != 0) goto code_r0x00155768;
        uVar20 = uVar43 - 4;
        if (3 < (int)uVar43) {
          memset(__s,0x20,(ulong)(uVar20 & 0xfffffffc) + 4);
          if (((uVar20 >> 2) + 1 & 7) != 0) {
            iVar16 = -((uVar30 >> 2) + 1 & 7);
            do {
              __s = __s + 1;
              uVar43 = uVar43 - 4;
              bVar12 = iVar16 != -1;
              iVar16 = iVar16 + 1;
            } while (bVar12);
          }
          if (0x1b < uVar20) {
            do {
              uVar43 = uVar43 - 0x20;
              __s = __s + 8;
            } while (3 < (int)uVar43);
          }
          uVar43 = uVar20 & 3;
        }
        if (uVar43 == 0) {
          uVar43 = uVar26;
          if (param_1 != (code *)0x0) goto LAB_0015584c;
          goto LAB_0015572c;
        }
        memset(__s,0x20,(ulong)uVar43);
        uVar20 = uVar43 - 1;
        puVar46 = __s;
        for (uVar30 = uVar43 & 7; uVar30 != 0; uVar30 = uVar30 - 1) {
          uVar43 = uVar43 - 1;
          puVar46 = (uint *)((long)puVar46 + 1);
        }
        if (6 < uVar20) {
          do {
            uVar43 = uVar43 - 8;
            puVar46 = puVar46 + 2;
          } while (uVar43 != 0);
        }
LAB_00155840:
        __s = puVar46;
        uVar43 = uVar26;
        if (param_1 == (code *)0x0) goto LAB_0015572c;
        goto LAB_0015584c;
      }
      uVar30 = ((int)param_3 - (int)__s) + 0x200;
      uVar26 = uVar43 - uVar30;
      if (uVar26 == 0 || (int)uVar43 < (int)uVar30) goto LAB_00155754;
      uVar43 = uVar30;
      if (uVar30 != 0) goto LAB_00155758;
LAB_0015584c:
      iVar16 = (int)__s - (int)param_3;
      uVar43 = uVar26;
      if (0x1ff < iVar16 + 1) {
        local_2a4 = local_2a4 + iVar16;
        param_3 = (uint *)(*param_1)(param_3,param_2);
        puVar46 = param_3;
        if (param_3 == (uint *)0x0) goto LAB_0015590c;
        __s = param_3;
      }
LAB_0015572c:
    } while (uVar43 != 0);
  }
LAB_001558a0:
  param_4 = (uint *)(pbVar40 + 1);
  goto joined_r0x00152d80;
code_r0x00154264:
  uVar42 = uVar42 - 1;
  uVar39 = uVar39 - 1;
  puVar46 = (uint *)((long)puVar51 + 1);
  *(undefined1 *)puVar51 = 0x30;
  puVar51 = puVar46;
  if (uVar42 == 0) goto joined_r0x001545e8;
  goto LAB_0015425c;
code_r0x00154480:
  uVar42 = uVar42 - 1;
  uVar39 = uVar39 - 1;
  puVar48 = puVar49 + 1;
  *puVar49 = 0x30;
  puVar49 = puVar48;
  if (uVar42 == 0) goto LAB_00154834;
  goto LAB_00154478;
switchD_0015314c_caseD_42:
  local_270 = (ushort)local_270._1_1_ << 8;
  if ((uVar30 >> 3 & 1) != 0) {
    local_270 = 0x3002;
    local_26e = pcVar22[0xb];
  }
  uVar15 = 0x180;
  local_27c = 0x180;
  lVar36 = (long)(int)param_5[3];
LAB_00153978:
  if (((int)lVar36 < 0) && (iVar27 = (int)lVar36 + 8, *(int *)(param_5 + 3) = iVar27, iVar27 < 1)) {
    puVar46 = (uint *)(param_5[1] + lVar36);
  }
  else {
    puVar46 = (uint *)*param_5;
    *param_5 = (long)(puVar46 + 2);
  }
  uVar37 = (ulong)*puVar46;
LAB_0015399c:
  local_280 = 0;
  local_278 = (ushort)local_278._1_1_ << 8;
  if ((uVar37 == 0) && (local_270 = local_270 & 0xff00, uVar20 == 0)) {
    uVar42 = 0;
    uVar26 = 0;
    local_27c = 0;
  }
  else {
    if ((uVar30 >> 6 & 1) == 0) {
      puVar51 = (uint *)&bStack_69;
      while( true ) {
        *(char *)puVar51 = pcVar22[uVar37 & (long)~(-1 << (uVar15 >> 8))];
        uVar15 = (ulong)local_27c;
        uVar37 = uVar37 >> (local_27c >> 8);
        if ((uVar37 == 0) && (uVar39 = iVar14 - (int)puVar51, (int)uVar20 <= (int)uVar39)) break;
        puVar51 = (uint *)((long)puVar51 + -1);
      }
    }
    else {
      while( true ) {
        puVar46 = puVar51;
        puVar51 = (uint *)((long)puVar46 + -1);
        *(char *)puVar51 = pcVar22[uVar37 & (long)~(-1 << (ulong)((uint)(uVar15 >> 8) & 0x1f))];
        uVar37 = uVar37 >> ((ulong)(local_27c >> 8) & 0x3f);
        if ((uVar37 == 0) && (uVar39 = iVar14 - (int)puVar51, (int)uVar20 <= (int)uVar39)) break;
        local_27c = local_27c + 1;
        uVar15 = (ulong)local_27c;
        if (((local_27c ^ local_27c >> 4) & 0xf) == 0) {
          local_27c = local_27c & 0xfffffff0;
          puVar51 = (uint *)((long)puVar46 + -2);
          *(undefined1 *)puVar51 = DAT_04484094;
          uVar15 = (ulong)local_27c;
        }
      }
    }
    uVar42 = (local_27c & 0xf0) * 0x100000 + uVar39;
    uVar26 = 0;
    local_27c = uVar39;
  }
  goto LAB_0015489c;
code_r0x00154cdc:
  uVar43 = uVar43 - 1;
  uVar20 = uVar20 - 1;
  puVar46 = (uint *)((long)__s + 1);
  *(undefined1 *)__s = 0x20;
  __s = puVar46;
  if (uVar43 == 0) goto LAB_00154db8;
  goto LAB_00154cd4;
code_r0x001551b8:
  uVar29 = uVar29 - 1;
  uVar19 = uVar19 - 1;
  puVar46 = (uint *)((long)__s + 1);
  *(undefined1 *)__s = 0x30;
  __s = puVar46;
  if (uVar29 == 0) goto joined_r0x001553a0;
  goto LAB_001551b0;
code_r0x00155434:
  uVar26 = uVar26 - 1;
  uVar30 = uVar30 - 1;
  __s = (uint *)((long)puVar46 + 1);
  *(undefined1 *)puVar46 = 0x30;
  puVar46 = __s;
  if (uVar26 == 0) goto joined_r0x0015556c;
  goto LAB_0015542c;
code_r0x00155768:
  uVar43 = uVar43 - 1;
  uVar30 = uVar30 - 1;
  puVar46 = (uint *)((long)__s + 1);
  *(undefined1 *)__s = 0x20;
  __s = puVar46;
  if (uVar43 == 0) goto LAB_00155840;
  goto LAB_00155760;
LAB_001558cc:
  if (param_1 == (code *)0x0) {
    *(undefined1 *)puVar46 = 0;
  }
  else {
    iVar16 = (int)puVar46 - (int)param_3;
    if (0x1ff < iVar16 + 0x1ff) {
      local_2a4 = local_2a4 + iVar16;
      param_3 = (uint *)(*param_1)(param_3,param_2);
      puVar46 = param_3;
      if (param_3 == (uint *)0x0) {
LAB_0015590c:
        param_3 = (uint *)0x0;
      }
    }
  }
  return (ulong)(uint)(local_2a4 + ((int)puVar46 - (int)param_3));
}


