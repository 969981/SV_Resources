/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b9b1e8; name: FUN_00b9b1e8
 */


void FUN_00b9b1e8(ulong param_1,long param_2,undefined8 *param_3,undefined8 *param_4,byte param_5)

{
  bool bVar1;
  undefined *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  byte *pbVar10;
  undefined8 uVar11;
  size_t sVar12;
  char *pcVar13;
  void *__dest;
  ulong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  string *psVar22;
  long lVar23;
  ulong uVar24;
  size_t sVar25;
  byte *pbVar26;
  byte *__s2;
  long *plVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  void *__src;
  long *plVar31;
  float fVar32;
  double dVar33;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_168;
  undefined4 local_160;
  char *local_138;
  undefined4 local_130;
  byte *local_108;
  uint local_100;
  undefined2 local_f8;
  byte bStack_f6;
  undefined4 uStack_f5;
  undefined1 uStack_f1;
  ulong local_d8;
  undefined8 local_d0;
  long local_c8;
  string local_c0 [8];
  size_t local_b8;
  byte *local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined4 uStack_96;
  char acStack_92 [2];
  string local_90 [16];
  long local_80;
  long local_78;
  long *plStack_70;
  
  puVar16 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    puVar16 = *(undefined8 **)(param_1 + 0x50);
  }
  pbVar10 = (byte *)FUN_00b7a414(*(undefined8 *)(param_1 + 8),puVar16[1]);
  if ((*pbVar10 & 1) == 0) {
    if (*pbVar10 >> 1 != 0) goto LAB_00b9b260;
  }
  else if (*(long *)(pbVar10 + 8) != 0) {
LAB_00b9b260:
    std::string::append((ulong)pbVar10,'\x01');
  }
  pbVar19 = *(byte **)(param_2 + 0x18);
  pbVar26 = *(byte **)(pbVar19 + 0x10);
  if ((*pbVar19 & 1) == 0) {
    pbVar26 = pbVar19 + 1;
  }
  std::string::append((char *)pbVar10,(ulong)pbVar26);
  FUN_00b8c44c(param_1,*(undefined8 *)(param_2 + 0x18),pbVar10,param_2);
  uVar11 = FUN_00b7a414(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar11;
  param_4[1] = pbVar10;
  param_4[6] = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(param_4 + 7) = *(undefined4 *)(param_2 + 0x20);
  *(byte *)((long)param_4 + 0x44) = param_5 & 1;
  std::string::string(local_c0,*(string **)(param_2 + 0x18));
  pbVar10 = (byte *)((ulong)local_c0 | 1);
  pbVar19 = pbVar10;
  pbVar26 = pbVar10 + ((byte)local_c0[0] >> 1);
  if (((byte)local_c0[0] & 1) != 0) {
    pbVar19 = local_b0;
    pbVar26 = local_b0 + local_b8;
  }
  for (; pbVar19 != pbVar26; pbVar19 = pbVar19 + 1) {
    if (*pbVar19 - 0x41 < 0x1a) {
      *pbVar19 = *pbVar19 + 0x20;
    }
  }
  pbVar26 = *(byte **)(param_2 + 0x18);
  sVar25 = (size_t)((byte)local_c0[0] >> 1);
  sVar12 = sVar25;
  if (((byte)local_c0[0] & 1) != 0) {
    sVar12 = local_b8;
  }
  bVar5 = *pbVar26;
  sVar3 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar3 = *(size_t *)(pbVar26 + 8);
  }
  if (sVar12 == sVar3) {
    pbVar19 = pbVar10;
    if (((byte)local_c0[0] & 1) != 0) {
      pbVar19 = local_b0;
    }
    __s2 = *(byte **)(pbVar26 + 0x10);
    if ((bVar5 & 1) == 0) {
      __s2 = pbVar26 + 1;
    }
    if (((byte)local_c0[0] & 1) == 0) {
      while (sVar12 != 0) {
        if (*pbVar10 != *__s2) goto LAB_00b9b3ac;
        pbVar10 = pbVar10 + 1;
        __s2 = __s2 + 1;
        sVar25 = sVar25 - 1;
        sVar12 = sVar25;
      }
    }
    else if ((sVar12 != 0) && (iVar9 = memcmp(pbVar19,__s2,sVar12), iVar9 != 0)) goto LAB_00b9b3ac;
    param_4[2] = *param_4;
  }
  else {
LAB_00b9b3ac:
    uVar11 = FUN_00b7a414(*(undefined8 *)(param_1 + 8),local_c0);
    param_4[2] = uVar11;
  }
  uVar11 = *(undefined8 *)(param_1 + 8);
  FUN_00b9cd10(&local_a8,*(undefined8 *)(param_2 + 0x18),1);
  uVar11 = FUN_00b7a414(uVar11,&local_a8);
  param_4[3] = uVar11;
  if ((((ulong)local_a8 & 1) != 0) &&
     (lVar21 = CONCAT17(acStack_92[1],
                        CONCAT16(acStack_92[0],CONCAT42(uStack_96,CONCAT11(uStack_97,uStack_98)))),
     lVar21 != 0)) {
    lVar17 = tpidr_el0;
    plVar27 = *(long **)(lVar17 + 0x30);
    if (plVar27 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar27 = DAT_04859430;
      *(long **)(lVar17 + 0x30) = DAT_04859430;
    }
    uVar20 = (**(code **)(*plVar27 + 0xf8))(plVar27);
    if (((uVar20 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
    }
    else {
      FUN_00c48fe8(plVar27,lVar21,0,8);
    }
  }
  if ((*(byte *)(param_2 + 0x11) & 1) == 0) {
    *(undefined1 *)(param_4 + 4) = 0;
    param_4[5] = param_4[3];
  }
  else {
    *(undefined1 *)(param_4 + 4) = 1;
    uVar11 = FUN_00b7a414(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x48));
    param_4[5] = uVar11;
  }
  *(undefined4 *)((long)param_4 + 0x3c) = *(undefined4 *)(param_2 + 0x38);
  iVar9 = *(int *)(param_2 + 0x24);
  *(int *)(param_4 + 8) = iVar9;
  if ((iVar9 == 2) && (*(char *)((long)param_4 + 0x44) != '\0')) {
    FUN_00b8a120(param_1,param_4[1],param_2,2,"Message extensions cannot have required fields.");
  }
  param_4[0xc] = 0;
  param_4[10] = 0;
  param_4[0xd] = 0;
  param_4[0xe] = 0;
  *(byte *)(param_4 + 0x10) = *(byte *)(param_2 + 0x10) >> 6 & 1;
  uVar18 = *(uint *)(param_2 + 0x10);
  if (((uVar18 >> 6 & 1) != 0) && (*(int *)(param_4 + 8) == 3)) {
    FUN_00b8a120(param_1,param_4[1],param_2,4,"Repeated fields can\'t have default values.");
    uVar18 = *(uint *)(param_2 + 0x10);
  }
  puVar7 = PTR_DAT_047daba0;
  puVar2 = PTR_DAT_047dab98;
  if ((uVar18 >> 3 & 1) == 0) goto switchD_00b9b5f8_default;
  if ((uVar18 >> 6 & 1) == 0) {
    switch(*(undefined4 *)(&DAT_03d5c718 + (ulong)*(uint *)((long)param_4 + 0x3c) * 4)) {
    case 1:
    case 3:
    case 6:
      *(undefined4 *)(param_4 + 0x11) = 0;
      break;
    case 2:
    case 4:
    case 5:
    case 8:
      param_4[0x11] = 0;
      break;
    case 7:
      *(undefined1 *)(param_4 + 0x11) = 0;
      break;
    case 9:
      if (*(long *)PTR_DAT_047dab98 != 2) {
        local_a8 = PTR_DAT_047daba0 + 0x10;
        local_a0 = SUB84(PTR_LAB_047daba8,0);
        uStack_9c = (undefined2)((ulong)PTR_LAB_047daba8 >> 0x20);
        uStack_9a = (undefined2)((ulong)PTR_LAB_047daba8 >> 0x30);
        uStack_98 = 0;
        if (*(long *)PTR_DAT_047dab98 != 2) {
          do {
            lVar21 = *(long *)puVar2;
            if (lVar21 != 0) break;
            cVar6 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar1) {
              *(undefined8 *)puVar2 = 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          puVar2 = PTR_DAT_047dab98;
          DataMemoryBarrier(2,3);
          if (lVar21 == 0) {
            (**(code **)(puVar7 + 0x20))(&local_a8);
            *(undefined8 *)PTR_DAT_047dab98 = 2;
          }
          else {
            while (lVar21 == 1) {
              sched_yield();
              lVar21 = *(long *)puVar2;
            }
          }
        }
      }
      param_4[0x11] = *(undefined8 *)PTR_DAT_047dabb0;
    }
    goto switchD_00b9b5f8_default;
  }
  local_138 = (char *)0x0;
  switch(*(undefined4 *)(&DAT_03d5c718 + (ulong)*(uint *)((long)param_4 + 0x3c) * 4)) {
  case 1:
    pbVar10 = *(byte **)(param_2 + 0x40);
    if ((*pbVar10 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    lVar21 = strtol((char *)pbVar10,&local_138,0);
    uVar8 = (undefined4)lVar21;
    goto LAB_00b9c1b4;
  case 2:
    pbVar10 = *(byte **)(param_2 + 0x40);
    if ((*pbVar10 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    uVar15 = strtoll((char *)pbVar10,&local_138,0);
    goto LAB_00b9c1dc;
  case 3:
    pbVar10 = *(byte **)(param_2 + 0x40);
    if ((*pbVar10 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    uVar20 = strtoul((char *)pbVar10,&local_138,0);
    uVar8 = (undefined4)uVar20;
LAB_00b9c1b4:
    *(undefined4 *)(param_4 + 0x11) = uVar8;
    break;
  case 4:
    pbVar10 = *(byte **)(param_2 + 0x40);
    if ((*pbVar10 & 1) == 0) {
      pbVar10 = pbVar10 + 1;
    }
    else {
      pbVar10 = *(byte **)(pbVar10 + 0x10);
    }
    uVar15 = strtoull((char *)pbVar10,&local_138,0);
LAB_00b9c1dc:
    param_4[0x11] = uVar15;
    break;
  case 5:
    pbVar10 = *(byte **)(param_2 + 0x40);
    bVar5 = *pbVar10;
    uVar24 = *(ulong *)(pbVar10 + 8);
    uVar14 = (ulong)(bVar5 >> 1);
    uVar20 = uVar14;
    if ((bVar5 & 1) != 0) {
      uVar20 = uVar24;
    }
    if (uVar20 == 3) {
      iVar9 = std::string::compare((ulong)pbVar10,0,(char *)0xffffffffffffffff,0x3be063e);
      if (iVar9 != 0) {
        pbVar10 = *(byte **)(param_2 + 0x40);
        bVar5 = *pbVar10;
        uVar24 = *(ulong *)(pbVar10 + 8);
        uVar14 = (ulong)(bVar5 >> 1);
        goto LAB_00b9be4c;
      }
      uVar11 = 0x7ff0000000000000;
LAB_00b9c580:
      param_4[0x11] = uVar11;
    }
    else {
LAB_00b9be4c:
      uVar20 = uVar14;
      if ((bVar5 & 1) != 0) {
        uVar20 = uVar24;
      }
      if (uVar20 == 4) {
        iVar9 = std::string::compare((ulong)pbVar10,0,(char *)0xffffffffffffffff,0x3c03f4c);
        if (iVar9 == 0) {
          uVar11 = 0xfff0000000000000;
          goto LAB_00b9c580;
        }
        pbVar10 = *(byte **)(param_2 + 0x40);
        bVar5 = *pbVar10;
        uVar24 = *(ulong *)(pbVar10 + 8);
        uVar14 = (ulong)(bVar5 >> 1);
      }
      if ((bVar5 & 1) != 0) {
        uVar14 = uVar24;
      }
      if (uVar14 == 3) {
        iVar9 = std::string::compare((ulong)pbVar10,0,(char *)0xffffffffffffffff,0x3c475d9);
        if (iVar9 == 0) {
          uVar11 = 0x7ff8000000000000;
          goto LAB_00b9c580;
        }
        pbVar10 = *(byte **)(param_2 + 0x40);
        bVar5 = *pbVar10;
      }
      if ((bVar5 & 1) == 0) {
        pbVar10 = pbVar10 + 1;
      }
      else {
        pbVar10 = *(byte **)(pbVar10 + 0x10);
      }
      uVar11 = FUN_00c2d740(pbVar10,&local_138);
      param_4[0x11] = uVar11;
    }
    break;
  case 6:
    pbVar10 = *(byte **)(param_2 + 0x40);
    bVar5 = *pbVar10;
    uVar24 = *(ulong *)(pbVar10 + 8);
    uVar14 = (ulong)(bVar5 >> 1);
    uVar20 = uVar14;
    if ((bVar5 & 1) != 0) {
      uVar20 = uVar24;
    }
    if (uVar20 == 3) {
      iVar9 = std::string::compare((ulong)pbVar10,0,(char *)0xffffffffffffffff,0x3be063e);
      if (iVar9 != 0) {
        pbVar10 = *(byte **)(param_2 + 0x40);
        bVar5 = *pbVar10;
        uVar24 = *(ulong *)(pbVar10 + 8);
        uVar14 = (ulong)(bVar5 >> 1);
        goto LAB_00b9bf84;
      }
      uVar8 = 0x7f800000;
LAB_00b9c58c:
      *(undefined4 *)(param_4 + 0x11) = uVar8;
    }
    else {
LAB_00b9bf84:
      uVar20 = uVar14;
      if ((bVar5 & 1) != 0) {
        uVar20 = uVar24;
      }
      if (uVar20 == 4) {
        iVar9 = std::string::compare((ulong)pbVar10,0,(char *)0xffffffffffffffff,0x3c03f4c);
        if (iVar9 == 0) {
          uVar8 = 0xff800000;
          goto LAB_00b9c58c;
        }
        pbVar10 = *(byte **)(param_2 + 0x40);
        bVar5 = *pbVar10;
        uVar24 = *(ulong *)(pbVar10 + 8);
        uVar14 = (ulong)(bVar5 >> 1);
      }
      if ((bVar5 & 1) != 0) {
        uVar14 = uVar24;
      }
      if (uVar14 == 3) {
        iVar9 = std::string::compare((ulong)pbVar10,0,(char *)0xffffffffffffffff,0x3c475d9);
        if (iVar9 == 0) {
          uVar8 = 0x7fc00000;
          goto LAB_00b9c58c;
        }
        pbVar10 = *(byte **)(param_2 + 0x40);
        bVar5 = *pbVar10;
      }
      if ((bVar5 & 1) == 0) {
        pbVar10 = pbVar10 + 1;
      }
      else {
        pbVar10 = *(byte **)(pbVar10 + 0x10);
      }
      dVar33 = (double)FUN_00c2d740(pbVar10,&local_138);
      if (dVar33 <= 3.4028234663852886e+38) {
        if (dVar33 < -3.4028234663852886e+38) {
          fVar32 = -INFINITY;
        }
        else {
          fVar32 = (float)dVar33;
        }
      }
      else {
        fVar32 = INFINITY;
      }
      *(float *)(param_4 + 0x11) = fVar32;
    }
    break;
  case 7:
    pbVar10 = *(byte **)(param_2 + 0x40);
    bVar5 = *pbVar10;
    uVar24 = *(ulong *)(pbVar10 + 8);
    uVar14 = (ulong)(bVar5 >> 1);
    uVar20 = uVar14;
    if ((bVar5 & 1) != 0) {
      uVar20 = uVar24;
    }
    if (uVar20 == 4) {
      iVar9 = std::string::compare((ulong)pbVar10,0,(char *)0xffffffffffffffff,0x3c38de7);
      if (iVar9 == 0) {
        *(undefined1 *)(param_4 + 0x11) = 1;
        break;
      }
      pbVar10 = *(byte **)(param_2 + 0x40);
      bVar5 = *pbVar10;
      uVar24 = *(ulong *)(pbVar10 + 8);
      uVar14 = (ulong)(bVar5 >> 1);
    }
    if ((bVar5 & 1) != 0) {
      uVar14 = uVar24;
    }
    if ((uVar14 == 5) &&
       (iVar9 = std::string::compare((ulong)pbVar10,0,(char *)0xffffffffffffffff,0x3c00ba2),
       iVar9 == 0)) {
      *(undefined1 *)(param_4 + 0x11) = 0;
    }
    else {
      FUN_00b8a120(param_1,param_4[1],param_2,4,"Boolean default must be true or false.");
    }
    break;
  case 8:
    param_4[0x11] = 0;
    break;
  case 9:
    uVar11 = *(undefined8 *)(param_1 + 8);
    if (*(uint *)((long)param_4 + 0x3c) != 0xc) {
      uVar15 = FUN_00b7a414(uVar11,*(undefined8 *)(param_2 + 0x40));
      goto LAB_00b9c1dc;
    }
    FUN_00c0f970(&local_a8,*(undefined8 *)(param_2 + 0x40));
    uVar11 = FUN_00b7a414(uVar11,&local_a8);
    param_4[0x11] = uVar11;
    if ((((ulong)local_a8 & 1) != 0) &&
       (lVar21 = CONCAT17(acStack_92[1],
                          CONCAT16(acStack_92[0],CONCAT42(uStack_96,CONCAT11(uStack_97,uStack_98))))
       , lVar21 != 0)) {
      lVar17 = tpidr_el0;
      plVar27 = *(long **)(lVar17 + 0x30);
      if (plVar27 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar27 = DAT_04859430;
        *(long **)(lVar17 + 0x30) = DAT_04859430;
      }
      uVar20 = (**(code **)(*plVar27 + 0xf8))(plVar27);
      if (((uVar20 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
        (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
      }
      else {
        FUN_00c48fe8(plVar27,lVar21,0,8);
      }
    }
    break;
  case 10:
    FUN_00b8a120(param_1,param_4[1],param_2,4,"Messages can\'t have default values.");
    *(undefined1 *)(param_4 + 0x10) = 0;
    break;
  default:
    goto switchD_00b9b5f8_default;
  }
  if (local_138 != (char *)0x0) {
    psVar22 = *(string **)(param_2 + 0x40);
    if (((byte)*psVar22 & 1) == 0) {
      if ((byte)*psVar22 >> 1 != 0) goto LAB_00b9c208;
    }
    else if (*(long *)(psVar22 + 8) != 0) {
LAB_00b9c208:
      if (*local_138 == '\0') goto switchD_00b9b5f8_default;
    }
    uVar30 = param_4[1];
    std::operator+("Couldn\'t parse default value \"",psVar22);
    puVar16 = (undefined8 *)std::string::append((char *)&local_108);
    uVar11 = puVar16[1];
    uVar4 = puVar16[2];
    local_a8 = (char *)*puVar16;
    local_a0 = (undefined4)uVar11;
    uStack_9c = (undefined2)((ulong)uVar11 >> 0x20);
    uStack_9a = (undefined2)((ulong)uVar11 >> 0x30);
    uStack_98 = (undefined1)uVar4;
    uStack_97 = (undefined1)((ulong)uVar4 >> 8);
    uStack_96 = (undefined4)((ulong)uVar4 >> 0x10);
    acStack_92[0] = (char)((ulong)uVar4 >> 0x30);
    acStack_92[1] = (char)((ulong)uVar4 >> 0x38);
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    FUN_00b89f94(param_1,uVar30,param_2,4,&local_a8);
    if ((((ulong)local_a8 & 1) != 0) &&
       (lVar21 = CONCAT17(acStack_92[1],
                          CONCAT16(acStack_92[0],CONCAT42(uStack_96,CONCAT11(uStack_97,uStack_98))))
       , lVar21 != 0)) {
      lVar17 = tpidr_el0;
      plVar27 = *(long **)(lVar17 + 0x30);
      if (plVar27 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar27 = DAT_04859430;
        *(long **)(lVar17 + 0x30) = DAT_04859430;
      }
      uVar20 = (**(code **)(*plVar27 + 0xf8))(plVar27);
      if (((uVar20 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
        (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
      }
      else {
        FUN_00c48fe8(plVar27,lVar21,0,8);
      }
    }
    if ((((ulong)local_108 & 1) != 0) &&
       (lVar21 = CONCAT17(uStack_f1,CONCAT43(uStack_f5,CONCAT12(bStack_f6,local_f8))), lVar21 != 0))
    {
      lVar17 = tpidr_el0;
      plVar27 = *(long **)(lVar17 + 0x30);
      if (plVar27 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar27 = DAT_04859430;
        *(long **)(lVar17 + 0x30) = DAT_04859430;
      }
      uVar20 = (**(code **)(*plVar27 + 0xf8))(plVar27);
      if (((uVar20 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
        (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
      }
      else {
        FUN_00c48fe8(plVar27,lVar21,0,8);
      }
    }
  }
switchD_00b9b5f8_default:
  iVar9 = *(int *)(param_4 + 7);
  if (iVar9 < 1) {
    FUN_00b8a120(param_1,param_4[1],param_2,1,"Field numbers must be positive integers.");
LAB_00b9b738:
    uVar18 = *(uint *)(param_2 + 0x10);
    if ((param_5 & 1) == 0) goto LAB_00b9b78c;
    if ((uVar18 >> 5 & 1) == 0) {
      FUN_00b8a120(param_1,param_4[1],param_2,3,
                   "FieldDescriptorProto.extendee not set for extension field.");
    }
    param_4[0xc] = param_3;
    if (*(char *)(param_2 + 0x10) < '\0') {
      FUN_00b8a120(param_1,param_4[1],param_2,9,
                   "FieldDescriptorProto.oneof_index should not be set for extensions.");
    }
  }
  else {
    if ((iVar9 < 0x20000000) || ((param_5 & 1) != 0)) {
      if (iVar9 - 19000U < 1000) {
        uVar11 = param_4[1];
        acStack_92[0] = '0';
        acStack_92[1] = 0;
        local_a8 = (char *)&uStack_96;
        uStack_96 = 0x30303931;
        sVar12 = strlen(local_a8);
        local_a0 = (undefined4)sVar12;
        local_108 = &bStack_f6;
        uStack_f1 = 0;
        uStack_f5 = 0x39393939;
        bStack_f6 = 0x31;
        sVar12 = strlen((char *)local_108);
        local_100 = (uint)sVar12;
        local_130 = 0xffffffff;
        local_160 = 0xffffffff;
        local_190 = 0xffffffff;
        local_1c0 = 0xffffffff;
        local_1f0 = 0xffffffff;
        local_220 = 0xffffffff;
        local_250 = 0xffffffff;
        local_280 = 0xffffffff;
        local_138 = (char *)0x0;
        local_168 = 0;
        local_198 = 0;
        local_1c8 = 0;
        local_1f8 = 0;
        local_228 = 0;
        local_258 = 0;
        local_288 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        FUN_00c2ce10(&local_d8,
                     "Field numbers $0 through $1 are reserved for the protocol buffer library implementation."
                     ,&local_a8,&local_108,&local_138,&local_168,&local_198,&local_1c8,&local_1f8,
                     &local_228,&local_258,&local_288);
        FUN_00b89f94(param_1,uVar11,param_2,1,&local_d8);
        lVar21 = local_c8;
        if (((local_d8 & 1) != 0) && (local_c8 != 0)) {
          lVar17 = tpidr_el0;
          plVar27 = *(long **)(lVar17 + 0x30);
          if (plVar27 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar27 = DAT_04859430;
            *(long **)(lVar17 + 0x30) = DAT_04859430;
          }
          uVar20 = (**(code **)(*plVar27 + 0xf8))(plVar27);
          if (((uVar20 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
            (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
          }
          else {
            FUN_00c48fe8(plVar27,lVar21,0,8);
          }
        }
      }
      goto LAB_00b9b738;
    }
    uVar11 = param_4[1];
    acStack_92[0] = '1';
    acStack_92[1] = 0;
    uStack_9a = 0x3335;
    uStack_98 = 0x36;
    uStack_97 = 0x38;
    uStack_96 = 0x31393037;
    local_a8 = (char *)&uStack_9a;
    sVar12 = strlen(local_a8);
    local_a0 = (undefined4)sVar12;
    local_100 = 0xffffffff;
    local_130 = 0xffffffff;
    local_160 = 0xffffffff;
    local_190 = 0xffffffff;
    local_1c0 = 0xffffffff;
    local_1f0 = 0xffffffff;
    local_220 = 0xffffffff;
    local_250 = 0xffffffff;
    local_280 = 0xffffffff;
    local_108 = (byte *)0x0;
    local_138 = (char *)0x0;
    local_168 = 0;
    local_198 = 0;
    local_1c8 = 0;
    local_1f8 = 0;
    local_228 = 0;
    local_258 = 0;
    local_288 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    FUN_00c2ce10(&local_d8,"Field numbers cannot be greater than $0.",&local_a8,&local_108,
                 &local_138,&local_168,&local_198,&local_1c8,&local_1f8,&local_228,&local_258,
                 &local_288);
    FUN_00b89f94(param_1,uVar11,param_2,1,&local_d8);
    lVar21 = local_c8;
    if (((local_d8 & 1) != 0) && (local_c8 != 0)) {
      lVar17 = tpidr_el0;
      plVar27 = *(long **)(lVar17 + 0x30);
      if (plVar27 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar27 = DAT_04859430;
        *(long **)(lVar17 + 0x30) = DAT_04859430;
      }
      uVar20 = (**(code **)(*plVar27 + 0xf8))(plVar27);
      if (((uVar20 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
        (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
      }
      else {
        FUN_00c48fe8(plVar27,lVar21,0,8);
      }
    }
    uVar18 = (uint)*(byte *)(param_2 + 0x10);
LAB_00b9b78c:
    if ((uVar18 >> 5 & 1) != 0) {
      FUN_00b8a120(param_1,param_4[1],param_2,3,
                   "FieldDescriptorProto.extendee set for non-extension field.");
    }
    param_4[10] = param_3;
    if (*(char *)(param_2 + 0x10) < '\0') {
      uVar18 = *(uint *)(param_2 + 0x3c);
      uVar20 = (ulong)uVar18;
      if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)(param_3 + 7))) {
        lVar21 = param_3[8] + uVar20 * 0x30;
        goto LAB_00b9ba00;
      }
      uVar11 = param_4[1];
      acStack_92[1] = 0;
      if ((int)uVar18 < 0) {
        if ((int)uVar18 < -9) {
          iVar9 = uVar18 + 10;
          acStack_92[0] =
               ((char)((ulong)((long)iVar9 * 0x66666667) >> 0x22) - (char)(iVar9 >> 0x1f)) * '\n' -
               (char)iVar9;
          iVar9 = (int)((ulong)((long)iVar9 * -0x66666667) >> 0x20);
          pcVar13 = (char *)((long)&uStack_96 + 3);
          iVar9 = ((iVar9 >> 2) - (iVar9 >> 0x1f)) + 1;
          do {
            local_a8 = pcVar13 + -1;
            *pcVar13 = (char)iVar9 + (char)(iVar9 / 10) * -10 + '0';
            bVar1 = 9 < iVar9;
            pcVar13 = local_a8;
            iVar9 = iVar9 / 10;
          } while (bVar1);
        }
        else {
          acStack_92[0] = -(char)uVar18;
          local_a8 = (char *)((long)&uStack_96 + 3);
        }
        acStack_92[0] = acStack_92[0] + '0';
        *local_a8 = '-';
      }
      else {
        local_a8 = acStack_92 + 1;
        do {
          iVar9 = (int)uVar20;
          uVar18 = iVar9 / 10;
          local_a8 = local_a8 + -1;
          *local_a8 = (char)uVar20 + (char)uVar18 * -10 + '0';
          uVar20 = (ulong)uVar18;
        } while (9 < iVar9);
      }
      sVar12 = strlen(local_a8);
      local_a0 = (undefined4)sVar12;
      pbVar10 = (byte *)*param_3;
      local_108 = *(byte **)(pbVar10 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        local_108 = pbVar10 + 1;
      }
      local_130 = 0xffffffff;
      local_160 = 0xffffffff;
      local_190 = 0xffffffff;
      local_1c0 = 0xffffffff;
      local_1f0 = 0xffffffff;
      local_220 = 0xffffffff;
      local_250 = 0xffffffff;
      local_280 = 0xffffffff;
      local_d0 = 0;
      local_c8 = 0;
      local_100 = (uint)(*pbVar10 >> 1);
      if ((*pbVar10 & 1) != 0) {
        local_100 = (uint)*(undefined8 *)(pbVar10 + 8);
      }
      local_138 = (char *)0x0;
      local_168 = 0;
      local_198 = 0;
      local_1c8 = 0;
      local_1f8 = 0;
      local_228 = 0;
      local_258 = 0;
      local_288 = 0;
      local_d8 = 0;
      FUN_00c2ce10(&local_d8,"FieldDescriptorProto.oneof_index $0 is out of range for type \"$1\".",
                   &local_a8,&local_108,&local_138,&local_168,&local_198,&local_1c8,&local_1f8,
                   &local_228,&local_258,&local_288);
      FUN_00b89f94(param_1,uVar11,param_2,9,&local_d8);
      lVar21 = local_c8;
      if (((local_d8 & 1) != 0) && (local_c8 != 0)) {
        lVar17 = tpidr_el0;
        plVar27 = *(long **)(lVar17 + 0x30);
        if (plVar27 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar27 = DAT_04859430;
          *(long **)(lVar17 + 0x30) = DAT_04859430;
        }
        uVar20 = (**(code **)(*plVar27 + 0xf8))(plVar27);
        if (((uVar20 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
        }
        else {
          FUN_00c48fe8(plVar27,lVar21,0,8);
        }
      }
    }
  }
  lVar21 = 0;
LAB_00b9ba00:
  param_4[0xb] = lVar21;
  uVar20 = param_1;
  if ((*(byte *)(param_2 + 0x11) >> 1 & 1) == 0) {
    param_4[0xf] = 0;
  }
  else {
    lVar21 = *(long *)(param_2 + 0x50);
    if (lVar21 == 0) {
      lVar21 = *(long *)(*(long *)PTR_DAT_047dacc0 + 0x50);
    }
    psVar22 = (string *)param_4[1];
    lVar28 = *(long *)(param_1 + 8);
    lVar17 = tpidr_el0;
    plVar27 = *(long **)(lVar17 + 0x30);
    lVar29 = lVar17;
    if (plVar27 == (long *)0x0) {
      if ((DAT_04859438 & 1) == 0) goto LAB_00b9ca68;
      goto LAB_00b9c790;
    }
    while( true ) {
      plVar27 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x60,8);
      puVar2 = PTR_DAT_047dac60 + 0x10;
      plVar27[3] = 0;
      plVar27[4] = 0;
      plVar27[2] = 0;
      *plVar27 = (long)puVar2;
      plVar27[1] = (long)(plVar27 + 2);
      *(undefined4 *)(plVar27 + 0xb) = 0;
      plVar27[5] = 0;
      plVar27[6] = 0;
      plVar27[7] = 0;
      plVar27[8] = 0;
      plVar27[9] = 0;
      plVar27[10] = 0;
      puVar16 = *(undefined8 **)(lVar28 + 0xb0);
      if (puVar16 < *(undefined8 **)(lVar28 + 0xb8)) break;
      __src = *(void **)(lVar28 + 0xa8);
      sVar12 = (long)puVar16 - (long)__src;
      lVar17 = (long)sVar12 >> 3;
      param_1 = lVar17 + 1;
      if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar23 = (long)*(undefined8 **)(lVar28 + 0xb8) - (long)__src;
      uVar14 = lVar23 >> 2;
      if (param_1 <= uVar14) {
        param_1 = uVar14;
      }
      if (0xffffffffffffffe < (ulong)(lVar23 >> 3)) {
        param_1 = 0x1fffffffffffffff;
      }
      if (param_1 == 0) {
        __dest = (void *)0x0;
LAB_00b9bb50:
        puVar16 = (undefined8 *)((long)__dest + lVar17 * 8);
        *puVar16 = plVar27;
        if (0 < (long)sVar12) {
          memcpy(__dest,__src,sVar12);
        }
        *(void **)(lVar28 + 0xa8) = __dest;
        *(undefined8 **)(lVar28 + 0xb0) = puVar16 + 1;
        *(void **)(lVar28 + 0xb8) = (void *)((long)__dest + param_1 * 8);
        if (__src != (void *)0x0) {
          plVar31 = *(long **)(lVar29 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar29 + 0x30) = DAT_04859430;
          }
          uVar14 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar14 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,__src,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,__src,0,8);
          }
        }
        goto LAB_00b9bbd4;
      }
      if (param_1 >> 0x3d == 0) {
        plVar31 = *(long **)(lVar29 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar29 + 0x30) = DAT_04859430;
        }
        __dest = (void *)(**(code **)(*plVar31 + 0x10))(plVar31,param_1 << 3,8);
        goto LAB_00b9bb50;
      }
      FUN_01f6e360();
LAB_00b9ca68:
      iVar9 = __cxa_guard_acquire(&DAT_04859438);
      if (iVar9 != 0) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_00b9c790:
      plVar27 = DAT_04859430;
      *(long **)(lVar17 + 0x30) = DAT_04859430;
      uVar20 = param_1;
      lVar29 = lVar17;
    }
    *puVar16 = plVar27;
    *(undefined8 **)(lVar28 + 0xb0) = puVar16 + 1;
LAB_00b9bbd4:
    local_a8 = (char *)0x0;
    local_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    uStack_98 = 0;
    uStack_97 = 0;
    uStack_96 = 0;
    acStack_92[0] = '\0';
    acStack_92[1] = 0;
    uVar14 = FUN_00c11da8(lVar21,&local_a8);
    if ((uVar14 & 1) == 0) {
      if (((ulong)local_a8 & 1) == 0) {
        local_a8 = (char *)((ulong)local_a8 & 0xffffffffffff0000);
      }
      else {
        *(undefined1 *)
         CONCAT17(acStack_92[1],
                  CONCAT16(acStack_92[0],CONCAT42(uStack_96,CONCAT11(uStack_97,uStack_98)))) = 0;
        local_a0 = 0;
        uStack_9c = 0;
        uStack_9a = 0;
      }
    }
    FUN_00c10f68(plVar27,&local_a8);
    if ((((ulong)local_a8 & 1) != 0) &&
       (lVar17 = CONCAT17(acStack_92[1],
                          CONCAT16(acStack_92[0],CONCAT42(uStack_96,CONCAT11(uStack_97,uStack_98))))
       , lVar17 != 0)) {
      plVar31 = *(long **)(lVar29 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar29 + 0x30) = DAT_04859430;
      }
      uVar14 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar14 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,lVar17,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,lVar17,0,8);
      }
    }
    param_4[0xf] = plVar27;
    if (0 < (int)plVar27[9]) {
      std::string::string((string *)&local_a8,psVar22);
      std::string::string(local_90,psVar22);
      local_78 = lVar21;
      plStack_70 = plVar27;
      FUN_00bae78c(uVar20 + 0x18,&local_a8);
      if ((((byte)local_90[0] & 1) != 0) && (local_80 != 0)) {
        plVar27 = *(long **)(lVar29 + 0x30);
        if (plVar27 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar27 = DAT_04859430;
          *(long **)(lVar29 + 0x30) = DAT_04859430;
        }
        uVar14 = (**(code **)(*plVar27 + 0xf8))(plVar27);
        if (((uVar14 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,local_80,0,8);
        }
        else {
          FUN_00c48fe8(plVar27,local_80,0,8);
        }
      }
      if ((((ulong)local_a8 & 1) != 0) &&
         (lVar21 = CONCAT17(acStack_92[1],
                            CONCAT16(acStack_92[0],CONCAT42(uStack_96,CONCAT11(uStack_97,uStack_98))
                                    )), lVar21 != 0)) {
        plVar27 = *(long **)(lVar29 + 0x30);
        if (plVar27 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar27 = DAT_04859430;
          *(long **)(lVar29 + 0x30) = DAT_04859430;
        }
        uVar14 = (**(code **)(*plVar27 + 0xf8))(plVar27);
        if (((uVar14 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,lVar21,0,8);
        }
        else {
          FUN_00c48fe8(plVar27,lVar21,0,8);
        }
      }
    }
  }
  FUN_00b9a504(uVar20,param_4[1],param_3,*param_4,param_2,2,param_4);
  if ((((byte)local_c0[0] & 1) != 0) && (local_b0 != (byte *)0x0)) {
    lVar21 = tpidr_el0;
    plVar27 = *(long **)(lVar21 + 0x30);
    if (plVar27 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar27 = DAT_04859430;
      *(long **)(lVar21 + 0x30) = DAT_04859430;
    }
    uVar20 = (**(code **)(*plVar27 + 0xf8))(plVar27);
    if (((uVar20 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
      (**(code **)(*plVar27 + 0x18))(plVar27,local_b0,0,8);
    }
    else {
      FUN_00c48fe8(plVar27,local_b0,0,8);
    }
  }
  return;
}


