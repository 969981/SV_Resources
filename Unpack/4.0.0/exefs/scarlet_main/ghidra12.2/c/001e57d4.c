/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e57d4; name: FUN_001e57d4
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_001e57d4(char *param_1,undefined8 *param_2,undefined1 *param_3)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  bool bVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  char *pcVar25;
  size_t sVar26;
  char *pcVar27;
  char *pcVar28;
  int *piVar29;
  ulong uVar30;
  byte bVar31;
  ushort uVar32;
  uint uVar33;
  uint uVar34;
  long *plVar35;
  byte *pbVar36;
  undefined **ppuVar37;
  undefined8 *puVar38;
  long lVar39;
  char *pcVar40;
  long *plVar41;
  undefined8 *puVar42;
  undefined8 uVar43;
  char *__s;
  size_t sVar44;
  long *plVar45;
  undefined1 auVar46 [16];
  ulong local_2f0;
  ulong local_2c8;
  ulong local_2b0;
  char *local_2a8;
  char local_268 [255];
  undefined1 local_169;
  undefined8 local_168;
  undefined8 local_160 [13];
  char local_f8;
  undefined1 auStack_f7 [32];
  undefined1 auStack_d7 [110];
  undefined1 local_69;
  
  uVar20 = FUN_001d14a0(*(undefined8 *)(param_1 + 0xd8));
  uVar21 = FUN_001d14ac(*(undefined8 *)(param_1 + 0xd8));
  *param_3 = 0;
  *param_2 = 0;
  if (*(long *)(param_1 + 0xf48) == 0) {
    return 3;
  }
  plVar22 = (long *)FUN_001ec338(1,0x670);
  if (plVar22 != (long *)0x0) {
    lVar39 = *(long *)(*(long *)PTR_PTR_047cb968 + 0x18);
    lVar23 = FUN_001ec338(4,lVar39);
    if (lVar23 != 0) {
      plVar22[0x56] = lVar23 + lVar39;
      plVar22[0x59] = lVar23 + lVar39 * 2;
      plVar22[0x5e] = lVar23;
      plVar22[0x53] = lVar23;
      plVar22[0x5c] = lVar23 + lVar39 * 3;
      plVar22[0x84] = (long)&PTR_s_<no_protocol>_04484da0;
      *(undefined4 *)(plVar22 + 0x33) = 0xffffffff;
      plVar22[0xc] = -1;
      plVar22[0x32] = -1;
      plVar22[0x4b] = -1;
      plVar22[0x4c] = -1;
      FUN_001c6c60(plVar22,1);
      auVar46 = FUN_001e0dfc();
      *(undefined1 (*) [16])(plVar22 + 0x49) = auVar46;
      auVar46 = FUN_001e0dfc();
      *(undefined1 (*) [16])(plVar22 + 0x87) = auVar46;
      plVar22[0x89] = *(long *)(param_1 + 0xf10);
      *plVar22 = (long)param_1;
      uVar33 = *(uint *)(param_1 + 0xc00);
      *(uint *)(plVar22 + 0x2f) = uVar33;
      *(undefined4 *)(plVar22 + 0x27) = 4;
      if ((*(char **)(param_1 + 0xd28) == (char *)0x0) || (**(char **)(param_1 + 0xd28) == '\0')) {
        uVar19 = *(uint *)((long)plVar22 + 0x3fc) & 0xffffffef;
        uVar33 = 0;
        *(uint *)((long)plVar22 + 0x3fc) = uVar19;
      }
      else {
        uVar19 = *(uint *)((long)plVar22 + 0x3fc) | 0x10;
        *(uint *)((long)plVar22 + 0x3fc) = uVar19;
        if (uVar33 < 2) {
          uVar33 = 0x20;
        }
        else {
          uVar33 = (uint)(uVar33 == 2) << 5;
        }
      }
      uVar33 = uVar33 | uVar19 & 0xffffff9f | (uVar33 << 1 ^ 0x40) & (int)(uVar19 << 0x1b) >> 0x1f;
      *(uint *)((long)plVar22 + 0x3fc) = uVar33;
      if ((*(char **)(param_1 + 0xd30) != (char *)0x0) && (**(char **)(param_1 + 0xd30) != '\0')) {
        uVar33 = uVar33 | 0x50;
        *(uint *)((long)plVar22 + 0x3fc) = uVar33;
      }
      uVar19 = (uint)(*(long *)(param_1 + 0xdf8) != 0) << 8;
      uVar34 = uVar33 & 0xff | uVar19;
      *(uint *)((long)plVar22 + 0x3fc) = uVar33 & 0xfffffe00 | uVar34;
      uVar14 = (*(uint *)(param_1 + 0xf40) >> 10 & 1) << 0xe;
      uVar6 = uVar33 & 0xffff8000 | uVar33 & 0x3e00 | uVar34 | uVar14;
      *(uint *)((long)plVar22 + 0x3fc) = uVar6;
      uVar34 = uVar33 & 0x7f | (uint)(*(long *)(param_1 + 0xde0) != 0) << 7;
      *(uint *)((long)plVar22 + 0x3fc) =
           uVar33 & 0xffff8000 | uVar33 & 0x3e00 | uVar19 | uVar14 | uVar34;
      uVar19 = uVar6 & 0x1ff00 | uVar34 | (*(uint *)(param_1 + 0xf40) >> 0x1e & 1) << 0x11;
      *(uint *)((long)plVar22 + 0x3fc) = uVar33 & 0xfffc0000 | uVar19;
      uVar19 = uVar19 | (*(uint *)(param_1 + 0xf40) >> 0x1f) << 0x12;
      *(uint *)((long)plVar22 + 0x3fc) = uVar33 & 0xfff80000 | uVar19;
      bVar11 = *(byte *)((long)plVar22 + 0x371);
      bVar31 = ((byte)param_1[0xac1] >> 2 & 1) << 2;
      bVar5 = bVar11 & 0xf8;
      *(byte *)((long)plVar22 + 0x371) = bVar5 | bVar11 & 3 | bVar31;
      bVar12 = param_1[0xac1];
      *(byte *)((long)plVar22 + 0x371) = bVar5 | bVar11 & 2 | bVar31 | bVar12 & 1;
      bVar11 = *(byte *)((long)plVar22 + 0x3f1);
      *(byte *)((long)plVar22 + 0x371) = bVar5 | bVar31 | bVar12 & 1 | param_1[0xac1] & 2U;
      bVar31 = ((byte)param_1[0xb99] >> 2 & 1) << 2;
      bVar5 = bVar11 & 0xf8;
      *(byte *)((long)plVar22 + 0x3f1) = bVar5 | bVar11 & 3 | bVar31;
      bVar12 = param_1[0xb99];
      *(byte *)((long)plVar22 + 0x3f1) = bVar5 | bVar11 & 2 | bVar31 | bVar12 & 1;
      *(byte *)((long)plVar22 + 0x3f1) = bVar5 | bVar31 | bVar12 & 1 | param_1[0xb99] & 2U;
      plVar22[0x86] = *(long *)(param_1 + 0xc30);
      *(uint *)((long)plVar22 + 0x3fc) =
           (uint)(*(ulong *)(param_1 + 0xf40) >> 7) & 0x80000000 | uVar33 & 0x7ff80000 | uVar19;
      uVar24 = FUN_001cf51c(*(undefined8 *)(param_1 + 0xd8),1);
      if (((uVar24 & 1) == 0) || (plVar22[0x9d] != 0)) {
LAB_001e5a80:
        FUN_001cb57c(plVar22 + 0x95,&DAT_001e7e38);
        FUN_001cb57c(plVar22 + 0x99,&DAT_001e7e38);
        if (*(long *)(param_1 + 0xcc0) != 0) {
          lVar23 = FUN_001ec328();
          plVar22[0xc9] = lVar23;
          if (lVar23 == 0) goto LAB_001e5af8;
        }
        *(undefined4 *)((long)plVar22 + 0x654) = *(undefined4 *)(param_1 + 0x704);
        *(undefined2 *)(plVar22 + 0xca) = *(undefined2 *)(param_1 + 0x700);
        plVar22[10] = *(long *)(param_1 + 0x768);
        plVar22[0xb] = *(long *)(param_1 + 0x770);
        *param_2 = plVar22;
        FUN_001e48ec(param_1);
        lVar23 = *(long *)(param_1 + 0xf28);
        if (lVar23 == 0) {
          lVar23 = FUN_001e2b6c();
          *(long *)(param_1 + 0x1548) = lVar23;
          if (lVar23 == 0) goto switchD_001e5be8_caseD_7;
        }
        else {
          *(long *)(param_1 + 0x1548) = lVar23;
        }
        if ((*(long *)(param_1 + 0xcb8) != 0) &&
           (uVar24 = FUN_001e2aac(*(undefined8 *)(param_1 + 0xf48),0,8), (uVar24 & 1) == 0)) {
          if ((param_1[0xf68] & 1U) != 0) {
            FUN_001ec308(*(undefined8 *)(param_1 + 0xf48));
          }
          lVar39 = FUN_001ce400("%s://%s",*(undefined8 *)(param_1 + 0xcb8),
                                *(undefined8 *)(param_1 + 0xf48));
          if (lVar39 == 0) goto switchD_001e5be8_caseD_7;
          *(long *)(param_1 + 0xf48) = lVar39;
          param_1[0xf68] = param_1[0xf68] | 1;
        }
        if (*(long *)(param_1 + 0xf28) == 0) {
          uVar33 = (uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x20);
          uVar16 = FUN_001e315c(lVar23,0,*(undefined8 *)(param_1 + 0xf48),
                                uVar33 >> 0x12 & 0x20 | uVar33 >> 0xc & 0x10 | 0x208);
          iVar17 = 3;
          switch(uVar16) {
          case 0:
            break;
          default:
            goto switchD_001e5be8_caseD_1;
          case 5:
            return 1;
          case 7:
            goto switchD_001e5be8_caseD_7;
          case 8:
            goto switchD_001e5be8_caseD_8;
          }
        }
        pcVar27 = param_1 + 0x1550;
        uVar16 = FUN_001e2d14(lVar23,1,pcVar27,0);
        iVar17 = 3;
        switch(uVar16) {
        case 0:
          plVar1 = (long *)(param_1 + 0xd28);
          uVar43 = *(undefined8 *)pcVar27;
          ppuVar37 = &PTR_DAT_04484d90;
          puVar42 = (undefined8 *)PTR_PTR_047cb9a0;
          do {
            iVar17 = FUN_001e0990(*puVar42,uVar43);
            if (iVar17 != 0) {
              if (((puVar42 != (undefined8 *)0x0) &&
                  ((*(ulong *)(param_1 + 0xe78) & (ulong)*(uint *)(puVar42 + 0x10)) != 0)) &&
                 ((((byte)param_1[0x15a4] >> 1 & 1) == 0 ||
                  ((*(ulong *)(param_1 + 0xe80) & (ulong)*(uint *)(puVar42 + 0x10)) != 0)))) {
                plVar22[0x85] = (long)puVar42;
                plVar22[0x84] = (long)puVar42;
                uVar16 = FUN_001e2d14(lVar23,2,param_1 + 0x1568,0x40);
                iVar17 = 3;
                switch(uVar16) {
                case 0:
                  lVar39 = FUN_001ec328(*(undefined8 *)(param_1 + 0x1568));
                  plVar22[0x42] = lVar39;
                  if (lVar39 == 0) goto switchD_001e5be8_caseD_7;
                  *(uint *)((long)plVar22 + 0x3fc) = *(uint *)((long)plVar22 + 0x3fc) | 0x80;
                  break;
                default:
                  goto switchD_001e5be8_caseD_1;
                case 5:
                  return 1;
                case 7:
                  goto switchD_001e5be8_caseD_7;
                case 8:
                  goto switchD_001e5be8_caseD_8;
                case 0xb:
                  break;
                }
                iVar17 = 3;
                iVar18 = FUN_001e2d14(lVar23,3,param_1 + 0x1570,0x40);
                switch(iVar18) {
                case 5:
                  return 1;
                case 6:
                case 9:
                case 10:
                case 0xb:
                  goto switchD_001e5be8_caseD_1;
                case 7:
                  goto switchD_001e5be8_caseD_7;
                case 8:
                  goto switchD_001e5be8_caseD_8;
                case 0xc:
                  break;
                default:
                  if (iVar18 != 0) {
                    return 3;
                  }
                  lVar39 = FUN_001ec328(*(undefined8 *)(param_1 + 0x1570));
                  plVar22[0x43] = lVar39;
                  if (lVar39 == 0) goto switchD_001e5be8_caseD_7;
                  *(uint *)((long)plVar22 + 0x3fc) = *(uint *)((long)plVar22 + 0x3fc) | 0x80;
                }
                iVar18 = FUN_001e2d14(lVar23,4,param_1 + 0x1578,0x40);
                iVar17 = 3;
                switch(iVar18) {
                case 5:
                  return 1;
                case 6:
                case 9:
                case 10:
                case 0xb:
                case 0xc:
                  goto switchD_001e5be8_caseD_1;
                case 7:
                  goto switchD_001e5be8_caseD_7;
                case 8:
                  goto switchD_001e5be8_caseD_8;
                case 0xd:
                  goto switchD_001e5de0_caseD_d;
                }
                if (iVar18 != 0) {
                  return 3;
                }
                lVar39 = FUN_001ec328(*(undefined8 *)(param_1 + 0x1578));
                plVar22[0x44] = lVar39;
                if (lVar39 == 0) goto switchD_001e5be8_caseD_7;
switchD_001e5de0_caseD_d:
                iVar17 = FUN_001e2d14(lVar23,5,param_1 + 0x1558,0);
                if ((iVar17 != 0) &&
                   (iVar17 = FUN_001e0990(&DAT_03c9cc09,*(undefined8 *)pcVar27), iVar17 == 0))
                goto switchD_001e5be8_caseD_7;
                uVar16 = FUN_001e2d14(lVar23,7,param_1 + 0x1580,0);
                iVar17 = 3;
                switch(uVar16) {
                case 0:
                  goto switchD_001e5e64_caseD_0;
                default:
                  goto switchD_001e5be8_caseD_1;
                case 5:
                  return 1;
                case 7:
                  goto switchD_001e5be8_caseD_7;
                case 8:
                  goto switchD_001e5be8_caseD_8;
                }
              }
              break;
            }
            puVar42 = (undefined8 *)*ppuVar37;
            ppuVar37 = ppuVar37 + 1;
          } while (puVar42 != (undefined8 *)0x0);
          FUN_001db9c8(param_1,"Protocol \"%s\" not supported or disabled in libcurl",uVar43);
          return 1;
        default:
          goto switchD_001e5be8_caseD_1;
        case 5:
          return 1;
        case 7:
          goto switchD_001e5be8_caseD_7;
        case 8:
          goto switchD_001e5be8_caseD_8;
        }
      }
      lVar23 = FUN_001ec338(0x4000,1);
      plVar22[0x9d] = lVar23;
      if (lVar23 != 0) goto LAB_001e5a80;
LAB_001e5af8:
      FUN_001cb68c(plVar22 + 0x95,0);
      FUN_001cb68c(plVar22 + 0x99,0);
      FUN_001ec308(plVar22[0x9d]);
      FUN_001ec308(plVar22[0xc9]);
      FUN_001ec308(plVar22[0x5e]);
    }
    FUN_001ec308(plVar22);
  }
  goto switchD_001e5be8_caseD_7;
switchD_001e5e64_caseD_0:
  iVar17 = FUN_001e2d14(lVar23,6,param_1 + 0x1560,1);
  if (iVar17 == 0) {
    strtoul(*(char **)(param_1 + 0x1560),(char **)0x0,10);
    uVar33 = FUN_001ec17c();
    *(uint *)(plVar22 + 0x33) = uVar33 & 0xffff;
  }
  else {
    iVar17 = FUN_001e0990(&DAT_03c9cc09,*(undefined8 *)pcVar27);
    if (iVar17 == 0) goto switchD_001e5be8_caseD_7;
  }
  FUN_001e2d14(lVar23,8,param_1 + 0x1588,0);
  pcVar27 = "";
  if (*(char **)(param_1 + 0x1558) != (char *)0x0) {
    pcVar27 = *(char **)(param_1 + 0x1558);
  }
  if (*pcVar27 == '[') {
    pcVar27 = pcVar27 + 1;
    pcVar25 = strchr(pcVar27,0x25);
    *(uint *)((long)plVar22 + 0x3fc) = *(uint *)((long)plVar22 + 0x3fc) | 0x200;
    if (pcVar25 != (char *)0x0) {
      lVar23 = 3;
      iVar17 = strncmp("%25",pcVar25,3);
      if (iVar17 != 0) {
        FUN_001db818(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
        lVar23 = 1;
      }
      uVar24 = strtoul(pcVar25 + lVar23,(char **)&local_168,10);
      pcVar40 = local_168;
      if (*local_168 == ']') {
        sVar26 = strlen(local_168);
        memmove(pcVar25,pcVar40,sVar26 + 1);
        *(int *)(plVar22 + 0x17) = (int)uVar24;
      }
      else {
        FUN_001db818(param_1,"Invalid IPv6 address format\n");
      }
    }
    pcVar25 = strchr(pcVar27,0x5d);
    if (pcVar25 != (char *)0x0) {
      *pcVar25 = '\0';
    }
  }
  lVar23 = FUN_001ec328(pcVar27);
  plVar22[0x18] = lVar23;
  if (lVar23 == 0) goto switchD_001e5be8_caseD_7;
  plVar22[0x1a] = lVar23;
  if (*(int *)(param_1 + 0xe70) != 0) {
    *(int *)(plVar22 + 0x17) = *(int *)(param_1 + 0xe70);
  }
  if (*(long *)(param_1 + 0xe48) != 0) {
    lVar23 = FUN_001ec328();
    plVar22[0x45] = lVar23;
    if (lVar23 == 0) goto switchD_001e5be8_caseD_7;
  }
  if (param_1[0x6c0] == '\0') {
    bVar15 = false;
  }
  else {
    memset(&local_168,0,0xb4);
    iVar17 = FUN_001ed10c(&local_168);
    if (*plVar1 != 0) {
      FUN_001ce618(*(undefined8 *)PTR_stderr_047cb8b8,
                   "Warning: CURLOPT_PROXYAUTOCONFIG is 1 (default), so options set via CURLOPT_PROXY* are ignored.\n"
                  );
      FUN_001ec308(*plVar1);
      *plVar1 = 0;
    }
    if ((iVar17 == 0) && (local_168._4_1_ != '\0')) {
      iVar17 = FUN_001dc318(plVar1,local_160);
      if (iVar17 != 0) {
        return iVar17;
      }
      *(ulong *)(param_1 + 0x680) = (ulong)local_168 >> 0x30;
      *(uint *)((long)plVar22 + 0x3fc) = *(uint *)((long)plVar22 + 0x3fc) | 0x10;
      if (local_f8 != '\0') {
        iVar17 = FUN_001dc318(param_1 + 0xdf8,auStack_f7);
        if (iVar17 != 0) {
          return iVar17;
        }
        iVar17 = FUN_001dc318(param_1 + 0xe00,auStack_d7);
        if (iVar17 != 0) {
          return iVar17;
        }
        *(uint *)((long)plVar22 + 0x3fc) = *(uint *)((long)plVar22 + 0x3fc) | 0x100;
      }
    }
    bVar15 = true;
  }
  lVar23 = *plVar22;
  puVar2 = (uint *)((long)plVar22 + 0x3fc);
  if ((*(byte *)((long)plVar22 + 0x3fd) & 1) != 0) {
    memset(&local_168,0,0x100);
    memset(local_268,0,0x100);
    if (*(char **)(lVar23 + 0xdf8) != (char *)0x0) {
      strncpy((char *)&local_168,*(char **)(lVar23 + 0xdf8),0x100);
      local_69 = 0;
    }
    if (*(char **)(lVar23 + 0xe00) != (char *)0x0) {
      strncpy(local_268,*(char **)(lVar23 + 0xe00),0x100);
      local_169 = 0;
    }
    iVar17 = FUN_001e4544(lVar23,&local_168,0,plVar22 + 0x30,0,0);
    if ((iVar17 != 0) || (iVar17 = FUN_001e4544(lVar23,local_268,0,plVar22 + 0x31,0,0), iVar17 != 0)
       ) goto LAB_001e6138;
  }
  if (*(long *)(lVar23 + 0xd28) != 0) {
    pcVar27 = (char *)FUN_001ec328();
    if (pcVar27 != (char *)0x0) goto LAB_001e61bc;
    FUN_001db9c8(lVar23,"memory shortage");
    pcVar25 = (char *)0x0;
LAB_001e61e4:
    iVar17 = 0x1b;
    goto LAB_001e65ec;
  }
  pcVar27 = (char *)0x0;
LAB_001e61bc:
  if (*(long *)(lVar23 + 0xd30) == 0) {
    pcVar25 = (char *)0x0;
  }
  else {
    pcVar25 = (char *)FUN_001ec328();
    if (pcVar25 == (char *)0x0) {
      FUN_001db9c8(lVar23,"memory shortage");
      goto LAB_001e61e4;
    }
  }
  if ((bVar15) || (*(long *)(lVar23 + 0xe08) != 0)) {
LAB_001e6204:
    local_2a8 = (char *)0x0;
  }
  else {
    pcVar40 = "no_proxy";
    local_2a8 = (char *)FUN_001e96dc("no_proxy");
    if (local_2a8 == (char *)0x0) {
      pcVar40 = "NO_PROXY";
      local_2a8 = (char *)FUN_001e96dc("NO_PROXY");
      if (local_2a8 == (char *)0x0) goto LAB_001e6204;
    }
    FUN_001db818(*plVar22,"Uses proxy env variable %s == \'%s\'\n",pcVar40,local_2a8);
  }
  pcVar40 = local_2a8;
  if (*(char **)(lVar23 + 0xe08) != (char *)0x0) {
    pcVar40 = *(char **)(lVar23 + 0xe08);
  }
  if ((pcVar40 == (char *)0x0) || (*pcVar40 == '\0')) goto LAB_001e63e4;
  __s = (char *)plVar22[0x1a];
  iVar17 = FUN_001e0990(&DAT_03c0f097,pcVar40);
  if (iVar17 != 0) goto LAB_001e6240;
  sVar26 = strlen(pcVar40);
  if (*__s == '[') {
    pcVar28 = strchr(__s,0x5d);
    if (pcVar28 == (char *)0x0) goto LAB_001e63e4;
    __s = __s + 1;
    local_2b0 = (long)pcVar28 - (long)__s;
  }
  else {
    local_2b0 = strlen(__s);
  }
  if (sVar26 == 0) goto LAB_001e63e4;
  uVar24 = 0;
  goto LAB_001e6300;
LAB_001e6240:
  FUN_001ec308(pcVar27);
  FUN_001ec308(pcVar25);
  FUN_001ec308(local_2a8);
LAB_001e65ac:
  uVar33 = *puVar2 & 0xffffff9f;
LAB_001e65b8:
  pcVar25 = (char *)0x0;
  uVar19 = uVar33 >> 2 & 0x10;
  if ((uVar33 & 0x20) != 0) {
    uVar19 = 0x10;
  }
  *puVar2 = uVar19 | uVar33 & 0xffffffef;
  iVar17 = 0;
  if (uVar19 != 0) goto LAB_001e65e8;
  pcVar27 = (char *)0x0;
  *puVar2 = uVar33 & 0xffffbe8f;
  goto LAB_001e65ec;
LAB_001e7678:
  plVar45 = plVar41;
  if (plVar41 == (long *)0x0) {
    FUN_001c6e04(param_1);
    if ((bVar15) && (((byte)param_1[0xf46] >> 1 & 1) != 0)) {
      FUN_001db818(param_1,"Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n");
      goto LAB_001e7bd8;
    }
    goto LAB_001e75b4;
  }
LAB_001e767c:
  *plVar45 = (long)param_1;
  FUN_001c6e04(param_1);
  iVar17 = FUN_001e7d50(param_1,plVar45);
  if ((iVar17 != 0) && (plVar45[0x9c] + plVar45[0x98] != 0)) {
    FUN_001db818(param_1,"Found connection %ld, with requests in the pipe (%zu)\n",plVar45[0xc],
                 plVar45[0x9c] + plVar45[0x98]);
    uVar24 = FUN_001c6e78(plVar45);
    if ((uVar24 < uVar20) && (uVar24 = FUN_001c6e18(param_1), uVar24 < uVar21)) {
      FUN_001db818(param_1,"We can reuse, but we want a new connection anyway\n");
      FUN_001c72f8(plVar45);
      goto LAB_001e75b4;
    }
  }
  FUN_001ec308(plVar22[0x2a]);
  FUN_001ec308(plVar22[0x22]);
  FUN_001eb7b8(plVar4);
  FUN_001eb7b8(plVar22 + 0x6f);
  *plVar45 = *plVar22;
  uVar19 = *(uint *)((long)plVar22 + 0x3fc);
  uVar33 = *(uint *)((long)plVar45 + 0x3fc) & 0xffffff00 |
           *(uint *)((long)plVar45 + 0x3fc) & 0x7f | (uVar19 >> 7 & 1) << 7;
  *(uint *)((long)plVar45 + 0x3fc) = uVar33;
  if ((uVar19 >> 7 & 1) != 0) {
    FUN_001ec308(plVar45[0x42]);
    plVar45[0x42] = 0;
    FUN_001ec308(plVar45[0x43]);
    plVar45[0x43] = 0;
    plVar45[0x42] = *plVar1;
    plVar45[0x43] = *plVar3;
    *plVar1 = 0;
    plVar22[0x43] = 0;
    uVar33 = *(uint *)((long)plVar45 + 0x3fc);
  }
  uVar19 = *puVar2;
  *(uint *)((long)plVar45 + 0x3fc) = uVar33 & 0xfffffe00 | uVar33 & 0xff | (uVar19 >> 8 & 1) << 8;
  if ((uVar19 >> 8 & 1) != 0) {
    FUN_001ec308(plVar45[0x30]);
    plVar45[0x30] = 0;
    FUN_001ec308(plVar45[0x28]);
    plVar45[0x28] = 0;
    FUN_001ec308(plVar45[0x31]);
    plVar45[0x31] = 0;
    FUN_001ec308(plVar45[0x29]);
    plVar45[0x29] = 0;
    plVar45[0x30] = plVar22[0x30];
    plVar45[0x28] = plVar22[0x28];
    plVar45[0x31] = plVar22[0x31];
    plVar45[0x29] = plVar22[0x29];
    plVar22[0x28] = 0;
    plVar22[0x29] = 0;
    plVar22[0x30] = 0;
    plVar22[0x31] = 0;
  }
  FUN_001ec308(plVar45[0x18]);
  plVar45[0x18] = 0;
  FUN_001ec308(plVar45[0x1e]);
  plVar45[0x1e] = 0;
  lVar23 = plVar22[0x18];
  lVar39 = plVar22[0x19];
  lVar10 = plVar22[0x1b];
  plVar45[0x1a] = plVar22[0x1a];
  plVar45[0x1b] = lVar10;
  plVar45[0x18] = lVar23;
  plVar45[0x19] = lVar39;
  lVar23 = plVar22[0x1e];
  lVar39 = plVar22[0x1f];
  lVar10 = plVar22[0x21];
  plVar45[0x20] = plVar22[0x20];
  plVar45[0x21] = lVar10;
  plVar45[0x1e] = lVar23;
  plVar45[0x1f] = lVar39;
  *(undefined4 *)((long)plVar45 + 0x19c) = *(undefined4 *)((long)plVar22 + 0x19c);
  *(int *)(plVar45 + 0x33) = (int)plVar22[0x33];
  FUN_001ec308(plVar45[0x1c]);
  plVar45[0x1c] = 0;
  plVar45[0x1c] = plVar22[0x1c];
  plVar22[0x1c] = 0;
  FUN_001c5af8(plVar45);
  *(uint *)((long)plVar45 + 0x3fc) = *(uint *)((long)plVar45 + 0x3fc) | 2;
  FUN_001ec308(plVar22[0x42]);
  plVar22[0x42] = 0;
  FUN_001ec308(plVar22[0x43]);
  plVar22[0x43] = 0;
  FUN_001ec308(plVar22[0x44]);
  plVar22[0x44] = 0;
  FUN_001ec308(plVar22[0x30]);
  plVar22[0x30] = 0;
  FUN_001ec308(plVar22[0x28]);
  plVar22[0x28] = 0;
  FUN_001ec308(plVar22[0x31]);
  plVar22[0x31] = 0;
  FUN_001ec308(plVar22[0x29]);
  plVar22[0x29] = 0;
  FUN_001ec308(plVar22[0xc9]);
  plVar22[0xc9] = 0;
  FUN_001cb68c(plVar22 + 0x95,0);
  FUN_001cb68c(plVar22 + 0x99,0);
  FUN_001ec308(plVar22[0x9d]);
  plVar22[0x9d] = 0;
  FUN_001ec308(plVar22[0x5e]);
  FUN_001ec308(plVar22);
  *param_2 = plVar45;
  pcVar27 = "host";
  if ((*(byte *)((long)plVar45 + 0x3fc) & 0x10) != 0) {
    pcVar27 = "proxy";
  }
  if (plVar45[0x24] == 0) {
    if (plVar45[0x2c] == 0) {
      plVar22 = plVar45 + 0x1b;
    }
    else {
      plVar22 = plVar45 + 0x2d;
    }
  }
  else {
    plVar22 = plVar45 + 0x25;
  }
  FUN_001db818(param_1,"Re-using existing connection! (#%ld) with %s %s\n",plVar45[0xc],pcVar27,
               *plVar22);
  goto LAB_001e7a0c;
LAB_001e6300:
  do {
    if (uVar24 < sVar26) {
      while ((ulong)(byte)pcVar40[uVar24] < 0x40 &&
             (1L << ((ulong)(byte)pcVar40[uVar24] & 0x3f) & 0x100100000001U) != 0) {
        uVar24 = uVar24 + 1;
        if (sVar26 == uVar24) goto LAB_001e63e4;
      }
    }
    if (uVar24 == sVar26) break;
    sVar44 = uVar24;
    if (uVar24 < sVar26) {
      do {
        if ((ulong)(byte)pcVar40[sVar44] < 0x40 &&
            (1L << ((ulong)(byte)pcVar40[sVar44] & 0x3f) & 0x100100000001U) != 0) goto LAB_001e6384;
        sVar44 = sVar44 + 1;
      } while (sVar26 != sVar44);
      sVar44 = sVar26;
    }
LAB_001e6384:
    if (pcVar40[uVar24] == '.') {
      uVar24 = uVar24 + 1;
    }
    uVar30 = sVar44 - uVar24;
    if (uVar30 <= local_2b0) {
      iVar17 = FUN_001e0a34(pcVar40 + uVar24);
      if ((iVar17 != 0) && ((uVar30 == local_2b0 || (__s[(local_2b0 - uVar30) + -1] == '.'))))
      goto LAB_001e6240;
    }
    uVar24 = sVar44 + 1;
  } while (uVar24 < sVar26);
LAB_001e63e4:
  if ((!bVar15 && pcVar27 == (char *)0x0) && (pcVar25 == (char *)0x0)) {
    pbVar36 = *(byte **)plVar22[0x84];
    uVar33 = (uint)*pbVar36;
    if (*pbVar36 == 0) {
      puVar42 = &local_168;
    }
    else {
      puVar38 = &local_168;
      do {
        pbVar36 = pbVar36 + 1;
        iVar17 = tolower(uVar33);
        puVar42 = (undefined8 *)((long)puVar38 + 1);
        *(char *)puVar38 = (char)iVar17;
        uVar33 = (uint)*pbVar36;
        puVar38 = puVar42;
      } while (uVar33 != 0);
    }
    *(undefined4 *)((long)puVar42 + 3) = 0x79786f;
    *(undefined4 *)puVar42 = 0x6f72705f;
    pcVar40 = (char *)&local_168;
    pcVar27 = (char *)FUN_001e96dc(&local_168);
    if (pcVar27 == (char *)0x0) {
      iVar17 = FUN_001e0990("http_proxy",&local_168);
      if (iVar17 == 0) {
        pcVar40 = (char *)&local_168;
        FUN_001e0ad4(&local_168,&local_168,0x80);
        pcVar27 = (char *)FUN_001e96dc(&local_168);
        if (pcVar27 != (char *)0x0) goto LAB_001e64c0;
      }
      pcVar40 = "all_proxy";
      pcVar27 = (char *)FUN_001e96dc("all_proxy");
      if (pcVar27 == (char *)0x0) {
        pcVar40 = "ALL_PROXY";
        pcVar27 = (char *)FUN_001e96dc("ALL_PROXY");
        if (pcVar27 == (char *)0x0) goto LAB_001e64d8;
      }
    }
LAB_001e64c0:
    FUN_001db818(*plVar22,"Uses proxy env variable %s == \'%s\'\n",pcVar40,pcVar27);
  }
LAB_001e64d8:
  FUN_001ec308(local_2a8);
  if ((pcVar27 != (char *)0x0) &&
     ((*pcVar27 == '\0' || ((*(byte *)(plVar22[0x84] + 0x84) >> 4 & 1) != 0)))) {
    FUN_001ec308(pcVar27);
    pcVar27 = (char *)0x0;
  }
  if (pcVar25 == (char *)0x0) {
LAB_001e6530:
    if (pcVar27 == (char *)0x0) goto LAB_001e65ac;
    pcVar25 = (char *)0x0;
    bVar15 = false;
LAB_001e653c:
    iVar17 = FUN_001e7e3c(lVar23,plVar22,pcVar27,(int)plVar22[0x2f]);
    FUN_001ec308(pcVar27);
    if (iVar17 == 0) {
      if (bVar15) goto LAB_001e6564;
      goto LAB_001e6588;
    }
  }
  else {
    if ((*pcVar25 == '\0') || ((*(byte *)(plVar22[0x84] + 0x84) >> 4 & 1) != 0)) {
      FUN_001ec308(pcVar25);
      goto LAB_001e6530;
    }
    if (pcVar27 != (char *)0x0) {
      bVar15 = true;
      goto LAB_001e653c;
    }
LAB_001e6564:
    iVar17 = FUN_001e7e3c(lVar23,plVar22,pcVar25,(int)plVar22[0x27]);
    FUN_001ec308(pcVar25);
    if (iVar17 == 0) {
LAB_001e6588:
      if (plVar22[0x2a] == 0) {
        uVar33 = *(uint *)((long)plVar22 + 0x3fc) & 0xffffbfdf;
        *(uint *)((long)plVar22 + 0x3fc) = uVar33;
        if (plVar22[0x22] == 0) goto LAB_001e7038;
        if (plVar22[0x28] == 0) {
          lVar23 = plVar22[0x30];
          plVar22[0x30] = 0;
          plVar22[0x28] = lVar23;
          FUN_001ec308(plVar22[0x29]);
          lVar23 = plVar22[0x31];
          plVar22[0x31] = 0;
          plVar22[0x29] = lVar23;
          uVar33 = *(uint *)((long)plVar22 + 0x3fc);
        }
      }
      else {
        if ((*(byte *)(plVar22[0x84] + 0x80) & 3) == 0) {
          uVar33 = *puVar2;
          if (((*(byte *)(plVar22[0x84] + 0x85) >> 3 & 1) == 0) || ((uVar33 >> 0xe & 1) != 0)) {
            uVar33 = uVar33 | 0x4000;
            *puVar2 = uVar33;
          }
          else {
            plVar22[0x84] = (long)PTR_PTR_047cb9a0;
          }
        }
        else {
          uVar33 = *puVar2;
        }
        uVar33 = uVar33 | 0x20;
        *(uint *)((long)plVar22 + 0x3fc) = uVar33;
        if (plVar22[0x22] == 0) {
LAB_001e7038:
          uVar33 = uVar33 & 0xffffffbf;
          goto LAB_001e65b8;
        }
      }
      uVar33 = uVar33 | 0x40;
      goto LAB_001e65b8;
    }
LAB_001e6138:
    pcVar25 = (char *)0x0;
  }
LAB_001e65e8:
  pcVar27 = (char *)0x0;
LAB_001e65ec:
  FUN_001ec308(pcVar25);
  FUN_001ec308(pcVar27);
  if (iVar17 != 0) {
    return iVar17;
  }
  if (((*(byte *)(plVar22[0x85] + 0x84) & 1) != 0) && ((*puVar2 >> 5 & 1) != 0)) {
    *puVar2 = *puVar2 | 0x4000;
  }
  if ((*(long *)(param_1 + 0x6a8) == 0) || (((byte)param_1[0x15a4] >> 4 & 1) == 0)) {
LAB_001e666c:
    plVar1 = plVar22 + 0x42;
    plVar3 = plVar22 + 0x43;
    if ((*(int *)(param_1 + 0xc58) == 2) && (*(char *)puVar2 < '\0')) {
      bVar15 = *plVar1 != 0;
      if (bVar15) {
        FUN_001ec308();
        *plVar1 = 0;
      }
      bVar7 = *plVar3 != 0;
      if (bVar7) {
        FUN_001ec308();
        *plVar3 = 0;
      }
      *puVar2 = *puVar2 & 0xffffff7f;
    }
    else {
      bVar15 = false;
      bVar7 = false;
    }
    if (*(long *)(param_1 + 0xde0) != 0) {
      FUN_001ec308(*plVar1);
      lVar23 = FUN_001ec328(*(undefined8 *)(param_1 + 0xde0));
      *plVar1 = lVar23;
      if (lVar23 == 0) goto switchD_001e5be8_caseD_7;
      bVar15 = true;
      *puVar2 = *puVar2 | 0x80;
    }
    if (*(long *)(param_1 + 0xde8) != 0) {
      FUN_001ec308(*plVar3);
      lVar23 = FUN_001ec328(*(undefined8 *)(param_1 + 0xde8));
      *plVar3 = lVar23;
      if (lVar23 == 0) goto switchD_001e5be8_caseD_7;
      bVar7 = true;
      *puVar2 = *puVar2 | 0x80;
    }
    if (*(long *)(param_1 + 0xdf0) != 0) {
      FUN_001ec308(plVar22[0x44]);
      lVar23 = FUN_001ec328(*(undefined8 *)(param_1 + 0xdf0));
      plVar22[0x44] = lVar23;
      if (lVar23 == 0) goto switchD_001e5be8_caseD_7;
    }
    *puVar2 = *puVar2 & 0xffefffff;
    if ((*(int *)(param_1 + 0xc58) == 0) ||
       (((((char *)*plVar1 != (char *)0x0 && (*(char *)*plVar1 != '\0')) &&
         ((char *)*plVar3 != (char *)0x0)) && (*(char *)*plVar3 != '\0')))) {
joined_r0x001e67e0:
      if (bVar15) {
LAB_001e6870:
        uVar16 = FUN_001e315c(*(undefined8 *)(param_1 + 0x1548),2,*plVar1,0x80);
        switch(uVar16) {
        case 0:
          break;
        default:
          return 3;
        case 5:
          return 1;
        case 7:
          goto switchD_001e5be8_caseD_7;
        case 8:
          goto switchD_001e5be8_caseD_8;
        }
      }
    }
    else {
      local_168 = (char *)((ulong)local_168 & 0xffffffffffffff00);
      local_268[0] = '\0';
      iVar17 = FUN_001e92b8(plVar22[0x1a],plVar1,plVar3,&local_168,local_268,
                            *(undefined8 *)(param_1 + 0xd20));
      if (0 < iVar17) {
        FUN_001db818(param_1,"Couldn\'t find host %s in the .netrc file; using defaults\n",
                     plVar22[0x1a]);
        goto joined_r0x001e67e0;
      }
      if (iVar17 < 0) goto switchD_001e5be8_caseD_7;
      *puVar2 = *puVar2 | 0x100080;
      bVar7 = (bool)(bVar7 | local_268[0] != '\0');
      if (bVar15 || (char)local_168 != '\0') goto LAB_001e6870;
    }
    if (bVar7) {
      uVar16 = FUN_001e315c(*(undefined8 *)(param_1 + 0x1548),3,*plVar3,0x80);
      switch(uVar16) {
      case 0:
        break;
      default:
        return 3;
      case 5:
        return 1;
      case 7:
        goto switchD_001e5be8_caseD_7;
      case 8:
switchD_001e5be8_caseD_8:
        return 0x43;
      }
    }
    if (((*(byte *)(plVar22[0x84] + 0x84) >> 5 & 1) == 0) || (*(char *)puVar2 < '\0')) {
      pcVar27 = "";
      pcVar25 = "";
    }
    else {
      pcVar25 = "ftp@example.com";
      pcVar27 = "anonymous";
    }
    if (*plVar1 == 0) {
      lVar23 = FUN_001ec328(pcVar27);
      *plVar1 = lVar23;
      if (lVar23 == 0) goto switchD_001e5be8_caseD_7;
    }
    if (*plVar3 == 0) {
      lVar23 = FUN_001ec328(pcVar25);
      *plVar3 = lVar23;
      if ((lVar23 == 0) && (*plVar1 != 0)) {
        lVar23 = FUN_001ec328(&DAT_03c886bc);
        *plVar3 = lVar23;
      }
      else if (lVar23 != 0) goto LAB_001e697c;
    }
    else {
LAB_001e697c:
      puVar42 = *(undefined8 **)(param_1 + 0xa20);
      if (puVar42 != (undefined8 *)0x0) {
        do {
          pcVar27 = (char *)*puVar42;
          if (*pcVar27 == ':') {
LAB_001e6a18:
            pcVar25 = pcVar27 + 1;
            if (*pcVar25 != ':') {
              pcVar27 = strchr(pcVar25,0x3a);
              if (pcVar27 != (char *)0x0) {
                local_168 = (char *)0x0;
                lVar23 = strtol(pcVar25,(char **)&local_168,10);
                if ((local_168 == pcVar27) && (lVar23 == (int)plVar22[0x33])) {
                  pcVar27 = pcVar27 + 1;
                  goto LAB_001e6a2c;
                }
              }
              goto LAB_001e6b64;
            }
            pcVar27 = pcVar27 + 2;
LAB_001e6a2c:
            if (*pcVar27 == '\0') goto LAB_001e6b64;
            pcVar27 = (char *)FUN_001ec328();
            if (pcVar27 == (char *)0x0) {
              return 0x1b;
            }
            if (*pcVar27 == '[') {
              FUN_001db9c8(param_1,"Use of IPv6 in *_CONNECT_TO without IPv6 support built-in!");
              FUN_001ec308(pcVar27);
              return 4;
            }
            pcVar25 = strchr(pcVar27,0x3a);
            if (pcVar25 == (char *)0x0) {
LAB_001e6ae8:
              uVar24 = 0xffffffff;
            }
            else {
              local_168 = (char *)0x0;
              *pcVar25 = '\0';
              pcVar25 = pcVar25 + 1;
              if (*pcVar25 == '\0') goto LAB_001e6ae8;
              uVar24 = strtol(pcVar25,(char **)&local_168,10);
              if (local_168 == (char *)0x0) {
                if (uVar24 >> 0x10 != 0) goto LAB_001e6b48;
              }
              else if ((uVar24 >> 0x10 != 0) || (*local_168 != '\0')) {
LAB_001e6b48:
                FUN_001db818(param_1,"No valid port number in connect to host string (%s)\n",pcVar25
                            );
                FUN_001ec308(pcVar27);
                goto LAB_001e6b64;
              }
            }
            iVar17 = (int)uVar24;
            pcVar25 = (char *)FUN_001ec328(pcVar27);
            FUN_001ec308(pcVar27);
            if (pcVar25 == (char *)0x0) {
              return 0x1b;
            }
            if (*pcVar25 == '\0') goto LAB_001e6b70;
            plVar22[0x1e] = (long)pcVar25;
            plVar22[0x20] = (long)pcVar25;
            *(uint *)((long)plVar22 + 0x3fc) = *(uint *)((long)plVar22 + 0x3fc) | 4;
            FUN_001db818(param_1,"Connecting to hostname: %s\n",pcVar25);
            bVar31 = 0;
          }
          else {
            bVar15 = (*(uint *)((long)plVar22 + 0x3fc) & 0x200) != 0;
            puVar8 = &DAT_03c886bc;
            if (bVar15) {
              puVar8 = &DAT_03be62d9;
            }
            puVar9 = &DAT_03c886bc;
            if (bVar15) {
              puVar9 = &DAT_03c246fd;
            }
            pcVar25 = (char *)FUN_001ce400("%s%s%s",puVar8,plVar22[0x1a],puVar9);
            if (pcVar25 == (char *)0x0) {
              return 0x1b;
            }
            sVar26 = strlen(pcVar25);
            iVar17 = FUN_001e0a34(pcVar27,pcVar25,sVar26);
            FUN_001ec308(pcVar25);
            if ((iVar17 != 0) && (pcVar27 = pcVar27 + sVar26, *pcVar27 == ':')) goto LAB_001e6a18;
LAB_001e6b64:
            pcVar25 = (char *)0x0;
            iVar17 = -1;
LAB_001e6b70:
            *puVar2 = *puVar2 & 0xfffffffb;
            FUN_001ec308(pcVar25);
            bVar31 = 1;
          }
          if (-1 < iVar17) {
            *(int *)((long)plVar22 + 0x19c) = iVar17;
            *(uint *)((long)plVar22 + 0x3fc) = *(uint *)((long)plVar22 + 0x3fc) | 8;
            FUN_001db818(param_1,"Connecting to port: %d\n",iVar17);
            break;
          }
          *puVar2 = *puVar2 & 0xfffffff7;
          puVar42 = (undefined8 *)puVar42[1];
        } while ((bool)(bVar31 & puVar42 != (undefined8 *)0x0));
      }
      pcVar27 = (char *)plVar22[0x1a];
      plVar22[0x1b] = (long)pcVar27;
      do {
        cVar13 = *pcVar27;
        if (cVar13 == '\0') goto LAB_001e6cb8;
        pcVar27 = pcVar27 + 1;
      } while (-1 < cVar13);
      FUN_001db818(*plVar22,"IDN support not present, can\'t parse Unicode domains\n");
LAB_001e6cb8:
      uVar33 = *puVar2;
      if ((uVar33 >> 2 & 1) != 0) {
        pcVar27 = (char *)plVar22[0x20];
        plVar22[0x21] = (long)pcVar27;
        do {
          cVar13 = *pcVar27;
          if (cVar13 == '\0') goto LAB_001e6cf4;
          pcVar27 = pcVar27 + 1;
        } while (-1 < cVar13);
        FUN_001db818(*plVar22,"IDN support not present, can\'t parse Unicode domains\n");
        uVar33 = *puVar2;
      }
LAB_001e6cf4:
      if ((uVar33 >> 5 & 1) != 0) {
        pcVar27 = (char *)plVar22[0x2c];
        plVar22[0x2d] = (long)pcVar27;
        do {
          cVar13 = *pcVar27;
          if (cVar13 == '\0') goto LAB_001e6d28;
          pcVar27 = pcVar27 + 1;
        } while (-1 < cVar13);
        FUN_001db818(*plVar22,"IDN support not present, can\'t parse Unicode domains\n");
        uVar33 = *puVar2;
      }
LAB_001e6d28:
      if ((uVar33 >> 6 & 1) != 0) {
        pcVar27 = (char *)plVar22[0x24];
        plVar22[0x25] = (long)pcVar27;
        do {
          cVar13 = *pcVar27;
          if (cVar13 == '\0') goto LAB_001e6d5c;
          pcVar27 = pcVar27 + 1;
        } while (-1 < cVar13);
        FUN_001db818(*plVar22,"IDN support not present, can\'t parse Unicode domains\n");
        uVar33 = *puVar2;
      }
LAB_001e6d5c:
      if ((uVar33 >> 2 & 1) != 0) {
        iVar17 = FUN_001e0990(plVar22[0x20],plVar22[0x1a]);
        uVar33 = *(uint *)((long)plVar22 + 0x3fc);
        if (iVar17 != 0) {
          uVar33 = uVar33 & 0xfffffffb;
          *puVar2 = uVar33;
        }
      }
      if (((uVar33 >> 3 & 1) != 0) && (*(int *)((long)plVar22 + 0x19c) == (int)plVar22[0x33])) {
        uVar33 = uVar33 & 0xfffffff7;
        *puVar2 = uVar33;
      }
      if (((uVar33 & 0xc) != 0) && ((uVar33 >> 5 & 1) != 0)) {
        *puVar2 = uVar33 | 0x4000;
      }
      *(undefined4 *)((long)plVar22 + 0xbc) = 1;
      lVar23 = plVar22[0x84];
      if (*(code **)(lVar23 + 8) != (code *)0x0) {
        iVar17 = (**(code **)(lVar23 + 8))(plVar22);
        if (iVar17 != 0) {
          return iVar17;
        }
        lVar23 = plVar22[0x84];
      }
      if (plVar22[0x32] < 0) {
        plVar22[0x32] = *(long *)(lVar23 + 0x78);
      }
      puVar8 = PTR_FUN_047cb9a8;
      plVar22[0x4e] = (long)PTR_FUN_047cb9a8;
      puVar9 = PTR_FUN_047cb9b0;
      plVar22[0x50] = (long)PTR_FUN_047cb9b0;
      plVar22[0x4f] = (long)puVar8;
      plVar22[0x51] = (long)puVar9;
      *(uint *)((long)plVar22 + 0x3fc) =
           *(uint *)((long)plVar22 + 0x3fc) & 0xf0000000 |
           *(uint *)((long)plVar22 + 0x3fc) & 0x7ffffff |
           ((uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x2d) & 1) << 0x1b;
      *(undefined8 *)(param_1 + 0xb58) = *(undefined8 *)(param_1 + 0xd88);
      *(undefined8 *)(param_1 + 0xa58) = *(undefined8 *)(param_1 + 0xd50);
      *(undefined8 *)(param_1 + 0xb30) = *(undefined8 *)(param_1 + 0xd58);
      *(undefined8 *)(param_1 + 0xad0) = *(undefined8 *)(param_1 + 0xdb8);
      *(undefined8 *)(param_1 + 0xbb0) = *(undefined8 *)(param_1 + 0xdd0);
      *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(param_1 + 0xd60);
      *(undefined8 *)(param_1 + 0xb38) = *(undefined8 *)(param_1 + 0xd68);
      *(undefined8 *)(param_1 + 0xaf8) = *(undefined8 *)(param_1 + 0xc90);
      *(undefined8 *)(param_1 + 0xbd0) = *(undefined8 *)(param_1 + 0xc98);
      *(undefined8 *)(param_1 + 0xa70) = *(undefined8 *)(param_1 + 0xda8);
      *(undefined8 *)(param_1 + 0xb48) = *(undefined8 *)(param_1 + 0xda8);
      *(undefined8 *)(param_1 + 0xa78) = *(undefined8 *)(param_1 + 0xda0);
      *(undefined8 *)(param_1 + 0xb50) = *(undefined8 *)(param_1 + 0xda0);
      *(undefined8 *)(param_1 + 0xa88) = *(undefined8 *)(param_1 + 0xd90);
      *(undefined8 *)(param_1 + 0xba8) = *(undefined8 *)(param_1 + 0xdc0);
      *(undefined8 *)(param_1 + 0xbc8) = *(undefined8 *)(param_1 + 0xc88);
      *(undefined8 *)(param_1 + 0xb40) = *(undefined8 *)(param_1 + 0xc88);
      *(undefined8 *)(param_1 + 0xb00) = *(undefined8 *)(param_1 + 0xce8);
      *(undefined8 *)(param_1 + 0xbd8) = *(undefined8 *)(param_1 + 0xcf0);
      *(undefined8 *)(param_1 + 0xa80) = *(undefined8 *)(param_1 + 0xd80);
      *(undefined8 *)(param_1 + 0xb60) = *(undefined8 *)(param_1 + 0xd98);
      *(undefined8 *)(param_1 + 0xb08) = *(undefined8 *)(param_1 + 0xd08);
      *(undefined8 *)(param_1 + 0xbe0) = *(undefined8 *)(param_1 + 0xd10);
      *(undefined8 *)(param_1 + 0xad8) = *(undefined8 *)(param_1 + 0xdc8);
      *(undefined8 *)(param_1 + 0xaf0) = *(undefined8 *)(param_1 + 0xc80);
      *(undefined8 *)(param_1 + 0xa68) = *(undefined8 *)(param_1 + 0xc80);
      *(undefined8 *)(param_1 + 0xb10) = *(undefined8 *)(param_1 + 0xcf8);
      plVar4 = plVar22 + 0x5f;
      *(undefined8 *)(param_1 + 0xbe8) = *(undefined8 *)(param_1 + 0xd00);
      uVar24 = FUN_001eb67c(param_1 + 0xa48);
      if ((uVar24 & 1) != 0) {
        uVar24 = FUN_001eb67c(param_1 + 0xb20);
        if ((uVar24 & 1) != 0) {
          auVar46 = FUN_001e0dfc();
          iVar17 = FUN_001e0e28(auVar46._0_8_,auVar46._8_8_,
                                *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x40),
                                *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x48));
          if (999 < iVar17) {
            local_160[0] = 0;
            local_168 = param_1;
            uVar24 = FUN_001c7214(param_1,*(undefined8 *)(param_1 + 0x1100),&local_168,FUN_001e8310)
            ;
            while ((uVar24 & 1) != 0) {
              FUN_001e4c44(param_1,local_160[0],1);
              uVar24 = FUN_001c7214(param_1,*(undefined8 *)(param_1 + 0x1100),&local_168,
                                    FUN_001e8310);
            }
            *(undefined1 (*) [16])(*(long *)(param_1 + 0x1100) + 0x40) = auVar46;
          }
          if (((((uint)*(ulong *)(param_1 + 0xf40) >> 0x1d & 1) == 0) ||
              (((byte)param_1[0x15a4] >> 1 & 1) != 0)) &&
             ((*(ulong *)(param_1 + 0xf40) >> 0x26 & 1) == 0)) {
            uVar19 = FUN_001e7d50(param_1,plVar22);
            uVar33 = uVar19;
            if ((uVar19 & 1) != 0) {
              uVar24 = FUN_001da2e0(param_1,plVar22);
              uVar33 = uVar19 & 0xfffffffe;
              if ((uVar24 & 1) == 0) {
                uVar33 = uVar19;
              }
            }
            piVar29 = (int *)FUN_001c6ed8(plVar22,*(undefined8 *)(param_1 + 0x1100));
            if (piVar29 == (int *)0x0) {
LAB_001e75ac:
              FUN_001c6e04(param_1);
              goto LAB_001e75b4;
            }
            if (*piVar29 == 2) {
              local_2c8 = 0;
              pcVar27 = "can multiplex";
            }
            else {
              if (*(long *)(param_1 + 0xd8) == 0) {
                local_2c8 = 0;
              }
              else {
                local_2c8 = *(ulong *)(*(long *)(param_1 + 0xd8) + 0x168);
              }
              pcVar27 = "serially";
            }
            lVar23 = 0xd0;
            if ((*(uint *)((long)plVar22 + 0x3fc) & 4) != 0) {
              lVar23 = 0x100;
            }
            pcVar25 = "can pipeline";
            if (*piVar29 != 1) {
              pcVar25 = pcVar27;
            }
            FUN_001db818(param_1,"Found bundle for host %s: %p [%s]\n",
                         *(undefined8 *)((long)plVar22 + lVar23),piVar29,pcVar25);
            if (uVar33 == 0) {
LAB_001e7144:
              uVar33 = 0;
LAB_001e7148:
              puVar42 = *(undefined8 **)(piVar29 + 4);
              if (puVar42 != (undefined8 *)0x0) {
                bVar15 = false;
                plVar41 = (long *)0x0;
                local_2f0 = local_2c8;
LAB_001e7170:
                plVar45 = (long *)*puVar42;
                puVar42 = (undefined8 *)puVar42[2];
                if (-1 < *(int *)((long)plVar45 + 0x3fc)) {
                  uVar24 = FUN_001e834c(plVar45,param_1);
                  if ((uVar24 & 1) == 0) {
                    uVar24 = plVar45[0x9c] + plVar45[0x98];
                    if (uVar33 == 0) {
                      if (uVar24 == 0) {
                        if ((char)plVar45[0x11] == '\0') {
                          uVar24 = plVar45[0xc];
                          pcVar27 = "Connection #%ld is still name resolving, can\'t reuse\n";
                        }
                        else {
                          if ((int)plVar45[0x4b] == -1) {
                            if ((*(uint *)((long)plVar45 + 0x3fc) & 1) == 0) {
                              bVar15 = true;
                            }
                          }
                          else if ((*(uint *)((long)plVar45 + 0x3fc) & 1) == 0) goto LAB_001e7230;
                          uVar24 = plVar45[0xc];
                          pcVar27 = "Connection #%ld isn\'t open enough, can\'t reuse\n";
                        }
                        goto LAB_001e7444;
                      }
                    }
                    else if (((*(uint *)((long)plVar45 + 0x3fc) ^ 0xffffffff) & 0x1001) != 0) {
                      if ((*(uint *)((long)plVar45 + 0x3fc) >> 0x1a & 1) == 0) {
                        if ((long *)plVar45[0x95] == (long *)0x0) {
                          plVar35 = (long *)plVar45[0x99];
                          if (plVar35 != (long *)0x0) {
LAB_001e721c:
                            lVar23 = *plVar35;
                            goto LAB_001e7220;
                          }
                        }
                        else {
                          lVar23 = *(long *)plVar45[0x95];
                          plVar35 = (long *)plVar45[0x99];
                          if (plVar35 == (long *)0x0) {
LAB_001e7220:
                            if (lVar23 == 0) goto LAB_001e7230;
                          }
                          else if (lVar23 == 0) goto LAB_001e721c;
                          uVar30 = FUN_001e7d50(lVar23,plVar45);
                          if ((uVar30 & 1) == 0) goto LAB_001e7448;
                        }
                      }
LAB_001e7230:
                      lVar23 = plVar22[0x84];
                      if (((*(uint *)(plVar45[0x84] + 0x84) ^ *(uint *)(lVar23 + 0x84)) & 1) == 0) {
LAB_001e7264:
                        uVar34 = *puVar2;
                        uVar19 = *(uint *)((long)plVar45 + 0x3fc) ^ uVar34;
                        if ((uVar19 >> 5 & 1) == 0) {
                          uVar6 = uVar34 >> 6 & 1;
                          if (uVar6 == (*(uint *)((long)plVar45 + 0x3fc) >> 6 & 1)) {
                            if (uVar6 != 0) {
                              uVar30 = FUN_001e85a0(plVar22 + 0x22,plVar45 + 0x22);
                              if ((uVar30 & 1) == 0) goto LAB_001e7448;
                              uVar34 = *puVar2;
                              uVar19 = *(uint *)((long)plVar45 + 0x3fc) ^ uVar34;
                            }
                            if ((uVar19 & 0xc) == 0) {
                              if ((uVar34 >> 5 & 1) == 0) {
LAB_001e72b8:
                                if ((uVar33 != 0) || (*plVar45 == 0)) {
                                  if ((plVar45[0x98] + plVar45[0x9c] != 0) && (*plVar45 != 0)) {
                                    if (*(long *)(*plVar45 + 0xd8) != *(long *)(*plVar22 + 0xd8))
                                    goto LAB_001e7448;
                                  }
                                  pcVar27 = (char *)plVar22[0xc9];
                                  if (((pcVar27 == (char *)0x0) && ((short)plVar22[0xca] == 0)) ||
                                     ((((short)plVar45[0xca] == (short)plVar22[0xca] &&
                                       (*(int *)((long)plVar45 + 0x654) ==
                                        *(int *)((long)plVar22 + 0x654))) &&
                                      ((pcVar27 == (char *)0x0 ||
                                       (((char *)plVar45[0xc9] != (char *)0x0 &&
                                        (iVar17 = strcmp((char *)plVar45[0xc9],pcVar27), iVar17 == 0
                                        )))))))) {
                                    puVar38 = (undefined8 *)plVar22[0x84];
                                    uVar19 = *(uint *)((long)puVar38 + 0x84);
                                    if ((uVar19 >> 7 & 1) == 0) {
                                      iVar17 = strcmp((char *)*plVar1,(char *)plVar45[0x42]);
                                      if (iVar17 == 0) {
                                        iVar17 = strcmp((char *)*plVar3,(char *)plVar45[0x43]);
                                        if (iVar17 == 0) goto LAB_001e7330;
                                      }
                                    }
                                    else {
LAB_001e7330:
                                      if (((*puVar2 >> 5 & 1) != 0) &&
                                         ((*puVar2 & 0x4000) == 0 && (uVar19 & 1) == 0))
                                      goto LAB_001e73dc;
                                      iVar17 = FUN_001e0990(*puVar38,*(undefined8 *)plVar45[0x84]);
                                      if ((iVar17 != 0) ||
                                         ((iVar17 = FUN_001e83f8(*(undefined4 *)
                                                                  (plVar45[0x84] + 0x80)),
                                          iVar17 == *(int *)(plVar22[0x84] + 0x80) &&
                                          ((*(byte *)((long)plVar45 + 0x66c) & 1) != 0)))) {
                                        uVar19 = *puVar2;
                                        if ((uVar19 >> 2 & 1) != 0) {
                                          iVar17 = FUN_001e0990(plVar22[0x20],plVar45[0x20]);
                                          if (iVar17 == 0) goto LAB_001e7448;
                                          uVar19 = *puVar2;
                                        }
                                        if ((uVar19 >> 3 & 1) != 0) {
                                          if (*(int *)((long)plVar22 + 0x19c) !=
                                              *(int *)((long)plVar45 + 0x19c)) goto LAB_001e7448;
                                        }
                                        iVar17 = FUN_001e0990(plVar22[0x1a],plVar45[0x1a]);
                                        if (iVar17 != 0) {
                                          if ((int)plVar22[0x33] == (int)plVar45[0x33]) {
                                            if ((*(byte *)(plVar22[0x84] + 0x84) & 1) == 0) {
LAB_001e73dc:
                                              if ((uVar33 == 0) || (uVar24 == 0)) goto LAB_001e767c;
                                              if (local_2c8 - 1 < uVar24) {
                                                pcVar27 = "Pipe is full, skip (%zu)\n";
                                              }
                                              else {
                                                if (((*(byte *)((long)plVar45 + 0x3ff) >> 2 & 1) ==
                                                     0) || (uVar24 < *(uint *)(plVar45 + 0xbd))) {
                                                  uVar30 = FUN_001da118(param_1,plVar45);
                                                  if ((uVar30 & 1) != 0) {
                                                    FUN_001db818(param_1,"Penalized, skip\n");
                                                    goto LAB_001e7448;
                                                  }
                                                  if (local_2c8 == 0) {
                                                    FUN_001db818(param_1,
                                                  "Multiplexed connection found!\n");
                                                  goto LAB_001e767c;
                                                  }
                                                  if (uVar24 < local_2f0) {
                                                    plVar41 = plVar45;
                                                    local_2f0 = uVar24;
                                                  }
                                                  goto LAB_001e7448;
                                                }
                                                pcVar27 = 
                                                "MAX_CONCURRENT_STREAMS reached, skip (%zu)\n";
                                              }
LAB_001e7444:
                                              FUN_001db818(param_1,pcVar27,uVar24);
                                            }
                                            else {
                                              uVar30 = FUN_001eb5ac(plVar4,plVar45 + 0x5f);
                                              if ((uVar30 & 1) != 0) {
                                                if ((int)plVar45[0x52] == 2) goto LAB_001e73dc;
                                                bVar15 = true;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                uVar30 = FUN_001e85a0(plVar22 + 0x2a,plVar45 + 0x2a);
                                if (((uVar30 & 1) != 0) &&
                                   (((*(uint *)((long)plVar45 + 0x3fc) ^ *puVar2) >> 0xe & 1) == 0))
                                {
                                  if ((int)plVar22[0x2f] != 2) goto LAB_001e72b8;
                                  if ((*(byte *)(plVar22[0x84] + 0x84) & 1) == 0) {
                                    uVar30 = FUN_001eb5ac(plVar4,plVar45 + 0x5f);
                                    if ((uVar30 & 1) != 0) {
                                      iVar17 = (int)plVar45[0x52];
                                      goto LAB_001e7520;
                                    }
                                  }
                                  else {
                                    uVar30 = FUN_001eb5ac(plVar22 + 0x6f,plVar45 + 0x6f);
                                    if ((uVar30 & 1) != 0) {
                                      iVar17 = (int)plVar45[0x58];
LAB_001e7520:
                                      if (iVar17 == 2) goto LAB_001e72b8;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        iVar17 = FUN_001e83f8(*(undefined4 *)(plVar45[0x84] + 0x80));
                        if (iVar17 == *(int *)(lVar23 + 0x80)) {
                          if ((*(byte *)((long)plVar45 + 0x66c) & 1) != 0) goto LAB_001e7264;
                        }
                      }
                    }
                  }
                  else {
                    FUN_001e4c44(param_1,plVar45,1);
                  }
                }
LAB_001e7448:
                if (puVar42 == (undefined8 *)0x0) goto LAB_001e7678;
                goto LAB_001e7170;
              }
              goto LAB_001e75ac;
            }
            iVar17 = *piVar29;
            if (0 < iVar17) {
LAB_001e70f4:
              if (iVar17 == 1) {
                uVar24 = FUN_001cf51c(*(undefined8 *)(param_1 + 0xd8),1);
                if ((uVar24 & 1) != 0) {
                  iVar17 = *piVar29;
                  goto LAB_001e7110;
                }
                pcVar27 = "Could pipeline, but not asked to!\n";
LAB_001e713c:
                FUN_001db818(param_1,pcVar27);
                goto LAB_001e7144;
              }
LAB_001e7110:
              if ((iVar17 == 2) &&
                 (uVar24 = FUN_001cf51c(*(undefined8 *)(param_1 + 0xd8),2), (uVar24 & 1) == 0)) {
                pcVar27 = "Could multiplex, but not asked to!\n";
                goto LAB_001e713c;
              }
              goto LAB_001e7148;
            }
            if ((iVar17 != 0) || (((byte)param_1[0xf46] >> 1 & 1) == 0)) {
              FUN_001db818(param_1,"Server doesn\'t support multi-use (yet)\n");
              iVar17 = *piVar29;
              uVar33 = 0;
              goto LAB_001e70f4;
            }
            FUN_001db818(param_1,"Server doesn\'t support multi-use yet, wait\n");
            FUN_001c6e04(param_1);
LAB_001e7bd8:
            bVar15 = false;
          }
          else {
LAB_001e75b4:
            bVar15 = true;
          }
          if ((*(byte *)(plVar22[0x84] + 0x85) & 1) != 0) {
            uVar24 = *(ulong *)(param_1 + 0xf40);
            if ((uVar24 >> 0x2f & 1) != 0) {
              *puVar2 = *puVar2 | 0x20000000;
              uVar24 = *(ulong *)(param_1 + 0xf40);
            }
            if ((uVar24 >> 0x2e & 1) != 0) {
              *puVar2 = *puVar2 | 0x10000000;
            }
          }
          if (!bVar15) {
LAB_001e79c0:
            FUN_001db818(param_1,"No connections available.\n");
            FUN_001e4d68(plVar22);
            *param_2 = 0;
            return 0x59;
          }
          lVar23 = FUN_001c6ed8(plVar22,*(undefined8 *)(param_1 + 0x1100));
          if (((uVar20 == 0) || (lVar23 == 0)) || (*(ulong *)(lVar23 + 8) < uVar20)) {
            FUN_001c6e04(param_1);
          }
          else {
            lVar23 = FUN_001c74bc(param_1);
            FUN_001c6e04(param_1);
            if (lVar23 == 0) {
              FUN_001db818(param_1,"No more connections allowed to host: %zu\n",uVar20);
              goto LAB_001e79c0;
            }
            FUN_001e4c44(param_1,lVar23,0);
          }
          if ((uVar21 != 0) && (uVar20 = FUN_001c6e18(param_1), uVar21 <= uVar20)) {
            lVar23 = FUN_001c738c(param_1);
            if (lVar23 == 0) {
              FUN_001db818(param_1,"No connections available in cache\n");
              goto LAB_001e79c0;
            }
            FUN_001e4c44(param_1,lVar23,0);
          }
          iVar17 = FUN_001c6f90(*(undefined8 *)(param_1 + 0x1100),plVar22);
          if (iVar17 != 0) {
            return iVar17;
          }
          plVar45 = plVar22;
LAB_001e7a0c:
          FUN_001e7c7c(param_1,plVar45);
          lVar23 = *(long *)(param_1 + 0x800);
          *(long *)(param_1 + 0x14f8) = lVar23;
          if ((lVar23 == 0) && (*(long *)(param_1 + 0xd38) == 0)) {
            uVar32 = *(ushort *)(param_1 + 0x15a4) & 0xfdff;
          }
          else {
            if (((byte)param_1[0x15a5] >> 2 & 1) != 0) {
              FUN_001ec308(*(undefined8 *)(param_1 + 0x14f0));
              lVar23 = *(long *)(param_1 + 0x14f8);
            }
            if (lVar23 == 0) {
              lVar23 = FUN_001ec328(*(undefined8 *)(param_1 + 0xd38));
            }
            else {
              lVar23 = FUN_001ce400(&DAT_03c7b5a7);
            }
            uVar32 = *(ushort *)(param_1 + 0x15a4) & 0xf800 |
                     *(ushort *)(param_1 + 0x15a4) & 0x3ff | (ushort)(lVar23 != 0) << 10;
            *(long *)(param_1 + 0x14f0) = lVar23;
            *(ushort *)(param_1 + 0x15a4) = uVar32;
            if (lVar23 == 0) goto switchD_001e5be8_caseD_7;
            uVar32 = uVar32 | 0x200;
          }
          *(ushort *)(param_1 + 0x15a4) = uVar32;
          plVar45[0xa0] = *(long *)(param_1 + 0x6f0);
          plVar45[0xa1] = *(long *)(param_1 + 0x778);
          iVar17 = FUN_001c5a28(param_1,0,1);
          uVar33 = *(uint *)((long)plVar45 + 0x3fc);
          if ((uVar33 >> 1 & 1) != 0) {
            iVar17 = 0;
            *param_3 = 0;
            goto LAB_001e7c10;
          }
          if ((uVar33 >> 4 & 1) == 0) {
            plVar22 = plVar45 + 0x18;
            if ((uVar33 & 4) != 0) {
              plVar22 = plVar45 + 0x1e;
            }
            lVar23 = 0x198;
            if ((uVar33 & 8) != 0) {
              lVar23 = 0x19c;
            }
            plVar45[0x32] = (long)*(int *)((long)plVar45 + lVar23);
            lVar23 = FUN_001ec328(plVar22[2]);
            plVar45[0x1c] = lVar23;
            if (lVar23 == 0) goto LAB_001e7bb0;
            iVar17 = FUN_001c9680(plVar45,lVar23,(int)plVar45[0x32],&local_168,(long)iVar17);
            if (iVar17 == -2) goto LAB_001e7bb8;
            if (iVar17 == 1) goto LAB_001e7ba0;
            if (local_168 != (char *)0x0) goto LAB_001e7be8;
            FUN_001db9c8(param_1,"Couldn\'t resolve host \'%s\'",plVar22[3]);
            iVar17 = 6;
          }
          else {
            plVar22 = plVar45 + 0x2a;
            if ((uVar33 & 0x40) != 0) {
              plVar22 = plVar45 + 0x22;
            }
            lVar23 = FUN_001ec328(plVar22[2]);
            plVar45[0x1c] = lVar23;
            if (lVar23 == 0) {
LAB_001e7bb0:
              iVar17 = 0x1b;
              goto LAB_001e7c10;
            }
            iVar17 = FUN_001c9680(plVar45,lVar23,(int)plVar45[0x32],&local_168,(long)iVar17);
            if (iVar17 == -2) {
LAB_001e7bb8:
              iVar17 = 0x1c;
            }
            else if (iVar17 == 1) {
LAB_001e7ba0:
              iVar17 = 0;
              *param_3 = 1;
            }
            else if (local_168 == (char *)0x0) {
              FUN_001db9c8(param_1,"Couldn\'t resolve proxy \'%s\'",plVar22[3]);
              iVar17 = 5;
            }
            else {
LAB_001e7be8:
              iVar17 = 0;
            }
          }
          plVar45[0xd] = (long)local_168;
LAB_001e7c10:
          FUN_001e7df4(plVar45 + 0x18);
          uVar33 = *(uint *)((long)plVar45 + 0x3fc);
          if ((uVar33 >> 5 & 1) != 0) {
            FUN_001e7df4(plVar45 + 0x2a);
            uVar33 = *(uint *)((long)plVar45 + 0x3fc);
          }
          if ((uVar33 >> 6 & 1) != 0) {
            FUN_001e7df4(plVar45 + 0x22);
            uVar33 = *(uint *)((long)plVar45 + 0x3fc);
          }
          if ((uVar33 >> 2 & 1) == 0) {
            return iVar17;
          }
          FUN_001e7df4(plVar45 + 0x1e);
          return iVar17;
        }
      }
    }
  }
  else {
    *(uint *)(plVar22 + 0x33) = (uint)*(long *)(param_1 + 0x6a8) & 0xffff;
    FUN_001ce394(&local_168,0x10,&DAT_03bd1d93);
    iVar17 = FUN_001e315c(*(undefined8 *)(param_1 + 0x1548),6,&local_168,0);
    if (iVar17 == 0) goto LAB_001e666c;
  }
switchD_001e5be8_caseD_7:
  iVar17 = 0x1b;
switchD_001e5be8_caseD_1:
  return iVar17;
}


