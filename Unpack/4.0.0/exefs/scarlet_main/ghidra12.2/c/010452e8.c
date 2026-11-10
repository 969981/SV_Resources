/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010452e8; name: FUN_010452e8
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010452e8(long *param_1)

{
  short *psVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  int *piVar7;
  long *plVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  short sVar13;
  char cVar14;
  ulong uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  uint *puVar20;
  char *pcVar21;
  long *plVar22;
  undefined8 uVar23;
  long *plVar24;
  char *pcVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  ulong uVar30;
  uint *puVar31;
  ulong uVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  code *pcVar35;
  ulong uVar36;
  ushort *puVar37;
  ulong uVar38;
  short sVar39;
  long *plVar40;
  ulong uVar41;
  uint *puVar42;
  uint *puVar43;
  undefined8 *puVar44;
  uint *puVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  long lVar48;
  long lVar49;
  long *plVar50;
  long *plVar51;
  float fVar52;
  int *local_180;
  long *local_178;
  long *local_170;
  long local_168;
  long local_160;
  long *local_138;
  undefined8 *local_130;
  char *local_128;
  char *local_120;
  long *local_118;
  long *local_110 [4];
  long *local_f0;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 *local_c8;
  char *local_c0;
  char *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  char *local_98;
  char *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long local_70 [2];
  
  lVar28 = param_1[7];
  if ((lVar28 != 0) && (*(short *)(lVar28 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar28 + 0x1a);
    sVar39 = *(short *)(lVar28 + 0x1a);
    do {
      sVar13 = *psVar1;
      if (sVar13 == sVar39) {
        cVar14 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar39 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
        if (cVar14 != '\0') goto LAB_010454e0;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_010454e0:
        bVar16 = false;
      }
      if (bVar16) {
        lVar28 = *(long *)(lVar28 + 0x10);
        if (lVar28 != 0) {
          if ((*(long *)(lVar28 + 0xd0) == 0) ||
             ((*(byte *)(*(long *)(lVar28 + 0xd0) + 0x1e8) & 1) == 0)) goto LAB_010467c4;
          if ((*(long *)(lVar28 + 0xd0) == 0) ||
             ((*(byte *)(*(long *)(lVar28 + 0xd0) + 0x1e8) & 1) == 0)) {
            local_180 = (int *)0x0;
          }
          else {
            puVar20 = (uint *)(**(code **)(**(long **)(lVar28 + 0xd0) + 0x70))();
            local_180 = (int *)((long)puVar20 + (ulong)*puVar20);
          }
          plVar29 = (long *)param_1[6];
          lVar19 = (long)*local_180;
          puVar37 = (ushort *)((long)local_180 - lVar19);
          uVar12 = *puVar37;
          if ((ulong)puVar37[2] == 0) {
            puVar20 = (uint *)0x0;
          }
          else {
            puVar20 = (uint *)((long)local_180 + (ulong)puVar37[2]);
            puVar20 = (uint *)((long)puVar20 + (ulong)*puVar20);
          }
          if ((uVar12 < 9) || ((ulong)puVar37[4] == 0)) {
            iVar18 = 1;
          }
          else {
            iVar18 = *(int *)((long)local_180 + (ulong)puVar37[4]);
          }
          puVar45 = puVar20 + 1;
          if (*puVar20 == 0) goto LAB_010466a4;
          puVar20 = puVar45 + *puVar20;
          plVar26 = (long *)(lVar28 + 0x118);
          plVar2 = (long *)(lVar28 + 0x148);
          puVar3 = PTR_DAT_047dd6d8 + 0x10;
          puVar4 = PTR_DAT_047dd6e0 + 0x10;
          puVar5 = PTR_DAT_047dcde8 + 0x10;
          puVar47 = (undefined8 *)PTR_DAT_047d4248;
          goto LAB_0104562c;
        }
        break;
      }
      sVar39 = sVar13;
    } while (sVar13 != 0);
  }
  goto LAB_01045314;
LAB_0104562c:
  uVar10 = *puVar45;
  pcVar21 = (char *)(**(code **)(*plVar29 + 0x10))(plVar29,0x1b8,8);
  if (pcVar21 == (char *)0x0) {
    local_168 = 0;
    local_160 = 0;
    local_170 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04865a38), iVar17 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar19 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_0104721c;
    *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar29;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
    pcVar21[0x38] = '\0';
    pcVar21[0x39] = '\0';
    pcVar21[0x3a] = '\0';
    pcVar21[0x3b] = '\0';
    pcVar21[0x3c] = '\0';
    pcVar21[0x3d] = '\0';
    pcVar21[0x3e] = '\0';
    pcVar21[0x3f] = '\0';
    pcVar21[8] = '\0';
    pcVar21[9] = '\0';
    pcVar21[10] = '\0';
    pcVar21[0xb] = '\0';
    pcVar21[0xc] = '\0';
    pcVar21[0xd] = '\0';
    pcVar21[0xe] = '\0';
    pcVar21[0xf] = '\0';
    pcVar21[0x10] = '\0';
    pcVar21[0x11] = '\0';
    pcVar21[0x12] = '\0';
    pcVar21[0x13] = '\0';
    pcVar21[0x14] = '\0';
    pcVar21[0x15] = '\0';
    pcVar21[0x16] = '\0';
    pcVar21[0x17] = '\0';
    pcVar21[0x40] = '\0';
    pcVar21[0x41] = '\0';
    pcVar21[0x42] = '\0';
    pcVar21[0x43] = '\0';
    pcVar21[0x58] = '\0';
    pcVar21[0x59] = '\0';
    pcVar21[0x5a] = '\0';
    pcVar21[0x5b] = '\0';
    pcVar21[0x5c] = '\0';
    pcVar21[0x5d] = '\0';
    pcVar21[0x5e] = '\0';
    pcVar21[0x5f] = '\0';
    pcVar21[0x60] = '\0';
    pcVar21[0x61] = '\0';
    pcVar21[0x62] = '\0';
    pcVar21[99] = '\0';
    pcVar21[100] = '\0';
    pcVar21[0x65] = '\0';
    pcVar21[0x66] = '\0';
    pcVar21[0x67] = '\0';
    pcVar21[0xf8] = '\0';
    pcVar21[0xf9] = '\0';
    pcVar21[0xfa] = '\0';
    pcVar21[0xfb] = '\0';
    pcVar21[0x68] = '\0';
    pcVar21[0x69] = '\0';
    pcVar21[0x6a] = '\0';
    pcVar21[0x6b] = '\0';
    pcVar21[0x6c] = '\0';
    pcVar21[0x6d] = '\0';
    pcVar21[0x6e] = '\0';
    pcVar21[0x6f] = '\0';
    pcVar21[0x70] = '\0';
    pcVar21[0x71] = '\0';
    pcVar21[0x72] = '\0';
    pcVar21[0x73] = '\0';
    pcVar21[0x74] = '\0';
    pcVar21[0x75] = '\0';
    pcVar21[0x76] = '\0';
    pcVar21[0x77] = '\0';
    pcVar21[0x18] = '\0';
    pcVar21[0x19] = '\0';
    pcVar21[0x1a] = '\0';
    pcVar21[0x1b] = '\0';
    pcVar21[0x1c] = '\0';
    pcVar21[0x1d] = '\0';
    pcVar21[0x1e] = '\0';
    pcVar21[0x1f] = '\0';
    *(undefined1 **)(pcVar21 + 0x20) = &DAT_cbf29ce484222645;
    pcVar21[0x120] = '\0';
    pcVar21[0x121] = '\0';
    pcVar21[0x122] = '\0';
    pcVar21[0x123] = '\0';
    pcVar21[0x128] = '\0';
    pcVar21[0x129] = '\0';
    pcVar21[0x12a] = '\0';
    pcVar21[299] = '\0';
    pcVar21[300] = '\0';
    pcVar21[0x12d] = '\0';
    pcVar21[0x12e] = '\0';
    pcVar21[0x12f] = '\0';
    pcVar21[0x78] = '\0';
    pcVar21[0x79] = '\0';
    pcVar21[0x7a] = '\0';
    pcVar21[0x7b] = '\0';
    pcVar21[0x7c] = '\0';
    pcVar21[0x7d] = '\0';
    pcVar21[0x7e] = '\0';
    pcVar21[0x7f] = '\0';
    pcVar21[0x80] = '\0';
    pcVar21[0x81] = '\0';
    pcVar21[0x82] = '\0';
    pcVar21[0x83] = '\0';
    pcVar21[0x84] = '\0';
    pcVar21[0x85] = '\0';
    pcVar21[0x86] = '\0';
    pcVar21[0x87] = '\0';
    *(undefined1 **)(pcVar21 + 0x28) = &DAT_03c886bc;
    pcVar21[0x30] = '\0';
    pcVar21[0x31] = '\0';
    pcVar21[0x32] = '\0';
    pcVar21[0x33] = '\0';
    pcVar21[0x34] = '\0';
    pcVar21[0x35] = '\0';
    pcVar21[0x36] = '\0';
    pcVar21[0x37] = '\0';
    *(undefined **)(pcVar21 + 0x48) = puVar3;
    pcVar21[0x50] = '\0';
    pcVar21[0x51] = '\0';
    pcVar21[0x52] = '\0';
    pcVar21[0x53] = '\0';
    pcVar21[0x54] = '\0';
    pcVar21[0x55] = '\0';
    pcVar21[0x56] = '\0';
    pcVar21[0x57] = '\0';
    pcVar21[0x98] = '\0';
    pcVar21[0x99] = '\0';
    pcVar21[0x9a] = '\0';
    pcVar21[0x9b] = '\0';
    pcVar21[0x9c] = '\0';
    pcVar21[0x9d] = '\0';
    pcVar21[0x9e] = '\0';
    pcVar21[0x9f] = '\0';
    pcVar21[0xa0] = '\0';
    pcVar21[0xa1] = '\0';
    pcVar21[0xa2] = '\0';
    pcVar21[0xa3] = '\0';
    pcVar21[0xa4] = '\0';
    pcVar21[0xa5] = '\0';
    pcVar21[0xa6] = '\0';
    pcVar21[0xa7] = '\0';
    pcVar21[0xa8] = '\0';
    pcVar21[0xa9] = '\0';
    pcVar21[0xaa] = '\0';
    pcVar21[0xab] = '\0';
    pcVar21[0xac] = '\0';
    pcVar21[0xad] = '\0';
    pcVar21[0xae] = '\0';
    pcVar21[0xaf] = '\0';
    pcVar21[0xb0] = '\0';
    pcVar21[0xb1] = '\0';
    pcVar21[0xb2] = '\0';
    pcVar21[0xb3] = '\0';
    pcVar21[0xb4] = '\0';
    pcVar21[0xb5] = '\0';
    pcVar21[0xb6] = '\0';
    pcVar21[0xb7] = '\0';
    pcVar21[0xb8] = '\0';
    pcVar21[0xb9] = '\0';
    pcVar21[0xba] = '\0';
    pcVar21[0xbb] = '\0';
    pcVar21[0xbc] = '\0';
    pcVar21[0xbd] = '\0';
    pcVar21[0xbe] = '\0';
    pcVar21[0xbf] = '\0';
    pcVar21[0xc0] = '\0';
    pcVar21[0xc1] = '\0';
    pcVar21[0xc2] = '\0';
    pcVar21[0xc3] = '\0';
    pcVar21[0xc4] = '\0';
    pcVar21[0xc5] = '\0';
    pcVar21[0xc6] = '\0';
    pcVar21[199] = '\0';
    *(undefined **)(pcVar21 + 0x88) = puVar4;
    pcVar21[0x90] = '\0';
    pcVar21[0x91] = '\0';
    pcVar21[0x92] = '\0';
    pcVar21[0x93] = '\0';
    pcVar21[0x94] = '\0';
    pcVar21[0x95] = '\0';
    pcVar21[0x96] = '\0';
    pcVar21[0x97] = '\0';
    pcVar21[200] = '\0';
    pcVar21[0xc9] = '\0';
    pcVar21[0xca] = '\0';
    pcVar21[0xcb] = '\0';
    pcVar21[0xcc] = '\0';
    pcVar21[0xcd] = '\0';
    pcVar21[0xce] = '\0';
    pcVar21[0xcf] = '\0';
    pcVar21[0xd0] = '\0';
    pcVar21[0xd1] = '\0';
    pcVar21[0xd2] = '\0';
    pcVar21[0xd3] = '\0';
    pcVar21[0xd4] = '\0';
    pcVar21[0xd5] = '\0';
    pcVar21[0xd6] = '\0';
    pcVar21[0xd7] = '\0';
    pcVar21[0xd8] = '\0';
    pcVar21[0xd9] = '\0';
    pcVar21[0xda] = '\0';
    pcVar21[0xdb] = '\0';
    pcVar21[0xdc] = '\0';
    pcVar21[0xdd] = '\0';
    pcVar21[0xde] = '\0';
    pcVar21[0xdf] = '\0';
    *(long **)(pcVar21 + 0xe0) = plVar29;
    pcVar21[0x100] = '\0';
    pcVar21[0x101] = '\0';
    pcVar21[0x102] = '\0';
    pcVar21[0x103] = '\0';
    pcVar21[0x104] = '\0';
    pcVar21[0x105] = '\0';
    pcVar21[0x106] = '\0';
    pcVar21[0x107] = '\0';
    *(long **)(pcVar21 + 0x108) = plVar29;
    pcVar21[0x148] = '\0';
    pcVar21[0x149] = '\0';
    pcVar21[0x14a] = '\0';
    pcVar21[0x14b] = '\0';
    pcVar21[0x14c] = '\0';
    pcVar21[0x14d] = '\0';
    pcVar21[0x14e] = '\0';
    pcVar21[0x14f] = '\0';
    pcVar21[0x150] = '\0';
    pcVar21[0x151] = '\0';
    pcVar21[0x152] = '\0';
    pcVar21[0x153] = '\0';
    pcVar21[0x154] = '\0';
    pcVar21[0x155] = '\0';
    pcVar21[0x156] = '\0';
    pcVar21[0x157] = '\0';
    pcVar21[0x158] = '\0';
    pcVar21[0x159] = '\0';
    pcVar21[0x15a] = '\0';
    pcVar21[0x15b] = '\0';
    pcVar21[0x15c] = '\0';
    pcVar21[0x15d] = '\0';
    pcVar21[0x15e] = '\0';
    pcVar21[0x15f] = '\0';
    pcVar21[0x160] = '\0';
    pcVar21[0x161] = '\0';
    pcVar21[0x162] = '\0';
    pcVar21[0x163] = '\0';
    pcVar21[0x164] = '\0';
    pcVar21[0x165] = '\0';
    pcVar21[0x166] = '\0';
    pcVar21[0x167] = '\0';
    pcVar21[0x168] = '\0';
    pcVar21[0x169] = '\0';
    pcVar21[0x16a] = '\0';
    pcVar21[0x16b] = '\0';
    pcVar21[0x16c] = '\0';
    pcVar21[0x16d] = '\0';
    pcVar21[0x16e] = '\0';
    pcVar21[0x16f] = '\0';
    pcVar21[0x170] = '\0';
    pcVar21[0x171] = '\0';
    pcVar21[0x172] = '\0';
    pcVar21[0x173] = '\0';
    pcVar21[0x174] = '\0';
    pcVar21[0x175] = '\0';
    pcVar21[0x176] = '\0';
    pcVar21[0x177] = '\0';
    pcVar21[0xe8] = -1;
    pcVar21[0xe9] = -1;
    pcVar21[0xea] = -1;
    pcVar21[0xeb] = -1;
    pcVar21[0xec] = -1;
    pcVar21[0xed] = -1;
    pcVar21[0xee] = -1;
    pcVar21[0xef] = '\a';
    pcVar21[0xf0] = '\0';
    pcVar21[0xf1] = '\0';
    pcVar21[0xf2] = '\0';
    pcVar21[0xf3] = '\0';
    pcVar21[0xf4] = '\0';
    pcVar21[0xf5] = '\0';
    pcVar21[0xf6] = '\0';
    pcVar21[0xf7] = '\0';
    pcVar21[0x110] = -1;
    pcVar21[0x111] = -1;
    pcVar21[0x112] = -1;
    pcVar21[0x113] = -1;
    pcVar21[0x114] = -1;
    pcVar21[0x115] = -1;
    pcVar21[0x116] = -1;
    pcVar21[0x117] = '\a';
    pcVar21[0x118] = '\0';
    pcVar21[0x119] = '\0';
    pcVar21[0x11a] = '\0';
    pcVar21[0x11b] = '\0';
    pcVar21[0x11c] = '\0';
    pcVar21[0x11d] = '\0';
    pcVar21[0x11e] = '\0';
    pcVar21[0x11f] = '\0';
    pcVar21[0x130] = '\0';
    pcVar21[0x131] = '\0';
    pcVar21[0x132] = -0x80;
    pcVar21[0x133] = '?';
    pcVar21[0x1a8] = '\0';
    pcVar21[0x1a9] = '\0';
    pcVar21[0x1aa] = '\0';
    pcVar21[0x1ab] = '\0';
    pcVar21[0x1ac] = '\0';
    pcVar21[0x1ad] = '\0';
    pcVar21[0x1ae] = '\0';
    pcVar21[0x1af] = '\0';
    pcVar21[0x1b0] = '\0';
    pcVar21[0x1b1] = '\0';
    pcVar21[0x1b2] = '\0';
    pcVar21[0x1b3] = '\0';
    pcVar21[0x1b4] = '\0';
    pcVar21[0x1b5] = '\0';
    pcVar21[0x1b6] = '\0';
    pcVar21[0x1b7] = '\0';
    pcVar21[0x198] = '\0';
    pcVar21[0x199] = '\0';
    pcVar21[0x19a] = '\0';
    pcVar21[0x19b] = '\0';
    pcVar21[0x19c] = '\0';
    pcVar21[0x19d] = '\0';
    pcVar21[0x19e] = '\0';
    pcVar21[0x19f] = '\0';
    pcVar21[0x1a0] = '\0';
    pcVar21[0x1a1] = '\0';
    pcVar21[0x1a2] = '\0';
    pcVar21[0x1a3] = '\0';
    pcVar21[0x1a4] = '\0';
    pcVar21[0x1a5] = '\0';
    pcVar21[0x1a6] = '\0';
    pcVar21[0x1a7] = '\0';
    pcVar21[0x188] = '\0';
    pcVar21[0x189] = '\0';
    pcVar21[0x18a] = '\0';
    pcVar21[0x18b] = '\0';
    pcVar21[0x18c] = '\0';
    pcVar21[0x18d] = '\0';
    pcVar21[0x18e] = '\0';
    pcVar21[399] = '\0';
    pcVar21[400] = '\0';
    pcVar21[0x191] = '\0';
    pcVar21[0x192] = '\0';
    pcVar21[0x193] = '\0';
    pcVar21[0x194] = '\0';
    pcVar21[0x195] = '\0';
    pcVar21[0x196] = '\0';
    pcVar21[0x197] = '\0';
    *(undefined **)(pcVar21 + 0x138) = puVar5;
    pcVar21[0x140] = '\0';
    pcVar21[0x141] = '\0';
    pcVar21[0x142] = '\0';
    pcVar21[0x143] = '\0';
    pcVar21[0x144] = '\0';
    pcVar21[0x145] = '\0';
    pcVar21[0x146] = '\0';
    pcVar21[0x147] = '\0';
    *(undefined **)(pcVar21 + 0x178) = puVar5;
    pcVar21[0x180] = '\0';
    pcVar21[0x181] = '\0';
    pcVar21[0x182] = '\0';
    pcVar21[0x183] = '\0';
    pcVar21[0x184] = '\0';
    pcVar21[0x185] = '\0';
    pcVar21[0x186] = '\0';
    pcVar21[0x187] = '\0';
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    local_168 = 0x1b8;
    local_160 = 8;
    local_170 = plVar29;
  }
  piVar9 = (int *)((long)puVar45 + (ulong)uVar10);
  if (*(ushort *)((long)piVar9 - (long)*piVar9) < 5) {
    local_110[0] = (long *)0x0;
  }
  else {
    uVar30 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2];
    local_110[0] = (long *)0x0;
    if (uVar30 != 0) {
      puVar31 = (uint *)((long)piVar9 + uVar30);
      local_110[0] = (long *)((long)puVar31 + (ulong)*puVar31);
    }
  }
  FUN_00ea0a7c(&local_a0,local_110);
  plVar22 = *(long **)(pcVar21 + 8);
  pcVar21[8] = '\0';
  pcVar21[9] = '\0';
  pcVar21[10] = '\0';
  pcVar21[0xb] = '\0';
  pcVar21[0xc] = '\0';
  pcVar21[0xd] = '\0';
  pcVar21[0xe] = '\0';
  pcVar21[0xf] = '\0';
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))();
  }
  *(long **)(pcVar21 + 8) = local_a0;
  if (*(ushort *)((long)piVar9 - (long)*piVar9) < 7) {
    bVar16 = false;
  }
  else {
    uVar30 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
    bVar16 = false;
    if (uVar30 != 0) {
      bVar16 = *(char *)((long)piVar9 + uVar30) != '\0';
    }
  }
  *pcVar21 = bVar16;
  puVar37 = (ushort *)((long)piVar9 - (long)*piVar9);
  if (*puVar37 < 0x11) {
    if (0xc < *puVar37) goto LAB_010463e0;
LAB_0104699c:
    local_d0 = 0;
    puVar47 = (undefined8 *)PTR_DAT_047d4248;
  }
  else {
    if ((ulong)puVar37[8] == 0) {
LAB_010463e0:
      if ((ulong)puVar37[6] == 0) goto LAB_0104699c;
      puVar31 = (uint *)((long)piVar9 + (ulong)puVar37[6]);
      puVar47 = (undefined8 *)PTR_DAT_047d4248;
    }
    else {
      puVar31 = (uint *)((long)piVar9 + (ulong)puVar37[8]);
      uVar10 = *(uint *)(lVar28 + 0x108);
      if (iVar18 <= (int)*(uint *)(lVar28 + 0x108)) {
        uVar10 = iVar18 - 1;
      }
      puVar31 = (uint *)((long)puVar31 + (ulong)uVar10 * 4 + (ulong)*puVar31 + 4);
    }
    local_d0 = (long)puVar31 + (ulong)*puVar31;
    if (*(int *)((long)puVar31 + (ulong)*puVar31) != 0) {
      pcVar6 = pcVar21 + 0x138;
      if (*(long *)(pcVar21 + 0x180) != 0) {
        pcVar6 = pcVar21 + 0x178;
      }
      if ((*param_1 == 0) || (**(char **)(*param_1 + 0x38) == '\0')) {
        FUN_028fc620(&local_a0,&local_d0);
      }
      else {
        FUN_00e83e2c(&local_a0,param_1,&local_d0,&DAT_03c886bc);
      }
      uVar30 = FUN_01200570(pcVar6,1,&local_a0,0,0);
      if (((uVar30 & 1) != 0) && (plVar22 = *(long **)(pcVar6 + 0x20), plVar22 != (long *)0x0)) {
        lVar19 = plVar22[6];
        if (*(long *)(lVar19 + 0x10) == 0) goto LAB_01047324;
        psVar1 = (short *)(lVar19 + 0x1a);
        do {
          sVar39 = *psVar1;
          cVar14 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar39 + 1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar39 == 0) {
          uVar23 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
          *(undefined8 *)(lVar19 + 8) = uVar23;
          *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
        }
        else if (sVar39 == -1) goto LAB_0104685c;
        lVar19 = plVar22[6];
        psVar1 = (short *)(lVar19 + 0x1a);
        do {
          sVar39 = *psVar1;
          cVar14 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar39 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (sVar39 == 1) {
          *(undefined8 *)(lVar19 + 0x10) = 0;
          (**(code **)(*plVar22 + 0x50))(plVar22);
        }
        else if (sVar39 == 0) goto LAB_010467e8;
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      puVar47 = (undefined8 *)PTR_DAT_047d4248;
      if (6 < *(ushort *)((long)piVar9 - (long)*piVar9)) {
        uVar30 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[3];
        if ((uVar30 != 0) && (*(char *)((long)piVar9 + uVar30) != '\0')) {
          *(undefined1 *)(lVar28 + 0x188) = 1;
        }
      }
    }
  }
  puVar37 = (ushort *)((long)piVar9 - (long)*piVar9);
  if (*puVar37 < 0x13) {
    if (10 < *puVar37) goto LAB_0104584c;
LAB_01046400:
    local_d8 = 0;
  }
  else {
    if (((ulong)puVar37[9] != 0) && (*(char *)((long)piVar9 + (ulong)puVar37[9]) != '\0'))
    goto LAB_01045d10;
LAB_0104584c:
    if ((ulong)puVar37[5] == 0) goto LAB_01046400;
    puVar31 = (uint *)((long)piVar9 + (ulong)puVar37[5]);
    local_d8 = (long)puVar31 + (ulong)*puVar31;
    if (*(int *)((long)puVar31 + (ulong)*puVar31) == 0) goto LAB_01045924;
    if ((*param_1 == 0) || (**(char **)(*param_1 + 0x38) == '\0')) {
      FUN_028fc620(&local_a0,&local_d8);
    }
    else {
      FUN_00e83e2c(&local_a0,param_1,&local_d8,&DAT_03c886bc);
    }
    uVar30 = FUN_011ac0c0(pcVar21 + 0x48,1,&local_a0,0,0);
    if (((uVar30 & 1) != 0) && (plVar22 = *(long **)(pcVar21 + 0x68), plVar22 != (long *)0x0)) {
      lVar19 = plVar22[6];
      if (*(long *)(lVar19 + 0x10) == 0) goto LAB_01047324;
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar39 = *psVar1;
        cVar14 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar39 + 1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar39 == 0) {
        uVar23 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
        *(undefined8 *)(lVar19 + 8) = uVar23;
        *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
      }
      else if (sVar39 == -1) goto LAB_0104685c;
      lVar19 = plVar22[6];
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar39 = *psVar1;
        cVar14 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar39 + -1;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (sVar39 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*plVar22 + 0x50))(plVar22);
      }
      else if (sVar39 == 0) goto LAB_010467e8;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    puVar47 = (undefined8 *)PTR_DAT_047d4248;
    if ((0xe < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
       (uVar30 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[7], uVar30 != 0)) {
      puVar31 = (uint *)((long)piVar9 + uVar30);
      local_110[0] = (long *)((long)puVar31 + (ulong)*puVar31);
      FUN_00ea0a7c(&local_a0,local_110);
      plVar22 = *(long **)(pcVar21 + 0x10);
      pcVar21[0x10] = '\0';
      pcVar21[0x11] = '\0';
      pcVar21[0x12] = '\0';
      pcVar21[0x13] = '\0';
      pcVar21[0x14] = '\0';
      pcVar21[0x15] = '\0';
      pcVar21[0x16] = '\0';
      pcVar21[0x17] = '\0';
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x20))();
      }
      *(long **)(pcVar21 + 0x10) = local_a0;
    }
  }
LAB_01045924:
  if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 9) ||
     (uVar30 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[4], uVar30 == 0)) {
    local_e0 = 0;
  }
  else {
    puVar31 = (uint *)((long)piVar9 + uVar30);
    local_e0 = (long)puVar31 + (ulong)*puVar31;
    if (*(int *)((long)puVar31 + (ulong)*puVar31) != 0) {
      if ((*param_1 == 0) || (**(char **)(*param_1 + 0x38) == '\0')) {
        FUN_028fc620(&local_a0,&local_e0);
      }
      else {
        FUN_00e83e2c(&local_a0,param_1,&local_e0,&DAT_03c886bc);
      }
      plVar22 = *(long **)(pcVar21 + 0x18);
      pcVar21[0x18] = '\0';
      pcVar21[0x19] = '\0';
      pcVar21[0x1a] = '\0';
      pcVar21[0x1b] = '\0';
      pcVar21[0x1c] = '\0';
      pcVar21[0x1d] = '\0';
      pcVar21[0x1e] = '\0';
      pcVar21[0x1f] = '\0';
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x20))();
      }
      plVar22 = local_a0;
      local_a0 = (long *)0x0;
      *(long **)(pcVar21 + 0x18) = plVar22;
      *(char **)(pcVar21 + 0x20) = local_98;
      *(char **)(pcVar21 + 0x28) = local_90;
      *(long **)(pcVar21 + 0x30) = local_88;
      plVar22 = *(long **)(pcVar21 + 0x38);
      pcVar21[0x38] = '\0';
      pcVar21[0x39] = '\0';
      pcVar21[0x3a] = '\0';
      pcVar21[0x3b] = '\0';
      pcVar21[0x3c] = '\0';
      pcVar21[0x3d] = '\0';
      pcVar21[0x3e] = '\0';
      pcVar21[0x3f] = '\0';
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
      plVar22 = local_80;
      local_80 = (long *)0x0;
      *(long **)(pcVar21 + 0x38) = plVar22;
      *(undefined4 *)(pcVar21 + 0x40) = local_78._0_4_;
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      if (*pcVar21 != '\0') {
        pcVar6 = (char *)(local_e0 + 4);
        pcVar25 = strstr(pcVar6,"model_ob");
        if (pcVar25 == (char *)0x0) {
          local_b0 = (long *)0x0;
          local_c8 = (undefined8 *)0x59f9e3c0e6f0a8d6;
          local_118 = (long *)0x0;
          local_c0 = ".trmdl";
          local_b8 = (char *)0x6;
          local_130 = (undefined8 *)0xf8bcaef3392a6ae;
          local_128 = "_loc.trskl";
          local_120 = &DAT_0000000a;
          FUN_01366e10(&local_a0,pcVar6,&local_c8,&local_130,1);
          if ((*param_1 == 0) || (**(char **)(*param_1 + 0x38) == '\0')) {
            FUN_00cbf4c0(local_110,&local_a0);
          }
          else {
            FUN_00f2b7b8(local_110,param_1,&local_a0,&DAT_03c886bc);
          }
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          uVar30 = FUN_00ecde28(pcVar21 + 0x88,1,local_110,0,0);
          if ((uVar30 & 1) == 0) {
            plVar22 = (long *)0x0;
          }
          else {
            plVar22 = *(long **)(pcVar21 + 0xa8);
            if (plVar22 != (long *)0x0) {
              lVar19 = plVar22[6];
              if (*(long *)(lVar19 + 0x10) == 0) goto LAB_01047324;
              psVar1 = (short *)(lVar19 + 0x1a);
              do {
                sVar39 = *psVar1;
                cVar14 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar16) {
                  *psVar1 = sVar39 + 1;
                  cVar14 = ExclusiveMonitorsStatus();
                }
              } while (cVar14 != '\0');
              if (sVar39 == 0) {
                uVar23 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
                *(undefined8 *)(lVar19 + 8) = uVar23;
                *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
              }
              else if (sVar39 == -1) goto LAB_0104685c;
            }
          }
          local_a0 = (long *)0x0;
          local_98 = (char *)0x0;
          FUN_00c43ef0(&local_a0,lVar28 + 8);
          local_130 = (undefined8 *)0x0;
          local_128 = (char *)0x0;
          if (local_a0[2] == lVar28) {
            FUN_01187348(&local_130,&local_a0);
          }
          plVar51 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar24 = local_a0 + 3;
            do {
              sVar39 = (short)*plVar24;
              cVar14 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar16) {
                *(short *)plVar24 = sVar39 + -1;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
            if (sVar39 == 1) {
              piVar7 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar17 = *piVar7;
                cVar14 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar7,0x10);
                if (bVar16) {
                  *piVar7 = -1;
                  cVar14 = ExclusiveMonitorsStatus();
                }
              } while (cVar14 != '\0');
              if (iVar17 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar19 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar19;
                local_c8 = (undefined8 *)*plVar51;
                FUN_00c44438(lVar19 + 0x8040,&local_c8);
              }
            }
            else if (sVar39 == 0) goto LAB_01046b08;
          }
          local_120 = pcVar21;
          local_118 = plVar29;
          if (((*PTR_DAT_047d8c58 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar17 != 0)) {
            FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8c58);
          }
          uVar23 = *(undefined8 *)PTR_DAT_047d8c60;
          *(undefined8 *)PTR_DAT_047d8c68 = uVar23;
          FUN_00cbf5d4(&local_138,uVar23,plVar22[1]);
          local_c8 = (undefined8 *)0x0;
          local_c0 = (char *)0x0;
          FUN_01365a38(&local_c8,&local_130);
          local_b8 = local_120;
          local_b0 = local_118;
          local_a8 = local_138;
          if (local_138 != (long *)0x0) {
            lVar19 = local_138[6];
            if (*(long *)(lVar19 + 0x10) == 0) {
LAB_01047324:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar19 + 0x1a);
            do {
              sVar39 = *psVar1;
              cVar14 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar16) {
                *psVar1 = sVar39 + 1;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
            if (sVar39 == 0) {
              uVar23 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
              *(undefined8 *)(lVar19 + 8) = uVar23;
              *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
            }
            else if (sVar39 == -1) {
LAB_0104685c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
          }
          plVar51 = (long *)0x0;
          if (local_138 != (long *)0x0) {
            plVar51 = local_138 + 0xb;
          }
          if ((*(byte *)((long)plVar22 + 0x6d) & 1) == 0) {
            if ((*(byte *)((long)plVar22 + 0x6c) & 1) == 0) {
              plVar24 = plVar22 + 0xf;
              lVar19 = nn::os::GetCurrentThread();
LAB_0104642c:
              if (*plVar24 == 0) goto code_r0x01046434;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar22 + 0x10));
              do {
                if (*plVar24 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(plVar22 + 0x10));
                    while (*plVar24 == 0) {
                      cVar14 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                      if (bVar16) {
                        *plVar24 = lVar19;
                        cVar14 = ExclusiveMonitorsStatus();
                      }
                      if (cVar14 == '\0') goto LAB_01046648;
                    }
                  } while( true );
                }
                cVar14 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar16) {
                  *plVar24 = lVar19;
                  cVar14 = ExclusiveMonitorsStatus();
                }
              } while (cVar14 != '\0');
LAB_01046648:
              if ((*(byte *)((long)plVar22 + 0x6c) & 1) == 0) {
                local_a0 = (long *)0x0;
                local_98 = (char *)0x0;
                FUN_01186804(&local_a0,&local_c8);
                local_90 = local_b8;
                local_88 = local_b0;
                local_80 = local_a8;
                if (local_a8 != (long *)0x0) {
                  lVar19 = local_a8[6];
                  if (*(long *)(lVar19 + 0x10) == 0) goto LAB_01047324;
                  psVar1 = (short *)(lVar19 + 0x1a);
                  do {
                    sVar39 = *psVar1;
                    cVar14 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar16) {
                      *psVar1 = sVar39 + 1;
                      cVar14 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar14 != '\0');
                  if (sVar39 == 0) {
                    uVar23 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
                    *(undefined8 *)(lVar19 + 8) = uVar23;
                    *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
                  }
                  else if (sVar39 == -1) goto LAB_0104685c;
                }
                local_78 = plVar51;
                FUN_017c7d10(plVar22 + 0x19,&local_a0);
                if (local_80 != (long *)0x0) {
                  lVar19 = local_80[6];
                  psVar1 = (short *)(lVar19 + 0x1a);
                  do {
                    sVar39 = *psVar1;
                    cVar14 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar16) {
                      *psVar1 = sVar39 + -1;
                      cVar14 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar14 != '\0');
                  if (sVar39 == 1) {
                    *(undefined8 *)(lVar19 + 0x10) = 0;
                    (**(code **)(*local_80 + 0x50))();
                  }
                  else if (sVar39 == 0) goto LAB_010467e8;
                }
                plVar51 = local_a0;
                if (local_a0 != (long *)0x0) {
                  plVar24 = local_a0 + 3;
                  do {
                    sVar39 = (short)*plVar24;
                    cVar14 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                    if (bVar16) {
                      *(short *)plVar24 = sVar39 + -1;
                      cVar14 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar14 != '\0');
                  if (sVar39 == 1) {
                    piVar7 = (int *)((long)local_a0 + 0x1c);
                    do {
                      iVar17 = *piVar7;
                      cVar14 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(piVar7,0x10);
                      if (bVar16) {
                        *piVar7 = -1;
                        cVar14 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar14 != '\0');
                    if (iVar17 != -1) {
                      if (((*PTR_DAT_047d3908 & 1) == 0) &&
                         (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
                        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3908);
                      }
                      lVar19 = *(long *)PTR_DAT_047d3910;
                      *(long *)PTR_DAT_047d3918 = lVar19;
                      local_70[0] = *plVar51;
                      FUN_00c44438(lVar19 + 0x8040,local_70);
                    }
                  }
                  else if (sVar39 == 0) goto LAB_01046b08;
                }
              }
              else {
                FUN_01864fb8(&local_c8);
              }
              plVar22[0xf] = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar22 + 0x10));
              goto LAB_010462f8;
            }
            FUN_01864fb8(&local_c8);
          }
LAB_010462f8:
          if (local_a8 != (long *)0x0) {
            lVar19 = local_a8[6];
            psVar1 = (short *)(lVar19 + 0x1a);
            do {
              sVar39 = *psVar1;
              cVar14 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar16) {
                *psVar1 = sVar39 + -1;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
            if (sVar39 == 1) {
              *(undefined8 *)(lVar19 + 0x10) = 0;
              (**(code **)(*local_a8 + 0x50))();
            }
            else if (sVar39 == 0) goto LAB_010467e8;
          }
          puVar47 = local_c8;
          if (local_c8 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_c8 + 3);
            do {
              sVar39 = *psVar1;
              cVar14 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar16) {
                *psVar1 = sVar39 + -1;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
            if (sVar39 == 1) {
              piVar7 = (int *)((long)local_c8 + 0x1c);
              do {
                iVar17 = *piVar7;
                cVar14 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar7,0x10);
                if (bVar16) {
                  *piVar7 = -1;
                  cVar14 = ExclusiveMonitorsStatus();
                }
              } while (cVar14 != '\0');
              if (iVar17 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar19 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar19;
                local_a0 = (long *)*puVar47;
                FUN_00c44438(lVar19 + 0x8040,&local_a0);
              }
            }
            else if (sVar39 == 0) goto LAB_01046b08;
          }
          if (local_138 != (long *)0x0) {
            lVar19 = local_138[6];
            psVar1 = (short *)(lVar19 + 0x1a);
            do {
              sVar39 = *psVar1;
              cVar14 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar16) {
                *psVar1 = sVar39 + -1;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
            if (sVar39 == 1) {
              *(undefined8 *)(lVar19 + 0x10) = 0;
              (**(code **)(*local_138 + 0x50))();
            }
            else if (sVar39 == 0) goto LAB_010467e8;
          }
          puVar47 = local_130;
          if (local_130 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_130 + 3);
            do {
              sVar39 = *psVar1;
              cVar14 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar16) {
                *psVar1 = sVar39 + -1;
                cVar14 = ExclusiveMonitorsStatus();
              }
            } while (cVar14 != '\0');
            if (sVar39 == 1) {
              piVar7 = (int *)((long)local_130 + 0x1c);
              do {
                iVar17 = *piVar7;
                cVar14 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar7,0x10);
                if (bVar16) {
                  *piVar7 = -1;
                  cVar14 = ExclusiveMonitorsStatus();
                }
              } while (cVar14 != '\0');
              if (iVar17 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar17 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar19 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar19;
                local_a0 = (long *)*puVar47;
                FUN_00c44438(lVar19 + 0x8040,&local_a0);
              }
            }
            else if (sVar39 == 0) {
LAB_01046b08:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          lVar19 = plVar22[6];
          psVar1 = (short *)(lVar19 + 0x1a);
          do {
            sVar39 = *psVar1;
            cVar14 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar16) {
              *psVar1 = sVar39 + -1;
              cVar14 = ExclusiveMonitorsStatus();
            }
          } while (cVar14 != '\0');
          if (sVar39 == 1) {
            *(undefined8 *)(lVar19 + 0x10) = 0;
            (**(code **)(*plVar22 + 0x50))(plVar22);
          }
          else if (sVar39 == 0) goto LAB_010467e8;
          if (local_f0 != (long *)0x0) {
            (**(code **)(*local_f0 + 0x20))();
          }
          if (local_110[0] != (long *)0x0) {
            (**(code **)(*local_110[0] + 0x20))();
          }
          puVar47 = (undefined8 *)PTR_DAT_047d4248;
        }
      }
    }
  }
  if ((0x14 < *(ushort *)((long)piVar9 - (long)*piVar9)) &&
     (uVar30 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[10], uVar30 != 0)) {
    puVar31 = (uint *)((long)piVar9 + uVar30);
    puVar31 = (uint *)((long)puVar31 + (ulong)*puVar31);
    puVar42 = puVar31 + 1;
    uVar30 = (ulong)*puVar31;
    if (uVar30 != 0) {
      plVar22 = (long *)(pcVar21 + 0xd0);
      pcVar6 = pcVar21 + 0x108;
      plVar51 = (long *)(pcVar21 + 0x100);
      puVar31 = puVar42;
      do {
        puVar43 = puVar31 + 1;
        uVar10 = *puVar31;
        local_110[0] = (long *)0x0;
        if (*(char *)((long)puVar43 + (ulong)uVar10) == '\0') {
          plVar24 = (long *)FUN_00d44228();
          if (plVar24 != (long *)0x0) {
            (**(code **)(*plVar24 + 0x18))(plVar24);
          }
          puVar47 = (undefined8 *)PTR_DAT_047d4248;
          if (local_110[0] != (long *)0x0) {
            lVar19 = *local_110[0];
            local_110[0] = plVar24;
            (**(code **)(lVar19 + 0x20))();
            plVar24 = local_110[0];
          }
        }
        else {
          if (((*PTR_DAT_047d4240 & 1) == 0) &&
             (iVar17 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar17 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,puVar47,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4240);
          }
          uVar23 = *puVar47;
          *(undefined8 *)PTR_DAT_047d4250 = uVar23;
          FUN_00cf9884(&local_a0,uVar23,(char *)((long)puVar43 + (ulong)uVar10));
          plVar24 = local_110[0];
          local_110[0] = (long *)0x0;
          if (plVar24 != (long *)0x0) {
            (**(code **)(*plVar24 + 0x20))();
          }
          local_110[0] = local_a0;
          plVar24 = local_110[0];
        }
        local_110[0] = plVar24;
        plVar24 = (long *)(**(code **)(**(long **)pcVar6 + 0x10))(*(long **)pcVar6,0x30,8);
        if (plVar24 == (long *)0x0) {
          (**(code **)(**(long **)pcVar6 + 0xe8))();
        }
        local_a0 = plVar24;
        local_98 = pcVar6;
        FUN_010473dc(pcVar6,plVar24 + 2,local_110);
        local_90 = (char *)CONCAT71(local_90._1_7_,1);
        uVar36 = plVar24[2];
        *plVar24 = 0;
        plVar24[1] = uVar36;
        uVar32 = *(ulong *)(pcVar21 + 0xd8);
        if (uVar32 == 0) {
LAB_01045b98:
          if ((uVar32 == 0) ||
             (*(float *)(pcVar21 + 0x130) * (float)uVar32 < (float)(*(long *)(pcVar21 + 0x128) + 1))
             ) {
            uVar32 = (ulong)(uVar32 < 3 || (uVar32 & uVar32 - 1) != 0) | uVar32 << 1;
            uVar36 = (ulong)((float)(*(long *)(pcVar21 + 0x128) + 1) / *(float *)(pcVar21 + 0x130));
            if (uVar36 <= uVar32) {
              uVar36 = uVar32;
            }
            FUN_00db35b8(plVar22,uVar36);
            uVar32 = *(ulong *)(pcVar21 + 0xd8);
            uVar36 = plVar24[1];
          }
          uVar38 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
          uVar38 = (uVar38 & 0x3333333333333333) + (uVar38 >> 2 & 0x3333333333333333);
          uVar38 = (uVar38 + (uVar38 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar38 < 2) {
            uVar36 = uVar32 - 1 & uVar36;
          }
          else if (uVar32 <= uVar36) {
            uVar41 = 0;
            if (uVar32 != 0) {
              uVar41 = uVar36 / uVar32;
            }
            uVar36 = uVar36 - uVar41 * uVar32;
          }
          plVar40 = *(long **)(*plVar22 + uVar36 * 8);
          if (plVar40 == (long *)0x0) {
            *plVar24 = *plVar51;
            *plVar51 = (long)plVar24;
            *(long **)(*plVar22 + uVar36 * 8) = plVar51;
            if (*plVar24 != 0) {
              uVar36 = *(ulong *)(*plVar24 + 8);
              if (uVar38 < 2) {
                uVar36 = uVar36 & uVar32 - 1;
              }
              else if (uVar32 <= uVar36) {
                uVar38 = 0;
                if (uVar32 != 0) {
                  uVar38 = uVar36 / uVar32;
                }
                uVar36 = uVar36 - uVar38 * uVar32;
              }
              plVar40 = (long *)(*plVar22 + uVar36 * 8);
              goto LAB_01045c14;
            }
          }
          else {
            *plVar24 = *plVar40;
LAB_01045c14:
            *plVar40 = (long)plVar24;
          }
          *(long *)(pcVar21 + 0x128) = *(long *)(pcVar21 + 0x128) + 1;
          local_a0 = (long *)0x0;
        }
        else {
          uVar38 = uVar32 - 1;
          if ((uVar32 & uVar38) == 0) {
            plVar40 = *(long **)(*plVar22 + (uVar38 & uVar36) * 8);
            if (plVar40 == (long *)0x0) goto LAB_01045b98;
            do {
              plVar40 = (long *)*plVar40;
              if ((plVar40 == (long *)0x0) || ((plVar40[1] & uVar38) != (uVar38 & uVar36)))
              goto LAB_01045b98;
            } while (plVar40[2] != uVar36);
          }
          else {
            uVar38 = uVar36;
            if (uVar32 <= uVar36) {
              uVar38 = 0;
              if (uVar32 != 0) {
                uVar38 = uVar36 / uVar32;
              }
              uVar38 = uVar36 - uVar38 * uVar32;
            }
            plVar40 = *(long **)(*plVar22 + uVar38 * 8);
            if (plVar40 == (long *)0x0) goto LAB_01045b98;
            do {
              plVar40 = (long *)*plVar40;
              if (plVar40 == (long *)0x0) goto LAB_01045b98;
              uVar41 = plVar40[1];
              if (uVar32 <= uVar41) {
                uVar15 = 0;
                if (uVar32 != 0) {
                  uVar15 = uVar41 / uVar32;
                }
                uVar41 = uVar41 - uVar15 * uVar32;
              }
              if (uVar41 != uVar38) goto LAB_01045b98;
            } while (plVar40[2] != uVar36);
          }
          local_a0 = (long *)0x0;
          if (plVar24 != (long *)0x0) {
            FUN_028fc740(&local_98,plVar24);
          }
        }
        if (local_110[0] != (long *)0x0) {
          (**(code **)(*local_110[0] + 0x20))();
        }
        puVar31 = puVar43;
      } while (puVar43 != puVar42 + uVar30);
    }
  }
LAB_01045d10:
  plVar51 = *(long **)(pcVar21 + 8);
  plVar22 = (long *)PTR_DAT_047d8b70;
  if (plVar51 != (long *)0x0) {
    plVar22 = plVar51 + 6;
  }
  puVar44 = (undefined8 *)*plVar22;
  plVar22 = (long *)PTR_PTR_047d4508;
  if (plVar51 != (long *)0x0) {
    plVar22 = plVar51 + 7;
  }
  lVar19 = *plVar22;
  if (plVar51 == (long *)0x0) {
    lVar49 = 0;
  }
  else {
    lVar49 = plVar51[8];
    (**(code **)(*plVar51 + 0x18))(plVar51);
  }
  puVar46 = *(undefined8 **)(lVar28 + 0x120);
  if (puVar46 == (undefined8 *)0x0) {
LAB_01045dd4:
    plVar22 = (long *)(**(code **)(**(long **)(lVar28 + 0x150) + 0x10))
                                (*(long **)(lVar28 + 0x150),0x50,8);
    if (plVar22 == (long *)0x0) {
      (**(code **)(**(long **)(lVar28 + 0x150) + 0xe8))();
    }
    uVar23 = *(undefined8 *)(lVar28 + 0x150);
    if (((DAT_04865a38 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04865a38), iVar17 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar48 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar48 != 0) {
      if (0xf < *(ulong *)(lVar48 + 0x80)) {
LAB_0104721c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar48 + *(ulong *)(lVar48 + 0x80) * 8) = uVar23;
      *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + 1;
    }
    plVar22[2] = (long)puVar44;
    plVar22[3] = lVar19;
    plVar22[4] = lVar49;
    plVar22[5] = (long)plVar51;
    plVar22[6] = 0;
    plVar22[7] = 0;
    plVar22[8] = 0;
    plVar22[9] = 0;
    if (lVar48 != 0) {
      *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + -1;
    }
    *plVar22 = 0;
    plVar22[1] = (long)puVar44;
    fVar52 = (float)(*(long *)(lVar28 + 0x170) + 1);
    if ((puVar46 == (undefined8 *)0x0) || (*(float *)(lVar28 + 0x178) * (float)puVar46 < fVar52)) {
      uVar30 = (ulong)(puVar46 < (undefined8 *)0x3 ||
                      ((ulong)puVar46 & (ulong)((long)puVar46 + -1)) != 0) | (long)puVar46 << 1;
      uVar32 = (ulong)(fVar52 / *(float *)(lVar28 + 0x178));
      if (uVar32 <= uVar30) {
        uVar32 = uVar30;
      }
      if (uVar32 - 1 == 0) {
        uVar32 = 2;
      }
      else if ((uVar32 & uVar32 - 1) != 0) {
        uVar32 = std::__next_prime(uVar32);
      }
      uVar30 = *(ulong *)(lVar28 + 0x120);
      if (uVar30 < uVar32) {
        uVar36 = uVar32;
LAB_01045ed8:
        FUN_028fc7f0(plVar26,uVar36);
      }
      else if (uVar32 < uVar30) {
        uVar36 = (ulong)((float)*(ulong *)(lVar28 + 0x170) / *(float *)(lVar28 + 0x178));
        if ((uVar30 < 3) ||
           (uVar38 = uVar30 - (uVar30 >> 1 & 0x5555555555555555),
           uVar38 = (uVar38 & 0x3333333333333333) + (uVar38 >> 2 & 0x3333333333333333),
           1 < (uVar38 + (uVar38 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar36 = std::__next_prime(uVar36);
        }
        else if (1 < uVar36) {
          uVar36 = 1L << (-LZCOUNT(uVar36 - 1) & 0x3fU);
        }
        if (uVar36 <= uVar32) {
          uVar36 = uVar32;
        }
        if (uVar36 < uVar30) goto LAB_01045ed8;
      }
      puVar46 = *(undefined8 **)(lVar28 + 0x120);
      if (((ulong)puVar46 & (ulong)((long)puVar46 + -1)) == 0) {
        puVar47 = (undefined8 *)((ulong)((long)puVar46 + -1) & (ulong)puVar44);
      }
      else if (puVar44 < puVar46) {
        puVar47 = puVar44;
      }
      else {
        uVar30 = 0;
        if (puVar46 != (undefined8 *)0x0) {
          uVar30 = (ulong)puVar44 / (ulong)puVar46;
        }
        puVar47 = (undefined8 *)((long)puVar44 - uVar30 * (long)puVar46);
      }
    }
    plVar51 = *(long **)(*plVar26 + (long)puVar47 * 8);
    if (plVar51 == (long *)0x0) {
      *plVar22 = *plVar2;
      *plVar2 = (long)plVar22;
      *(long **)(*plVar26 + (long)puVar47 * 8) = plVar2;
      if (*plVar22 != 0) {
        puVar47 = *(undefined8 **)(*plVar22 + 8);
        if (((ulong)puVar46 & (ulong)((long)puVar46 + -1)) == 0) {
          puVar47 = (undefined8 *)((ulong)puVar47 & (ulong)((long)puVar46 + -1));
        }
        else if (puVar46 <= puVar47) {
          uVar30 = 0;
          if (puVar46 != (undefined8 *)0x0) {
            uVar30 = (ulong)puVar47 / (ulong)puVar46;
          }
          puVar47 = (undefined8 *)((long)puVar47 - uVar30 * (long)puVar46);
        }
        plVar51 = (long *)(*plVar26 + (long)puVar47 * 8);
        goto LAB_01046028;
      }
    }
    else {
      *plVar22 = *plVar51;
LAB_01046028:
      *plVar51 = (long)plVar22;
    }
    plVar51 = (long *)0x0;
    *(long *)(lVar28 + 0x170) = *(long *)(lVar28 + 0x170) + 1;
  }
  else {
    puVar33 = (undefined *)((long)puVar46 + -1);
    if (((ulong)puVar46 & (ulong)puVar33) == 0) {
      puVar47 = (undefined8 *)((ulong)puVar33 & (ulong)puVar44);
      plVar22 = *(long **)(*plVar26 + (long)puVar47 * 8);
      if (plVar22 == (long *)0x0) goto LAB_01045dd4;
      do {
        plVar22 = (long *)*plVar22;
        if ((plVar22 == (long *)0x0) ||
           ((undefined8 *)plVar22[1] != puVar44 &&
            (undefined8 *)((ulong)plVar22[1] & (ulong)puVar33) != puVar47)) goto LAB_01045dd4;
      } while ((undefined8 *)plVar22[2] != puVar44);
    }
    else {
      puVar47 = puVar44;
      if (puVar46 <= puVar44) {
        uVar30 = 0;
        if (puVar46 != (undefined8 *)0x0) {
          uVar30 = (ulong)puVar44 / (ulong)puVar46;
        }
        puVar47 = (undefined8 *)((long)puVar44 - uVar30 * (long)puVar46);
      }
      plVar22 = *(long **)(*plVar26 + (long)puVar47 * 8);
      if (plVar22 == (long *)0x0) goto LAB_01045dd4;
      do {
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB_01045dd4;
        puVar34 = (undefined8 *)plVar22[1];
        if (puVar34 != puVar44) {
          if (puVar46 <= puVar34) {
            uVar30 = 0;
            if (puVar46 != (undefined8 *)0x0) {
              uVar30 = (ulong)puVar34 / (ulong)puVar46;
            }
            puVar34 = (undefined8 *)((long)puVar34 - uVar30 * (long)puVar46);
          }
          if (puVar34 != puVar47) goto LAB_01045dd4;
        }
      } while ((undefined8 *)plVar22[2] != puVar44);
    }
  }
  lVar19 = plVar22[6];
  plVar22[6] = (long)pcVar21;
  if (lVar19 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar49 = FUN_00c4e600();
    iVar11 = *(int *)(lVar49 + 0x12c8);
    iVar17 = iVar11 + 1;
    *(int *)(lVar49 + 0x12c8) = iVar17;
    if (*(int *)(lVar49 + 0x12cc) <= iVar11) {
      *(int *)(lVar49 + 0x12cc) = iVar17;
    }
    FUN_010444b4(lVar19);
    plVar24 = (long *)plVar22[7];
    lVar49 = plVar22[8];
    lVar48 = plVar22[9];
    uVar30 = (**(code **)(*plVar24 + 0xf8))(plVar24);
    if (((uVar30 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar19,lVar49,lVar48);
    }
    else {
      FUN_00c48fe8(plVar24,lVar19,lVar49,lVar48);
    }
    lVar19 = FUN_00c4e600();
    iVar17 = *(int *)(lVar19 + 0x12c8) + -1;
    *(int *)(lVar19 + 0x12c8) = iVar17;
    if (iVar17 == 0) {
      plVar24 = (long *)FUN_00c4e600();
      if (plVar24[600] != 0) {
        local_110[0] = plVar24 + plVar24[600] * 3;
        local_a0 = plVar24;
        FUN_00c4ea30(&local_a0,local_110);
        plVar50 = (long *)*plVar24;
        plVar40 = plVar24;
        if (plVar24[600] != 0) {
          plVar40 = plVar24 + plVar24[600] * 3;
        }
        if (plVar40 == plVar24) {
          uVar32 = 0;
          uVar30 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar24 + 0xd0))();
          if ((long *)*plVar24 != plVar50) {
            (**(code **)(*plVar50 + 0x100))(plVar50,plVar24,plVar24);
            plVar50 = (long *)*plVar24;
          }
          plVar8 = plVar24 + 3;
          if (plVar40 == plVar8) {
            uVar32 = 0;
            uVar30 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            bVar16 = (long *)*plVar8 != plVar50;
            if (bVar16) {
              (**(code **)(*plVar50 + 0x100))(plVar50,plVar24,plVar24 + 3);
              plVar50 = (long *)plVar24[3];
            }
            uVar32 = (ulong)bVar16;
            plVar8 = plVar24 + 6;
            if (plVar40 == plVar8) {
              uVar30 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar8 + 0xd0))();
              if ((long *)*plVar8 != plVar50) {
                (**(code **)(*plVar50 + 0x100))(plVar50,plVar24 + uVar32 * 3,plVar24 + 6);
                plVar50 = (long *)plVar24[6];
                uVar32 = 2;
              }
              plVar8 = plVar24 + 9;
              if (plVar40 == plVar8) {
                uVar30 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar8 + 0xd0))();
                if ((long *)*plVar8 != plVar50) {
                  (**(code **)(*plVar50 + 0x100))(plVar50,plVar24 + uVar32 * 3,plVar24 + 9);
                  plVar50 = (long *)plVar24[9];
                  uVar32 = 3;
                }
                plVar8 = plVar24 + 0xc;
                if (plVar40 == plVar8) {
                  uVar30 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar8 + 0xd0))();
                  if ((long *)*plVar8 != plVar50) {
                    (**(code **)(*plVar50 + 0x100))(plVar50,plVar24 + uVar32 * 3,plVar24 + 0xc);
                    plVar50 = (long *)plVar24[0xc];
                    uVar32 = 4;
                  }
                  plVar8 = plVar24 + 0xf;
                  if (plVar40 == plVar8) {
                    uVar30 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar8 + 0xd0))();
                    if ((long *)*plVar8 != plVar50) {
                      (**(code **)(*plVar50 + 0x100))(plVar50,plVar24 + uVar32 * 3,plVar24 + 0xf);
                      plVar50 = (long *)plVar24[0xf];
                      uVar32 = 5;
                    }
                    uVar30 = 6;
                    for (local_178 = plVar24 + 0x12; plVar40 != local_178; local_178 = local_178 + 3
                        ) {
                      (**(code **)(*(long *)*local_178 + 0xd0))();
                      if ((long *)*local_178 != plVar50) {
                        (**(code **)(*plVar50 + 0x100))(plVar50,plVar24 + uVar32 * 3,local_178);
                        plVar50 = (long *)*local_178;
                        uVar32 = uVar30;
                      }
                      uVar30 = uVar30 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar50 + 0x100))(plVar50,plVar24 + uVar32 * 3,plVar24 + uVar30 * 3);
        plVar24[600] = 0;
      }
      *(undefined4 *)(lVar19 + 0x12cc) = 0;
    }
  }
  plVar22[7] = (long)local_170;
  plVar22[8] = local_168;
  plVar22[9] = local_160;
  puVar47 = (undefined8 *)PTR_DAT_047d4248;
  if (plVar51 != (long *)0x0) {
    (**(code **)(*plVar51 + 0x20))(plVar51);
  }
  puVar45 = puVar45 + 1;
  if (puVar45 == puVar20) goto LAB_01046690;
  goto LAB_0104562c;
code_r0x01046434:
  cVar14 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar16) {
    *plVar24 = lVar19;
    cVar14 = ExclusiveMonitorsStatus();
  }
  if (cVar14 == '\0') goto LAB_01046648;
  goto LAB_0104642c;
LAB_01046690:
  lVar19 = (long)*local_180;
  uVar12 = *(ushort *)((long)local_180 - lVar19);
LAB_010466a4:
  if ((uVar12 < 7) || (uVar30 = (ulong)*(ushort *)((long)local_180 + (6 - lVar19)), uVar30 == 0)) {
LAB_01046818:
    local_c8 = (undefined8 *)0x0;
  }
  else {
    puVar20 = (uint *)((long)local_180 + uVar30);
    piVar9 = (int *)((long)puVar20 + (ulong)*puVar20);
    if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
       (uVar30 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar30 == 0))
    goto LAB_01046818;
    puVar20 = (uint *)((long)piVar9 + uVar30);
    local_c8 = (undefined8 *)((long)puVar20 + (ulong)*puVar20);
    if (*(int *)((long)puVar20 + (ulong)*puVar20) != 0) {
      if ((*param_1 == 0) || (**(char **)(*param_1 + 0x38) == '\0')) {
        FUN_028fc620(&local_a0,&local_c8);
      }
      else {
        FUN_00e83e2c(&local_a0,param_1,&local_c8,&DAT_03c886bc);
      }
      plVar29 = (long *)PTR_PTR_047d4508;
      if (local_a0 != (long *)0x0) {
        plVar29 = local_a0 + 7;
      }
      pcVar21 = (char *)*plVar29;
      if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
        plVar29 = (long *)FUN_00d44228();
        if (plVar29 != (long *)0x0) {
          (**(code **)(*plVar29 + 0x18))(plVar29);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar18 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar23 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar23;
        FUN_00cf9884(local_110,uVar23,pcVar21);
        plVar29 = local_110[0];
      }
      plVar26 = *(long **)(lVar28 + 0x180);
      *(undefined8 *)(lVar28 + 0x180) = 0;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x20))();
      }
      *(long **)(lVar28 + 0x180) = plVar29;
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
    }
  }
  *(undefined1 *)(lVar28 + 0x189) = 1;
LAB_010467c4:
  lVar19 = *(long *)(lVar28 + 8);
  psVar1 = (short *)(lVar19 + 0x1a);
  do {
    sVar39 = *psVar1;
    cVar14 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar16) {
      *psVar1 = sVar39 + -1;
      cVar14 = ExclusiveMonitorsStatus();
    }
  } while (cVar14 != '\0');
  if (sVar39 == 1) {
    *(undefined8 *)(lVar19 + 0x10) = 0;
    (**(code **)(*(long *)(lVar28 + -0x28) + 0x50))();
  }
  else if (sVar39 == 0) {
LAB_010467e8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_01045314:
  lVar28 = param_1[9];
  if ((*(byte *)(lVar28 + 0x61) & 1) != 0) {
    return;
  }
  plVar29 = (long *)(lVar28 + 0x68);
  lVar19 = nn::os::GetCurrentThread();
  while (*plVar29 == 0) {
    cVar14 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar16) {
      *plVar29 = lVar19;
      cVar14 = ExclusiveMonitorsStatus();
    }
    if (cVar14 == '\0') goto LAB_01045340;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x70));
  do {
    if (*plVar29 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x70));
        while (*plVar29 == 0) {
          cVar14 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar16) {
            *plVar29 = lVar19;
            cVar14 = ExclusiveMonitorsStatus();
          }
          if (cVar14 == '\0') goto LAB_01045340;
        }
      } while( true );
    }
    cVar14 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
    if (bVar16) {
      *plVar29 = lVar19;
      cVar14 = ExclusiveMonitorsStatus();
    }
  } while (cVar14 != '\0');
LAB_01045340:
  puVar47 = *(undefined8 **)(lVar28 + 0x80);
  puVar44 = *(undefined8 **)(lVar28 + 0x88);
  if (puVar47 != puVar44) {
    if ((*(byte *)(lVar28 + 0x61) & 1) == 0) {
      (*(code *)*puVar47)(puVar47 + 4);
    }
    if ((*(byte *)(lVar28 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar47[0x10])();
      *(int *)(lVar28 + 100) = *(int *)(lVar28 + 100) + 1;
    }
    while (puVar47 = puVar47 + 0x12, puVar47 != puVar44) {
      if ((*(byte *)(lVar28 + 0x61) & 1) == 0) {
        (*(code *)*puVar47)(puVar47 + 4);
      }
      if ((*(byte *)(lVar28 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar47[0x10])();
        *(int *)(lVar28 + 100) = *(int *)(lVar28 + 100) + 1;
      }
    }
    puVar47 = *(undefined8 **)(lVar28 + 0x80);
    puVar44 = *(undefined8 **)(lVar28 + 0x88);
    if (puVar44 != puVar47) {
      pcVar35 = (code *)puVar44[-0x11];
      puVar46 = puVar44 + -0x12;
      if (pcVar35 != (code *)0x0) {
        puVar44[-0x10] = 0;
        puVar44[-0xf] = 0;
        *puVar46 = 0;
        puVar44[-0x11] = 0;
        (*pcVar35)(puVar44 + -0xe);
      }
      while (puVar44 = puVar46, puVar44 != puVar47) {
        pcVar35 = (code *)puVar44[-0x11];
        puVar46 = puVar44 + -0x12;
        if (pcVar35 != (code *)0x0) {
          puVar44[-0x10] = 0;
          puVar44[-0xf] = 0;
          puVar44[-0x12] = 0;
          puVar44[-0x11] = 0;
          (*pcVar35)(puVar44 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar28 + 0x88) = puVar47;
  *(undefined1 *)(lVar28 + 0x60) = 1;
  if ((*(byte *)(lVar28 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar28 + 0x40),lVar28);
    *(byte *)(lVar28 + 0x50) = 1;
  }
  *(undefined8 *)(lVar28 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar28 + 0x70));
  return;
}


