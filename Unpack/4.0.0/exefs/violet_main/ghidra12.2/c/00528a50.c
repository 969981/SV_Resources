/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00528a50; name: FUN_00528a50
 */


long FUN_00528a50(ulong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  code *pcVar19;
  ulong *puVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  uint *puVar26;
  int *piVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  char cVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  char cVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  char cVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  char cVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  char cVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  char cVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  char cVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  char cVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  int iVar132;
  ulong uVar133;
  int iVar136;
  long lVar134;
  ulong uVar135;
  ulong uVar137;
  long lVar138;
  ulong uVar139;
  ulong uVar140;
  ulong uVar141;
  ulong uVar142;
  ulong uVar143;
  ulong uVar144;
  ulong uVar145;
  int iVar146;
  int iVar148;
  long lVar147;
  long lVar149;
  int iVar150;
  ulong uVar151;
  int iVar153;
  long lVar152;
  ulong uVar154;
  long lVar155;
  int iVar156;
  int iVar158;
  long lVar157;
  long lVar159;
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
      return 0;
    }
    lVar22 = (ulong)(((uint)LZCOUNT(param_2 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) <<
             ((char)param_1[1] == '\n');
    switch((char)param_1[1]) {
    case '\x01':
    case '\x06':
    case '\x10':
      return lVar22 + 8;
    case '\x02':
    case '\a':
    case '\x0f':
      return lVar22 + 4;
    case '\x03':
    case '\x04':
      uVar23 = *param_1;
      break;
    case '\x05':
    case '\x0e':
      uVar23 = 10;
      if (((uint)*param_1 & 0x80000000) == 0) {
        uVar23 = (ulong)(((uint)LZCOUNT((uint)*param_1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      }
      return uVar23 + lVar22;
    case '\b':
      return lVar22 + 1;
    case '\t':
    case '\f':
      bVar36 = *(byte *)*param_1;
      uVar23 = (ulong)(bVar36 >> 1);
      if ((bVar36 & 1) != 0) {
        uVar23 = *(ulong *)((byte *)*param_1 + 8);
      }
      return uVar23 + lVar22 + (ulong)(((uint)LZCOUNT((uint)uVar23 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    case '\n':
      lVar25 = (**(code **)(*(long *)*param_1 + 0x48))();
      return lVar25 + lVar22;
    case '\v':
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) == 0) {
        pcVar19 = *(code **)(*(long *)*param_1 + 0x48);
      }
      else {
        pcVar19 = *(code **)(*(long *)*param_1 + 0x58);
      }
      lVar25 = (*pcVar19)();
      return lVar25 + lVar22 + (ulong)(((uint)LZCOUNT((uint)lVar25 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    case '\r':
      uVar17 = (uint)*param_1;
      goto LAB_0052908c;
    case '\x11':
      uVar17 = (uint)*param_1 << 1 ^ (int)(uint)*param_1 >> 0x1f;
LAB_0052908c:
      return lVar22 + (ulong)(((uint)LZCOUNT(uVar17 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    case '\x12':
      uVar23 = *param_1 << 1 ^ (long)*param_1 >> 0x3f;
      break;
    default:
      goto switchD_00528af8_default;
    }
    return lVar22 + ((LZCOUNT(uVar23 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
  }
  if (*(char *)((long)param_1 + 0xb) != '\0') {
    switch((byte)param_1[1]) {
    case 1:
    case 6:
    case 0x10:
      uVar18 = (ulong)*(uint *)*param_1 << 3;
      break;
    case 2:
    case 7:
    case 0xf:
      uVar18 = (ulong)*(uint *)*param_1 << 2;
      break;
    case 3:
      uVar17 = *(uint *)*param_1;
      uVar23 = (ulong)uVar17;
      if ((int)uVar17 < 1) goto switchD_00528a90_caseD_9;
      lVar22 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 8) {
        uVar28 = 0;
        uVar18 = 0;
      }
      else {
        lVar25 = 0;
        lVar29 = 0;
        lVar31 = 0;
        lVar30 = 0;
        lVar33 = 0;
        lVar32 = 0;
        lVar35 = 0;
        lVar34 = 0;
        uVar28 = uVar23 & 0xfffffff8;
        puVar20 = (ulong *)(lVar22 + 0x20);
        uVar18 = uVar28;
        do {
          uVar139 = puVar20[-3];
          bVar56 = (byte)(uVar139 >> 0x38);
          uVar135 = puVar20[-4];
          bVar45 = (byte)(uVar135 >> 0x38);
          uVar143 = puVar20[-1];
          bVar81 = (byte)(uVar143 >> 0x38);
          uVar141 = puVar20[-2];
          bVar69 = (byte)(uVar141 >> 0x38);
          uVar133 = uVar135 >> 1;
          uVar137 = uVar139 >> 1;
          uVar142 = puVar20[1];
          bVar107 = (byte)(uVar142 >> 0x38);
          uVar140 = *puVar20;
          bVar95 = (byte)(uVar140 >> 0x38);
          uVar145 = puVar20[3];
          bVar131 = (byte)(uVar145 >> 0x38);
          uVar144 = puVar20[2];
          bVar119 = (byte)(uVar144 >> 0x38);
          uVar151 = uVar140 >> 1;
          uVar154 = uVar142 >> 1;
          bVar83 = (byte)uVar140 | 1 | (byte)uVar151;
          bVar84 = (byte)(uVar140 >> 8) | (byte)(uVar151 >> 8);
          bVar85 = (byte)(uVar140 >> 0x10) | (byte)(uVar151 >> 0x10);
          bVar88 = (byte)(uVar140 >> 0x18) | (byte)(uVar151 >> 0x18);
          bVar89 = (byte)(uVar140 >> 0x20) | (byte)(uVar151 >> 0x20);
          bVar91 = (byte)(uVar140 >> 0x28) | (byte)(uVar151 >> 0x28);
          bVar93 = (byte)(uVar140 >> 0x30) | (byte)(uVar151 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 1;
          bVar97 = (byte)uVar142 | 1 | (byte)uVar154;
          bVar98 = (byte)(uVar142 >> 8) | (byte)(uVar154 >> 8);
          bVar99 = (byte)(uVar142 >> 0x10) | (byte)(uVar154 >> 0x10);
          bVar101 = (byte)(uVar142 >> 0x18) | (byte)(uVar154 >> 0x18);
          bVar102 = (byte)(uVar142 >> 0x20) | (byte)(uVar154 >> 0x20);
          bVar104 = (byte)(uVar142 >> 0x28) | (byte)(uVar154 >> 0x28);
          bVar106 = (byte)(uVar142 >> 0x30) | (byte)(uVar154 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 1;
          bVar36 = (byte)uVar135 | 1 | (byte)uVar133;
          bVar37 = (byte)(uVar135 >> 8) | (byte)(uVar133 >> 8);
          bVar38 = (byte)(uVar135 >> 0x10) | (byte)(uVar133 >> 0x10);
          bVar40 = (byte)(uVar135 >> 0x18) | (byte)(uVar133 >> 0x18);
          bVar41 = (byte)(uVar135 >> 0x20) | (byte)(uVar133 >> 0x20);
          bVar42 = (byte)(uVar135 >> 0x28) | (byte)(uVar133 >> 0x28);
          bVar43 = (byte)(uVar135 >> 0x30) | (byte)(uVar133 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 1;
          bVar47 = (byte)uVar139 | 1 | (byte)uVar137;
          bVar48 = (byte)(uVar139 >> 8) | (byte)(uVar137 >> 8);
          bVar49 = (byte)(uVar139 >> 0x10) | (byte)(uVar137 >> 0x10);
          bVar50 = (byte)(uVar139 >> 0x18) | (byte)(uVar137 >> 0x18);
          bVar51 = (byte)(uVar139 >> 0x20) | (byte)(uVar137 >> 0x20);
          bVar53 = (byte)(uVar139 >> 0x28) | (byte)(uVar137 >> 0x28);
          bVar55 = (byte)(uVar139 >> 0x30) | (byte)(uVar137 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 1;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 2
          ;
          uVar139 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 2
          ;
          bVar36 = bVar36 | (byte)uVar135;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 2;
          bVar47 = bVar47 | (byte)uVar139;
          bVar48 = bVar48 | (byte)(uVar139 >> 8);
          bVar49 = bVar49 | (byte)(uVar139 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar139 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar139 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar139 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar139 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 2;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 4
          ;
          uVar140 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 4
          ;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 4;
          bVar48 = bVar48 | (byte)(uVar140 >> 8);
          bVar49 = bVar49 | (byte)(uVar140 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar140 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar140 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar140 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar140 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 4;
          uVar139 = uVar141 >> 1;
          uVar142 = uVar143 >> 1;
          bVar57 = (byte)uVar141 | 1 | (byte)uVar139;
          bVar58 = (byte)(uVar141 >> 8) | (byte)(uVar139 >> 8);
          bVar59 = (byte)(uVar141 >> 0x10) | (byte)(uVar139 >> 0x10);
          bVar62 = (byte)(uVar141 >> 0x18) | (byte)(uVar139 >> 0x18);
          bVar63 = (byte)(uVar141 >> 0x20) | (byte)(uVar139 >> 0x20);
          bVar65 = (byte)(uVar141 >> 0x28) | (byte)(uVar139 >> 0x28);
          bVar67 = (byte)(uVar141 >> 0x30) | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 1;
          bVar71 = (byte)uVar143 | 1 | (byte)uVar142;
          bVar72 = (byte)(uVar143 >> 8) | (byte)(uVar142 >> 8);
          bVar73 = (byte)(uVar143 >> 0x10) | (byte)(uVar142 >> 0x10);
          bVar75 = (byte)(uVar143 >> 0x18) | (byte)(uVar142 >> 0x18);
          bVar76 = (byte)(uVar143 >> 0x20) | (byte)(uVar142 >> 0x20);
          bVar78 = (byte)(uVar143 >> 0x28) | (byte)(uVar142 >> 0x28);
          bVar80 = (byte)(uVar143 >> 0x30) | (byte)(uVar142 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 1;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 2
          ;
          uVar141 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 2
          ;
          bVar57 = bVar57 | (byte)uVar139;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 2;
          bVar71 = bVar71 | (byte)uVar141;
          bVar72 = bVar72 | (byte)(uVar141 >> 8);
          bVar73 = bVar73 | (byte)(uVar141 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar141 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar141 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar141 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar141 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 2;
          bVar46 = bVar38 | bVar40;
          bVar40 = bVar40 | bVar41;
          bVar41 = bVar41 | bVar42;
          bVar42 = bVar42 | bVar43;
          bVar43 = bVar43 | bVar45;
          bVar96 = bVar49 | bVar50;
          bVar50 = bVar50 | bVar51;
          bVar51 = bVar51 | bVar53;
          bVar53 = bVar53 | bVar55;
          bVar55 = bVar55 | bVar56;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 4
          ;
          uVar142 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 4
          ;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 4;
          bVar72 = bVar72 | (byte)(uVar142 >> 8);
          bVar73 = bVar73 | (byte)(uVar142 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar142 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar142 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar142 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar142 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 4;
          bVar60 = bVar59 | bVar62;
          bVar62 = bVar62 | bVar63;
          bVar63 = bVar63 | bVar65;
          bVar65 = bVar65 | bVar67;
          bVar67 = bVar67 | bVar69;
          bVar74 = bVar73 | bVar75;
          bVar75 = bVar75 | bVar76;
          bVar76 = bVar76 | bVar78;
          bVar78 = bVar78 | bVar80;
          bVar80 = bVar80 | bVar81;
          bVar70 = bVar41 | bVar43;
          bVar82 = bVar42 | bVar45;
          bVar52 = bVar51 | bVar55;
          bVar54 = bVar53 | bVar56;
          bVar64 = bVar63 | bVar67;
          bVar66 = bVar65 | bVar69;
          bVar77 = bVar76 | bVar80;
          bVar79 = bVar78 | bVar81;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 2
          ;
          uVar143 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 2;
          bVar83 = bVar83 | (byte)uVar141;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 2;
          bVar97 = bVar97 | (byte)uVar143;
          bVar98 = bVar98 | (byte)(uVar143 >> 8);
          bVar99 = bVar99 | (byte)(uVar143 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar143 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar143 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar143 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar143 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 2;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 4
          ;
          uVar133 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 4;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 4;
          bVar98 = bVar98 | (byte)(uVar133 >> 8);
          bVar99 = bVar99 | (byte)(uVar133 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar133 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar133 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar133 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar133 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 4;
          bVar86 = bVar85 | bVar88;
          bVar88 = bVar88 | bVar89;
          bVar89 = bVar89 | bVar91;
          bVar91 = bVar91 | bVar93;
          bVar93 = bVar93 | bVar95;
          bVar100 = bVar99 | bVar101;
          bVar101 = bVar101 | bVar102;
          bVar102 = bVar102 | bVar104;
          bVar104 = bVar104 | bVar106;
          bVar106 = bVar106 | bVar107;
          bVar90 = bVar89 | bVar93;
          bVar92 = bVar91 | bVar95;
          bVar103 = bVar102 | bVar106;
          bVar105 = bVar104 | bVar107;
          uVar143 = uVar144 >> 1;
          uVar137 = uVar145 >> 1;
          bVar108 = (byte)uVar144 | 1 | (byte)uVar143;
          bVar109 = (byte)(uVar144 >> 8) | (byte)(uVar143 >> 8);
          bVar110 = (byte)(uVar144 >> 0x10) | (byte)(uVar143 >> 0x10);
          bVar112 = (byte)(uVar144 >> 0x18) | (byte)(uVar143 >> 0x18);
          bVar113 = (byte)(uVar144 >> 0x20) | (byte)(uVar143 >> 0x20);
          bVar115 = (byte)(uVar144 >> 0x28) | (byte)(uVar143 >> 0x28);
          bVar117 = (byte)(uVar144 >> 0x30) | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 1;
          bVar121 = (byte)uVar145 | 1 | (byte)uVar137;
          bVar122 = (byte)(uVar145 >> 8) | (byte)(uVar137 >> 8);
          bVar123 = (byte)(uVar145 >> 0x10) | (byte)(uVar137 >> 0x10);
          bVar125 = (byte)(uVar145 >> 0x18) | (byte)(uVar137 >> 0x18);
          bVar126 = (byte)(uVar145 >> 0x20) | (byte)(uVar137 >> 0x20);
          bVar128 = (byte)(uVar145 >> 0x28) | (byte)(uVar137 >> 0x28);
          bVar130 = (byte)(uVar145 >> 0x30) | (byte)(uVar137 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 1;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 2;
          uVar144 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 2;
          bVar108 = bVar108 | (byte)uVar143;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 2;
          bVar121 = bVar121 | (byte)uVar144;
          bVar122 = bVar122 | (byte)(uVar144 >> 8);
          bVar123 = bVar123 | (byte)(uVar144 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar144 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar144 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar144 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar144 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 2;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 4;
          uVar144 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 4;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 4;
          bVar122 = bVar122 | (byte)(uVar144 >> 8);
          bVar123 = bVar123 | (byte)(uVar144 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar144 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar144 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar144 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar144 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 4;
          bVar120 = bVar110 | bVar112;
          bVar112 = bVar112 | bVar113;
          bVar113 = bVar113 | bVar115;
          bVar115 = bVar115 | bVar117;
          bVar117 = bVar117 | bVar119;
          bVar124 = bVar123 | bVar125;
          bVar125 = bVar125 | bVar126;
          bVar126 = bVar126 | bVar128;
          bVar128 = bVar128 | bVar130;
          bVar130 = bVar130 | bVar131;
          bVar114 = bVar113 | bVar117;
          bVar116 = bVar115 | bVar119;
          bVar127 = bVar126 | bVar130;
          bVar129 = bVar128 | bVar131;
          lVar25 = lVar25 + ((ulong)(byte)(POPCOUNT(~(bVar36 | (byte)uVar135 | bVar37 | bVar46 |
                                                     bVar70)) +
                                           POPCOUNT(~(bVar37 | bVar38 | bVar40 | bVar82)) +
                                           POPCOUNT(~(bVar46 | bVar41 | bVar43)) +
                                           POPCOUNT(~(bVar40 | bVar42 | bVar45)) +
                                           POPCOUNT(~bVar70) + POPCOUNT(~bVar82) +
                                           POPCOUNT(~bVar43) + POPCOUNT(~bVar45) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar29 = lVar29 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar47 | (byte)uVar140
                                                                             | bVar48 | bVar96 |
                                                                            bVar52)) +
                                                                 POPCOUNT(~(bVar48 | bVar49 | bVar50
                                                                           | bVar54))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar96 | bVar51 | bVar55
                                                                           )) +
                                                                POPCOUNT(~(bVar50 | bVar53 | bVar56)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar52) + POPCOUNT(~bVar54) +
                                                  POPCOUNT(~bVar55) + POPCOUNT(~bVar56)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar32 = lVar32 + ((ulong)(byte)(POPCOUNT(~(bVar83 | (byte)uVar141 | bVar84 | bVar86 |
                                                     bVar90)) +
                                           POPCOUNT(~(bVar84 | bVar85 | bVar88 | bVar92)) +
                                           POPCOUNT(~(bVar86 | bVar89 | bVar93)) +
                                           POPCOUNT(~(bVar88 | bVar91 | bVar95)) +
                                           POPCOUNT(~bVar90) + POPCOUNT(~bVar92) +
                                           POPCOUNT(~bVar93) + POPCOUNT(~bVar95) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar33 = lVar33 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar97 | (byte)uVar133
                                                                             | bVar98 | bVar100 |
                                                                            bVar103)) +
                                                                 POPCOUNT(~(bVar98 | bVar99 |
                                                                            bVar101 | bVar105))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar100 | bVar102 |
                                                                           bVar106)) +
                                                                POPCOUNT(~(bVar101 | bVar104 |
                                                                          bVar107)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar103) + POPCOUNT(~bVar105) +
                                                  POPCOUNT(~bVar106) + POPCOUNT(~bVar107)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          lVar30 = lVar30 + ((ulong)(byte)(POPCOUNT(~(bVar57 | (byte)uVar139 | bVar58 | bVar60 |
                                                     bVar64)) +
                                           POPCOUNT(~(bVar58 | bVar59 | bVar62 | bVar66)) +
                                           POPCOUNT(~(bVar60 | bVar63 | bVar67)) +
                                           POPCOUNT(~(bVar62 | bVar65 | bVar69)) +
                                           POPCOUNT(~bVar64) + POPCOUNT(~bVar66) +
                                           POPCOUNT(~bVar67) + POPCOUNT(~bVar69) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar31 = lVar31 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar71 | (byte)uVar142
                                                                             | bVar72 | bVar74 |
                                                                            bVar77)) +
                                                                 POPCOUNT(~(bVar72 | bVar73 | bVar75
                                                                           | bVar79))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar74 | bVar76 | bVar80
                                                                           )) +
                                                                POPCOUNT(~(bVar75 | bVar78 | bVar81)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar77) + POPCOUNT(~bVar79) +
                                                  POPCOUNT(~bVar80) + POPCOUNT(~bVar81)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar34 = lVar34 + ((ulong)(byte)(POPCOUNT(~(bVar108 | (byte)uVar143 | bVar109 | bVar120 |
                                                     bVar114)) +
                                           POPCOUNT(~(bVar109 | bVar110 | bVar112 | bVar116)) +
                                           POPCOUNT(~(bVar120 | bVar113 | bVar117)) +
                                           POPCOUNT(~(bVar112 | bVar115 | bVar119)) +
                                           POPCOUNT(~bVar114) + POPCOUNT(~bVar116) +
                                           POPCOUNT(~bVar117) + POPCOUNT(~bVar119) ^ 0x3f) * 9 +
                             0x49 >> 6);
          lVar35 = lVar35 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar121 | (byte)uVar144
                                                                             | bVar122 | bVar124 |
                                                                            bVar127)) +
                                                                 POPCOUNT(~(bVar122 | bVar123 |
                                                                            bVar125 | bVar129))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar124 | bVar126 |
                                                                           bVar130)) +
                                                                POPCOUNT(~(bVar125 | bVar128 |
                                                                          bVar131)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar127) + POPCOUNT(~bVar129) +
                                                  POPCOUNT(~bVar130) + POPCOUNT(~bVar131)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          uVar18 = uVar18 - 8;
          puVar20 = puVar20 + 8;
        } while (uVar18 != 0);
        uVar18 = lVar34 + lVar32 + lVar30 + lVar25 + lVar35 + lVar33 + lVar31 + lVar29;
        if (uVar28 == uVar23) break;
      }
      lVar25 = uVar23 - uVar28;
      puVar20 = (ulong *)(lVar22 + uVar28 * 8);
      do {
        uVar18 = uVar18 + ((LZCOUNT(*puVar20 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        lVar25 = lVar25 + -1;
        puVar20 = puVar20 + 1;
      } while (lVar25 != 0);
      break;
    case 4:
      uVar17 = *(uint *)*param_1;
      uVar23 = (ulong)uVar17;
      if ((int)uVar17 < 1) goto switchD_00528a90_caseD_9;
      lVar22 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 8) {
        uVar28 = 0;
        uVar18 = 0;
      }
      else {
        lVar25 = 0;
        lVar29 = 0;
        lVar31 = 0;
        lVar30 = 0;
        lVar33 = 0;
        lVar32 = 0;
        lVar35 = 0;
        lVar34 = 0;
        uVar28 = uVar23 & 0xfffffff8;
        puVar20 = (ulong *)(lVar22 + 0x20);
        uVar18 = uVar28;
        do {
          uVar139 = puVar20[-3];
          bVar56 = (byte)(uVar139 >> 0x38);
          uVar135 = puVar20[-4];
          bVar45 = (byte)(uVar135 >> 0x38);
          uVar143 = puVar20[-1];
          bVar81 = (byte)(uVar143 >> 0x38);
          uVar141 = puVar20[-2];
          bVar69 = (byte)(uVar141 >> 0x38);
          uVar133 = uVar135 >> 1;
          uVar137 = uVar139 >> 1;
          uVar142 = puVar20[1];
          bVar107 = (byte)(uVar142 >> 0x38);
          uVar140 = *puVar20;
          bVar95 = (byte)(uVar140 >> 0x38);
          uVar145 = puVar20[3];
          bVar131 = (byte)(uVar145 >> 0x38);
          uVar144 = puVar20[2];
          bVar119 = (byte)(uVar144 >> 0x38);
          uVar151 = uVar140 >> 1;
          uVar154 = uVar142 >> 1;
          bVar83 = (byte)uVar140 | 1 | (byte)uVar151;
          bVar84 = (byte)(uVar140 >> 8) | (byte)(uVar151 >> 8);
          bVar85 = (byte)(uVar140 >> 0x10) | (byte)(uVar151 >> 0x10);
          bVar88 = (byte)(uVar140 >> 0x18) | (byte)(uVar151 >> 0x18);
          bVar89 = (byte)(uVar140 >> 0x20) | (byte)(uVar151 >> 0x20);
          bVar91 = (byte)(uVar140 >> 0x28) | (byte)(uVar151 >> 0x28);
          bVar93 = (byte)(uVar140 >> 0x30) | (byte)(uVar151 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 1;
          bVar97 = (byte)uVar142 | 1 | (byte)uVar154;
          bVar98 = (byte)(uVar142 >> 8) | (byte)(uVar154 >> 8);
          bVar99 = (byte)(uVar142 >> 0x10) | (byte)(uVar154 >> 0x10);
          bVar101 = (byte)(uVar142 >> 0x18) | (byte)(uVar154 >> 0x18);
          bVar102 = (byte)(uVar142 >> 0x20) | (byte)(uVar154 >> 0x20);
          bVar104 = (byte)(uVar142 >> 0x28) | (byte)(uVar154 >> 0x28);
          bVar106 = (byte)(uVar142 >> 0x30) | (byte)(uVar154 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 1;
          bVar36 = (byte)uVar135 | 1 | (byte)uVar133;
          bVar37 = (byte)(uVar135 >> 8) | (byte)(uVar133 >> 8);
          bVar38 = (byte)(uVar135 >> 0x10) | (byte)(uVar133 >> 0x10);
          bVar40 = (byte)(uVar135 >> 0x18) | (byte)(uVar133 >> 0x18);
          bVar41 = (byte)(uVar135 >> 0x20) | (byte)(uVar133 >> 0x20);
          bVar42 = (byte)(uVar135 >> 0x28) | (byte)(uVar133 >> 0x28);
          bVar43 = (byte)(uVar135 >> 0x30) | (byte)(uVar133 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 1;
          bVar47 = (byte)uVar139 | 1 | (byte)uVar137;
          bVar48 = (byte)(uVar139 >> 8) | (byte)(uVar137 >> 8);
          bVar49 = (byte)(uVar139 >> 0x10) | (byte)(uVar137 >> 0x10);
          bVar50 = (byte)(uVar139 >> 0x18) | (byte)(uVar137 >> 0x18);
          bVar51 = (byte)(uVar139 >> 0x20) | (byte)(uVar137 >> 0x20);
          bVar53 = (byte)(uVar139 >> 0x28) | (byte)(uVar137 >> 0x28);
          bVar55 = (byte)(uVar139 >> 0x30) | (byte)(uVar137 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 1;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 2
          ;
          uVar139 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 2
          ;
          bVar36 = bVar36 | (byte)uVar135;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 2;
          bVar47 = bVar47 | (byte)uVar139;
          bVar48 = bVar48 | (byte)(uVar139 >> 8);
          bVar49 = bVar49 | (byte)(uVar139 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar139 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar139 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar139 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar139 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 2;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 4
          ;
          uVar140 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 4
          ;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 4;
          bVar48 = bVar48 | (byte)(uVar140 >> 8);
          bVar49 = bVar49 | (byte)(uVar140 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar140 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar140 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar140 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar140 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 4;
          uVar139 = uVar141 >> 1;
          uVar142 = uVar143 >> 1;
          bVar57 = (byte)uVar141 | 1 | (byte)uVar139;
          bVar58 = (byte)(uVar141 >> 8) | (byte)(uVar139 >> 8);
          bVar59 = (byte)(uVar141 >> 0x10) | (byte)(uVar139 >> 0x10);
          bVar62 = (byte)(uVar141 >> 0x18) | (byte)(uVar139 >> 0x18);
          bVar63 = (byte)(uVar141 >> 0x20) | (byte)(uVar139 >> 0x20);
          bVar65 = (byte)(uVar141 >> 0x28) | (byte)(uVar139 >> 0x28);
          bVar67 = (byte)(uVar141 >> 0x30) | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 1;
          bVar71 = (byte)uVar143 | 1 | (byte)uVar142;
          bVar72 = (byte)(uVar143 >> 8) | (byte)(uVar142 >> 8);
          bVar73 = (byte)(uVar143 >> 0x10) | (byte)(uVar142 >> 0x10);
          bVar75 = (byte)(uVar143 >> 0x18) | (byte)(uVar142 >> 0x18);
          bVar76 = (byte)(uVar143 >> 0x20) | (byte)(uVar142 >> 0x20);
          bVar78 = (byte)(uVar143 >> 0x28) | (byte)(uVar142 >> 0x28);
          bVar80 = (byte)(uVar143 >> 0x30) | (byte)(uVar142 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 1;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 2
          ;
          uVar141 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 2
          ;
          bVar57 = bVar57 | (byte)uVar139;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 2;
          bVar71 = bVar71 | (byte)uVar141;
          bVar72 = bVar72 | (byte)(uVar141 >> 8);
          bVar73 = bVar73 | (byte)(uVar141 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar141 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar141 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar141 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar141 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 2;
          bVar46 = bVar38 | bVar40;
          bVar40 = bVar40 | bVar41;
          bVar41 = bVar41 | bVar42;
          bVar42 = bVar42 | bVar43;
          bVar43 = bVar43 | bVar45;
          bVar96 = bVar49 | bVar50;
          bVar50 = bVar50 | bVar51;
          bVar51 = bVar51 | bVar53;
          bVar53 = bVar53 | bVar55;
          bVar55 = bVar55 | bVar56;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 4
          ;
          uVar142 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 4
          ;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 4;
          bVar72 = bVar72 | (byte)(uVar142 >> 8);
          bVar73 = bVar73 | (byte)(uVar142 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar142 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar142 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar142 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar142 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 4;
          bVar60 = bVar59 | bVar62;
          bVar62 = bVar62 | bVar63;
          bVar63 = bVar63 | bVar65;
          bVar65 = bVar65 | bVar67;
          bVar67 = bVar67 | bVar69;
          bVar74 = bVar73 | bVar75;
          bVar75 = bVar75 | bVar76;
          bVar76 = bVar76 | bVar78;
          bVar78 = bVar78 | bVar80;
          bVar80 = bVar80 | bVar81;
          bVar70 = bVar41 | bVar43;
          bVar82 = bVar42 | bVar45;
          bVar52 = bVar51 | bVar55;
          bVar54 = bVar53 | bVar56;
          bVar64 = bVar63 | bVar67;
          bVar66 = bVar65 | bVar69;
          bVar77 = bVar76 | bVar80;
          bVar79 = bVar78 | bVar81;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 2
          ;
          uVar143 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 2;
          bVar83 = bVar83 | (byte)uVar141;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 2;
          bVar97 = bVar97 | (byte)uVar143;
          bVar98 = bVar98 | (byte)(uVar143 >> 8);
          bVar99 = bVar99 | (byte)(uVar143 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar143 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar143 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar143 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar143 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 2;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 4
          ;
          uVar133 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 4;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 4;
          bVar98 = bVar98 | (byte)(uVar133 >> 8);
          bVar99 = bVar99 | (byte)(uVar133 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar133 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar133 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar133 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar133 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 4;
          bVar86 = bVar85 | bVar88;
          bVar88 = bVar88 | bVar89;
          bVar89 = bVar89 | bVar91;
          bVar91 = bVar91 | bVar93;
          bVar93 = bVar93 | bVar95;
          bVar100 = bVar99 | bVar101;
          bVar101 = bVar101 | bVar102;
          bVar102 = bVar102 | bVar104;
          bVar104 = bVar104 | bVar106;
          bVar106 = bVar106 | bVar107;
          bVar90 = bVar89 | bVar93;
          bVar92 = bVar91 | bVar95;
          bVar103 = bVar102 | bVar106;
          bVar105 = bVar104 | bVar107;
          uVar143 = uVar144 >> 1;
          uVar137 = uVar145 >> 1;
          bVar108 = (byte)uVar144 | 1 | (byte)uVar143;
          bVar109 = (byte)(uVar144 >> 8) | (byte)(uVar143 >> 8);
          bVar110 = (byte)(uVar144 >> 0x10) | (byte)(uVar143 >> 0x10);
          bVar112 = (byte)(uVar144 >> 0x18) | (byte)(uVar143 >> 0x18);
          bVar113 = (byte)(uVar144 >> 0x20) | (byte)(uVar143 >> 0x20);
          bVar115 = (byte)(uVar144 >> 0x28) | (byte)(uVar143 >> 0x28);
          bVar117 = (byte)(uVar144 >> 0x30) | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 1;
          bVar121 = (byte)uVar145 | 1 | (byte)uVar137;
          bVar122 = (byte)(uVar145 >> 8) | (byte)(uVar137 >> 8);
          bVar123 = (byte)(uVar145 >> 0x10) | (byte)(uVar137 >> 0x10);
          bVar125 = (byte)(uVar145 >> 0x18) | (byte)(uVar137 >> 0x18);
          bVar126 = (byte)(uVar145 >> 0x20) | (byte)(uVar137 >> 0x20);
          bVar128 = (byte)(uVar145 >> 0x28) | (byte)(uVar137 >> 0x28);
          bVar130 = (byte)(uVar145 >> 0x30) | (byte)(uVar137 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 1;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 2;
          uVar144 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 2;
          bVar108 = bVar108 | (byte)uVar143;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 2;
          bVar121 = bVar121 | (byte)uVar144;
          bVar122 = bVar122 | (byte)(uVar144 >> 8);
          bVar123 = bVar123 | (byte)(uVar144 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar144 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar144 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar144 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar144 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 2;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 4;
          uVar144 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 4;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 4;
          bVar122 = bVar122 | (byte)(uVar144 >> 8);
          bVar123 = bVar123 | (byte)(uVar144 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar144 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar144 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar144 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar144 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 4;
          bVar120 = bVar110 | bVar112;
          bVar112 = bVar112 | bVar113;
          bVar113 = bVar113 | bVar115;
          bVar115 = bVar115 | bVar117;
          bVar117 = bVar117 | bVar119;
          bVar124 = bVar123 | bVar125;
          bVar125 = bVar125 | bVar126;
          bVar126 = bVar126 | bVar128;
          bVar128 = bVar128 | bVar130;
          bVar130 = bVar130 | bVar131;
          bVar114 = bVar113 | bVar117;
          bVar116 = bVar115 | bVar119;
          bVar127 = bVar126 | bVar130;
          bVar129 = bVar128 | bVar131;
          lVar25 = lVar25 + ((ulong)(byte)(POPCOUNT(~(bVar36 | (byte)uVar135 | bVar37 | bVar46 |
                                                     bVar70)) +
                                           POPCOUNT(~(bVar37 | bVar38 | bVar40 | bVar82)) +
                                           POPCOUNT(~(bVar46 | bVar41 | bVar43)) +
                                           POPCOUNT(~(bVar40 | bVar42 | bVar45)) +
                                           POPCOUNT(~bVar70) + POPCOUNT(~bVar82) +
                                           POPCOUNT(~bVar43) + POPCOUNT(~bVar45) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar29 = lVar29 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar47 | (byte)uVar140
                                                                             | bVar48 | bVar96 |
                                                                            bVar52)) +
                                                                 POPCOUNT(~(bVar48 | bVar49 | bVar50
                                                                           | bVar54))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar96 | bVar51 | bVar55
                                                                           )) +
                                                                POPCOUNT(~(bVar50 | bVar53 | bVar56)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar52) + POPCOUNT(~bVar54) +
                                                  POPCOUNT(~bVar55) + POPCOUNT(~bVar56)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar32 = lVar32 + ((ulong)(byte)(POPCOUNT(~(bVar83 | (byte)uVar141 | bVar84 | bVar86 |
                                                     bVar90)) +
                                           POPCOUNT(~(bVar84 | bVar85 | bVar88 | bVar92)) +
                                           POPCOUNT(~(bVar86 | bVar89 | bVar93)) +
                                           POPCOUNT(~(bVar88 | bVar91 | bVar95)) +
                                           POPCOUNT(~bVar90) + POPCOUNT(~bVar92) +
                                           POPCOUNT(~bVar93) + POPCOUNT(~bVar95) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar33 = lVar33 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar97 | (byte)uVar133
                                                                             | bVar98 | bVar100 |
                                                                            bVar103)) +
                                                                 POPCOUNT(~(bVar98 | bVar99 |
                                                                            bVar101 | bVar105))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar100 | bVar102 |
                                                                           bVar106)) +
                                                                POPCOUNT(~(bVar101 | bVar104 |
                                                                          bVar107)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar103) + POPCOUNT(~bVar105) +
                                                  POPCOUNT(~bVar106) + POPCOUNT(~bVar107)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          lVar30 = lVar30 + ((ulong)(byte)(POPCOUNT(~(bVar57 | (byte)uVar139 | bVar58 | bVar60 |
                                                     bVar64)) +
                                           POPCOUNT(~(bVar58 | bVar59 | bVar62 | bVar66)) +
                                           POPCOUNT(~(bVar60 | bVar63 | bVar67)) +
                                           POPCOUNT(~(bVar62 | bVar65 | bVar69)) +
                                           POPCOUNT(~bVar64) + POPCOUNT(~bVar66) +
                                           POPCOUNT(~bVar67) + POPCOUNT(~bVar69) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar31 = lVar31 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar71 | (byte)uVar142
                                                                             | bVar72 | bVar74 |
                                                                            bVar77)) +
                                                                 POPCOUNT(~(bVar72 | bVar73 | bVar75
                                                                           | bVar79))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar74 | bVar76 | bVar80
                                                                           )) +
                                                                POPCOUNT(~(bVar75 | bVar78 | bVar81)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar77) + POPCOUNT(~bVar79) +
                                                  POPCOUNT(~bVar80) + POPCOUNT(~bVar81)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar34 = lVar34 + ((ulong)(byte)(POPCOUNT(~(bVar108 | (byte)uVar143 | bVar109 | bVar120 |
                                                     bVar114)) +
                                           POPCOUNT(~(bVar109 | bVar110 | bVar112 | bVar116)) +
                                           POPCOUNT(~(bVar120 | bVar113 | bVar117)) +
                                           POPCOUNT(~(bVar112 | bVar115 | bVar119)) +
                                           POPCOUNT(~bVar114) + POPCOUNT(~bVar116) +
                                           POPCOUNT(~bVar117) + POPCOUNT(~bVar119) ^ 0x3f) * 9 +
                             0x49 >> 6);
          lVar35 = lVar35 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar121 | (byte)uVar144
                                                                             | bVar122 | bVar124 |
                                                                            bVar127)) +
                                                                 POPCOUNT(~(bVar122 | bVar123 |
                                                                            bVar125 | bVar129))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar124 | bVar126 |
                                                                           bVar130)) +
                                                                POPCOUNT(~(bVar125 | bVar128 |
                                                                          bVar131)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar127) + POPCOUNT(~bVar129) +
                                                  POPCOUNT(~bVar130) + POPCOUNT(~bVar131)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          uVar18 = uVar18 - 8;
          puVar20 = puVar20 + 8;
        } while (uVar18 != 0);
        uVar18 = lVar34 + lVar32 + lVar30 + lVar25 + lVar35 + lVar33 + lVar31 + lVar29;
        if (uVar28 == uVar23) break;
      }
      lVar25 = uVar23 - uVar28;
      puVar20 = (ulong *)(lVar22 + uVar28 * 8);
      do {
        uVar18 = uVar18 + ((LZCOUNT(*puVar20 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        lVar25 = lVar25 + -1;
        puVar20 = puVar20 + 1;
      } while (lVar25 != 0);
      break;
    case 5:
      uVar17 = *(uint *)*param_1;
      uVar23 = (ulong)uVar17;
      if ((int)uVar17 < 1) goto switchD_00528a90_caseD_9;
      lVar22 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 4) {
        uVar28 = 0;
        uVar18 = 0;
      }
      else {
        uVar28 = uVar23 & 0xfffffffc;
        lVar25 = 0;
        lVar29 = 0;
        lVar30 = 0;
        lVar31 = 0;
        puVar26 = (uint *)(lVar22 + 8);
        uVar18 = uVar28;
        do {
          uVar17 = 10;
          if (-1 < (int)puVar26[-2]) {
            uVar17 = ((uint)LZCOUNT(puVar26[-2] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar1 = 10;
          if (-1 < (int)puVar26[-1]) {
            uVar1 = ((uint)LZCOUNT(puVar26[-1] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar2 = 10;
          if (-1 < (int)*puVar26) {
            uVar2 = ((uint)LZCOUNT(*puVar26 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar3 = 10;
          if (-1 < (int)puVar26[1]) {
            uVar3 = ((uint)LZCOUNT(puVar26[1] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          lVar25 = lVar25 + (ulong)uVar17;
          lVar29 = lVar29 + (ulong)uVar1;
          lVar30 = lVar30 + (ulong)uVar2;
          lVar31 = lVar31 + (ulong)uVar3;
          uVar18 = uVar18 - 4;
          puVar26 = puVar26 + 4;
        } while (uVar18 != 0);
        uVar18 = lVar31 + lVar30 + lVar29 + lVar25;
        if (uVar28 == uVar23) break;
      }
      puVar26 = (uint *)(lVar22 + uVar28 * 4);
      lVar22 = uVar23 - uVar28;
      do {
        while ((int)*puVar26 < 0) {
          uVar18 = uVar18 + 10;
          puVar26 = puVar26 + 1;
          lVar22 = lVar22 + -1;
          if (lVar22 == 0) goto LAB_00529c60;
        }
        uVar18 = (((uint)LZCOUNT(*puVar26 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + uVar18;
        puVar26 = puVar26 + 1;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      break;
    case 8:
      uVar18 = (ulong)*(uint *)*param_1;
      break;
    default:
switchD_00528a90_caseD_9:
      *(uint *)((long)param_1 + 0xc) = 0;
      return 0;
    case 0xd:
      uVar17 = *(uint *)*param_1;
      uVar23 = (ulong)uVar17;
      if ((int)uVar17 < 1) goto switchD_00528a90_caseD_9;
      lVar22 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 8) {
        uVar28 = 0;
        uVar18 = 0;
      }
      else {
        lVar25 = 0;
        lVar29 = 0;
        uVar28 = uVar23 & 0xfffffff8;
        lVar35 = 0;
        lVar34 = 0;
        lVar31 = 0;
        lVar30 = 0;
        lVar33 = 0;
        lVar32 = 0;
        puVar24 = (undefined8 *)(lVar22 + 0x10);
        uVar18 = uVar28;
        do {
          lVar25 = lVar25 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)puVar24[-2] | 1) ^ 0x1f) * 9 +
                                    0x49 >> 6);
          lVar29 = lVar29 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)((ulong)puVar24[-2] >> 0x20) |
                                                               1) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar30 = lVar30 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)puVar24[-1] | 1) ^ 0x1f) * 9 +
                                    0x49 >> 6);
          lVar31 = lVar31 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)((ulong)puVar24[-1] >> 0x20) |
                                                               1) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar32 = lVar32 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)*puVar24 | 1) ^ 0x1f) * 9 +
                                    0x49 >> 6);
          lVar33 = lVar33 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)((ulong)*puVar24 >> 0x20) | 1)
                                                ^ 0x1f) * 9 + 0x49 >> 6);
          lVar34 = lVar34 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)puVar24[1] | 1) ^ 0x1f) * 9 +
                                    0x49 >> 6);
          lVar35 = lVar35 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)((ulong)puVar24[1] >> 0x20) | 1
                                                              ) ^ 0x1f) * 9 + 0x49 >> 6);
          uVar18 = uVar18 - 8;
          puVar24 = puVar24 + 4;
        } while (uVar18 != 0);
        uVar18 = lVar34 + lVar32 + lVar30 + lVar25 + lVar35 + lVar33 + lVar31 + lVar29;
        if (uVar28 == uVar23) break;
      }
      lVar25 = uVar23 - uVar28;
      puVar26 = (uint *)(lVar22 + uVar28 * 4);
      do {
        uVar18 = uVar18 + (((uint)LZCOUNT(*puVar26 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        lVar25 = lVar25 + -1;
        puVar26 = puVar26 + 1;
      } while (lVar25 != 0);
      break;
    case 0xe:
      uVar17 = *(uint *)*param_1;
      uVar23 = (ulong)uVar17;
      if ((int)uVar17 < 1) goto switchD_00528a90_caseD_9;
      lVar22 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 4) {
        uVar28 = 0;
        uVar18 = 0;
      }
      else {
        uVar28 = uVar23 & 0xfffffffc;
        lVar25 = 0;
        lVar29 = 0;
        lVar30 = 0;
        lVar31 = 0;
        puVar26 = (uint *)(lVar22 + 8);
        uVar18 = uVar28;
        do {
          uVar17 = 10;
          if (-1 < (int)puVar26[-2]) {
            uVar17 = ((uint)LZCOUNT(puVar26[-2] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar1 = 10;
          if (-1 < (int)puVar26[-1]) {
            uVar1 = ((uint)LZCOUNT(puVar26[-1] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar2 = 10;
          if (-1 < (int)*puVar26) {
            uVar2 = ((uint)LZCOUNT(*puVar26 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar3 = 10;
          if (-1 < (int)puVar26[1]) {
            uVar3 = ((uint)LZCOUNT(puVar26[1] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          lVar25 = lVar25 + (ulong)uVar17;
          lVar29 = lVar29 + (ulong)uVar1;
          lVar30 = lVar30 + (ulong)uVar2;
          lVar31 = lVar31 + (ulong)uVar3;
          uVar18 = uVar18 - 4;
          puVar26 = puVar26 + 4;
        } while (uVar18 != 0);
        uVar18 = lVar31 + lVar30 + lVar29 + lVar25;
        if (uVar28 == uVar23) break;
      }
      puVar26 = (uint *)(lVar22 + uVar28 * 4);
      lVar22 = uVar23 - uVar28;
      do {
        while ((int)*puVar26 < 0) {
          uVar18 = uVar18 + 10;
          puVar26 = puVar26 + 1;
          lVar22 = lVar22 + -1;
          if (lVar22 == 0) goto LAB_00529c60;
        }
        uVar18 = (((uint)LZCOUNT(*puVar26 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + uVar18;
        puVar26 = puVar26 + 1;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      break;
    case 0x11:
      uVar17 = *(uint *)*param_1;
      uVar23 = (ulong)uVar17;
      if ((int)uVar17 < 1) goto switchD_00528a90_caseD_9;
      lVar22 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 8) {
        uVar28 = 0;
        uVar18 = 0;
      }
      else {
        lVar25 = 0;
        lVar29 = 0;
        uVar28 = uVar23 & 0xfffffff8;
        lVar35 = 0;
        lVar34 = 0;
        lVar31 = 0;
        lVar30 = 0;
        lVar33 = 0;
        lVar32 = 0;
        puVar24 = (undefined8 *)(lVar22 + 0x10);
        uVar18 = uVar28;
        do {
          uVar5 = puVar24[-2];
          cVar39 = (char)((ulong)uVar5 >> 0x18);
          cVar44 = (char)((ulong)uVar5 >> 0x38);
          uVar10 = puVar24[-1];
          cVar61 = (char)((ulong)uVar10 >> 0x18);
          cVar68 = (char)((ulong)uVar10 >> 0x38);
          iVar146 = (int)uVar10 << 1;
          iVar148 = (int)((ulong)uVar10 >> 0x20) << 1;
          uVar10 = *puVar24;
          cVar87 = (char)((ulong)uVar10 >> 0x18);
          cVar94 = (char)((ulong)uVar10 >> 0x38);
          uVar15 = puVar24[1];
          cVar111 = (char)((ulong)uVar15 >> 0x18);
          cVar118 = (char)((ulong)uVar15 >> 0x38);
          iVar9 = (int)cVar61 >> 7;
          iVar11 = (int)cVar68 >> 7;
          iVar150 = (int)uVar10 << 1;
          iVar153 = (int)((ulong)uVar10 >> 0x20) << 1;
          iVar12 = (int)cVar87 >> 7;
          iVar13 = (int)cVar94 >> 7;
          iVar132 = (int)uVar5 << 1;
          iVar136 = (int)((ulong)uVar5 >> 0x20) << 1;
          iVar4 = (int)cVar39 >> 7;
          iVar7 = (int)cVar44 >> 7;
          iVar156 = (int)uVar15 << 1;
          iVar158 = (int)((ulong)uVar15 >> 0x20) << 1;
          iVar14 = (int)cVar111 >> 7;
          iVar16 = (int)cVar118 >> 7;
          lVar25 = lVar25 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar132 >> 0x18
                                                                              ) ^ cVar39 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar132 >> 0x10) ^ (byte)((uint)iVar4 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar132 >> 8) ^
                                                           (byte)((uint)iVar4 >> 8),
                                                           (byte)iVar132 ^ (byte)iVar4))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar29 = lVar29 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar136 >> 0x18
                                                                              ) ^ cVar44 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar136 >> 0x10) ^ (byte)((uint)iVar7 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar136 >> 8) ^
                                                           (byte)((uint)iVar7 >> 8),
                                                           (byte)iVar136 ^ (byte)iVar7))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar30 = lVar30 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar146 >> 0x18
                                                                              ) ^ cVar61 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar146 >> 0x10) ^ (byte)((uint)iVar9 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar146 >> 8) ^
                                                           (byte)((uint)iVar9 >> 8),
                                                           (byte)iVar146 ^ (byte)iVar9))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar31 = lVar31 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar148 >> 0x18
                                                                              ) ^ cVar68 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar148 >> 0x10) ^ (byte)((uint)iVar11 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar148 >> 8) ^
                                                           (byte)((uint)iVar11 >> 8),
                                                           (byte)iVar148 ^ (byte)iVar11))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar32 = lVar32 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar150 >> 0x18
                                                                              ) ^ cVar87 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar150 >> 0x10) ^ (byte)((uint)iVar12 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar150 >> 8) ^
                                                           (byte)((uint)iVar12 >> 8),
                                                           (byte)iVar150 ^ (byte)iVar12))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar33 = lVar33 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar153 >> 0x18
                                                                              ) ^ cVar94 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar153 >> 0x10) ^ (byte)((uint)iVar13 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar153 >> 8) ^
                                                           (byte)((uint)iVar13 >> 8),
                                                           (byte)iVar153 ^ (byte)iVar13))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar34 = lVar34 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar156 >> 0x18
                                                                              ) ^ cVar111 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar156 >> 0x10) ^ (byte)((uint)iVar14 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar156 >> 8) ^
                                                           (byte)((uint)iVar14 >> 8),
                                                           (byte)iVar156 ^ (byte)iVar14))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar35 = lVar35 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar158 >> 0x18
                                                                              ) ^ cVar118 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar158 >> 0x10) ^ (byte)((uint)iVar16 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar158 >> 8) ^
                                                           (byte)((uint)iVar16 >> 8),
                                                           (byte)iVar158 ^ (byte)iVar16))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          uVar18 = uVar18 - 8;
          puVar24 = puVar24 + 4;
        } while (uVar18 != 0);
        uVar18 = lVar34 + lVar32 + lVar30 + lVar25 + lVar35 + lVar33 + lVar31 + lVar29;
        if (uVar28 == uVar23) break;
      }
      lVar25 = uVar23 - uVar28;
      piVar27 = (int *)(lVar22 + uVar28 * 4);
      do {
        uVar18 = uVar18 + (((uint)LZCOUNT(*piVar27 << 1 ^ *piVar27 >> 0x1f | 1) ^ 0x1f) * 9 + 0x49
                          >> 6);
        lVar25 = lVar25 + -1;
        piVar27 = piVar27 + 1;
      } while (lVar25 != 0);
      break;
    case 0x12:
      uVar17 = *(uint *)*param_1;
      uVar23 = (ulong)uVar17;
      if ((int)uVar17 < 1) goto switchD_00528a90_caseD_9;
      lVar22 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 8) {
        uVar28 = 0;
        uVar18 = 0;
      }
      else {
        lVar25 = 0;
        lVar29 = 0;
        lVar31 = 0;
        lVar30 = 0;
        lVar33 = 0;
        lVar32 = 0;
        lVar35 = 0;
        lVar34 = 0;
        uVar28 = uVar23 & 0xfffffff8;
        plVar21 = (long *)(lVar22 + 0x20);
        uVar18 = uVar28;
        do {
          cVar44 = (char)((ulong)plVar21[-3] >> 0x38);
          cVar39 = (char)((ulong)plVar21[-4] >> 0x38);
          cVar68 = (char)((ulong)plVar21[-1] >> 0x38);
          cVar61 = (char)((ulong)plVar21[-2] >> 0x38);
          lVar147 = plVar21[-2] << 1;
          lVar149 = plVar21[-1] << 1;
          lVar134 = plVar21[-4] << 1;
          lVar138 = plVar21[-3] << 1;
          lVar6 = (long)cVar39 >> 7;
          lVar8 = (long)cVar44 >> 7;
          cVar94 = (char)((ulong)plVar21[1] >> 0x38);
          cVar87 = (char)((ulong)*plVar21 >> 0x38);
          cVar118 = (char)((ulong)plVar21[3] >> 0x38);
          cVar111 = (char)((ulong)plVar21[2] >> 0x38);
          lVar152 = *plVar21 << 1;
          lVar155 = plVar21[1] << 1;
          lVar157 = (long)cVar87 >> 7;
          lVar159 = (long)cVar94 >> 7;
          bVar82 = (byte)lVar152 ^ (byte)lVar157;
          bVar84 = (byte)((ulong)lVar152 >> 8) ^ (byte)((ulong)lVar157 >> 8);
          bVar85 = (byte)((ulong)lVar152 >> 0x10) ^ (byte)((ulong)lVar157 >> 0x10);
          bVar88 = (byte)((ulong)lVar152 >> 0x18) ^ (byte)((ulong)lVar157 >> 0x18);
          bVar89 = (byte)((ulong)lVar152 >> 0x20) ^ (byte)((ulong)lVar157 >> 0x20);
          bVar91 = (byte)((ulong)lVar152 >> 0x28) ^ (byte)((ulong)lVar157 >> 0x28);
          bVar93 = (byte)((ulong)lVar152 >> 0x30) ^ (byte)((ulong)lVar157 >> 0x30);
          bVar95 = (byte)((ulong)lVar152 >> 0x38) ^ cVar87 >> 7;
          bVar96 = (byte)lVar155 ^ (byte)lVar159;
          bVar98 = (byte)((ulong)lVar155 >> 8) ^ (byte)((ulong)lVar159 >> 8);
          bVar99 = (byte)((ulong)lVar155 >> 0x10) ^ (byte)((ulong)lVar159 >> 0x10);
          bVar101 = (byte)((ulong)lVar155 >> 0x18) ^ (byte)((ulong)lVar159 >> 0x18);
          bVar102 = (byte)((ulong)lVar155 >> 0x20) ^ (byte)((ulong)lVar159 >> 0x20);
          bVar104 = (byte)((ulong)lVar155 >> 0x28) ^ (byte)((ulong)lVar159 >> 0x28);
          bVar106 = (byte)((ulong)lVar155 >> 0x30) ^ (byte)((ulong)lVar159 >> 0x30);
          bVar107 = (byte)((ulong)lVar155 >> 0x38) ^ cVar94 >> 7;
          bVar36 = (byte)lVar134 ^ (byte)lVar6;
          bVar37 = (byte)((ulong)lVar134 >> 8) ^ (byte)((ulong)lVar6 >> 8);
          bVar38 = (byte)((ulong)lVar134 >> 0x10) ^ (byte)((ulong)lVar6 >> 0x10);
          bVar40 = (byte)((ulong)lVar134 >> 0x18) ^ (byte)((ulong)lVar6 >> 0x18);
          bVar41 = (byte)((ulong)lVar134 >> 0x20) ^ (byte)((ulong)lVar6 >> 0x20);
          bVar42 = (byte)((ulong)lVar134 >> 0x28) ^ (byte)((ulong)lVar6 >> 0x28);
          bVar43 = (byte)((ulong)lVar134 >> 0x30) ^ (byte)((ulong)lVar6 >> 0x30);
          bVar45 = (byte)((ulong)lVar134 >> 0x38) ^ cVar39 >> 7;
          bVar46 = (byte)lVar138 ^ (byte)lVar8;
          bVar48 = (byte)((ulong)lVar138 >> 8) ^ (byte)((ulong)lVar8 >> 8);
          bVar49 = (byte)((ulong)lVar138 >> 0x10) ^ (byte)((ulong)lVar8 >> 0x10);
          bVar50 = (byte)((ulong)lVar138 >> 0x18) ^ (byte)((ulong)lVar8 >> 0x18);
          bVar51 = (byte)((ulong)lVar138 >> 0x20) ^ (byte)((ulong)lVar8 >> 0x20);
          bVar53 = (byte)((ulong)lVar138 >> 0x28) ^ (byte)((ulong)lVar8 >> 0x28);
          bVar55 = (byte)((ulong)lVar138 >> 0x30) ^ (byte)((ulong)lVar8 >> 0x30);
          bVar56 = (byte)((ulong)lVar138 >> 0x38) ^ cVar44 >> 7;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 1
          ;
          uVar139 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar46))))))) >> 1
          ;
          bVar36 = bVar36 | 1 | (byte)uVar135;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 1;
          bVar47 = bVar46 | 1 | (byte)uVar139;
          bVar48 = bVar48 | (byte)(uVar139 >> 8);
          bVar49 = bVar49 | (byte)(uVar139 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar139 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar139 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar139 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar139 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 1;
          lVar6 = (long)cVar61 >> 7;
          lVar8 = (long)cVar68 >> 7;
          bVar46 = (byte)lVar147 ^ (byte)lVar6;
          bVar58 = (byte)((ulong)lVar147 >> 8) ^ (byte)((ulong)lVar6 >> 8);
          bVar59 = (byte)((ulong)lVar147 >> 0x10) ^ (byte)((ulong)lVar6 >> 0x10);
          bVar62 = (byte)((ulong)lVar147 >> 0x18) ^ (byte)((ulong)lVar6 >> 0x18);
          bVar63 = (byte)((ulong)lVar147 >> 0x20) ^ (byte)((ulong)lVar6 >> 0x20);
          bVar65 = (byte)((ulong)lVar147 >> 0x28) ^ (byte)((ulong)lVar6 >> 0x28);
          bVar67 = (byte)((ulong)lVar147 >> 0x30) ^ (byte)((ulong)lVar6 >> 0x30);
          bVar69 = (byte)((ulong)lVar147 >> 0x38) ^ cVar61 >> 7;
          bVar70 = (byte)lVar149 ^ (byte)lVar8;
          bVar72 = (byte)((ulong)lVar149 >> 8) ^ (byte)((ulong)lVar8 >> 8);
          bVar73 = (byte)((ulong)lVar149 >> 0x10) ^ (byte)((ulong)lVar8 >> 0x10);
          bVar75 = (byte)((ulong)lVar149 >> 0x18) ^ (byte)((ulong)lVar8 >> 0x18);
          bVar76 = (byte)((ulong)lVar149 >> 0x20) ^ (byte)((ulong)lVar8 >> 0x20);
          bVar78 = (byte)((ulong)lVar149 >> 0x28) ^ (byte)((ulong)lVar8 >> 0x28);
          bVar80 = (byte)((ulong)lVar149 >> 0x30) ^ (byte)((ulong)lVar8 >> 0x30);
          bVar81 = (byte)((ulong)lVar149 >> 0x38) ^ cVar68 >> 7;
          uVar135 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar82))))))) >> 1
          ;
          uVar139 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar96))))
                                                  ))) >> 1;
          bVar83 = bVar82 | 1 | (byte)uVar135;
          bVar84 = bVar84 | (byte)(uVar135 >> 8);
          bVar85 = bVar85 | (byte)(uVar135 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar135 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar135 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar135 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar135 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 1;
          bVar97 = bVar96 | 1 | (byte)uVar139;
          bVar98 = bVar98 | (byte)(uVar139 >> 8);
          bVar99 = bVar99 | (byte)(uVar139 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar139 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar139 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar139 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar139 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 1;
          lVar157 = plVar21[2] << 1;
          lVar159 = plVar21[3] << 1;
          lVar6 = (long)cVar111 >> 7;
          lVar8 = (long)cVar118 >> 7;
          bVar108 = (byte)lVar157 ^ (byte)lVar6;
          bVar109 = (byte)((ulong)lVar157 >> 8) ^ (byte)((ulong)lVar6 >> 8);
          bVar110 = (byte)((ulong)lVar157 >> 0x10) ^ (byte)((ulong)lVar6 >> 0x10);
          bVar112 = (byte)((ulong)lVar157 >> 0x18) ^ (byte)((ulong)lVar6 >> 0x18);
          bVar113 = (byte)((ulong)lVar157 >> 0x20) ^ (byte)((ulong)lVar6 >> 0x20);
          bVar115 = (byte)((ulong)lVar157 >> 0x28) ^ (byte)((ulong)lVar6 >> 0x28);
          bVar117 = (byte)((ulong)lVar157 >> 0x30) ^ (byte)((ulong)lVar6 >> 0x30);
          bVar119 = (byte)((ulong)lVar157 >> 0x38) ^ cVar111 >> 7;
          bVar120 = (byte)lVar159 ^ (byte)lVar8;
          bVar122 = (byte)((ulong)lVar159 >> 8) ^ (byte)((ulong)lVar8 >> 8);
          bVar123 = (byte)((ulong)lVar159 >> 0x10) ^ (byte)((ulong)lVar8 >> 0x10);
          bVar125 = (byte)((ulong)lVar159 >> 0x18) ^ (byte)((ulong)lVar8 >> 0x18);
          bVar126 = (byte)((ulong)lVar159 >> 0x20) ^ (byte)((ulong)lVar8 >> 0x20);
          bVar128 = (byte)((ulong)lVar159 >> 0x28) ^ (byte)((ulong)lVar8 >> 0x28);
          bVar130 = (byte)((ulong)lVar159 >> 0x30) ^ (byte)((ulong)lVar8 >> 0x30);
          bVar131 = (byte)((ulong)lVar159 >> 0x38) ^ cVar118 >> 7;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 2
          ;
          uVar139 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 2
          ;
          bVar36 = bVar36 | (byte)uVar135;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 2;
          bVar47 = bVar47 | (byte)uVar139;
          bVar48 = bVar48 | (byte)(uVar139 >> 8);
          bVar49 = bVar49 | (byte)(uVar139 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar139 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar139 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar139 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar139 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 2;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 4
          ;
          uVar140 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 4
          ;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 4;
          bVar48 = bVar48 | (byte)(uVar140 >> 8);
          bVar49 = bVar49 | (byte)(uVar140 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar140 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar140 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar140 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar140 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 4;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar46))))))) >> 1
          ;
          uVar141 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar70))))))) >> 1
          ;
          bVar57 = bVar46 | 1 | (byte)uVar139;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 1;
          bVar71 = bVar70 | 1 | (byte)uVar141;
          bVar72 = bVar72 | (byte)(uVar141 >> 8);
          bVar73 = bVar73 | (byte)(uVar141 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar141 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar141 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar141 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar141 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 1;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 2
          ;
          uVar141 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 2
          ;
          bVar57 = bVar57 | (byte)uVar139;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 2;
          bVar71 = bVar71 | (byte)uVar141;
          bVar72 = bVar72 | (byte)(uVar141 >> 8);
          bVar73 = bVar73 | (byte)(uVar141 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar141 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar141 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar141 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar141 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 2;
          bVar46 = bVar38 | bVar40;
          bVar40 = bVar40 | bVar41;
          bVar41 = bVar41 | bVar42;
          bVar42 = bVar42 | bVar43;
          bVar43 = bVar43 | bVar45;
          bVar96 = bVar49 | bVar50;
          bVar50 = bVar50 | bVar51;
          bVar51 = bVar51 | bVar53;
          bVar53 = bVar53 | bVar55;
          bVar55 = bVar55 | bVar56;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 4
          ;
          uVar142 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 4
          ;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 4;
          bVar72 = bVar72 | (byte)(uVar142 >> 8);
          bVar73 = bVar73 | (byte)(uVar142 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar142 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar142 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar142 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar142 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 4;
          bVar60 = bVar59 | bVar62;
          bVar62 = bVar62 | bVar63;
          bVar63 = bVar63 | bVar65;
          bVar65 = bVar65 | bVar67;
          bVar67 = bVar67 | bVar69;
          bVar74 = bVar73 | bVar75;
          bVar75 = bVar75 | bVar76;
          bVar76 = bVar76 | bVar78;
          bVar78 = bVar78 | bVar80;
          bVar80 = bVar80 | bVar81;
          bVar70 = bVar41 | bVar43;
          bVar82 = bVar42 | bVar45;
          bVar52 = bVar51 | bVar55;
          bVar54 = bVar53 | bVar56;
          bVar64 = bVar63 | bVar67;
          bVar66 = bVar65 | bVar69;
          bVar77 = bVar76 | bVar80;
          bVar79 = bVar78 | bVar81;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 2
          ;
          uVar143 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 2;
          bVar83 = bVar83 | (byte)uVar141;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 2;
          bVar97 = bVar97 | (byte)uVar143;
          bVar98 = bVar98 | (byte)(uVar143 >> 8);
          bVar99 = bVar99 | (byte)(uVar143 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar143 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar143 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar143 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar143 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 2;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 4
          ;
          uVar144 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 4;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 4;
          bVar98 = bVar98 | (byte)(uVar144 >> 8);
          bVar99 = bVar99 | (byte)(uVar144 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar144 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar144 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar144 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar144 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 4;
          bVar86 = bVar85 | bVar88;
          bVar88 = bVar88 | bVar89;
          bVar89 = bVar89 | bVar91;
          bVar91 = bVar91 | bVar93;
          bVar93 = bVar93 | bVar95;
          bVar100 = bVar99 | bVar101;
          bVar101 = bVar101 | bVar102;
          bVar102 = bVar102 | bVar104;
          bVar104 = bVar104 | bVar106;
          bVar106 = bVar106 | bVar107;
          bVar90 = bVar89 | bVar93;
          bVar92 = bVar91 | bVar95;
          bVar103 = bVar102 | bVar106;
          bVar105 = bVar104 | bVar107;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 1;
          uVar145 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar120)
                                                                  )))))) >> 1;
          bVar108 = bVar108 | 1 | (byte)uVar143;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 1;
          bVar121 = bVar120 | 1 | (byte)uVar145;
          bVar122 = bVar122 | (byte)(uVar145 >> 8);
          bVar123 = bVar123 | (byte)(uVar145 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar145 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar145 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar145 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar145 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 1;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 2;
          uVar145 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 2;
          bVar108 = bVar108 | (byte)uVar143;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 2;
          bVar121 = bVar121 | (byte)uVar145;
          bVar122 = bVar122 | (byte)(uVar145 >> 8);
          bVar123 = bVar123 | (byte)(uVar145 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar145 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar145 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar145 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar145 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 2;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 4;
          uVar145 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 4;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 4;
          bVar122 = bVar122 | (byte)(uVar145 >> 8);
          bVar123 = bVar123 | (byte)(uVar145 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar145 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar145 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar145 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar145 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 4;
          bVar120 = bVar110 | bVar112;
          bVar112 = bVar112 | bVar113;
          bVar113 = bVar113 | bVar115;
          bVar115 = bVar115 | bVar117;
          bVar117 = bVar117 | bVar119;
          bVar124 = bVar123 | bVar125;
          bVar125 = bVar125 | bVar126;
          bVar126 = bVar126 | bVar128;
          bVar128 = bVar128 | bVar130;
          bVar130 = bVar130 | bVar131;
          bVar114 = bVar113 | bVar117;
          bVar116 = bVar115 | bVar119;
          bVar127 = bVar126 | bVar130;
          bVar129 = bVar128 | bVar131;
          lVar32 = lVar32 + ((ulong)(byte)(POPCOUNT(~(bVar83 | (byte)uVar141 | bVar84 | bVar86 |
                                                     bVar90)) +
                                           POPCOUNT(~(bVar84 | bVar85 | bVar88 | bVar92)) +
                                           POPCOUNT(~(bVar86 | bVar89 | bVar93)) +
                                           POPCOUNT(~(bVar88 | bVar91 | bVar95)) +
                                           POPCOUNT(~bVar90) + POPCOUNT(~bVar92) +
                                           POPCOUNT(~bVar93) + POPCOUNT(~bVar95) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar33 = lVar33 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar97 | (byte)uVar144
                                                                             | bVar98 | bVar100 |
                                                                            bVar103)) +
                                                                 POPCOUNT(~(bVar98 | bVar99 |
                                                                            bVar101 | bVar105))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar100 | bVar102 |
                                                                           bVar106)) +
                                                                POPCOUNT(~(bVar101 | bVar104 |
                                                                          bVar107)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar103) + POPCOUNT(~bVar105) +
                                                  POPCOUNT(~bVar106) + POPCOUNT(~bVar107)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          lVar25 = lVar25 + ((ulong)(byte)(POPCOUNT(~(bVar36 | (byte)uVar135 | bVar37 | bVar46 |
                                                     bVar70)) +
                                           POPCOUNT(~(bVar37 | bVar38 | bVar40 | bVar82)) +
                                           POPCOUNT(~(bVar46 | bVar41 | bVar43)) +
                                           POPCOUNT(~(bVar40 | bVar42 | bVar45)) +
                                           POPCOUNT(~bVar70) + POPCOUNT(~bVar82) +
                                           POPCOUNT(~bVar43) + POPCOUNT(~bVar45) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar29 = lVar29 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar47 | (byte)uVar140
                                                                             | bVar48 | bVar96 |
                                                                            bVar52)) +
                                                                 POPCOUNT(~(bVar48 | bVar49 | bVar50
                                                                           | bVar54))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar96 | bVar51 | bVar55
                                                                           )) +
                                                                POPCOUNT(~(bVar50 | bVar53 | bVar56)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar52) + POPCOUNT(~bVar54) +
                                                  POPCOUNT(~bVar55) + POPCOUNT(~bVar56)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar30 = lVar30 + ((ulong)(byte)(POPCOUNT(~(bVar57 | (byte)uVar139 | bVar58 | bVar60 |
                                                     bVar64)) +
                                           POPCOUNT(~(bVar58 | bVar59 | bVar62 | bVar66)) +
                                           POPCOUNT(~(bVar60 | bVar63 | bVar67)) +
                                           POPCOUNT(~(bVar62 | bVar65 | bVar69)) +
                                           POPCOUNT(~bVar64) + POPCOUNT(~bVar66) +
                                           POPCOUNT(~bVar67) + POPCOUNT(~bVar69) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar31 = lVar31 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar71 | (byte)uVar142
                                                                             | bVar72 | bVar74 |
                                                                            bVar77)) +
                                                                 POPCOUNT(~(bVar72 | bVar73 | bVar75
                                                                           | bVar79))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar74 | bVar76 | bVar80
                                                                           )) +
                                                                POPCOUNT(~(bVar75 | bVar78 | bVar81)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar77) + POPCOUNT(~bVar79) +
                                                  POPCOUNT(~bVar80) + POPCOUNT(~bVar81)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar34 = lVar34 + ((ulong)(byte)(POPCOUNT(~(bVar108 | (byte)uVar143 | bVar109 | bVar120 |
                                                     bVar114)) +
                                           POPCOUNT(~(bVar109 | bVar110 | bVar112 | bVar116)) +
                                           POPCOUNT(~(bVar120 | bVar113 | bVar117)) +
                                           POPCOUNT(~(bVar112 | bVar115 | bVar119)) +
                                           POPCOUNT(~bVar114) + POPCOUNT(~bVar116) +
                                           POPCOUNT(~bVar117) + POPCOUNT(~bVar119) ^ 0x3f) * 9 +
                             0x49 >> 6);
          lVar35 = lVar35 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar121 | (byte)uVar145
                                                                             | bVar122 | bVar124 |
                                                                            bVar127)) +
                                                                 POPCOUNT(~(bVar122 | bVar123 |
                                                                            bVar125 | bVar129))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar124 | bVar126 |
                                                                           bVar130)) +
                                                                POPCOUNT(~(bVar125 | bVar128 |
                                                                          bVar131)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar127) + POPCOUNT(~bVar129) +
                                                  POPCOUNT(~bVar130) + POPCOUNT(~bVar131)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          uVar18 = uVar18 - 8;
          plVar21 = plVar21 + 8;
        } while (uVar18 != 0);
        uVar18 = lVar34 + lVar32 + lVar30 + lVar25 + lVar35 + lVar33 + lVar31 + lVar29;
        if (uVar28 == uVar23) break;
      }
      lVar25 = uVar23 - uVar28;
      plVar21 = (long *)(lVar22 + uVar28 * 8);
      do {
        uVar18 = uVar18 + ((LZCOUNT(*plVar21 << 1 ^ *plVar21 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        lVar25 = lVar25 + -1;
        plVar21 = plVar21 + 1;
      } while (lVar25 != 0);
    }
LAB_00529c60:
    *(uint *)((long)param_1 + 0xc) = (uint)uVar18;
    lVar22 = 0;
    if (uVar18 != 0) {
      lVar22 = uVar18 + (((uint)LZCOUNT(param_2 << 3 | 3) ^ 0x1f) * 9 + 0x49 >> 6) +
               (ulong)(((uint)LZCOUNT((uint)uVar18 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    }
    return lVar22;
  }
  uVar17 = (uint)(byte)param_1[1];
  if (0x11 < uVar17 - 1) {
    return 0;
  }
  lVar22 = (ulong)(((uint)LZCOUNT(param_2 << 3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) << (uVar17 == 10);
  switch(uVar17) {
  default:
    lVar22 = lVar22 + 8;
    goto LAB_00528dfc;
  case 2:
  case 7:
  case 0xf:
    lVar22 = lVar22 + 4;
    goto LAB_00528dfc;
  case 3:
    uVar17 = *(uint *)*param_1;
    uVar23 = (ulong)uVar17;
    lVar22 = lVar22 * uVar23;
    if (0 < (int)uVar17) {
      lVar25 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 8) {
        uVar28 = 0;
      }
      else {
        lVar29 = 0;
        lVar30 = 0;
        lVar31 = 0;
        lVar33 = 0;
        lVar32 = 0;
        lVar35 = 0;
        lVar34 = 0;
        uVar28 = uVar23 & 0xfffffff8;
        puVar20 = (ulong *)(lVar25 + 0x20);
        uVar18 = uVar28;
        do {
          uVar139 = puVar20[-3];
          bVar56 = (byte)(uVar139 >> 0x38);
          uVar135 = puVar20[-4];
          bVar45 = (byte)(uVar135 >> 0x38);
          uVar143 = puVar20[-1];
          bVar81 = (byte)(uVar143 >> 0x38);
          uVar141 = puVar20[-2];
          bVar69 = (byte)(uVar141 >> 0x38);
          uVar133 = uVar135 >> 1;
          uVar137 = uVar139 >> 1;
          uVar142 = puVar20[1];
          bVar107 = (byte)(uVar142 >> 0x38);
          uVar140 = *puVar20;
          bVar95 = (byte)(uVar140 >> 0x38);
          uVar145 = puVar20[3];
          bVar131 = (byte)(uVar145 >> 0x38);
          uVar144 = puVar20[2];
          bVar119 = (byte)(uVar144 >> 0x38);
          uVar151 = uVar140 >> 1;
          uVar154 = uVar142 >> 1;
          bVar83 = (byte)uVar140 | 1 | (byte)uVar151;
          bVar84 = (byte)(uVar140 >> 8) | (byte)(uVar151 >> 8);
          bVar85 = (byte)(uVar140 >> 0x10) | (byte)(uVar151 >> 0x10);
          bVar88 = (byte)(uVar140 >> 0x18) | (byte)(uVar151 >> 0x18);
          bVar89 = (byte)(uVar140 >> 0x20) | (byte)(uVar151 >> 0x20);
          bVar91 = (byte)(uVar140 >> 0x28) | (byte)(uVar151 >> 0x28);
          bVar93 = (byte)(uVar140 >> 0x30) | (byte)(uVar151 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 1;
          bVar97 = (byte)uVar142 | 1 | (byte)uVar154;
          bVar98 = (byte)(uVar142 >> 8) | (byte)(uVar154 >> 8);
          bVar99 = (byte)(uVar142 >> 0x10) | (byte)(uVar154 >> 0x10);
          bVar101 = (byte)(uVar142 >> 0x18) | (byte)(uVar154 >> 0x18);
          bVar102 = (byte)(uVar142 >> 0x20) | (byte)(uVar154 >> 0x20);
          bVar104 = (byte)(uVar142 >> 0x28) | (byte)(uVar154 >> 0x28);
          bVar106 = (byte)(uVar142 >> 0x30) | (byte)(uVar154 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 1;
          bVar36 = (byte)uVar135 | 1 | (byte)uVar133;
          bVar37 = (byte)(uVar135 >> 8) | (byte)(uVar133 >> 8);
          bVar38 = (byte)(uVar135 >> 0x10) | (byte)(uVar133 >> 0x10);
          bVar40 = (byte)(uVar135 >> 0x18) | (byte)(uVar133 >> 0x18);
          bVar41 = (byte)(uVar135 >> 0x20) | (byte)(uVar133 >> 0x20);
          bVar42 = (byte)(uVar135 >> 0x28) | (byte)(uVar133 >> 0x28);
          bVar43 = (byte)(uVar135 >> 0x30) | (byte)(uVar133 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 1;
          bVar47 = (byte)uVar139 | 1 | (byte)uVar137;
          bVar48 = (byte)(uVar139 >> 8) | (byte)(uVar137 >> 8);
          bVar49 = (byte)(uVar139 >> 0x10) | (byte)(uVar137 >> 0x10);
          bVar50 = (byte)(uVar139 >> 0x18) | (byte)(uVar137 >> 0x18);
          bVar51 = (byte)(uVar139 >> 0x20) | (byte)(uVar137 >> 0x20);
          bVar53 = (byte)(uVar139 >> 0x28) | (byte)(uVar137 >> 0x28);
          bVar55 = (byte)(uVar139 >> 0x30) | (byte)(uVar137 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 1;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 2
          ;
          uVar139 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 2
          ;
          bVar36 = bVar36 | (byte)uVar135;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 2;
          bVar47 = bVar47 | (byte)uVar139;
          bVar48 = bVar48 | (byte)(uVar139 >> 8);
          bVar49 = bVar49 | (byte)(uVar139 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar139 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar139 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar139 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar139 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 2;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 4
          ;
          uVar140 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 4
          ;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 4;
          bVar48 = bVar48 | (byte)(uVar140 >> 8);
          bVar49 = bVar49 | (byte)(uVar140 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar140 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar140 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar140 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar140 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 4;
          uVar139 = uVar141 >> 1;
          uVar142 = uVar143 >> 1;
          bVar57 = (byte)uVar141 | 1 | (byte)uVar139;
          bVar58 = (byte)(uVar141 >> 8) | (byte)(uVar139 >> 8);
          bVar59 = (byte)(uVar141 >> 0x10) | (byte)(uVar139 >> 0x10);
          bVar62 = (byte)(uVar141 >> 0x18) | (byte)(uVar139 >> 0x18);
          bVar63 = (byte)(uVar141 >> 0x20) | (byte)(uVar139 >> 0x20);
          bVar65 = (byte)(uVar141 >> 0x28) | (byte)(uVar139 >> 0x28);
          bVar67 = (byte)(uVar141 >> 0x30) | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 1;
          bVar71 = (byte)uVar143 | 1 | (byte)uVar142;
          bVar72 = (byte)(uVar143 >> 8) | (byte)(uVar142 >> 8);
          bVar73 = (byte)(uVar143 >> 0x10) | (byte)(uVar142 >> 0x10);
          bVar75 = (byte)(uVar143 >> 0x18) | (byte)(uVar142 >> 0x18);
          bVar76 = (byte)(uVar143 >> 0x20) | (byte)(uVar142 >> 0x20);
          bVar78 = (byte)(uVar143 >> 0x28) | (byte)(uVar142 >> 0x28);
          bVar80 = (byte)(uVar143 >> 0x30) | (byte)(uVar142 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 1;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 2
          ;
          uVar141 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 2
          ;
          bVar57 = bVar57 | (byte)uVar139;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 2;
          bVar71 = bVar71 | (byte)uVar141;
          bVar72 = bVar72 | (byte)(uVar141 >> 8);
          bVar73 = bVar73 | (byte)(uVar141 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar141 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar141 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar141 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar141 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 2;
          bVar46 = bVar38 | bVar40;
          bVar40 = bVar40 | bVar41;
          bVar41 = bVar41 | bVar42;
          bVar42 = bVar42 | bVar43;
          bVar43 = bVar43 | bVar45;
          bVar96 = bVar49 | bVar50;
          bVar50 = bVar50 | bVar51;
          bVar51 = bVar51 | bVar53;
          bVar53 = bVar53 | bVar55;
          bVar55 = bVar55 | bVar56;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 4
          ;
          uVar142 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 4
          ;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 4;
          bVar72 = bVar72 | (byte)(uVar142 >> 8);
          bVar73 = bVar73 | (byte)(uVar142 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar142 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar142 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar142 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar142 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 4;
          bVar60 = bVar59 | bVar62;
          bVar62 = bVar62 | bVar63;
          bVar63 = bVar63 | bVar65;
          bVar65 = bVar65 | bVar67;
          bVar67 = bVar67 | bVar69;
          bVar74 = bVar73 | bVar75;
          bVar75 = bVar75 | bVar76;
          bVar76 = bVar76 | bVar78;
          bVar78 = bVar78 | bVar80;
          bVar80 = bVar80 | bVar81;
          bVar70 = bVar41 | bVar43;
          bVar82 = bVar42 | bVar45;
          bVar52 = bVar51 | bVar55;
          bVar54 = bVar53 | bVar56;
          bVar64 = bVar63 | bVar67;
          bVar66 = bVar65 | bVar69;
          bVar77 = bVar76 | bVar80;
          bVar79 = bVar78 | bVar81;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 2
          ;
          uVar143 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 2;
          bVar83 = bVar83 | (byte)uVar141;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 2;
          bVar97 = bVar97 | (byte)uVar143;
          bVar98 = bVar98 | (byte)(uVar143 >> 8);
          bVar99 = bVar99 | (byte)(uVar143 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar143 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar143 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar143 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar143 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 2;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 4
          ;
          uVar133 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 4;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 4;
          bVar98 = bVar98 | (byte)(uVar133 >> 8);
          bVar99 = bVar99 | (byte)(uVar133 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar133 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar133 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar133 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar133 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 4;
          bVar86 = bVar85 | bVar88;
          bVar88 = bVar88 | bVar89;
          bVar89 = bVar89 | bVar91;
          bVar91 = bVar91 | bVar93;
          bVar93 = bVar93 | bVar95;
          bVar100 = bVar99 | bVar101;
          bVar101 = bVar101 | bVar102;
          bVar102 = bVar102 | bVar104;
          bVar104 = bVar104 | bVar106;
          bVar106 = bVar106 | bVar107;
          bVar90 = bVar89 | bVar93;
          bVar92 = bVar91 | bVar95;
          bVar103 = bVar102 | bVar106;
          bVar105 = bVar104 | bVar107;
          uVar143 = uVar144 >> 1;
          uVar137 = uVar145 >> 1;
          bVar108 = (byte)uVar144 | 1 | (byte)uVar143;
          bVar109 = (byte)(uVar144 >> 8) | (byte)(uVar143 >> 8);
          bVar110 = (byte)(uVar144 >> 0x10) | (byte)(uVar143 >> 0x10);
          bVar112 = (byte)(uVar144 >> 0x18) | (byte)(uVar143 >> 0x18);
          bVar113 = (byte)(uVar144 >> 0x20) | (byte)(uVar143 >> 0x20);
          bVar115 = (byte)(uVar144 >> 0x28) | (byte)(uVar143 >> 0x28);
          bVar117 = (byte)(uVar144 >> 0x30) | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 1;
          bVar121 = (byte)uVar145 | 1 | (byte)uVar137;
          bVar122 = (byte)(uVar145 >> 8) | (byte)(uVar137 >> 8);
          bVar123 = (byte)(uVar145 >> 0x10) | (byte)(uVar137 >> 0x10);
          bVar125 = (byte)(uVar145 >> 0x18) | (byte)(uVar137 >> 0x18);
          bVar126 = (byte)(uVar145 >> 0x20) | (byte)(uVar137 >> 0x20);
          bVar128 = (byte)(uVar145 >> 0x28) | (byte)(uVar137 >> 0x28);
          bVar130 = (byte)(uVar145 >> 0x30) | (byte)(uVar137 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 1;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 2;
          uVar144 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 2;
          bVar108 = bVar108 | (byte)uVar143;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 2;
          bVar121 = bVar121 | (byte)uVar144;
          bVar122 = bVar122 | (byte)(uVar144 >> 8);
          bVar123 = bVar123 | (byte)(uVar144 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar144 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar144 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar144 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar144 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 2;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 4;
          uVar144 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 4;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 4;
          bVar122 = bVar122 | (byte)(uVar144 >> 8);
          bVar123 = bVar123 | (byte)(uVar144 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar144 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar144 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar144 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar144 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 4;
          bVar120 = bVar110 | bVar112;
          bVar112 = bVar112 | bVar113;
          bVar113 = bVar113 | bVar115;
          bVar115 = bVar115 | bVar117;
          bVar117 = bVar117 | bVar119;
          bVar124 = bVar123 | bVar125;
          bVar125 = bVar125 | bVar126;
          bVar126 = bVar126 | bVar128;
          bVar128 = bVar128 | bVar130;
          bVar130 = bVar130 | bVar131;
          bVar114 = bVar113 | bVar117;
          bVar116 = bVar115 | bVar119;
          bVar127 = bVar126 | bVar130;
          bVar129 = bVar128 | bVar131;
          lVar22 = lVar22 + ((ulong)(byte)(POPCOUNT(~(bVar36 | (byte)uVar135 | bVar37 | bVar46 |
                                                     bVar70)) +
                                           POPCOUNT(~(bVar37 | bVar38 | bVar40 | bVar82)) +
                                           POPCOUNT(~(bVar46 | bVar41 | bVar43)) +
                                           POPCOUNT(~(bVar40 | bVar42 | bVar45)) +
                                           POPCOUNT(~bVar70) + POPCOUNT(~bVar82) +
                                           POPCOUNT(~bVar43) + POPCOUNT(~bVar45) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar31 = lVar31 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar47 | (byte)uVar140
                                                                             | bVar48 | bVar96 |
                                                                            bVar52)) +
                                                                 POPCOUNT(~(bVar48 | bVar49 | bVar50
                                                                           | bVar54))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar96 | bVar51 | bVar55
                                                                           )) +
                                                                POPCOUNT(~(bVar50 | bVar53 | bVar56)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar52) + POPCOUNT(~bVar54) +
                                                  POPCOUNT(~bVar55) + POPCOUNT(~bVar56)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar32 = lVar32 + ((ulong)(byte)(POPCOUNT(~(bVar83 | (byte)uVar141 | bVar84 | bVar86 |
                                                     bVar90)) +
                                           POPCOUNT(~(bVar84 | bVar85 | bVar88 | bVar92)) +
                                           POPCOUNT(~(bVar86 | bVar89 | bVar93)) +
                                           POPCOUNT(~(bVar88 | bVar91 | bVar95)) +
                                           POPCOUNT(~bVar90) + POPCOUNT(~bVar92) +
                                           POPCOUNT(~bVar93) + POPCOUNT(~bVar95) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar33 = lVar33 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar97 | (byte)uVar133
                                                                             | bVar98 | bVar100 |
                                                                            bVar103)) +
                                                                 POPCOUNT(~(bVar98 | bVar99 |
                                                                            bVar101 | bVar105))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar100 | bVar102 |
                                                                           bVar106)) +
                                                                POPCOUNT(~(bVar101 | bVar104 |
                                                                          bVar107)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar103) + POPCOUNT(~bVar105) +
                                                  POPCOUNT(~bVar106) + POPCOUNT(~bVar107)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          lVar29 = lVar29 + ((ulong)(byte)(POPCOUNT(~(bVar57 | (byte)uVar139 | bVar58 | bVar60 |
                                                     bVar64)) +
                                           POPCOUNT(~(bVar58 | bVar59 | bVar62 | bVar66)) +
                                           POPCOUNT(~(bVar60 | bVar63 | bVar67)) +
                                           POPCOUNT(~(bVar62 | bVar65 | bVar69)) +
                                           POPCOUNT(~bVar64) + POPCOUNT(~bVar66) +
                                           POPCOUNT(~bVar67) + POPCOUNT(~bVar69) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar30 = lVar30 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar71 | (byte)uVar142
                                                                             | bVar72 | bVar74 |
                                                                            bVar77)) +
                                                                 POPCOUNT(~(bVar72 | bVar73 | bVar75
                                                                           | bVar79))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar74 | bVar76 | bVar80
                                                                           )) +
                                                                POPCOUNT(~(bVar75 | bVar78 | bVar81)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar77) + POPCOUNT(~bVar79) +
                                                  POPCOUNT(~bVar80) + POPCOUNT(~bVar81)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar34 = lVar34 + ((ulong)(byte)(POPCOUNT(~(bVar108 | (byte)uVar143 | bVar109 | bVar120 |
                                                     bVar114)) +
                                           POPCOUNT(~(bVar109 | bVar110 | bVar112 | bVar116)) +
                                           POPCOUNT(~(bVar120 | bVar113 | bVar117)) +
                                           POPCOUNT(~(bVar112 | bVar115 | bVar119)) +
                                           POPCOUNT(~bVar114) + POPCOUNT(~bVar116) +
                                           POPCOUNT(~bVar117) + POPCOUNT(~bVar119) ^ 0x3f) * 9 +
                             0x49 >> 6);
          lVar35 = lVar35 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar121 | (byte)uVar144
                                                                             | bVar122 | bVar124 |
                                                                            bVar127)) +
                                                                 POPCOUNT(~(bVar122 | bVar123 |
                                                                            bVar125 | bVar129))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar124 | bVar126 |
                                                                           bVar130)) +
                                                                POPCOUNT(~(bVar125 | bVar128 |
                                                                          bVar131)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar127) + POPCOUNT(~bVar129) +
                                                  POPCOUNT(~bVar130) + POPCOUNT(~bVar131)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          uVar18 = uVar18 - 8;
          puVar20 = puVar20 + 8;
        } while (uVar18 != 0);
        lVar22 = lVar34 + lVar32 + lVar29 + lVar22 + lVar35 + lVar33 + lVar30 + lVar31;
        if (uVar28 == uVar23) {
          return lVar22;
        }
      }
      lVar29 = uVar23 - uVar28;
      puVar20 = (ulong *)(lVar25 + uVar28 * 8);
      do {
        lVar22 = lVar22 + ((LZCOUNT(*puVar20 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        lVar29 = lVar29 + -1;
        puVar20 = puVar20 + 1;
      } while (lVar29 != 0);
    }
    break;
  case 4:
    uVar17 = *(uint *)*param_1;
    uVar23 = (ulong)uVar17;
    lVar22 = lVar22 * uVar23;
    if (0 < (int)uVar17) {
      lVar25 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 8) {
        uVar28 = 0;
      }
      else {
        lVar29 = 0;
        lVar30 = 0;
        lVar31 = 0;
        lVar33 = 0;
        lVar32 = 0;
        lVar35 = 0;
        lVar34 = 0;
        uVar28 = uVar23 & 0xfffffff8;
        puVar20 = (ulong *)(lVar25 + 0x20);
        uVar18 = uVar28;
        do {
          uVar139 = puVar20[-3];
          bVar56 = (byte)(uVar139 >> 0x38);
          uVar135 = puVar20[-4];
          bVar45 = (byte)(uVar135 >> 0x38);
          uVar143 = puVar20[-1];
          bVar81 = (byte)(uVar143 >> 0x38);
          uVar141 = puVar20[-2];
          bVar69 = (byte)(uVar141 >> 0x38);
          uVar133 = uVar135 >> 1;
          uVar137 = uVar139 >> 1;
          uVar142 = puVar20[1];
          bVar107 = (byte)(uVar142 >> 0x38);
          uVar140 = *puVar20;
          bVar95 = (byte)(uVar140 >> 0x38);
          uVar145 = puVar20[3];
          bVar131 = (byte)(uVar145 >> 0x38);
          uVar144 = puVar20[2];
          bVar119 = (byte)(uVar144 >> 0x38);
          uVar151 = uVar140 >> 1;
          uVar154 = uVar142 >> 1;
          bVar83 = (byte)uVar140 | 1 | (byte)uVar151;
          bVar84 = (byte)(uVar140 >> 8) | (byte)(uVar151 >> 8);
          bVar85 = (byte)(uVar140 >> 0x10) | (byte)(uVar151 >> 0x10);
          bVar88 = (byte)(uVar140 >> 0x18) | (byte)(uVar151 >> 0x18);
          bVar89 = (byte)(uVar140 >> 0x20) | (byte)(uVar151 >> 0x20);
          bVar91 = (byte)(uVar140 >> 0x28) | (byte)(uVar151 >> 0x28);
          bVar93 = (byte)(uVar140 >> 0x30) | (byte)(uVar151 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 1;
          bVar97 = (byte)uVar142 | 1 | (byte)uVar154;
          bVar98 = (byte)(uVar142 >> 8) | (byte)(uVar154 >> 8);
          bVar99 = (byte)(uVar142 >> 0x10) | (byte)(uVar154 >> 0x10);
          bVar101 = (byte)(uVar142 >> 0x18) | (byte)(uVar154 >> 0x18);
          bVar102 = (byte)(uVar142 >> 0x20) | (byte)(uVar154 >> 0x20);
          bVar104 = (byte)(uVar142 >> 0x28) | (byte)(uVar154 >> 0x28);
          bVar106 = (byte)(uVar142 >> 0x30) | (byte)(uVar154 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 1;
          bVar36 = (byte)uVar135 | 1 | (byte)uVar133;
          bVar37 = (byte)(uVar135 >> 8) | (byte)(uVar133 >> 8);
          bVar38 = (byte)(uVar135 >> 0x10) | (byte)(uVar133 >> 0x10);
          bVar40 = (byte)(uVar135 >> 0x18) | (byte)(uVar133 >> 0x18);
          bVar41 = (byte)(uVar135 >> 0x20) | (byte)(uVar133 >> 0x20);
          bVar42 = (byte)(uVar135 >> 0x28) | (byte)(uVar133 >> 0x28);
          bVar43 = (byte)(uVar135 >> 0x30) | (byte)(uVar133 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 1;
          bVar47 = (byte)uVar139 | 1 | (byte)uVar137;
          bVar48 = (byte)(uVar139 >> 8) | (byte)(uVar137 >> 8);
          bVar49 = (byte)(uVar139 >> 0x10) | (byte)(uVar137 >> 0x10);
          bVar50 = (byte)(uVar139 >> 0x18) | (byte)(uVar137 >> 0x18);
          bVar51 = (byte)(uVar139 >> 0x20) | (byte)(uVar137 >> 0x20);
          bVar53 = (byte)(uVar139 >> 0x28) | (byte)(uVar137 >> 0x28);
          bVar55 = (byte)(uVar139 >> 0x30) | (byte)(uVar137 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 1;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 2
          ;
          uVar139 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 2
          ;
          bVar36 = bVar36 | (byte)uVar135;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 2;
          bVar47 = bVar47 | (byte)uVar139;
          bVar48 = bVar48 | (byte)(uVar139 >> 8);
          bVar49 = bVar49 | (byte)(uVar139 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar139 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar139 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar139 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar139 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 2;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 4
          ;
          uVar140 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 4
          ;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 4;
          bVar48 = bVar48 | (byte)(uVar140 >> 8);
          bVar49 = bVar49 | (byte)(uVar140 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar140 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar140 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar140 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar140 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 4;
          uVar139 = uVar141 >> 1;
          uVar142 = uVar143 >> 1;
          bVar57 = (byte)uVar141 | 1 | (byte)uVar139;
          bVar58 = (byte)(uVar141 >> 8) | (byte)(uVar139 >> 8);
          bVar59 = (byte)(uVar141 >> 0x10) | (byte)(uVar139 >> 0x10);
          bVar62 = (byte)(uVar141 >> 0x18) | (byte)(uVar139 >> 0x18);
          bVar63 = (byte)(uVar141 >> 0x20) | (byte)(uVar139 >> 0x20);
          bVar65 = (byte)(uVar141 >> 0x28) | (byte)(uVar139 >> 0x28);
          bVar67 = (byte)(uVar141 >> 0x30) | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 1;
          bVar71 = (byte)uVar143 | 1 | (byte)uVar142;
          bVar72 = (byte)(uVar143 >> 8) | (byte)(uVar142 >> 8);
          bVar73 = (byte)(uVar143 >> 0x10) | (byte)(uVar142 >> 0x10);
          bVar75 = (byte)(uVar143 >> 0x18) | (byte)(uVar142 >> 0x18);
          bVar76 = (byte)(uVar143 >> 0x20) | (byte)(uVar142 >> 0x20);
          bVar78 = (byte)(uVar143 >> 0x28) | (byte)(uVar142 >> 0x28);
          bVar80 = (byte)(uVar143 >> 0x30) | (byte)(uVar142 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 1;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 2
          ;
          uVar141 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 2
          ;
          bVar57 = bVar57 | (byte)uVar139;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 2;
          bVar71 = bVar71 | (byte)uVar141;
          bVar72 = bVar72 | (byte)(uVar141 >> 8);
          bVar73 = bVar73 | (byte)(uVar141 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar141 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar141 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar141 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar141 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 2;
          bVar46 = bVar38 | bVar40;
          bVar40 = bVar40 | bVar41;
          bVar41 = bVar41 | bVar42;
          bVar42 = bVar42 | bVar43;
          bVar43 = bVar43 | bVar45;
          bVar96 = bVar49 | bVar50;
          bVar50 = bVar50 | bVar51;
          bVar51 = bVar51 | bVar53;
          bVar53 = bVar53 | bVar55;
          bVar55 = bVar55 | bVar56;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 4
          ;
          uVar142 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 4
          ;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 4;
          bVar72 = bVar72 | (byte)(uVar142 >> 8);
          bVar73 = bVar73 | (byte)(uVar142 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar142 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar142 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar142 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar142 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 4;
          bVar60 = bVar59 | bVar62;
          bVar62 = bVar62 | bVar63;
          bVar63 = bVar63 | bVar65;
          bVar65 = bVar65 | bVar67;
          bVar67 = bVar67 | bVar69;
          bVar74 = bVar73 | bVar75;
          bVar75 = bVar75 | bVar76;
          bVar76 = bVar76 | bVar78;
          bVar78 = bVar78 | bVar80;
          bVar80 = bVar80 | bVar81;
          bVar70 = bVar41 | bVar43;
          bVar82 = bVar42 | bVar45;
          bVar52 = bVar51 | bVar55;
          bVar54 = bVar53 | bVar56;
          bVar64 = bVar63 | bVar67;
          bVar66 = bVar65 | bVar69;
          bVar77 = bVar76 | bVar80;
          bVar79 = bVar78 | bVar81;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 2
          ;
          uVar143 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 2;
          bVar83 = bVar83 | (byte)uVar141;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 2;
          bVar97 = bVar97 | (byte)uVar143;
          bVar98 = bVar98 | (byte)(uVar143 >> 8);
          bVar99 = bVar99 | (byte)(uVar143 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar143 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar143 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar143 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar143 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 2;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 4
          ;
          uVar133 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 4;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 4;
          bVar98 = bVar98 | (byte)(uVar133 >> 8);
          bVar99 = bVar99 | (byte)(uVar133 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar133 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar133 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar133 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar133 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 4;
          bVar86 = bVar85 | bVar88;
          bVar88 = bVar88 | bVar89;
          bVar89 = bVar89 | bVar91;
          bVar91 = bVar91 | bVar93;
          bVar93 = bVar93 | bVar95;
          bVar100 = bVar99 | bVar101;
          bVar101 = bVar101 | bVar102;
          bVar102 = bVar102 | bVar104;
          bVar104 = bVar104 | bVar106;
          bVar106 = bVar106 | bVar107;
          bVar90 = bVar89 | bVar93;
          bVar92 = bVar91 | bVar95;
          bVar103 = bVar102 | bVar106;
          bVar105 = bVar104 | bVar107;
          uVar143 = uVar144 >> 1;
          uVar137 = uVar145 >> 1;
          bVar108 = (byte)uVar144 | 1 | (byte)uVar143;
          bVar109 = (byte)(uVar144 >> 8) | (byte)(uVar143 >> 8);
          bVar110 = (byte)(uVar144 >> 0x10) | (byte)(uVar143 >> 0x10);
          bVar112 = (byte)(uVar144 >> 0x18) | (byte)(uVar143 >> 0x18);
          bVar113 = (byte)(uVar144 >> 0x20) | (byte)(uVar143 >> 0x20);
          bVar115 = (byte)(uVar144 >> 0x28) | (byte)(uVar143 >> 0x28);
          bVar117 = (byte)(uVar144 >> 0x30) | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 1;
          bVar121 = (byte)uVar145 | 1 | (byte)uVar137;
          bVar122 = (byte)(uVar145 >> 8) | (byte)(uVar137 >> 8);
          bVar123 = (byte)(uVar145 >> 0x10) | (byte)(uVar137 >> 0x10);
          bVar125 = (byte)(uVar145 >> 0x18) | (byte)(uVar137 >> 0x18);
          bVar126 = (byte)(uVar145 >> 0x20) | (byte)(uVar137 >> 0x20);
          bVar128 = (byte)(uVar145 >> 0x28) | (byte)(uVar137 >> 0x28);
          bVar130 = (byte)(uVar145 >> 0x30) | (byte)(uVar137 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 1;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 2;
          uVar144 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 2;
          bVar108 = bVar108 | (byte)uVar143;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 2;
          bVar121 = bVar121 | (byte)uVar144;
          bVar122 = bVar122 | (byte)(uVar144 >> 8);
          bVar123 = bVar123 | (byte)(uVar144 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar144 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar144 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar144 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar144 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 2;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 4;
          uVar144 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 4;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 4;
          bVar122 = bVar122 | (byte)(uVar144 >> 8);
          bVar123 = bVar123 | (byte)(uVar144 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar144 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar144 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar144 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar144 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 4;
          bVar120 = bVar110 | bVar112;
          bVar112 = bVar112 | bVar113;
          bVar113 = bVar113 | bVar115;
          bVar115 = bVar115 | bVar117;
          bVar117 = bVar117 | bVar119;
          bVar124 = bVar123 | bVar125;
          bVar125 = bVar125 | bVar126;
          bVar126 = bVar126 | bVar128;
          bVar128 = bVar128 | bVar130;
          bVar130 = bVar130 | bVar131;
          bVar114 = bVar113 | bVar117;
          bVar116 = bVar115 | bVar119;
          bVar127 = bVar126 | bVar130;
          bVar129 = bVar128 | bVar131;
          lVar22 = lVar22 + ((ulong)(byte)(POPCOUNT(~(bVar36 | (byte)uVar135 | bVar37 | bVar46 |
                                                     bVar70)) +
                                           POPCOUNT(~(bVar37 | bVar38 | bVar40 | bVar82)) +
                                           POPCOUNT(~(bVar46 | bVar41 | bVar43)) +
                                           POPCOUNT(~(bVar40 | bVar42 | bVar45)) +
                                           POPCOUNT(~bVar70) + POPCOUNT(~bVar82) +
                                           POPCOUNT(~bVar43) + POPCOUNT(~bVar45) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar31 = lVar31 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar47 | (byte)uVar140
                                                                             | bVar48 | bVar96 |
                                                                            bVar52)) +
                                                                 POPCOUNT(~(bVar48 | bVar49 | bVar50
                                                                           | bVar54))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar96 | bVar51 | bVar55
                                                                           )) +
                                                                POPCOUNT(~(bVar50 | bVar53 | bVar56)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar52) + POPCOUNT(~bVar54) +
                                                  POPCOUNT(~bVar55) + POPCOUNT(~bVar56)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar32 = lVar32 + ((ulong)(byte)(POPCOUNT(~(bVar83 | (byte)uVar141 | bVar84 | bVar86 |
                                                     bVar90)) +
                                           POPCOUNT(~(bVar84 | bVar85 | bVar88 | bVar92)) +
                                           POPCOUNT(~(bVar86 | bVar89 | bVar93)) +
                                           POPCOUNT(~(bVar88 | bVar91 | bVar95)) +
                                           POPCOUNT(~bVar90) + POPCOUNT(~bVar92) +
                                           POPCOUNT(~bVar93) + POPCOUNT(~bVar95) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar33 = lVar33 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar97 | (byte)uVar133
                                                                             | bVar98 | bVar100 |
                                                                            bVar103)) +
                                                                 POPCOUNT(~(bVar98 | bVar99 |
                                                                            bVar101 | bVar105))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar100 | bVar102 |
                                                                           bVar106)) +
                                                                POPCOUNT(~(bVar101 | bVar104 |
                                                                          bVar107)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar103) + POPCOUNT(~bVar105) +
                                                  POPCOUNT(~bVar106) + POPCOUNT(~bVar107)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          lVar29 = lVar29 + ((ulong)(byte)(POPCOUNT(~(bVar57 | (byte)uVar139 | bVar58 | bVar60 |
                                                     bVar64)) +
                                           POPCOUNT(~(bVar58 | bVar59 | bVar62 | bVar66)) +
                                           POPCOUNT(~(bVar60 | bVar63 | bVar67)) +
                                           POPCOUNT(~(bVar62 | bVar65 | bVar69)) +
                                           POPCOUNT(~bVar64) + POPCOUNT(~bVar66) +
                                           POPCOUNT(~bVar67) + POPCOUNT(~bVar69) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar30 = lVar30 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar71 | (byte)uVar142
                                                                             | bVar72 | bVar74 |
                                                                            bVar77)) +
                                                                 POPCOUNT(~(bVar72 | bVar73 | bVar75
                                                                           | bVar79))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar74 | bVar76 | bVar80
                                                                           )) +
                                                                POPCOUNT(~(bVar75 | bVar78 | bVar81)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar77) + POPCOUNT(~bVar79) +
                                                  POPCOUNT(~bVar80) + POPCOUNT(~bVar81)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar34 = lVar34 + ((ulong)(byte)(POPCOUNT(~(bVar108 | (byte)uVar143 | bVar109 | bVar120 |
                                                     bVar114)) +
                                           POPCOUNT(~(bVar109 | bVar110 | bVar112 | bVar116)) +
                                           POPCOUNT(~(bVar120 | bVar113 | bVar117)) +
                                           POPCOUNT(~(bVar112 | bVar115 | bVar119)) +
                                           POPCOUNT(~bVar114) + POPCOUNT(~bVar116) +
                                           POPCOUNT(~bVar117) + POPCOUNT(~bVar119) ^ 0x3f) * 9 +
                             0x49 >> 6);
          lVar35 = lVar35 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar121 | (byte)uVar144
                                                                             | bVar122 | bVar124 |
                                                                            bVar127)) +
                                                                 POPCOUNT(~(bVar122 | bVar123 |
                                                                            bVar125 | bVar129))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar124 | bVar126 |
                                                                           bVar130)) +
                                                                POPCOUNT(~(bVar125 | bVar128 |
                                                                          bVar131)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar127) + POPCOUNT(~bVar129) +
                                                  POPCOUNT(~bVar130) + POPCOUNT(~bVar131)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          uVar18 = uVar18 - 8;
          puVar20 = puVar20 + 8;
        } while (uVar18 != 0);
        lVar22 = lVar34 + lVar32 + lVar29 + lVar22 + lVar35 + lVar33 + lVar30 + lVar31;
        if (uVar28 == uVar23) {
          return lVar22;
        }
      }
      lVar29 = uVar23 - uVar28;
      puVar20 = (ulong *)(lVar25 + uVar28 * 8);
      do {
        lVar22 = lVar22 + ((LZCOUNT(*puVar20 | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        lVar29 = lVar29 + -1;
        puVar20 = puVar20 + 1;
      } while (lVar29 != 0);
    }
    break;
  case 5:
    uVar17 = *(uint *)*param_1;
    uVar23 = (ulong)uVar17;
    lVar22 = lVar22 * uVar23;
    if (0 < (int)uVar17) {
      lVar25 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 4) {
        uVar28 = 0;
      }
      else {
        uVar28 = uVar23 & 0xfffffffc;
        lVar29 = 0;
        lVar30 = 0;
        lVar31 = 0;
        puVar26 = (uint *)(lVar25 + 8);
        uVar18 = uVar28;
        do {
          uVar17 = 10;
          if (-1 < (int)puVar26[-2]) {
            uVar17 = ((uint)LZCOUNT(puVar26[-2] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar1 = 10;
          if (-1 < (int)puVar26[-1]) {
            uVar1 = ((uint)LZCOUNT(puVar26[-1] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar2 = 10;
          if (-1 < (int)*puVar26) {
            uVar2 = ((uint)LZCOUNT(*puVar26 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar3 = 10;
          if (-1 < (int)puVar26[1]) {
            uVar3 = ((uint)LZCOUNT(puVar26[1] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          lVar22 = lVar22 + (ulong)uVar17;
          lVar29 = lVar29 + (ulong)uVar1;
          lVar30 = lVar30 + (ulong)uVar2;
          lVar31 = lVar31 + (ulong)uVar3;
          uVar18 = uVar18 - 4;
          puVar26 = puVar26 + 4;
        } while (uVar18 != 0);
        lVar22 = lVar31 + lVar30 + lVar29 + lVar22;
        if (uVar28 == uVar23) {
          return lVar22;
        }
      }
      puVar26 = (uint *)(lVar25 + uVar28 * 4);
      lVar25 = uVar23 - uVar28;
      do {
        while ((int)*puVar26 < 0) {
          lVar22 = lVar22 + 10;
          puVar26 = puVar26 + 1;
          lVar25 = lVar25 + -1;
          if (lVar25 == 0) {
            return lVar22;
          }
        }
        lVar22 = (ulong)(((uint)LZCOUNT(*puVar26 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + lVar22;
        puVar26 = puVar26 + 1;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    break;
  case 8:
    lVar22 = lVar22 + 1;
LAB_00528dfc:
    return lVar22 * (ulong)*(uint *)*param_1;
  case 9:
    uVar17 = *(uint *)(*param_1 + 8);
    uVar23 = (ulong)uVar17;
    lVar22 = lVar22 * uVar23;
    if (0 < (int)uVar17) {
      puVar24 = *(undefined8 **)(*param_1 + 0x10);
      do {
        puVar24 = puVar24 + 1;
        bVar36 = *(byte *)*puVar24;
        uVar18 = (ulong)(bVar36 >> 1);
        if ((bVar36 & 1) != 0) {
          uVar18 = *(ulong *)((byte *)*puVar24 + 8);
        }
        uVar23 = uVar23 - 1;
        lVar22 = uVar18 + lVar22 + (ulong)(((uint)LZCOUNT((uint)uVar18 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
        ;
      } while (uVar23 != 0);
    }
    break;
  case 10:
    uVar23 = *param_1;
    lVar22 = lVar22 * (ulong)*(uint *)(uVar23 + 8);
    if (0 < (int)*(uint *)(uVar23 + 8)) {
      lVar25 = 0;
      do {
        lVar29 = (**(code **)(**(long **)(*(long *)(uVar23 + 0x10) + lVar25 * 8 + 8) + 0x48))();
        uVar23 = *param_1;
        lVar25 = lVar25 + 1;
        lVar22 = lVar29 + lVar22;
      } while (lVar25 < *(int *)(uVar23 + 8));
    }
    break;
  case 0xb:
    uVar23 = *param_1;
    lVar22 = lVar22 * (ulong)*(uint *)(uVar23 + 8);
    if (0 < (int)*(uint *)(uVar23 + 8)) {
      lVar25 = 0;
      do {
        lVar29 = (**(code **)(**(long **)(*(long *)(uVar23 + 0x10) + lVar25 * 8 + 8) + 0x48))();
        lVar22 = lVar29 + lVar22 + (ulong)(((uint)LZCOUNT((uint)lVar29 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
        ;
        uVar23 = *param_1;
        lVar25 = lVar25 + 1;
      } while (lVar25 < *(int *)(uVar23 + 8));
    }
    break;
  case 0xc:
    uVar17 = *(uint *)(*param_1 + 8);
    uVar23 = (ulong)uVar17;
    lVar22 = lVar22 * uVar23;
    if (0 < (int)uVar17) {
      puVar24 = *(undefined8 **)(*param_1 + 0x10);
      do {
        puVar24 = puVar24 + 1;
        bVar36 = *(byte *)*puVar24;
        uVar18 = (ulong)(bVar36 >> 1);
        if ((bVar36 & 1) != 0) {
          uVar18 = *(ulong *)((byte *)*puVar24 + 8);
        }
        uVar23 = uVar23 - 1;
        lVar22 = uVar18 + lVar22 + (ulong)(((uint)LZCOUNT((uint)uVar18 | 1) ^ 0x1f) * 9 + 0x49 >> 6)
        ;
      } while (uVar23 != 0);
    }
    break;
  case 0xd:
    uVar17 = *(uint *)*param_1;
    uVar23 = (ulong)uVar17;
    lVar22 = lVar22 * uVar23;
    if (0 < (int)uVar17) {
      lVar25 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 8) {
        uVar28 = 0;
      }
      else {
        lVar29 = 0;
        lVar30 = 0;
        lVar31 = 0;
        lVar33 = 0;
        lVar32 = 0;
        lVar35 = 0;
        lVar34 = 0;
        uVar28 = uVar23 & 0xfffffff8;
        puVar24 = (undefined8 *)(lVar25 + 0x10);
        uVar18 = uVar28;
        do {
          lVar22 = lVar22 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)puVar24[-2] | 1) ^ 0x1f) * 9 +
                                    0x49 >> 6);
          lVar31 = lVar31 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)((ulong)puVar24[-2] >> 0x20) |
                                                               1) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar29 = lVar29 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)puVar24[-1] | 1) ^ 0x1f) * 9 +
                                    0x49 >> 6);
          lVar30 = lVar30 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)((ulong)puVar24[-1] >> 0x20) |
                                                               1) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar32 = lVar32 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)*puVar24 | 1) ^ 0x1f) * 9 +
                                    0x49 >> 6);
          lVar33 = lVar33 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)((ulong)*puVar24 >> 0x20) | 1)
                                                ^ 0x1f) * 9 + 0x49 >> 6);
          lVar34 = lVar34 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)puVar24[1] | 1) ^ 0x1f) * 9 +
                                    0x49 >> 6);
          lVar35 = lVar35 + (ulong)((uint)(byte)((byte)LZCOUNT((uint)((ulong)puVar24[1] >> 0x20) | 1
                                                              ) ^ 0x1f) * 9 + 0x49 >> 6);
          uVar18 = uVar18 - 8;
          puVar24 = puVar24 + 4;
        } while (uVar18 != 0);
        lVar22 = lVar34 + lVar32 + lVar29 + lVar22 + lVar35 + lVar33 + lVar30 + lVar31;
        if (uVar28 == uVar23) {
          return lVar22;
        }
      }
      lVar29 = uVar23 - uVar28;
      puVar26 = (uint *)(lVar25 + uVar28 * 4);
      do {
        lVar22 = lVar22 + (ulong)(((uint)LZCOUNT(*puVar26 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        lVar29 = lVar29 + -1;
        puVar26 = puVar26 + 1;
      } while (lVar29 != 0);
    }
    break;
  case 0xe:
    uVar17 = *(uint *)*param_1;
    uVar23 = (ulong)uVar17;
    lVar22 = lVar22 * uVar23;
    if (0 < (int)uVar17) {
      lVar25 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 4) {
        uVar28 = 0;
      }
      else {
        uVar28 = uVar23 & 0xfffffffc;
        lVar29 = 0;
        lVar30 = 0;
        lVar31 = 0;
        puVar26 = (uint *)(lVar25 + 8);
        uVar18 = uVar28;
        do {
          uVar17 = 10;
          if (-1 < (int)puVar26[-2]) {
            uVar17 = ((uint)LZCOUNT(puVar26[-2] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar1 = 10;
          if (-1 < (int)puVar26[-1]) {
            uVar1 = ((uint)LZCOUNT(puVar26[-1] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar2 = 10;
          if (-1 < (int)*puVar26) {
            uVar2 = ((uint)LZCOUNT(*puVar26 | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          uVar3 = 10;
          if (-1 < (int)puVar26[1]) {
            uVar3 = ((uint)LZCOUNT(puVar26[1] | 1) ^ 0x1f) * 9 + 0x49 >> 6;
          }
          lVar22 = lVar22 + (ulong)uVar17;
          lVar29 = lVar29 + (ulong)uVar1;
          lVar30 = lVar30 + (ulong)uVar2;
          lVar31 = lVar31 + (ulong)uVar3;
          uVar18 = uVar18 - 4;
          puVar26 = puVar26 + 4;
        } while (uVar18 != 0);
        lVar22 = lVar31 + lVar30 + lVar29 + lVar22;
        if (uVar28 == uVar23) {
          return lVar22;
        }
      }
      puVar26 = (uint *)(lVar25 + uVar28 * 4);
      lVar25 = uVar23 - uVar28;
      do {
        while ((int)*puVar26 < 0) {
          lVar22 = lVar22 + 10;
          puVar26 = puVar26 + 1;
          lVar25 = lVar25 + -1;
          if (lVar25 == 0) {
            return lVar22;
          }
        }
        lVar22 = (ulong)(((uint)LZCOUNT(*puVar26 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + lVar22;
        puVar26 = puVar26 + 1;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    break;
  case 0x11:
    uVar17 = *(uint *)*param_1;
    uVar23 = (ulong)uVar17;
    lVar22 = lVar22 * uVar23;
    if (0 < (int)uVar17) {
      lVar25 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 8) {
        uVar28 = 0;
      }
      else {
        lVar29 = 0;
        lVar30 = 0;
        lVar31 = 0;
        lVar33 = 0;
        lVar32 = 0;
        lVar35 = 0;
        lVar34 = 0;
        uVar28 = uVar23 & 0xfffffff8;
        puVar24 = (undefined8 *)(lVar25 + 0x10);
        uVar18 = uVar28;
        do {
          uVar5 = puVar24[-2];
          cVar39 = (char)((ulong)uVar5 >> 0x18);
          cVar44 = (char)((ulong)uVar5 >> 0x38);
          uVar10 = puVar24[-1];
          cVar61 = (char)((ulong)uVar10 >> 0x18);
          cVar68 = (char)((ulong)uVar10 >> 0x38);
          iVar146 = (int)uVar10 << 1;
          iVar148 = (int)((ulong)uVar10 >> 0x20) << 1;
          uVar10 = *puVar24;
          cVar87 = (char)((ulong)uVar10 >> 0x18);
          cVar94 = (char)((ulong)uVar10 >> 0x38);
          uVar15 = puVar24[1];
          cVar111 = (char)((ulong)uVar15 >> 0x18);
          cVar118 = (char)((ulong)uVar15 >> 0x38);
          iVar9 = (int)cVar61 >> 7;
          iVar11 = (int)cVar68 >> 7;
          iVar150 = (int)uVar10 << 1;
          iVar153 = (int)((ulong)uVar10 >> 0x20) << 1;
          iVar12 = (int)cVar87 >> 7;
          iVar13 = (int)cVar94 >> 7;
          iVar132 = (int)uVar5 << 1;
          iVar136 = (int)((ulong)uVar5 >> 0x20) << 1;
          iVar4 = (int)cVar39 >> 7;
          iVar7 = (int)cVar44 >> 7;
          iVar156 = (int)uVar15 << 1;
          iVar158 = (int)((ulong)uVar15 >> 0x20) << 1;
          iVar14 = (int)cVar111 >> 7;
          iVar16 = (int)cVar118 >> 7;
          lVar22 = lVar22 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar132 >> 0x18
                                                                              ) ^ cVar39 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar132 >> 0x10) ^ (byte)((uint)iVar4 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar132 >> 8) ^
                                                           (byte)((uint)iVar4 >> 8),
                                                           (byte)iVar132 ^ (byte)iVar4))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar31 = lVar31 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar136 >> 0x18
                                                                              ) ^ cVar44 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar136 >> 0x10) ^ (byte)((uint)iVar7 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar136 >> 8) ^
                                                           (byte)((uint)iVar7 >> 8),
                                                           (byte)iVar136 ^ (byte)iVar7))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar29 = lVar29 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar146 >> 0x18
                                                                              ) ^ cVar61 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar146 >> 0x10) ^ (byte)((uint)iVar9 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar146 >> 8) ^
                                                           (byte)((uint)iVar9 >> 8),
                                                           (byte)iVar146 ^ (byte)iVar9))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar30 = lVar30 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar148 >> 0x18
                                                                              ) ^ cVar68 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar148 >> 0x10) ^ (byte)((uint)iVar11 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar148 >> 8) ^
                                                           (byte)((uint)iVar11 >> 8),
                                                           (byte)iVar148 ^ (byte)iVar11))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar32 = lVar32 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar150 >> 0x18
                                                                              ) ^ cVar87 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar150 >> 0x10) ^ (byte)((uint)iVar12 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar150 >> 8) ^
                                                           (byte)((uint)iVar12 >> 8),
                                                           (byte)iVar150 ^ (byte)iVar12))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar33 = lVar33 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar153 >> 0x18
                                                                              ) ^ cVar94 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar153 >> 0x10) ^ (byte)((uint)iVar13 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar153 >> 8) ^
                                                           (byte)((uint)iVar13 >> 8),
                                                           (byte)iVar153 ^ (byte)iVar13))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar34 = lVar34 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar156 >> 0x18
                                                                              ) ^ cVar111 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar156 >> 0x10) ^ (byte)((uint)iVar14 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar156 >> 8) ^
                                                           (byte)((uint)iVar14 >> 8),
                                                           (byte)iVar156 ^ (byte)iVar14))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          lVar35 = lVar35 + (ulong)((uint)(byte)((byte)LZCOUNT(CONCAT13((byte)((uint)iVar158 >> 0x18
                                                                              ) ^ cVar118 >> 7,
                                                                        CONCAT12((byte)((uint)
                                                  iVar158 >> 0x10) ^ (byte)((uint)iVar16 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar158 >> 8) ^
                                                           (byte)((uint)iVar16 >> 8),
                                                           (byte)iVar158 ^ (byte)iVar16))) | 1) ^
                                                0x1f) * 9 + 0x49 >> 6);
          uVar18 = uVar18 - 8;
          puVar24 = puVar24 + 4;
        } while (uVar18 != 0);
        lVar22 = lVar34 + lVar32 + lVar29 + lVar22 + lVar35 + lVar33 + lVar30 + lVar31;
        if (uVar28 == uVar23) {
          return lVar22;
        }
      }
      lVar29 = uVar23 - uVar28;
      piVar27 = (int *)(lVar25 + uVar28 * 4);
      do {
        lVar22 = lVar22 + (ulong)(((uint)LZCOUNT(*piVar27 << 1 ^ *piVar27 >> 0x1f | 1) ^ 0x1f) * 9 +
                                  0x49 >> 6);
        lVar29 = lVar29 + -1;
        piVar27 = piVar27 + 1;
      } while (lVar29 != 0);
    }
    break;
  case 0x12:
    uVar17 = *(uint *)*param_1;
    uVar23 = (ulong)uVar17;
    lVar22 = lVar22 * uVar23;
    if (0 < (int)uVar17) {
      lVar25 = *(long *)((uint *)*param_1 + 2);
      if (uVar17 < 8) {
        uVar28 = 0;
      }
      else {
        lVar29 = 0;
        lVar30 = 0;
        lVar31 = 0;
        lVar33 = 0;
        lVar32 = 0;
        lVar35 = 0;
        lVar34 = 0;
        uVar28 = uVar23 & 0xfffffff8;
        plVar21 = (long *)(lVar25 + 0x20);
        uVar18 = uVar28;
        do {
          cVar44 = (char)((ulong)plVar21[-3] >> 0x38);
          cVar39 = (char)((ulong)plVar21[-4] >> 0x38);
          cVar68 = (char)((ulong)plVar21[-1] >> 0x38);
          cVar61 = (char)((ulong)plVar21[-2] >> 0x38);
          lVar147 = plVar21[-2] << 1;
          lVar149 = plVar21[-1] << 1;
          lVar134 = plVar21[-4] << 1;
          lVar138 = plVar21[-3] << 1;
          lVar6 = (long)cVar39 >> 7;
          lVar8 = (long)cVar44 >> 7;
          cVar94 = (char)((ulong)plVar21[1] >> 0x38);
          cVar87 = (char)((ulong)*plVar21 >> 0x38);
          cVar118 = (char)((ulong)plVar21[3] >> 0x38);
          cVar111 = (char)((ulong)plVar21[2] >> 0x38);
          lVar152 = *plVar21 << 1;
          lVar155 = plVar21[1] << 1;
          lVar157 = (long)cVar87 >> 7;
          lVar159 = (long)cVar94 >> 7;
          bVar82 = (byte)lVar152 ^ (byte)lVar157;
          bVar84 = (byte)((ulong)lVar152 >> 8) ^ (byte)((ulong)lVar157 >> 8);
          bVar85 = (byte)((ulong)lVar152 >> 0x10) ^ (byte)((ulong)lVar157 >> 0x10);
          bVar88 = (byte)((ulong)lVar152 >> 0x18) ^ (byte)((ulong)lVar157 >> 0x18);
          bVar89 = (byte)((ulong)lVar152 >> 0x20) ^ (byte)((ulong)lVar157 >> 0x20);
          bVar91 = (byte)((ulong)lVar152 >> 0x28) ^ (byte)((ulong)lVar157 >> 0x28);
          bVar93 = (byte)((ulong)lVar152 >> 0x30) ^ (byte)((ulong)lVar157 >> 0x30);
          bVar95 = (byte)((ulong)lVar152 >> 0x38) ^ cVar87 >> 7;
          bVar96 = (byte)lVar155 ^ (byte)lVar159;
          bVar98 = (byte)((ulong)lVar155 >> 8) ^ (byte)((ulong)lVar159 >> 8);
          bVar99 = (byte)((ulong)lVar155 >> 0x10) ^ (byte)((ulong)lVar159 >> 0x10);
          bVar101 = (byte)((ulong)lVar155 >> 0x18) ^ (byte)((ulong)lVar159 >> 0x18);
          bVar102 = (byte)((ulong)lVar155 >> 0x20) ^ (byte)((ulong)lVar159 >> 0x20);
          bVar104 = (byte)((ulong)lVar155 >> 0x28) ^ (byte)((ulong)lVar159 >> 0x28);
          bVar106 = (byte)((ulong)lVar155 >> 0x30) ^ (byte)((ulong)lVar159 >> 0x30);
          bVar107 = (byte)((ulong)lVar155 >> 0x38) ^ cVar94 >> 7;
          bVar36 = (byte)lVar134 ^ (byte)lVar6;
          bVar37 = (byte)((ulong)lVar134 >> 8) ^ (byte)((ulong)lVar6 >> 8);
          bVar38 = (byte)((ulong)lVar134 >> 0x10) ^ (byte)((ulong)lVar6 >> 0x10);
          bVar40 = (byte)((ulong)lVar134 >> 0x18) ^ (byte)((ulong)lVar6 >> 0x18);
          bVar41 = (byte)((ulong)lVar134 >> 0x20) ^ (byte)((ulong)lVar6 >> 0x20);
          bVar42 = (byte)((ulong)lVar134 >> 0x28) ^ (byte)((ulong)lVar6 >> 0x28);
          bVar43 = (byte)((ulong)lVar134 >> 0x30) ^ (byte)((ulong)lVar6 >> 0x30);
          bVar45 = (byte)((ulong)lVar134 >> 0x38) ^ cVar39 >> 7;
          bVar46 = (byte)lVar138 ^ (byte)lVar8;
          bVar48 = (byte)((ulong)lVar138 >> 8) ^ (byte)((ulong)lVar8 >> 8);
          bVar49 = (byte)((ulong)lVar138 >> 0x10) ^ (byte)((ulong)lVar8 >> 0x10);
          bVar50 = (byte)((ulong)lVar138 >> 0x18) ^ (byte)((ulong)lVar8 >> 0x18);
          bVar51 = (byte)((ulong)lVar138 >> 0x20) ^ (byte)((ulong)lVar8 >> 0x20);
          bVar53 = (byte)((ulong)lVar138 >> 0x28) ^ (byte)((ulong)lVar8 >> 0x28);
          bVar55 = (byte)((ulong)lVar138 >> 0x30) ^ (byte)((ulong)lVar8 >> 0x30);
          bVar56 = (byte)((ulong)lVar138 >> 0x38) ^ cVar44 >> 7;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 1
          ;
          uVar139 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar46))))))) >> 1
          ;
          bVar36 = bVar36 | 1 | (byte)uVar135;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 1;
          bVar47 = bVar46 | 1 | (byte)uVar139;
          bVar48 = bVar48 | (byte)(uVar139 >> 8);
          bVar49 = bVar49 | (byte)(uVar139 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar139 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar139 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar139 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar139 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 1;
          lVar6 = (long)cVar61 >> 7;
          lVar8 = (long)cVar68 >> 7;
          bVar46 = (byte)lVar147 ^ (byte)lVar6;
          bVar58 = (byte)((ulong)lVar147 >> 8) ^ (byte)((ulong)lVar6 >> 8);
          bVar59 = (byte)((ulong)lVar147 >> 0x10) ^ (byte)((ulong)lVar6 >> 0x10);
          bVar62 = (byte)((ulong)lVar147 >> 0x18) ^ (byte)((ulong)lVar6 >> 0x18);
          bVar63 = (byte)((ulong)lVar147 >> 0x20) ^ (byte)((ulong)lVar6 >> 0x20);
          bVar65 = (byte)((ulong)lVar147 >> 0x28) ^ (byte)((ulong)lVar6 >> 0x28);
          bVar67 = (byte)((ulong)lVar147 >> 0x30) ^ (byte)((ulong)lVar6 >> 0x30);
          bVar69 = (byte)((ulong)lVar147 >> 0x38) ^ cVar61 >> 7;
          bVar70 = (byte)lVar149 ^ (byte)lVar8;
          bVar72 = (byte)((ulong)lVar149 >> 8) ^ (byte)((ulong)lVar8 >> 8);
          bVar73 = (byte)((ulong)lVar149 >> 0x10) ^ (byte)((ulong)lVar8 >> 0x10);
          bVar75 = (byte)((ulong)lVar149 >> 0x18) ^ (byte)((ulong)lVar8 >> 0x18);
          bVar76 = (byte)((ulong)lVar149 >> 0x20) ^ (byte)((ulong)lVar8 >> 0x20);
          bVar78 = (byte)((ulong)lVar149 >> 0x28) ^ (byte)((ulong)lVar8 >> 0x28);
          bVar80 = (byte)((ulong)lVar149 >> 0x30) ^ (byte)((ulong)lVar8 >> 0x30);
          bVar81 = (byte)((ulong)lVar149 >> 0x38) ^ cVar68 >> 7;
          uVar135 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar82))))))) >> 1
          ;
          uVar139 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar96))))
                                                  ))) >> 1;
          bVar83 = bVar82 | 1 | (byte)uVar135;
          bVar84 = bVar84 | (byte)(uVar135 >> 8);
          bVar85 = bVar85 | (byte)(uVar135 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar135 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar135 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar135 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar135 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 1;
          bVar97 = bVar96 | 1 | (byte)uVar139;
          bVar98 = bVar98 | (byte)(uVar139 >> 8);
          bVar99 = bVar99 | (byte)(uVar139 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar139 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar139 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar139 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar139 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 1;
          lVar157 = plVar21[2] << 1;
          lVar159 = plVar21[3] << 1;
          lVar6 = (long)cVar111 >> 7;
          lVar8 = (long)cVar118 >> 7;
          bVar108 = (byte)lVar157 ^ (byte)lVar6;
          bVar109 = (byte)((ulong)lVar157 >> 8) ^ (byte)((ulong)lVar6 >> 8);
          bVar110 = (byte)((ulong)lVar157 >> 0x10) ^ (byte)((ulong)lVar6 >> 0x10);
          bVar112 = (byte)((ulong)lVar157 >> 0x18) ^ (byte)((ulong)lVar6 >> 0x18);
          bVar113 = (byte)((ulong)lVar157 >> 0x20) ^ (byte)((ulong)lVar6 >> 0x20);
          bVar115 = (byte)((ulong)lVar157 >> 0x28) ^ (byte)((ulong)lVar6 >> 0x28);
          bVar117 = (byte)((ulong)lVar157 >> 0x30) ^ (byte)((ulong)lVar6 >> 0x30);
          bVar119 = (byte)((ulong)lVar157 >> 0x38) ^ cVar111 >> 7;
          bVar120 = (byte)lVar159 ^ (byte)lVar8;
          bVar122 = (byte)((ulong)lVar159 >> 8) ^ (byte)((ulong)lVar8 >> 8);
          bVar123 = (byte)((ulong)lVar159 >> 0x10) ^ (byte)((ulong)lVar8 >> 0x10);
          bVar125 = (byte)((ulong)lVar159 >> 0x18) ^ (byte)((ulong)lVar8 >> 0x18);
          bVar126 = (byte)((ulong)lVar159 >> 0x20) ^ (byte)((ulong)lVar8 >> 0x20);
          bVar128 = (byte)((ulong)lVar159 >> 0x28) ^ (byte)((ulong)lVar8 >> 0x28);
          bVar130 = (byte)((ulong)lVar159 >> 0x30) ^ (byte)((ulong)lVar8 >> 0x30);
          bVar131 = (byte)((ulong)lVar159 >> 0x38) ^ cVar118 >> 7;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 2
          ;
          uVar139 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 2
          ;
          bVar36 = bVar36 | (byte)uVar135;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 2;
          bVar47 = bVar47 | (byte)uVar139;
          bVar48 = bVar48 | (byte)(uVar139 >> 8);
          bVar49 = bVar49 | (byte)(uVar139 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar139 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar139 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar139 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar139 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 2;
          uVar135 = CONCAT17(bVar45,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar38,CONCAT11(bVar37,bVar36))))))) >> 4
          ;
          uVar140 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar53,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47))))))) >> 4
          ;
          bVar37 = bVar37 | (byte)(uVar135 >> 8);
          bVar38 = bVar38 | (byte)(uVar135 >> 0x10);
          bVar40 = bVar40 | (byte)(uVar135 >> 0x18);
          bVar41 = bVar41 | (byte)(uVar135 >> 0x20);
          bVar42 = bVar42 | (byte)(uVar135 >> 0x28);
          bVar43 = bVar43 | (byte)(uVar135 >> 0x30);
          bVar45 = bVar45 | bVar45 >> 4;
          bVar48 = bVar48 | (byte)(uVar140 >> 8);
          bVar49 = bVar49 | (byte)(uVar140 >> 0x10);
          bVar50 = bVar50 | (byte)(uVar140 >> 0x18);
          bVar51 = bVar51 | (byte)(uVar140 >> 0x20);
          bVar53 = bVar53 | (byte)(uVar140 >> 0x28);
          bVar55 = bVar55 | (byte)(uVar140 >> 0x30);
          bVar56 = bVar56 | bVar56 >> 4;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar46))))))) >> 1
          ;
          uVar141 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar70))))))) >> 1
          ;
          bVar57 = bVar46 | 1 | (byte)uVar139;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 1;
          bVar71 = bVar70 | 1 | (byte)uVar141;
          bVar72 = bVar72 | (byte)(uVar141 >> 8);
          bVar73 = bVar73 | (byte)(uVar141 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar141 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar141 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar141 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar141 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 1;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 2
          ;
          uVar141 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 2
          ;
          bVar57 = bVar57 | (byte)uVar139;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 2;
          bVar71 = bVar71 | (byte)uVar141;
          bVar72 = bVar72 | (byte)(uVar141 >> 8);
          bVar73 = bVar73 | (byte)(uVar141 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar141 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar141 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar141 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar141 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 2;
          bVar46 = bVar38 | bVar40;
          bVar40 = bVar40 | bVar41;
          bVar41 = bVar41 | bVar42;
          bVar42 = bVar42 | bVar43;
          bVar43 = bVar43 | bVar45;
          bVar96 = bVar49 | bVar50;
          bVar50 = bVar50 | bVar51;
          bVar51 = bVar51 | bVar53;
          bVar53 = bVar53 | bVar55;
          bVar55 = bVar55 | bVar56;
          uVar139 = CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar59,CONCAT11(bVar58,bVar57))))))) >> 4
          ;
          uVar142 = CONCAT17(bVar81,CONCAT16(bVar80,CONCAT15(bVar78,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar71))))))) >> 4
          ;
          bVar58 = bVar58 | (byte)(uVar139 >> 8);
          bVar59 = bVar59 | (byte)(uVar139 >> 0x10);
          bVar62 = bVar62 | (byte)(uVar139 >> 0x18);
          bVar63 = bVar63 | (byte)(uVar139 >> 0x20);
          bVar65 = bVar65 | (byte)(uVar139 >> 0x28);
          bVar67 = bVar67 | (byte)(uVar139 >> 0x30);
          bVar69 = bVar69 | bVar69 >> 4;
          bVar72 = bVar72 | (byte)(uVar142 >> 8);
          bVar73 = bVar73 | (byte)(uVar142 >> 0x10);
          bVar75 = bVar75 | (byte)(uVar142 >> 0x18);
          bVar76 = bVar76 | (byte)(uVar142 >> 0x20);
          bVar78 = bVar78 | (byte)(uVar142 >> 0x28);
          bVar80 = bVar80 | (byte)(uVar142 >> 0x30);
          bVar81 = bVar81 | bVar81 >> 4;
          bVar60 = bVar59 | bVar62;
          bVar62 = bVar62 | bVar63;
          bVar63 = bVar63 | bVar65;
          bVar65 = bVar65 | bVar67;
          bVar67 = bVar67 | bVar69;
          bVar74 = bVar73 | bVar75;
          bVar75 = bVar75 | bVar76;
          bVar76 = bVar76 | bVar78;
          bVar78 = bVar78 | bVar80;
          bVar80 = bVar80 | bVar81;
          bVar70 = bVar41 | bVar43;
          bVar82 = bVar42 | bVar45;
          bVar52 = bVar51 | bVar55;
          bVar54 = bVar53 | bVar56;
          bVar64 = bVar63 | bVar67;
          bVar66 = bVar65 | bVar69;
          bVar77 = bVar76 | bVar80;
          bVar79 = bVar78 | bVar81;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 2
          ;
          uVar143 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 2;
          bVar83 = bVar83 | (byte)uVar141;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 2;
          bVar97 = bVar97 | (byte)uVar143;
          bVar98 = bVar98 | (byte)(uVar143 >> 8);
          bVar99 = bVar99 | (byte)(uVar143 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar143 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar143 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar143 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar143 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 2;
          uVar141 = CONCAT17(bVar95,CONCAT16(bVar93,CONCAT15(bVar91,CONCAT14(bVar89,CONCAT13(bVar88,
                                                  CONCAT12(bVar85,CONCAT11(bVar84,bVar83))))))) >> 4
          ;
          uVar144 = CONCAT17(bVar107,CONCAT16(bVar106,CONCAT15(bVar104,CONCAT14(bVar102,CONCAT13(
                                                  bVar101,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))))
                                                  ))) >> 4;
          bVar84 = bVar84 | (byte)(uVar141 >> 8);
          bVar85 = bVar85 | (byte)(uVar141 >> 0x10);
          bVar88 = bVar88 | (byte)(uVar141 >> 0x18);
          bVar89 = bVar89 | (byte)(uVar141 >> 0x20);
          bVar91 = bVar91 | (byte)(uVar141 >> 0x28);
          bVar93 = bVar93 | (byte)(uVar141 >> 0x30);
          bVar95 = bVar95 | bVar95 >> 4;
          bVar98 = bVar98 | (byte)(uVar144 >> 8);
          bVar99 = bVar99 | (byte)(uVar144 >> 0x10);
          bVar101 = bVar101 | (byte)(uVar144 >> 0x18);
          bVar102 = bVar102 | (byte)(uVar144 >> 0x20);
          bVar104 = bVar104 | (byte)(uVar144 >> 0x28);
          bVar106 = bVar106 | (byte)(uVar144 >> 0x30);
          bVar107 = bVar107 | bVar107 >> 4;
          bVar86 = bVar85 | bVar88;
          bVar88 = bVar88 | bVar89;
          bVar89 = bVar89 | bVar91;
          bVar91 = bVar91 | bVar93;
          bVar93 = bVar93 | bVar95;
          bVar100 = bVar99 | bVar101;
          bVar101 = bVar101 | bVar102;
          bVar102 = bVar102 | bVar104;
          bVar104 = bVar104 | bVar106;
          bVar106 = bVar106 | bVar107;
          bVar90 = bVar89 | bVar93;
          bVar92 = bVar91 | bVar95;
          bVar103 = bVar102 | bVar106;
          bVar105 = bVar104 | bVar107;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 1;
          uVar145 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar120)
                                                                  )))))) >> 1;
          bVar108 = bVar108 | 1 | (byte)uVar143;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 1;
          bVar121 = bVar120 | 1 | (byte)uVar145;
          bVar122 = bVar122 | (byte)(uVar145 >> 8);
          bVar123 = bVar123 | (byte)(uVar145 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar145 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar145 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar145 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar145 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 1;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 2;
          uVar145 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 2;
          bVar108 = bVar108 | (byte)uVar143;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 2;
          bVar121 = bVar121 | (byte)uVar145;
          bVar122 = bVar122 | (byte)(uVar145 >> 8);
          bVar123 = bVar123 | (byte)(uVar145 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar145 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar145 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar145 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar145 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 2;
          uVar143 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(
                                                  bVar112,CONCAT12(bVar110,CONCAT11(bVar109,bVar108)
                                                                  )))))) >> 4;
          uVar145 = CONCAT17(bVar131,CONCAT16(bVar130,CONCAT15(bVar128,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar123,CONCAT11(bVar122,bVar121)
                                                                  )))))) >> 4;
          bVar109 = bVar109 | (byte)(uVar143 >> 8);
          bVar110 = bVar110 | (byte)(uVar143 >> 0x10);
          bVar112 = bVar112 | (byte)(uVar143 >> 0x18);
          bVar113 = bVar113 | (byte)(uVar143 >> 0x20);
          bVar115 = bVar115 | (byte)(uVar143 >> 0x28);
          bVar117 = bVar117 | (byte)(uVar143 >> 0x30);
          bVar119 = bVar119 | bVar119 >> 4;
          bVar122 = bVar122 | (byte)(uVar145 >> 8);
          bVar123 = bVar123 | (byte)(uVar145 >> 0x10);
          bVar125 = bVar125 | (byte)(uVar145 >> 0x18);
          bVar126 = bVar126 | (byte)(uVar145 >> 0x20);
          bVar128 = bVar128 | (byte)(uVar145 >> 0x28);
          bVar130 = bVar130 | (byte)(uVar145 >> 0x30);
          bVar131 = bVar131 | bVar131 >> 4;
          bVar120 = bVar110 | bVar112;
          bVar112 = bVar112 | bVar113;
          bVar113 = bVar113 | bVar115;
          bVar115 = bVar115 | bVar117;
          bVar117 = bVar117 | bVar119;
          bVar124 = bVar123 | bVar125;
          bVar125 = bVar125 | bVar126;
          bVar126 = bVar126 | bVar128;
          bVar128 = bVar128 | bVar130;
          bVar130 = bVar130 | bVar131;
          bVar114 = bVar113 | bVar117;
          bVar116 = bVar115 | bVar119;
          bVar127 = bVar126 | bVar130;
          bVar129 = bVar128 | bVar131;
          lVar32 = lVar32 + ((ulong)(byte)(POPCOUNT(~(bVar83 | (byte)uVar141 | bVar84 | bVar86 |
                                                     bVar90)) +
                                           POPCOUNT(~(bVar84 | bVar85 | bVar88 | bVar92)) +
                                           POPCOUNT(~(bVar86 | bVar89 | bVar93)) +
                                           POPCOUNT(~(bVar88 | bVar91 | bVar95)) +
                                           POPCOUNT(~bVar90) + POPCOUNT(~bVar92) +
                                           POPCOUNT(~bVar93) + POPCOUNT(~bVar95) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar33 = lVar33 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar97 | (byte)uVar144
                                                                             | bVar98 | bVar100 |
                                                                            bVar103)) +
                                                                 POPCOUNT(~(bVar98 | bVar99 |
                                                                            bVar101 | bVar105))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar100 | bVar102 |
                                                                           bVar106)) +
                                                                POPCOUNT(~(bVar101 | bVar104 |
                                                                          bVar107)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar103) + POPCOUNT(~bVar105) +
                                                  POPCOUNT(~bVar106) + POPCOUNT(~bVar107)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          lVar22 = lVar22 + ((ulong)(byte)(POPCOUNT(~(bVar36 | (byte)uVar135 | bVar37 | bVar46 |
                                                     bVar70)) +
                                           POPCOUNT(~(bVar37 | bVar38 | bVar40 | bVar82)) +
                                           POPCOUNT(~(bVar46 | bVar41 | bVar43)) +
                                           POPCOUNT(~(bVar40 | bVar42 | bVar45)) +
                                           POPCOUNT(~bVar70) + POPCOUNT(~bVar82) +
                                           POPCOUNT(~bVar43) + POPCOUNT(~bVar45) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar31 = lVar31 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar47 | (byte)uVar140
                                                                             | bVar48 | bVar96 |
                                                                            bVar52)) +
                                                                 POPCOUNT(~(bVar48 | bVar49 | bVar50
                                                                           | bVar54))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar96 | bVar51 | bVar55
                                                                           )) +
                                                                POPCOUNT(~(bVar50 | bVar53 | bVar56)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar52) + POPCOUNT(~bVar54) +
                                                  POPCOUNT(~bVar55) + POPCOUNT(~bVar56)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar29 = lVar29 + ((ulong)(byte)(POPCOUNT(~(bVar57 | (byte)uVar139 | bVar58 | bVar60 |
                                                     bVar64)) +
                                           POPCOUNT(~(bVar58 | bVar59 | bVar62 | bVar66)) +
                                           POPCOUNT(~(bVar60 | bVar63 | bVar67)) +
                                           POPCOUNT(~(bVar62 | bVar65 | bVar69)) +
                                           POPCOUNT(~bVar64) + POPCOUNT(~bVar66) +
                                           POPCOUNT(~bVar67) + POPCOUNT(~bVar69) ^ 0x3f) * 9 + 0x49
                            >> 6);
          lVar30 = lVar30 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar71 | (byte)uVar142
                                                                             | bVar72 | bVar74 |
                                                                            bVar77)) +
                                                                 POPCOUNT(~(bVar72 | bVar73 | bVar75
                                                                           | bVar79))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar74 | bVar76 | bVar80
                                                                           )) +
                                                                POPCOUNT(~(bVar75 | bVar78 | bVar81)
                                                                        ))) +
                                     (uint5)(byte)(POPCOUNT(~bVar77) + POPCOUNT(~bVar79) +
                                                  POPCOUNT(~bVar80) + POPCOUNT(~bVar81)) ^ 0x3f) * 9
                             + 0x49 >> 6);
          lVar34 = lVar34 + ((ulong)(byte)(POPCOUNT(~(bVar108 | (byte)uVar143 | bVar109 | bVar120 |
                                                     bVar114)) +
                                           POPCOUNT(~(bVar109 | bVar110 | bVar112 | bVar116)) +
                                           POPCOUNT(~(bVar120 | bVar113 | bVar117)) +
                                           POPCOUNT(~(bVar112 | bVar115 | bVar119)) +
                                           POPCOUNT(~bVar114) + POPCOUNT(~bVar116) +
                                           POPCOUNT(~bVar117) + POPCOUNT(~bVar119) ^ 0x3f) * 9 +
                             0x49 >> 6);
          lVar35 = lVar35 + ((ulong)((uint5)(uint3)((uint3)(byte)(POPCOUNT(~(bVar121 | (byte)uVar145
                                                                             | bVar122 | bVar124 |
                                                                            bVar127)) +
                                                                 POPCOUNT(~(bVar122 | bVar123 |
                                                                            bVar125 | bVar129))) +
                                                   (uint3)(byte)(POPCOUNT(~(bVar124 | bVar126 |
                                                                           bVar130)) +
                                                                POPCOUNT(~(bVar125 | bVar128 |
                                                                          bVar131)))) +
                                     (uint5)(byte)(POPCOUNT(~bVar127) + POPCOUNT(~bVar129) +
                                                  POPCOUNT(~bVar130) + POPCOUNT(~bVar131)) ^ 0x3f) *
                             9 + 0x49 >> 6);
          uVar18 = uVar18 - 8;
          plVar21 = plVar21 + 8;
        } while (uVar18 != 0);
        lVar22 = lVar34 + lVar32 + lVar29 + lVar22 + lVar35 + lVar33 + lVar30 + lVar31;
        if (uVar28 == uVar23) {
          return lVar22;
        }
      }
      lVar29 = uVar23 - uVar28;
      plVar21 = (long *)(lVar25 + uVar28 * 8);
      do {
        lVar22 = lVar22 + ((LZCOUNT(*plVar21 << 1 ^ *plVar21 >> 0x3f | 1) ^ 0x3fU) * 9 + 0x49 >> 6);
        lVar29 = lVar29 + -1;
        plVar21 = plVar21 + 1;
      } while (lVar29 != 0);
    }
  }
switchD_00528af8_default:
  return lVar22;
}


