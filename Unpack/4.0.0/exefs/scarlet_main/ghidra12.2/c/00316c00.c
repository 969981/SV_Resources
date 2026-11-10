/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00316c00; name: FUN_00316c00
 */


/* WARNING: Removing unreachable block (ram,0x00317610) */

long FUN_00316c00(long param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined1 auVar17 [12];
  long local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  char *local_118;
  undefined *local_110;
  char *local_108;
  undefined *puStack_100;
  ulong local_f8;
  undefined *puStack_f0;
  ulong local_e8;
  undefined *puStack_e0;
  ulong local_d8;
  undefined *puStack_d0;
  ulong *local_c8;
  long lStack_c0;
  ulong local_b8 [4];
  byte local_98 [16];
  ulong local_88;
  ulong local_80;
  undefined *puStack_78;
  ulong local_70;
  
  pbVar2 = (byte *)((long)param_2 + 9);
  if (*param_2 != 0) {
    pbVar2 = (byte *)param_2[2];
  }
  uVar3 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar3 = param_2[1];
  }
  if (uVar3 != 0) {
    uVar12 = *(uint *)(param_1 + 0x1130);
    pbVar1 = pbVar2 + uVar3;
    pbVar14 = pbVar2;
    if (0x17 < uVar12) {
      pbVar16 = pbVar2;
      switch(uVar12) {
      case 0x18:
        goto switchD_00316cdc_caseD_18;
      case 0x19:
        uVar12 = *(uint *)(param_1 + 0x113c);
        pbVar15 = pbVar2;
        goto LAB_00316dd8;
      case 0x1a:
        uVar12 = *(uint *)(param_1 + 0x113c);
        goto LAB_00316dec;
      case 0x1b:
        goto switchD_00316cdc_caseD_1b;
      case 0x1c:
        goto switchD_00316cdc_caseD_1c;
      case 0x1d:
        goto switchD_00316cdc_caseD_1d;
      case 0x1e:
        uVar12 = *(uint *)(param_1 + 0x1140);
        goto LAB_00316e38;
      case 0x1f:
        uVar12 = *(uint *)(param_1 + 0x1140);
        pbVar14 = pbVar2;
        goto LAB_00316e4c;
      case 0x20:
        uVar12 = *(uint *)(param_1 + 0x1140);
        goto LAB_00316e60;
      case 0x21:
        goto switchD_00316cdc_caseD_21;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    uVar8 = uVar3;
    do {
      if (uVar12 == 0x18) goto switchD_00316cdc_caseD_18;
      bVar6 = "PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n"[uVar12];
      if (*pbVar14 != bVar6) {
        local_110 = PTR_FUN_047ccb28;
        local_d8 = (ulong)uVar12;
        puStack_100 = PTR_FUN_047cc9c8;
        local_f8 = (ulong)*pbVar14;
        puStack_d0 = PTR_FUN_047cc7b0;
        puStack_f0 = PTR_FUN_047ccb10;
        puStack_e0 = PTR_FUN_047cc9c8;
        local_118 = (char *)(ulong)bVar6;
        local_108 = (char *)(ulong)bVar6;
        local_e8 = (ulong)*pbVar14;
        FUN_00391b20(&local_80,
                     "Connect string mismatch: expected \'%c\' (%d) got \'%c\' (%d) at byte %d",0x44
                     ,&local_118,5);
        uVar3 = (ulong)&local_80 | 1;
        if ((local_80 & 1) != 0) {
          uVar3 = local_70;
        }
                    /* try { // try from 00316d58 to 00316d7b has its CatchHandler @ 00316dc0 */
        FUN_00367770(&local_c8,uVar3);
        lVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                             ,0x62,&local_c8,0,0);
        goto LAB_00316d7c;
      }
      pbVar14 = pbVar14 + 1;
      uVar12 = uVar12 + 1;
      *(uint *)(param_1 + 0x1130) = uVar12;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return 0;
switchD_00316cdc_caseD_18:
  uVar12 = (uint)*pbVar14 << 0x10;
  *(uint *)(param_1 + 0x113c) = uVar12;
  pbVar15 = pbVar14 + 1;
  if (pbVar14 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1130) = 0x19;
    return 0;
  }
LAB_00316dd8:
  uVar12 = uVar12 | (uint)*pbVar15 << 8;
  *(uint *)(param_1 + 0x113c) = uVar12;
  pbVar16 = pbVar15 + 1;
  if (pbVar15 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1130) = 0x1a;
    return 0;
  }
LAB_00316dec:
  *(uint *)(param_1 + 0x113c) = uVar12 | *pbVar16;
  pbVar14 = pbVar16 + 1;
  if (pbVar16 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1130) = 0x1b;
    return 0;
  }
switchD_00316cdc_caseD_1b:
  *(byte *)(param_1 + 0x1134) = *pbVar14;
  pbVar16 = pbVar14 + 1;
  if (pbVar14 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1130) = 0x1c;
    return 0;
  }
switchD_00316cdc_caseD_1c:
  *(byte *)(param_1 + 0x1135) = *pbVar16;
  pbVar14 = pbVar16 + 1;
  if (pbVar16 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1130) = 0x1d;
    return 0;
  }
switchD_00316cdc_caseD_1d:
  uVar12 = (*pbVar14 & 0x7f) << 0x18;
  *(uint *)(param_1 + 0x1140) = uVar12;
  pbVar16 = pbVar14 + 1;
  if (pbVar14 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1130) = 0x1e;
    return 0;
  }
LAB_00316e38:
  uVar12 = uVar12 | (uint)*pbVar16 << 0x10;
  *(uint *)(param_1 + 0x1140) = uVar12;
  pbVar14 = pbVar16 + 1;
  if (pbVar16 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1130) = 0x1f;
    return 0;
  }
LAB_00316e4c:
  uVar12 = uVar12 | (uint)*pbVar14 << 8;
  *(uint *)(param_1 + 0x1140) = uVar12;
  pbVar16 = pbVar14 + 1;
  if (pbVar14 + 1 == pbVar1) {
    *(undefined4 *)(param_1 + 0x1130) = 0x20;
    return 0;
  }
LAB_00316e60:
  bVar6 = *pbVar16;
  uVar10 = (uint)((ulong)uVar12 | (ulong)bVar6);
  *(uint *)(param_1 + 0x1140) = uVar10;
  *(undefined4 *)(param_1 + 0x1130) = 0x21;
  bVar5 = *(byte *)(param_1 + 0x1134);
  uVar8 = (ulong)bVar5;
  if (*(char *)(param_1 + 0x1137) == '\0') {
    *(undefined1 *)(param_1 + 0x1137) = 0;
    uVar4 = *(uint *)(param_1 + 0x1138);
    if (uVar4 != 0) {
      if (bVar5 != 9) {
LAB_00316f90:
        puStack_78 = PTR_FUN_047ccb10;
        local_80 = uVar8;
        FUN_00391b20(&local_c8,"Expected CONTINUATION frame, got frame type %02x",0x30,&local_80,1);
        uVar8 = (ulong)&local_c8 | 1;
        if (((ulong)local_c8 & 1) != 0) {
          uVar8 = local_b8[0];
        }
                    /* try { // try from 00316fd0 to 00316ff3 has its CatchHandler @ 0031762c */
        FUN_00367770(&local_118,uVar8);
        lVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                             ,0x10b,&local_118,0,0);
        if (((ulong)local_c8 & 1) != 0) {
          uVar8 = local_b8[0];
          goto LAB_0031700c;
        }
        goto joined_r0x00317018;
      }
      if (uVar4 != uVar10) {
        local_110 = PTR_FUN_047cc7b0;
        puStack_100 = PTR_FUN_047cc7b0;
        local_118 = (char *)(ulong)uVar4;
        local_108 = (char *)((ulong)uVar12 | (ulong)bVar6);
        FUN_00391b20(&local_80,
                     "Expected CONTINUATION frame for grpc_chttp2_stream %08x, got grpc_chttp2_stream %08x"
                     ,0x54,&local_118,2);
        uVar8 = (ulong)&local_80 | 1;
        if ((local_80 & 1) != 0) {
          uVar8 = local_70;
        }
                    /* try { // try from 00317114 to 00317137 has its CatchHandler @ 00317618 */
        FUN_00367770(&local_c8,uVar8);
        lVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                             ,0x113,&local_c8,0,0);
        if ((local_80 & 1) != 0) {
          uVar8 = local_70;
          goto LAB_0031700c;
        }
        goto joined_r0x00317018;
      }
      lVar7 = FUN_003177f0(param_1,1);
joined_r0x00316f00:
      if (lVar7 != 0) {
        return lVar7;
      }
      goto LAB_00317324;
    }
    switch(uVar8) {
    case 0:
      lVar9 = FUN_003198f0(param_1 + 0xa0);
      local_110 = (undefined *)((ulong)local_110 & 0xffffffff00000000);
      local_118 = (char *)0x0;
      if (lVar9 == 0) {
        lVar7 = (**(code **)(*(long *)(param_1 + 0x1050) + 0x38))
                          (param_1 + 0x1050,*(undefined4 *)(param_1 + 0x113c));
        auVar17 = (**(code **)(*(long *)(param_1 + 0x1050) + 0x20))(param_1 + 0x1050);
        local_118 = auVar17._0_8_;
        local_110 = (undefined *)CONCAT44(local_110._4_4_,auVar17._8_4_);
        FUN_003075e0(&local_118,param_1,0);
        if (lVar7 != 0) {
          uVar8 = FUN_00351f40(lVar7,2,&local_c8);
          if ((uVar8 & 1) == 0) goto joined_r0x00317018;
          goto LAB_00317580;
        }
LAB_003175c0:
        *(undefined1 **)(param_1 + 0x1158) = &LAB_00318320;
        goto joined_r0x00317018;
      }
      lVar7 = (**(code **)(*(long *)(lVar9 + 0x940) + 0x28))
                        (lVar9 + 0x940,*(undefined4 *)(param_1 + 0x113c));
      auVar17 = (**(code **)(*(long *)(lVar9 + 0x940) + 0x18))(lVar9 + 0x940);
      local_118 = auVar17._0_8_;
      local_110 = (undefined *)CONCAT44(local_110._4_4_,auVar17._8_4_);
      FUN_003075e0(&local_118,param_1,lVar9);
      if (lVar7 != 0) {
LAB_003170a0:
        uVar8 = FUN_00351f40(lVar7,2,&local_c8);
        if ((uVar8 & 1) == 0) goto joined_r0x00317018;
        FUN_00309ae0(param_1,lVar9,1,0,lVar7);
LAB_00317580:
        FUN_003101c0(param_1,*(undefined4 *)(param_1 + 0x1140),1,lVar9 + 0x198);
LAB_003175bc:
        lVar7 = 0;
        goto LAB_003175c0;
      }
      *(ulong *)(lVar9 + 0x930) = *(long *)(lVar9 + 0x930) + (ulong)*(uint *)(param_1 + 0x113c);
      *(long *)(lVar9 + 0x180) = *(long *)(lVar9 + 0x180) + 9;
      if (*(char *)(lVar9 + 0x1b1) != '\0') goto LAB_003175bc;
      lVar7 = FUN_0030f240(lVar9 + 0x908,*(undefined1 *)(param_1 + 0x1135),
                           *(undefined4 *)(lVar9 + 0xa0),lVar9);
      if (lVar7 != 0) goto LAB_003170a0;
      *(long *)(param_1 + 0x1150) = lVar9;
      *(undefined **)(param_1 + 0x1158) = PTR_LAB_047ccb58;
      *(long *)(param_1 + 0x1148) = lVar9 + 0x908;
      *(undefined8 *)(param_1 + 0xe60) = 0x8000000000000000;
      goto LAB_00317324;
    case 1:
      lVar7 = FUN_003177f0(param_1,0);
      goto joined_r0x00316f00;
    default:
switchD_0031703c_caseD_2:
      *(undefined1 **)(param_1 + 0x1158) = &LAB_00318320;
      goto LAB_00317324;
    case 3:
      lVar7 = param_1 + 0xff8;
      lVar9 = FUN_00310320(lVar7,*(undefined4 *)(param_1 + 0x113c),*(undefined1 *)(param_1 + 0x1135)
                          );
      if (lVar9 != 0) {
        return lVar9;
      }
      lVar9 = FUN_003198f0(param_1 + 0xa0,*(undefined4 *)(param_1 + 0x1140));
      *(long *)(param_1 + 0x1150) = lVar9;
      puVar13 = PTR_LAB_047ccb40;
      if (lVar9 == 0) goto switchD_0031703c_caseD_2;
      *(long *)(lVar9 + 0x180) = *(long *)(lVar9 + 0x180) + 9;
      *(undefined **)(param_1 + 0x1158) = puVar13;
      goto LAB_00317320;
    case 4:
      goto switchD_0031703c_caseD_4;
    case 6:
      lVar7 = param_1 + 0xff8;
      lVar9 = FUN_003183c0(lVar7,*(undefined4 *)(param_1 + 0x113c),*(undefined1 *)(param_1 + 0x1135)
                          );
      if (lVar9 != 0) {
        return lVar9;
      }
      puVar13 = PTR_LAB_047ccb48;
      break;
    case 7:
      lVar7 = param_1 + 0x1030;
      lVar9 = FUN_0030fc20(lVar7,*(undefined4 *)(param_1 + 0x113c),*(undefined1 *)(param_1 + 0x1135)
                          );
      if (lVar9 != 0) {
        return lVar9;
      }
      puVar13 = PTR_LAB_047ccb38;
      break;
    case 8:
      lVar7 = param_1 + 0xff8;
      lVar9 = FUN_00318ed0(lVar7,*(undefined4 *)(param_1 + 0x113c),*(undefined1 *)(param_1 + 0x1135)
                          );
      if (lVar9 != 0) {
        return lVar9;
      }
      if (*(int *)(param_1 + 0x1140) != 0) {
        lVar9 = FUN_003198f0(param_1 + 0xa0);
        *(long *)(param_1 + 0x1150) = lVar9;
        if (lVar9 == 0) goto switchD_0031703c_caseD_2;
        *(long *)(lVar9 + 0x180) = *(long *)(lVar9 + 0x180) + 9;
      }
      puVar13 = PTR_LAB_047ccb50;
      break;
    case 9:
      FUN_003673f0(&local_118,"Unexpected CONTINUATION frame");
      uVar11 = 0x11e;
      goto LAB_00316eb8;
    }
LAB_0031731c:
    *(undefined **)(param_1 + 0x1158) = puVar13;
LAB_00317320:
    *(long *)(param_1 + 0x1148) = lVar7;
  }
  else {
    if (bVar5 == 4) {
      *(undefined1 *)(param_1 + 0x1137) = 0;
      if (*(int *)(param_1 + 0x1138) != 0) goto LAB_00316f90;
switchD_0031703c_caseD_4:
      if (uVar10 == 0) {
        lVar7 = param_1 + 0xff8;
        lVar9 = FUN_00318920(lVar7,*(undefined4 *)(param_1 + 0x113c),
                             *(undefined1 *)(param_1 + 0x1135),param_1 + 0xd94);
        if (lVar9 != 0) {
          return lVar9;
        }
        if ((*(byte *)(param_1 + 0x1135) & 1) != 0) {
          *(undefined8 *)(param_1 + 0xdf0) = *(undefined8 *)(param_1 + 0xdd4);
          *(undefined8 *)(param_1 + 0xde8) = *(undefined8 *)(param_1 + 0xdcc);
          *(undefined8 *)(param_1 + 0xdfc) = *(undefined8 *)(param_1 + 0xde0);
          *(undefined8 *)(param_1 + 0xdf4) = *(undefined8 *)(param_1 + 0xdd8);
          FUN_003161f0(param_1 + 0xfd0,*(undefined4 *)(param_1 + 0xde8));
          *(undefined1 *)(param_1 + 0xd8d) = 0;
        }
        puVar13 = PTR_LAB_047ccb30;
        goto LAB_0031731c;
      }
      FUN_003673f0(&local_118,"Settings frame received for grpc_chttp2_stream");
      uVar11 = 0x2eb;
LAB_00316eb8:
      lVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                           ,uVar11,&local_118,0,0);
      goto joined_r0x00316f00;
    }
    local_118 = "Expected SETTINGS frame as the first frame, got frame type ";
    local_110 = (undefined *)0x3b;
    lStack_c0 = FUN_00394c20(uVar8,local_b8);
    lStack_c0 = lStack_c0 - (long)local_b8;
    local_c8 = local_b8;
    FUN_003959c0(local_98,&local_118,&local_c8);
    uVar8 = (ulong)local_98 | 1;
    if ((local_98[0] & 1) != 0) {
      uVar8 = local_88;
    }
                    /* try { // try from 00316f58 to 00316f7b has its CatchHandler @ 00317640 */
    FUN_00367770(&local_80,uVar8);
    lVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                         ,0x103,&local_80,0,0);
    if ((local_98[0] & 1) != 0) {
      uVar8 = local_88;
LAB_0031700c:
      FUN_0049e790(PTR_LAB_047cba48,uVar8);
    }
joined_r0x00317018:
    if (lVar7 != 0) {
      return lVar7;
    }
  }
LAB_00317324:
  if (*(int *)(param_1 + 0x113c) == 0) {
    FUN_00367020(&local_118);
    lVar7 = FUN_00317670(param_1,&local_118,1);
    if (lVar7 != 0) {
      return lVar7;
    }
    *(undefined8 *)(param_1 + 0x1150) = 0;
    pbVar14 = pbVar16 + 1;
    if (pbVar16 + 1 == pbVar1) {
      *(undefined4 *)(param_1 + 0x1130) = 0x18;
      return 0;
    }
  }
  else {
    uVar8 = (**(code **)(*(long *)(param_1 + 0x1050) + 0x10))(param_1 + 0x1050);
    if ((uVar8 & 1) != 0) {
      if (*(uint *)(param_1 + 0xdf8) < *(uint *)(param_1 + 0x113c)) {
        local_110 = PTR_FUN_047cc7b0;
        puStack_100 = PTR_FUN_047cc7b0;
        local_118 = (char *)(ulong)*(uint *)(param_1 + 0x113c);
        local_108 = (char *)(ulong)*(uint *)(param_1 + 0xdf8);
        FUN_00391b20(&local_80,"Frame size %d is larger than max frame size %d",0x2e,&local_118,2);
        uVar3 = (ulong)&local_80 | 1;
        if ((local_80 & 1) != 0) {
          uVar3 = local_70;
        }
                    /* try { // try from 003174f8 to 0031751b has its CatchHandler @ 00317614 */
        FUN_00367770(&local_c8,uVar3);
        lVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                             ,0xc9,&local_c8,0,0);
LAB_00316d7c:
        if ((local_80 & 1) == 0) {
          return lVar7;
        }
        FUN_0049e790(PTR_LAB_047cba48,local_70);
        return lVar7;
      }
    }
    pbVar14 = pbVar16 + 1;
    if (pbVar16 + 1 == pbVar1) {
      return 0;
    }
switchD_00316cdc_caseD_21:
    uVar12 = *(uint *)(param_1 + 0x113c);
    uVar10 = (int)pbVar1 - (int)pbVar14;
    if (uVar12 == uVar10) {
      lStack_138 = param_2[1];
      local_140 = *param_2;
      lStack_128 = param_2[3];
      lStack_130 = param_2[2];
      FUN_00367b10(&local_118,&local_140,(long)pbVar14 - (long)pbVar2,uVar3);
      lVar7 = FUN_00317670(param_1,&local_118,1);
      if (lVar7 == 0) {
        *(undefined4 *)(param_1 + 0x1130) = 0x18;
        *(undefined8 *)(param_1 + 0x1150) = 0;
        return 0;
      }
      return lVar7;
    }
    if (uVar10 <= uVar12) {
      lStack_178 = param_2[1];
      local_180 = *param_2;
      lStack_168 = param_2[3];
      lStack_170 = param_2[2];
      FUN_00367b10(&local_118,&local_180,(long)pbVar14 - (long)pbVar2,uVar3);
      lVar7 = FUN_00317670(param_1,&local_118,0);
      if (lVar7 == 0) {
        *(uint *)(param_1 + 0x113c) = *(int *)(param_1 + 0x113c) - uVar10;
        return 0;
      }
      return lVar7;
    }
    lStack_158 = param_2[1];
    local_160 = *param_2;
    lStack_148 = param_2[3];
    lStack_150 = param_2[2];
    FUN_00367b10(&local_118,&local_160,(long)pbVar14 - (long)pbVar2,
                 ((long)pbVar14 - (long)pbVar2) + (ulong)uVar12);
    lVar7 = FUN_00317670(param_1,&local_118,1);
    if (lVar7 != 0) {
      return lVar7;
    }
    *(undefined8 *)(param_1 + 0x1150) = 0;
    pbVar14 = pbVar14 + *(uint *)(param_1 + 0x113c);
  }
  goto switchD_00316cdc_caseD_18;
}


