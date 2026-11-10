/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d774c; name: FUN_002d774c
 */


undefined8 FUN_002d774c(long *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ostream *this;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  *(undefined4 *)(param_1 + 0xe) = 0;
  lVar16 = param_1[1];
  lVar15 = param_1[2];
  uVar6 = (param_3 - (int)lVar16) +
          ((int)lVar15 + 1) * (uint)*(ushort *)(*(long *)(*param_1 + 0x50) + (long)param_2 * 2);
  uVar8 = uVar6 + 0x3f;
  if (-1 < (int)uVar6) {
    uVar8 = uVar6;
  }
  uVar10 = 1L << ((ulong)uVar6 & 0x3f);
  uVar11 = *(ulong *)(param_1[8] + (long)((int)uVar8 >> 6) * 8);
  if ((uVar10 & uVar11) == 0) {
    *(ulong *)(param_1[8] + ((long)((ulong)uVar8 << 0x20) >> 0x26) * 8) = uVar10 | uVar11;
    FUN_002d75b4();
    uVar10 = (ulong)*(uint *)(param_1 + 0xe);
    if (0 < (int)*(uint *)(param_1 + 0xe)) {
      uVar14 = 0;
      pbVar1 = (byte *)(lVar16 + lVar15);
LAB_002d7824:
      while( true ) {
        uVar10 = (long)(int)uVar10 - 1;
        *(int *)(param_1 + 0xe) = (int)uVar10;
        puVar2 = (uint *)(param_1[0xc] + uVar10 * 0x10);
        uVar8 = *puVar2;
        uVar11 = (ulong)uVar8;
        pbVar13 = *(byte **)(puVar2 + 2);
        if (-1 < (int)uVar8) break;
        *(byte **)(param_1[10] +
                  (long)*(int *)(*(long *)(*param_1 + 0x60) + (long)(int)-uVar8 * 8 + 4) * 8) =
             pbVar13;
        if ((int)uVar10 < 1) {
          return uVar14;
        }
      }
      uVar8 = puVar2[1];
      if (0 < (int)uVar8) {
        puVar2[1] = uVar8 - 1;
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
        pbVar13 = pbVar13 + uVar8;
      }
LAB_002d786c:
      lVar16 = *(long *)(*param_1 + 0x60);
      iVar7 = (int)uVar11;
      puVar2 = (uint *)(lVar16 + (long)iVar7 * 8);
      uVar8 = *puVar2;
      if (6 < (uVar8 & 7) - 1) {
        FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/bitstate.cc",0xab);
                    /* try { // try from 002d7b5c to 002d7b77 has its CatchHandler @ 002d7b90 */
        this = std::__put_character_sequence<char,std::char_traits<char>>
                         (aoStack_168,"Unexpected opcode: ",0x13);
        std::ostream::operator<<(this,*puVar2 & 7);
        FUN_002cc97c(auStack_170);
        return 0;
      }
      lVar15 = (long)iVar7;
      switch(uVar8 & 7) {
      case 1:
        uVar11 = (ulong)(uVar8 >> 4);
        uVar6 = *(uint *)(lVar16 + uVar11 * 8);
        uVar8 = uVar6 & 7;
        if (uVar8 == 6) {
          uVar8 = *(uint *)(lVar16 + ((ulong)(uVar6 >> 1) & 0x7ffffff8)) & 7;
        }
        if (uVar8 == 2) {
          uVar11 = (ulong)*(uint *)(lVar16 + lVar15 * 8 + 4);
          pbVar13 = pbVar1;
          goto LAB_002d786c;
        }
        if (*(char *)((long)param_1 + 0x29) != '\0') {
          pbVar13 = pbVar1;
          goto LAB_002d786c;
        }
        break;
      case 2:
        uVar8 = 0xffffffff;
        if (pbVar13 < pbVar1) {
          uVar8 = (uint)*pbVar13;
        }
        lVar16 = lVar16 + lVar15 * 8;
        uVar6 = uVar8 + 0x20;
        if ((*(ushort *)(lVar16 + 6) & (ushort)(uVar8 - 0x41 < 0x1a)) == 0) {
          uVar6 = uVar8;
        }
        if (((int)(uint)*(byte *)(lVar16 + 4) <= (int)uVar6) &&
           ((int)uVar6 <= (int)(uint)*(byte *)(lVar16 + 5))) {
          uVar8 = (uint)(*(ushort *)(lVar16 + 6) >> 1);
          if (uVar8 != 0) {
            FUN_002d75b4(param_1,iVar7 + uVar8,pbVar13);
          }
          pbVar13 = pbVar13 + 1;
          goto LAB_002d7aac;
        }
        break;
      case 3:
        if ((uVar8 >> 3 & 1) == 0) {
          FUN_002d75b4(param_1,iVar7 + 1,pbVar13);
        }
        puVar17 = (uint *)(lVar16 + lVar15 * 8 + 4);
        uVar8 = *puVar17;
        if ((-1 < (int)uVar8) && ((int)uVar8 < (int)param_1[0xb])) {
          FUN_002d75b4(param_1,-iVar7,*(undefined8 *)(param_1[10] + (ulong)uVar8 * 8));
          *(byte **)(param_1[10] + (long)(int)*puVar17 * 8) = pbVar13;
        }
        goto LAB_002d7aac;
      case 4:
        uVar8 = *(uint *)(lVar16 + lVar15 * 8 + 4);
        uVar6 = FUN_002d08f8(param_1 + 3,pbVar13);
        if ((uVar8 & (uVar6 ^ 0xffffffff)) == 0) {
          if (((byte)*puVar2 >> 3 & 1) == 0) goto LAB_002d7a9c;
          goto LAB_002d7aac;
        }
        break;
      case 5:
        if ((pbVar13 == pbVar1) || (*(char *)((long)param_1 + 0x2a) == '\0')) {
          lVar16 = param_1[7];
          if ((int)lVar16 == 0) {
            return 1;
          }
          *(byte **)(param_1[10] + 8) = pbVar13;
          plVar9 = (long *)param_1[6];
          if (((*plVar9 == 0) ||
              ((*(char *)((long)param_1 + 0x29) != '\0' && ((byte *)(*plVar9 + plVar9[1]) < pbVar13)
               ))) && (0 < (int)lVar16)) {
            lVar16 = *(long *)param_1[10];
            lVar15 = ((long *)param_1[10])[1];
            *plVar9 = lVar16;
            plVar9[1] = lVar15 - lVar16;
            if (1 < (int)param_1[7]) {
              lVar16 = 0;
              lVar15 = 1;
              do {
                lVar4 = *(long *)(param_1[10] + lVar16 + 0x10);
                lVar5 = *(long *)(param_1[10] + lVar16 + 0x18);
                lVar3 = param_1[6] + lVar16;
                lVar16 = lVar16 + 0x10;
                lVar15 = lVar15 + 1;
                *(long *)(lVar3 + 0x10) = lVar4;
                *(long *)(lVar3 + 0x18) = lVar5 - lVar4;
              } while (lVar15 < (int)param_1[7]);
            }
          }
          uVar14 = 1;
          if (pbVar13 == pbVar1) {
            return 1;
          }
          if (*(char *)((long)param_1 + 0x29) == '\0') {
            return 1;
          }
        }
        break;
      case 6:
        if ((uVar8 >> 3 & 1) == 0) {
LAB_002d7a9c:
          FUN_002d75b4(param_1,iVar7 + 1,pbVar13);
        }
LAB_002d7aac:
        uVar11 = (ulong)(*puVar2 >> 4);
        uVar6 = ((int)pbVar13 - (int)param_1[1]) +
                ((int)param_1[2] + 1) * (uint)*(ushort *)(*(long *)(*param_1 + 0x50) + uVar11 * 2);
        uVar8 = uVar6 + 0x3f;
        if (-1 < (int)uVar6) {
          uVar8 = uVar6;
        }
        uVar12 = 1L << ((ulong)uVar6 & 0x3f);
        uVar10 = *(ulong *)(param_1[8] + (long)((int)uVar8 >> 6) * 8);
        if ((uVar12 & uVar10) == 0) goto code_r0x002d7af8;
      case 7:
        goto switchD_002d789c_caseD_7;
      }
      if (((byte)*puVar2 >> 3 & 1) != 0) goto switchD_002d789c_caseD_7;
      uVar11 = (ulong)(iVar7 + 1);
      goto LAB_002d786c;
    }
  }
  return 0;
code_r0x002d7af8:
  *(ulong *)(param_1[8] + ((long)((ulong)uVar8 << 0x20) >> 0x26) * 8) = uVar12 | uVar10;
  goto LAB_002d786c;
switchD_002d789c_caseD_7:
  uVar10 = (ulong)*(uint *)(param_1 + 0xe);
  if ((int)*(uint *)(param_1 + 0xe) < 1) {
    return uVar14;
  }
  goto LAB_002d7824;
}


