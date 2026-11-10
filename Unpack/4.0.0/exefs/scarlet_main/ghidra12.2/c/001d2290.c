/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d2290; name: FUN_001d2290
 */


int FUN_001d2290(long *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  char *pcVar14;
  char *__s;
  char *pcVar15;
  size_t sVar16;
  long *plVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  byte bVar22;
  ushort uVar23;
  undefined4 uVar24;
  long lVar25;
  undefined1 *puVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  undefined *puVar31;
  char *pcVar32;
  ulong *puVar33;
  undefined8 *puVar34;
  char *pcVar35;
  undefined1 *puVar36;
  undefined *puVar37;
  undefined1 *puVar38;
  long local_88;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  lVar27 = *param_1;
  pcVar32 = *(char **)(lVar27 + 0x1580);
  pcVar35 = *(char **)(lVar27 + 0x1588);
  local_68 = 0;
  local_70 = 0;
  lVar28 = param_1[0x1a];
  iVar10 = *(int *)(lVar27 + 0xa38);
  *param_2 = 1;
  if ((int)param_1[0x46] < 0x14) {
    if (((int)param_1[0xcd] != 2) &&
       (((int)param_1[0xcd] == 3 || (*(long *)(*param_1 + 0xa40) == 5)))) {
      *(undefined4 *)(param_1 + 0x46) = 0x14;
      iVar7 = FUN_001d7c34(param_1,0,0);
      goto LAB_001d232c;
    }
  }
  else {
    iVar7 = FUN_001d7a50(param_1);
LAB_001d232c:
    if (iVar7 != 0) {
      return iVar7;
    }
  }
  plVar30 = *(long **)(lVar27 + 0x1e8);
  if ((*(byte *)(lVar27 + 0x15a4) >> 1 & 1) == 0) {
    FUN_001ec308(*(undefined8 *)(lVar27 + 0x1148));
    lVar11 = FUN_001ec328(param_1[0x1a]);
    *(long *)(lVar27 + 0x1148) = lVar11;
    if (lVar11 == 0) {
      return 0x1b;
    }
    *(int *)(lVar27 + 0x1150) = (int)param_1[0x33];
  }
  if (((*(byte *)(param_1[0x84] + 0x80) & 7) != 0) && ((*(byte *)(lVar27 + 0xf43) & 2) != 0)) {
    iVar10 = 5;
  }
  puVar37 = *(undefined **)(lVar27 + 0xcb0);
  if (puVar37 == (undefined *)0x0) {
    if ((*(byte *)(lVar27 + 0xf43) & 1) == 0) {
      if (iVar10 - 2U < 6) {
        puVar37 = (&PTR_DAT_04484700)[(int)(iVar10 - 2U)];
      }
      else {
        puVar37 = &DAT_03c3fef4;
      }
    }
    else {
      puVar37 = &DAT_03bdfd5f;
    }
  }
  lVar11 = FUN_001e0eb4(param_1,"User-Agent");
  if (lVar11 != 0) {
    FUN_001ec308(param_1[0x8c]);
    param_1[0x8c] = 0;
  }
  if ((pcVar35 == (char *)0x0) || (*pcVar35 == '\0')) {
    pcVar12 = (char *)0x0;
  }
  else {
    pcVar12 = (char *)FUN_001ce400("%s?%s",pcVar32,pcVar35);
    if (pcVar12 == (char *)0x0) {
      return 0x1b;
    }
  }
  pcVar14 = pcVar32;
  if (pcVar12 != (char *)0x0) {
    pcVar14 = pcVar12;
  }
  iVar7 = FUN_001d4158(param_1,puVar37,pcVar14,0);
  FUN_001ec308(pcVar12);
  if (iVar7 != 0) {
    return iVar7;
  }
  if (((((*(byte *)(lVar27 + 0x1260) & 3) == 2) || ((*(byte *)(lVar27 + 0x1280) & 3) == 2)) &&
      (iVar10 != 1)) && (iVar10 != 6)) {
    uVar8 = *(uint *)((long)param_1 + 0x3fc) | 0x8000;
  }
  else {
    uVar8 = *(uint *)((long)param_1 + 0x3fc) & 0xffff7fff;
  }
  *(uint *)((long)param_1 + 0x3fc) = uVar8;
  FUN_001ec308(param_1[0x90]);
  param_1[0x90] = 0;
  if ((*(long *)(lVar27 + 0xf50) == 0) || (lVar11 = FUN_001e0eb4(param_1,"Referer"), lVar11 != 0)) {
    param_1[0x90] = 0;
  }
  else {
    lVar11 = FUN_001ce400("Referer: %s\r\n",*(undefined8 *)(lVar27 + 0xf50));
    param_1[0x90] = lVar11;
    if (lVar11 == 0) {
      return 0x1b;
    }
  }
  if ((*(long *)(lVar27 + 0xca0) == 0) || (lVar11 = FUN_001e0eb4(param_1,"Cookie"), lVar11 != 0)) {
    local_88 = 0;
  }
  else {
    local_88 = *(long *)(lVar27 + 0xca0);
  }
  lVar11 = FUN_001e0eb4(param_1,"Accept-Encoding");
  if ((lVar11 == 0) && (*(long *)(lVar27 + 0xcc8) != 0)) {
    FUN_001ec308(param_1[0x8d]);
    param_1[0x8d] = 0;
    lVar11 = FUN_001ce400("Accept-Encoding: %s\r\n",*(undefined8 *)(lVar27 + 0xcc8));
    param_1[0x8d] = lVar11;
    if (lVar11 == 0) {
      return 0x1b;
    }
  }
  else {
    FUN_001ec308(param_1[0x8d]);
    param_1[0x8d] = 0;
  }
  lVar11 = FUN_001e0eb4(param_1,&DAT_03bec9fa);
  if ((lVar11 == 0) && ((*(byte *)(lVar27 + 0xf42) >> 3 & 1) != 0)) {
    lVar11 = FUN_001e0eb4(param_1,"Connection");
    FUN_001ec308(param_1[0x94]);
    pcVar12 = "";
    param_1[0x94] = 0;
    if (lVar11 == 0) {
      puVar31 = &DAT_03c886bc;
      pcVar14 = (char *)0x0;
    }
    else {
      pcVar12 = (char *)FUN_001d3cc0(lVar11);
      if (pcVar12 == (char *)0x0) {
        return 0x1b;
      }
      puVar31 = &DAT_03c886bc;
      if (*pcVar12 != '\0') {
        puVar31 = &DAT_03c82382;
      }
      pcVar14 = pcVar12;
    }
    lVar11 = FUN_001ce400("Connection: %s%sTE\r\nTE: gzip\r\n",pcVar12,puVar31);
    param_1[0x94] = lVar11;
    FUN_001ec308(pcVar14);
    if (param_1[0x94] == 0) {
      return 0x1b;
    }
  }
  if (iVar10 == 3) {
    plVar17 = plVar30 + 5;
    FUN_001cb790(plVar17);
    iVar7 = FUN_001d72c8(lVar27,plVar17,*(undefined8 *)(lVar27 + 0x818),
                         *(undefined8 *)(lVar27 + 0x1528));
    if (iVar7 != 0) {
      return iVar7;
    }
LAB_001d2664:
    *plVar30 = (long)plVar17;
    lVar11 = FUN_001e0eb4(param_1,"Content-Type");
    *(uint *)(*plVar30 + 0x80) = *(uint *)(*plVar30 + 0x80) | 2;
    if (lVar11 == 0) {
      lVar11 = *plVar30;
      pcVar12 = "multipart/form-data";
      if (*(int *)(lVar11 + 0x18) != 4) {
        pcVar12 = (char *)0x0;
      }
    }
    else {
      pcVar12 = (char *)(lVar11 + 0xc);
      do {
        pcVar12 = pcVar12 + 1;
      } while (*pcVar12 == ' ');
      lVar11 = *plVar30;
    }
    FUN_001cbedc(lVar11,*(undefined8 *)(lVar27 + 0x808),0);
    iVar7 = FUN_001ccd24(*plVar30,pcVar12,0,1);
    FUN_001cbedc(*plVar30,0,0);
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = FUN_001cc9fc(*plVar30);
    if (iVar7 != 0) {
      return iVar7;
    }
    lVar11 = FUN_001ccaa4(*plVar30);
    plVar30[1] = lVar11;
  }
  else {
    if (iVar10 == 4) {
      plVar17 = (long *)(lVar27 + 0x820);
      goto LAB_001d2664;
    }
    *plVar30 = 0;
  }
  lVar11 = FUN_001e0eb4(param_1,"Transfer-Encoding");
  if (lVar11 == 0) {
    if (((*(byte *)(param_1[0x84] + 0x80) & 3) == 0) ||
       (((1 < iVar10 - 3U || (-1 < plVar30[1])) &&
        (((*(byte *)(lVar27 + 0xf43) >> 1 & 1) == 0 || (*(long *)(lVar27 + 0x1518) != -1)))))) {
      uVar23 = *(ushort *)(lVar27 + 0x660) & 0xffbf;
LAB_001d27b0:
      *(ushort *)(lVar27 + 0x660) = uVar23;
    }
    else {
      if (-1 < *(char *)((long)param_1 + 0x3fd)) {
        if (((*(int *)(lVar27 + 0x14e0) == 10) || ((int)param_1[0x46] == 10)) ||
           (((lVar11 = *(long *)(lVar27 + 0xa40), (int)param_1[0x46] < 0xb && (lVar11 == 1)) ||
            ((lVar11 != 0 && (lVar11 < 2)))))) {
          FUN_001db9c8(lVar27,"Chunky upload is not supported by HTTP 1.0");
          return 0x19;
        }
        uVar23 = *(ushort *)(lVar27 + 0x660) | 0x40;
        goto LAB_001d27b0;
      }
      uVar23 = *(ushort *)(lVar27 + 0x660);
    }
    pcVar12 = "";
    if ((uVar23 & 0x40) != 0) {
      pcVar12 = "Transfer-Encoding: chunked\r\n";
    }
  }
  else {
    uVar13 = FUN_001d4bd8(lVar11,"Transfer-Encoding:","chunked");
    uVar23 = 0x40;
    if ((uVar13 & 1) == 0) {
      uVar23 = 0;
    }
    *(ushort *)(lVar27 + 0x660) = *(ushort *)(lVar27 + 0x660) & 0xffbf | uVar23;
    pcVar12 = "";
  }
  FUN_001ec308(param_1[0x91]);
  param_1[0x91] = 0;
  pcVar14 = (char *)FUN_001e0eb4(param_1,&DAT_03c0f0be);
  if ((pcVar14 == (char *)0x0) ||
     (((*(byte *)(lVar27 + 0x15a4) >> 1 & 1) != 0 &&
      (iVar7 = FUN_001e0990(*(undefined8 *)(lVar27 + 0x1148),param_1[0x1a]), iVar7 == 0)))) {
    if ((((*(uint *)(param_1[0x85] + 0x80) >> 1 & 1) == 0) || ((int)param_1[0x33] != 0x1bb)) &&
       (((*(uint *)(param_1[0x85] + 0x80) & 1) == 0 || ((int)param_1[0x33] != 0x50)))) {
      bVar6 = (*(uint *)((long)param_1 + 0x3fc) & 0x200) != 0;
      puVar31 = &DAT_03c886bc;
      if (bVar6) {
        puVar31 = &DAT_03be62d9;
      }
      puVar1 = &DAT_03c886bc;
      if (bVar6) {
        puVar1 = &DAT_03c246fd;
      }
      lVar11 = FUN_001ce400("Host: %s%s%s:%d\r\n",puVar31,lVar28,puVar1);
    }
    else {
      bVar6 = (*(uint *)((long)param_1 + 0x3fc) & 0x200) != 0;
      puVar31 = &DAT_03c886bc;
      if (bVar6) {
        puVar31 = &DAT_03be62d9;
      }
      puVar1 = &DAT_03c886bc;
      if (bVar6) {
        puVar1 = &DAT_03c246fd;
      }
      lVar11 = FUN_001ce400("Host: %s%s%s\r\n",puVar31,lVar28,puVar1);
    }
LAB_001d2938:
    param_1[0x91] = lVar11;
    if (lVar11 == 0) {
      return 0x1b;
    }
  }
  else {
    __s = (char *)FUN_001d3cc0(pcVar14);
    if (__s == (char *)0x0) {
      return 0x1b;
    }
    if (*__s == '[') {
      sVar16 = strlen(__s);
      memmove(__s,__s + 1,sVar16 - 1);
      iVar7 = 0x5d;
LAB_001d28f8:
      pcVar15 = strchr(__s,iVar7);
      if (pcVar15 != (char *)0x0) {
        *pcVar15 = '\0';
      }
      FUN_001ec308(param_1[0x92]);
      param_1[0x92] = (long)__s;
    }
    else {
      if (*__s != '\0') {
        iVar7 = 0x3a;
        goto LAB_001d28f8;
      }
      FUN_001ec308(__s);
    }
    iVar7 = strcmp("Host:",pcVar14);
    if (iVar7 != 0) {
      lVar11 = FUN_001ce400("Host:%s\r\n",pcVar14 + 5);
      goto LAB_001d2938;
    }
    param_1[0x91] = 0;
  }
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) {
    lVar11 = FUN_001e2c0c(*(undefined8 *)(lVar27 + 0x1548));
    if (lVar11 == 0) {
      return 0x1b;
    }
    if (((((param_1[0x1b] != param_1[0x1a]) &&
          (iVar7 = FUN_001e315c(lVar11,5,param_1[0x1a],0), iVar7 != 0)) ||
         (iVar7 = FUN_001e315c(lVar11,9,0,0), iVar7 != 0)) ||
        ((iVar7 = FUN_001e0990(&DAT_03c61244,*(undefined8 *)(lVar27 + 0x1550)), iVar7 != 0 &&
         ((iVar7 = FUN_001e315c(lVar11,2,0,0), iVar7 != 0 ||
          (iVar7 = FUN_001e315c(lVar11,3,0,0), iVar7 != 0)))))) ||
       (iVar7 = FUN_001e2d14(lVar11,0,&local_78,0), iVar7 != 0)) {
      FUN_001e2b78(lVar11);
      return 0x1b;
    }
    bVar22 = *(byte *)(lVar27 + 0xf68);
    if ((bVar22 & 1) != 0) {
      FUN_001ec308(*(undefined8 *)(lVar27 + 0xf48));
      bVar22 = *(byte *)(lVar27 + 0xf68);
    }
    *(long *)(lVar27 + 0xf48) = local_78;
    *(byte *)(lVar27 + 0xf68) = bVar22 | 1;
    FUN_001e2b78(lVar11);
    iVar7 = FUN_001e0990(&DAT_03c5ab2e,*(undefined8 *)(lVar27 + 0x1550));
    if (iVar7 == 0) goto LAB_001d29b4;
    if ((*(byte *)(lVar27 + 0xf45) >> 1 & 1) != 0) {
      pcVar14 = strstr(pcVar32,";type=");
      if (pcVar14 == (char *)0x0) {
LAB_001d2ce0:
        if (**(char **)(lVar27 + 0x1580) == '\0') {
          puVar34 = &local_70;
          sVar16 = strlen(pcVar32);
          if (pcVar32[sVar16 - 1] != '/') {
            puVar34 = (undefined8 *)((ulong)puVar34 | 1);
            local_70 = CONCAT71(local_70._1_7_,0x2f);
          }
        }
        else {
          puVar34 = &local_70;
        }
        uVar24 = 0x69;
        if ((*(ulong *)(lVar27 + 0xf40) & 0x800) != 0) {
          uVar24 = 0x61;
        }
        FUN_001ce394(puVar34,8,";type=%c",uVar24);
      }
      else if ((pcVar14[6] != '\0') && (pcVar14[7] == '\0')) {
        uVar8 = FUN_001e0978();
        uVar8 = (uVar8 & 0xff) - 0x41;
        if ((8 < uVar8) || ((1 << (ulong)(uVar8 & 0x1f) & 0x109U) == 0)) goto LAB_001d2ce0;
      }
    }
    bVar6 = (*(uint *)((long)param_1 + 0x3fc) & 0x200080) == 0x80;
  }
  else {
LAB_001d29b4:
    bVar6 = false;
  }
  lVar11 = FUN_001e0eb4(param_1,"Accept");
  pcVar14 = "Accept: */*\r\n";
  if (lVar11 != 0) {
    pcVar14 = (char *)0x0;
  }
  plVar30[4] = (long)pcVar14;
  if (((iVar10 == 5) || (iVar10 == 2)) && (*(long *)(lVar27 + 0x14f8) != 0)) {
    if (*(long *)(lVar27 + 0x14f8) < 0) {
      *(undefined8 *)(lVar27 + 0x14f8) = 0;
    }
    else if ((*(byte *)(lVar27 + 0x15a4) >> 1 & 1) == 0) {
      if (param_1[0xa0] == 0) {
LAB_001d2a54:
        lVar25 = *(long *)(lVar27 + 0x14f8);
        lVar11 = 0;
        do {
          uVar13 = *(ulong *)(lVar27 + 0xc10);
          if (lVar25 - lVar11 <= (long)uVar13) {
            uVar13 = FUN_001ec1a0();
          }
          lVar25 = (**(code **)(lVar27 + 0x1528))
                             (*(undefined8 *)(lVar27 + 0x1130),1,uVar13,
                              *(undefined8 *)(lVar27 + 0x1530));
          lVar11 = lVar25 + lVar11;
          if (uVar13 <= lVar25 - 1U) {
            FUN_001db9c8(lVar27,"Could only read %ld bytes from the input",lVar11);
            return 0x1a;
          }
          lVar25 = *(long *)(lVar27 + 0x14f8);
        } while (lVar11 < lVar25);
      }
      else {
        FUN_001d14e0(lVar27,1);
        iVar7 = (*(code *)param_1[0xa0])(param_1[0xa1],*(undefined8 *)(lVar27 + 0x14f8),0);
        FUN_001d14e0(lVar27,0);
        if (iVar7 != 0) {
          if (iVar7 != 2) {
            FUN_001db9c8(lVar27,"Could not seek stream");
            return 0x1a;
          }
          goto LAB_001d2a54;
        }
      }
      if ((0 < *(long *)(lVar27 + 0x1518)) &&
         (lVar11 = *(long *)(lVar27 + 0x1518) - *(long *)(lVar27 + 0x14f8),
         *(long *)(lVar27 + 0x1518) = lVar11, lVar11 < 1)) {
        FUN_001db9c8(lVar27,"File already completely uploaded");
        return 0x12;
      }
    }
  }
  if ((*(byte *)(lVar27 + 0x15a5) >> 1 & 1) != 0) {
    switch(iVar10) {
    case 1:
    case 6:
      lVar11 = FUN_001e0eb4(param_1,"Range");
      if (lVar11 == 0) {
        FUN_001ec308(param_1[0x8f]);
        lVar11 = FUN_001ce400("Range: bytes=%s\r\n",*(undefined8 *)(lVar27 + 0x14f0));
        param_1[0x8f] = lVar11;
      }
      else if ((iVar10 == 5) || (iVar10 == 2)) goto switchD_001d2b6c_caseD_2;
      break;
    case 2:
    case 5:
switchD_001d2b6c_caseD_2:
      lVar11 = FUN_001e0eb4(param_1,"Content-Range");
      if (lVar11 == 0) {
        FUN_001ec308(param_1[0x8f]);
        if (*(long *)(lVar27 + 0x800) < 0) {
          lVar25 = *(long *)(lVar27 + 0x1518);
          lVar11 = lVar25 + -1;
          pcVar14 = "Content-Range: bytes 0-%ld/%ld\r\n";
LAB_001d2d68:
          lVar11 = FUN_001ce400(pcVar14,lVar11,lVar25);
        }
        else {
          if (*(long *)(lVar27 + 0x14f8) == 0) {
            lVar11 = *(long *)(lVar27 + 0x14f0);
            pcVar14 = "Content-Range: bytes %s/%ld\r\n";
            lVar25 = *(long *)(lVar27 + 0x1518);
            goto LAB_001d2d68;
          }
          lVar11 = FUN_001ce400("Content-Range: bytes %s%ld/%ld\r\n",
                                *(undefined8 *)(lVar27 + 0x14f0),
                                *(long *)(lVar27 + 0x1518) + *(long *)(lVar27 + 0x14f8) + -1);
        }
        param_1[0x8f] = lVar11;
        if (lVar11 == 0) {
          return 0x1b;
        }
      }
    }
  }
  if (param_1[0xaa] == 0) {
    if ((*(int *)(lVar27 + 0x14e0) == 10) || ((int)param_1[0x46] == 10)) {
      puVar31 = &UNK_03c3fedc;
    }
    else {
      lVar11 = *(long *)(lVar27 + 0xa40);
      puVar31 = &UNK_03c3fedc;
      if (((10 < (int)param_1[0x46]) || (lVar11 != 1)) &&
         (puVar31 = &DAT_03c00d7b, lVar11 < 2 && lVar11 != 0)) {
        puVar31 = &UNK_03c3fedc;
      }
    }
  }
  else {
    puVar31 = &DAT_03c46ce3;
  }
  local_78 = FUN_001ec338(1,0x18);
  if (local_78 == 0) {
    return 0x1b;
  }
  iVar7 = FUN_001d4a1c(&local_78,&DAT_03ca36ac,puVar37);
  if (iVar7 != 0) {
    return iVar7;
  }
  pcVar14 = *(char **)(lVar27 + 0xe50);
  if (pcVar14 != (char *)0x0) {
    pcVar32 = pcVar14;
  }
  if (pcVar14 != (char *)0x0) {
    pcVar35 = (char *)0x0;
  }
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) {
    pcVar32 = *(char **)(lVar27 + 0xf48);
    sVar16 = strlen(pcVar32);
    iVar7 = FUN_001d4af0(&local_78,pcVar32,sVar16);
LAB_001d2e40:
    if (iVar7 != 0) {
      return iVar7;
    }
  }
  else {
    if (bVar6) {
      iVar7 = FUN_001d4a1c(&local_78,"ftp://%s:%s@%s",param_1[0x42],param_1[0x43],pcVar32 + 6);
      goto LAB_001d2e40;
    }
    sVar16 = strlen(pcVar32);
    iVar7 = FUN_001d4af0(&local_78,pcVar32,sVar16);
    if (iVar7 != 0) {
      return iVar7;
    }
    if (pcVar35 != (char *)0x0) {
      iVar7 = FUN_001d4a1c(&local_78,&DAT_03c74f18,pcVar35);
      goto LAB_001d2e40;
    }
  }
  puVar21 = &DAT_03c886bc;
  puVar19 = &DAT_03c886bc;
  if ((undefined1 *)param_1[0x91] != (undefined1 *)0x0) {
    puVar19 = (undefined1 *)param_1[0x91];
  }
  puVar2 = &DAT_03c886bc;
  if ((undefined1 *)param_1[0x8b] != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)param_1[0x8b];
  }
  puVar3 = &DAT_03c886bc;
  if ((undefined1 *)param_1[0x8e] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[0x8e];
  }
  if ((*(byte *)(lVar27 + 0x15a5) >> 1 & 1) != 0) {
    puVar21 = &DAT_03c886bc;
    if ((undefined1 *)param_1[0x8f] != (undefined1 *)0x0) {
      puVar21 = (undefined1 *)param_1[0x8f];
    }
  }
  puVar36 = &DAT_03c886bc;
  if (*(char **)(lVar27 + 0xdb0) == (char *)0x0) {
    puVar26 = &DAT_03c886bc;
  }
  else {
    puVar26 = &DAT_03c886bc;
    if (**(char **)(lVar27 + 0xdb0) != '\0') {
      puVar26 = &DAT_03c886bc;
      if ((undefined1 *)param_1[0x8c] != (undefined1 *)0x0) {
        puVar26 = (undefined1 *)param_1[0x8c];
      }
    }
  }
  puVar4 = &DAT_03c886bc;
  if ((undefined1 *)plVar30[4] != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)plVar30[4];
  }
  puVar5 = &DAT_03c886bc;
  if ((undefined1 *)param_1[0x94] != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)param_1[0x94];
  }
  if ((*(char **)(lVar27 + 0xcc8) != (char *)0x0) &&
     (puVar36 = &DAT_03c886bc, **(char **)(lVar27 + 0xcc8) != '\0')) {
    puVar36 = &DAT_03c886bc;
    if ((undefined1 *)param_1[0x8d] != (undefined1 *)0x0) {
      puVar36 = (undefined1 *)param_1[0x8d];
    }
  }
  puVar38 = &DAT_03c886bc;
  if (*(long *)(lVar27 + 0xf50) != 0) {
    puVar38 = &DAT_03c886bc;
    if ((undefined1 *)param_1[0x90] != (undefined1 *)0x0) {
      puVar38 = (undefined1 *)param_1[0x90];
    }
  }
  pcVar32 = "";
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) {
    lVar11 = FUN_001d3c30(param_1,"Proxy-Connection");
    pcVar32 = "Proxy-Connection: Keep-Alive\r\n";
    if (lVar11 != 0) {
      pcVar32 = "";
    }
  }
  iVar7 = FUN_001d4a1c(&local_78,"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s",&local_70,puVar31,puVar19,
                       puVar2,puVar3,puVar21,puVar26,puVar4,puVar5,puVar36,puVar38,pcVar32,pcVar12);
  FUN_001ec308(param_1[0x8e]);
  param_1[0x8e] = 0;
  FUN_001ec308(param_1[0x8b]);
  param_1[0x8b] = 0;
  if (iVar7 != 0) {
    return iVar7;
  }
  if ((((*(byte *)(param_1[0x84] + 0x84) & 1) == 0) && ((int)param_1[0x46] != 0x14)) &&
     ((*(long *)(lVar27 + 0xa40) == 3 && (iVar7 = FUN_001d77c4(local_78,param_1), iVar7 != 0)))) {
    return iVar7;
  }
  if ((local_88 != 0) || (*(long *)(lVar27 + 0xf70) != 0)) {
    if (*(long *)(lVar27 + 0xf70) == 0) {
LAB_001d315c:
      iVar9 = 0;
      iVar7 = 0;
    }
    else {
      FUN_001dc298(lVar27,2,2);
      if (param_1[0x92] != 0) {
        lVar28 = param_1[0x92];
      }
      plVar17 = (long *)FUN_001c507c(*(undefined8 *)(lVar27 + 0xf70),lVar28,
                                     *(undefined8 *)(lVar27 + 0x1580),
                                     *(uint *)(param_1[0x84] + 0x80) >> 1 & 1);
      FUN_001dc2d8(lVar27,2);
      if (plVar17 == (long *)0x0) goto LAB_001d315c;
      iVar7 = 0;
      plVar29 = plVar17;
      do {
        lVar28 = plVar29[2];
        if (lVar28 != 0) {
          if (iVar7 == 0) {
            iVar9 = FUN_001d4a1c(&local_78,"Cookie: ");
            if (iVar9 != 0) {
              iVar7 = 0;
              goto LAB_001d31e4;
            }
            lVar28 = plVar29[2];
            puVar19 = &DAT_03c886bc;
          }
          else {
            puVar19 = &DAT_03c9ca55;
          }
          iVar9 = FUN_001d4a1c(&local_78,"%s%s=%s",puVar19,plVar29[1],lVar28);
          if (iVar9 != 0) goto LAB_001d31e4;
          iVar7 = iVar7 + 1;
        }
        plVar29 = (long *)*plVar29;
      } while (plVar29 != (long *)0x0);
      iVar9 = 0;
LAB_001d31e4:
      FUN_001c54d8(plVar17);
    }
    if ((local_88 != 0) && (iVar9 == 0)) {
      if (iVar7 == 0) {
        iVar9 = FUN_001d4a1c(&local_78,"Cookie: ");
        if (iVar9 != 0) {
          return iVar9;
        }
        puVar19 = &DAT_03c886bc;
      }
      else {
        puVar19 = &DAT_03c9ca55;
      }
      iVar9 = FUN_001d4a1c(&local_78,&DAT_03c8f584,puVar19,local_88);
      iVar7 = iVar7 + 1;
    }
    if ((iVar9 == 0) && (iVar7 != 0)) {
      iVar9 = FUN_001d4af0(&local_78,&DAT_03bdfd30,2);
    }
    if (iVar9 != 0) {
      return iVar9;
    }
  }
  iVar7 = FUN_001d50b0(lVar27,local_78);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_001d4d9c(param_1,0,local_78);
  if (iVar7 != 0) {
    return iVar7;
  }
  puVar33 = (ulong *)(plVar30 + 2);
  *puVar33 = 0;
  FUN_001dac70(lVar27,0xffffffffffffffff);
  if (iVar10 - 3U < 2) {
    if (*(char *)((long)param_1 + 0x3fd) < '\0') {
      iVar10 = FUN_001d4a1c(&local_78,"Content-Length: 0\r\n\r\n");
      if (iVar10 != 0) {
        return iVar10;
      }
      iVar10 = FUN_001d4768(&local_78,param_1,lVar27 + 0x1618,0,0);
      if (iVar10 == 0) {
        iVar10 = -1;
        goto LAB_001d3634;
      }
    }
    else {
      uVar13 = plVar30[1];
      *(ulong *)(lVar27 + 0x1518) = uVar13;
      if ((((uVar13 != 0xffffffffffffffff) && ((*(byte *)(lVar27 + 0x660) >> 6 & 1) == 0)) &&
          ((*(char *)((long)param_1 + 0x3fd) < '\0' ||
           (lVar28 = FUN_001e0eb4(param_1,"Content-Length"), lVar28 == 0)))) &&
         (iVar10 = FUN_001d4a1c(&local_78,"Content-Length: %ld\r\n",uVar13), iVar10 != 0)) {
        return iVar10;
      }
      for (puVar34 = *(undefined8 **)(*plVar30 + 0x50); puVar34 != (undefined8 *)0x0;
          puVar34 = (undefined8 *)puVar34[1]) {
        iVar10 = FUN_001d4a1c(&local_78,&DAT_03c61220,*puVar34);
        if (iVar10 != 0) {
          return iVar10;
        }
      }
      lVar28 = FUN_001e0eb4(param_1,"Expect");
      if (lVar28 == 0) {
        if (uVar13 < 0x401) {
          uVar23 = *(ushort *)(lVar27 + 0x15a4) & 0xfeff;
          goto LAB_001d37a4;
        }
        iVar10 = FUN_001d51b4(lVar27,param_1,local_78);
        if (iVar10 != 0) {
          return iVar10;
        }
      }
      else {
        uVar18 = FUN_001d4bd8(lVar28,"Expect:","100-continue");
        uVar23 = 0x100;
        if ((uVar18 & 1) == 0) {
          uVar23 = 0;
        }
        uVar23 = *(ushort *)(lVar27 + 0x15a4) & 0xfeff | uVar23;
LAB_001d37a4:
        *(ushort *)(lVar27 + 0x15a4) = uVar23;
      }
      iVar10 = FUN_001d4af0(&local_78,&DAT_03bdfd30,2);
      if (iVar10 != 0) {
        return iVar10;
      }
      FUN_001dac70(lVar27,uVar13);
      *(undefined **)(lVar27 + 0x1528) = PTR_LAB_047cb970;
      *(long *)(lVar27 + 0x1530) = *plVar30;
      *(undefined4 *)(plVar30 + 0x41) = 2;
      iVar10 = FUN_001d4768(&local_78,param_1,lVar27 + 0x1618,0,0);
      uVar18 = uVar13;
      if (iVar10 == 0) goto LAB_001d3850;
    }
    pcVar32 = "Failed sending POST request";
LAB_001d381c:
    FUN_001db9c8(lVar27,pcVar32);
    return iVar10;
  }
  if (iVar10 == 2) {
    if (*(char *)((long)param_1 + 0x3fd) < '\0') {
      uVar13 = 0;
      if ((*(byte *)(lVar27 + 0x660) >> 6 & 1) == 0) goto LAB_001d34e8;
    }
    else {
      uVar13 = *(ulong *)(lVar27 + 0x1518);
      if (((uVar13 != 0xffffffffffffffff) && ((*(byte *)(lVar27 + 0x660) >> 6 & 1) == 0)) &&
         (lVar28 = FUN_001e0eb4(param_1,"Content-Length"), lVar28 == 0)) {
LAB_001d34e8:
        iVar10 = FUN_001d4a1c(&local_78,"Content-Length: %ld\r\n",uVar13);
        if (iVar10 != 0) {
          return iVar10;
        }
      }
    }
    lVar28 = FUN_001e0eb4(param_1,"Content-Type");
    if ((lVar28 == 0) &&
       (iVar10 = FUN_001d4a1c(&local_78,"Content-Type: application/x-www-form-urlencoded\r\n"),
       iVar10 != 0)) {
      return iVar10;
    }
    lVar28 = FUN_001e0eb4(param_1,"Expect");
    if (lVar28 == 0) {
      if (uVar13 < 0x401) {
        uVar23 = *(ushort *)(lVar27 + 0x15a4) & 0xfeff;
        goto LAB_001d3654;
      }
      iVar10 = FUN_001d51b4(lVar27,param_1,local_78);
      if (iVar10 != 0) {
        return iVar10;
      }
    }
    else {
      uVar18 = FUN_001d4bd8(lVar28,"Expect:","100-continue");
      uVar23 = 0x100;
      if ((uVar18 & 1) == 0) {
        uVar23 = 0;
      }
      uVar23 = *(ushort *)(lVar27 + 0x15a4) & 0xfeff | uVar23;
LAB_001d3654:
      *(ushort *)(lVar27 + 0x15a4) = uVar23;
    }
    if (*(long *)(lVar27 + 0x6e8) == 0) {
      iVar10 = FUN_001d4af0(&local_78,&DAT_03bdfd30,2);
      if (iVar10 != 0) {
        return iVar10;
      }
      if (((*(byte *)(lVar27 + 0x660) >> 6 & 1) != 0) && (*(char *)((long)param_1 + 0x3fd) < '\0'))
      {
        pcVar32 = "0\r\n\r\n";
        uVar20 = 5;
        goto LAB_001d3700;
      }
      if (*(long *)(lVar27 + 0x1518) != 0) {
        uVar18 = uVar13;
        if (uVar13 == 0) {
          uVar18 = 0xffffffffffffffff;
        }
        FUN_001dac70(lVar27,uVar18);
        if (-1 < *(char *)((long)param_1 + 0x3fd)) {
          uVar18 = 0;
          plVar30[1] = uVar13;
          plVar30[2] = (long)puVar33;
          goto LAB_001d3710;
        }
      }
LAB_001d370c:
      uVar18 = 0;
    }
    else {
      if ((((int)param_1[0x46] == 0x14) || (0xffff < (long)uVar13)) ||
         ((*(ushort *)(lVar27 + 0x15a4) >> 8 & 1) != 0)) {
        plVar30[1] = uVar13;
        plVar30[2] = *(long *)(lVar27 + 0x6e8);
        *(undefined4 *)(plVar30 + 0x41) = 2;
        *(code **)(lVar27 + 0x1528) = FUN_001d4948;
        *(long **)(lVar27 + 0x1530) = param_1;
        FUN_001dac70(lVar27,plVar30[1]);
        pcVar32 = "\r\n";
        uVar20 = 2;
LAB_001d3700:
        iVar10 = FUN_001d4af0(&local_78,pcVar32,uVar20);
        if (iVar10 != 0) {
          return iVar10;
        }
        goto LAB_001d370c;
      }
      iVar10 = FUN_001d4af0(&local_78,&DAT_03bdfd30,2);
      if (iVar10 != 0) {
        return iVar10;
      }
      if ((*(byte *)(lVar27 + 0x660) >> 6 & 1) == 0) {
        iVar10 = FUN_001d4af0(&local_78,*(undefined8 *)(lVar27 + 0x6e8),uVar13);
        uVar18 = uVar13;
      }
      else {
        if (uVar13 == 0) {
          uVar18 = 5;
        }
        else {
          iVar10 = FUN_001d4a1c(&local_78,&DAT_03c8f724,uVar13 & 0xffffffff);
          if (iVar10 != 0) {
            return iVar10;
          }
          iVar10 = FUN_001d4af0(&local_78,*(undefined8 *)(lVar27 + 0x6e8),uVar13);
          if (iVar10 != 0) {
            return iVar10;
          }
          iVar10 = FUN_001d4af0(&local_78,&DAT_03bdfd30,2);
          if (iVar10 != 0) {
            return iVar10;
          }
          uVar18 = uVar13 + 7;
        }
        iVar10 = FUN_001d4af0(&local_78,"0\r\n\r\n",5);
      }
      if (iVar10 != 0) {
        return iVar10;
      }
      FUN_001dac70(lVar27,uVar13);
    }
LAB_001d3710:
    iVar10 = FUN_001d4768(&local_78,param_1,lVar27 + 0x1618,uVar18,0);
    if (iVar10 != 0) {
      pcVar32 = "Failed sending HTTP POST request";
      goto LAB_001d381c;
    }
    uVar18 = *puVar33;
LAB_001d3850:
    iVar7 = -(uint)(uVar18 == 0);
  }
  else {
    if (iVar10 != 5) {
      iVar10 = FUN_001d4af0(&local_78,&DAT_03bdfd30,2);
      if (iVar10 != 0) {
        return iVar10;
      }
      iVar10 = FUN_001d4768(&local_78,param_1,lVar27 + 0x1618,0,0);
      if (iVar10 != 0) {
        pcVar32 = "Failed sending HTTP request";
        goto LAB_001d381c;
      }
      iVar10 = -(uint)(*puVar33 == 0);
LAB_001d3634:
      FUN_001e28ec(lVar27,0,0xffffffffffffffff,1,iVar10);
      uVar13 = 0;
      goto LAB_001d3868;
    }
    if (*(char *)((long)param_1 + 0x3fd) < '\0') {
      uVar13 = 0;
      if ((*(byte *)(lVar27 + 0x660) >> 6 & 1) == 0) {
LAB_001d349c:
        iVar10 = FUN_001d4a1c(&local_78,"Content-Length: %ld\r\n",uVar13);
        if (iVar10 != 0) {
          return iVar10;
        }
        goto LAB_001d34b8;
      }
LAB_001d355c:
      iVar7 = -1;
    }
    else {
      uVar13 = *(ulong *)(lVar27 + 0x1518);
      if (uVar13 != 0xffffffffffffffff) {
        if (((*(byte *)(lVar27 + 0x660) >> 6 & 1) == 0) &&
           (lVar28 = FUN_001e0eb4(param_1,"Content-Length"), lVar28 == 0)) goto LAB_001d349c;
LAB_001d34b8:
        if (uVar13 == 0) goto LAB_001d355c;
      }
      iVar10 = FUN_001d51b4(lVar27,param_1,local_78);
      if (iVar10 != 0) {
        return iVar10;
      }
      iVar7 = 0;
    }
    iVar10 = FUN_001d4af0(&local_78,&DAT_03bdfd30,2);
    if (iVar10 != 0) {
      return iVar10;
    }
    FUN_001dac70(lVar27,uVar13);
    iVar10 = FUN_001d4768(&local_78,param_1,lVar27 + 0x1618,0,0);
    if (iVar10 != 0) {
      pcVar32 = "Failed sending PUT request";
      goto LAB_001d381c;
    }
  }
  FUN_001e28ec(lVar27,0,0xffffffffffffffff,1,iVar7);
LAB_001d3868:
  if (*(long *)(lVar27 + 0x108) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_001daf34(lVar27);
    iVar7 = FUN_001da6d0(param_1);
    iVar10 = 0;
    if (iVar7 != 0) {
      iVar10 = 0x2a;
    }
    if ((long)uVar13 <= *(long *)(lVar27 + 0x108)) {
      FUN_001db818(lVar27,"upload completely sent off: %ld out of %ld bytes\n",
                   *(long *)(lVar27 + 0x108),uVar13);
      *(ushort *)(lVar27 + 0x660) = *(ushort *)(lVar27 + 0x660) | 4;
      *(undefined4 *)(lVar27 + 0x198) = 0;
      *(uint *)(lVar27 + 0x1c0) = *(uint *)(lVar27 + 0x1c0) & 0xfffffffd;
      thunk_FUN_001d1464(lVar27,0);
    }
  }
  if ((int)param_1[0x46] != 0x14) {
    return iVar10;
  }
  if ((*(ushort *)(lVar27 + 0x660) >> 6 & 1) == 0) {
    return iVar10;
  }
  *(ushort *)(lVar27 + 0x660) = *(ushort *)(lVar27 + 0x660) & 0xffbf;
  return iVar10;
}


