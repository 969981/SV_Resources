/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00532a70; name: FUN_00532a70
 */


/* WARNING: Removing unreachable block (ram,0x00532ab0) */
/* WARNING: Removing unreachable block (ram,0x00532ab8) */

int FUN_00532a70(byte *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  if (param_1 == param_2) {
    while( true ) {
      bVar5 = *param_1;
      pbVar8 = param_1;
      if ((bVar5 == 0) || (bVar5 == 0x5c)) break;
      param_1 = param_1 + 1;
    }
  }
  else {
    bVar5 = *param_1;
    pbVar8 = param_2;
  }
  if (bVar5 != 0) {
    pbVar9 = pbVar8;
    do {
      while (pbVar4 = param_1 + 1, bVar5 != 0x5c) {
        pbVar8 = pbVar9 + 1;
        *pbVar9 = bVar5;
        bVar5 = *pbVar4;
        param_1 = pbVar4;
        pbVar9 = pbVar8;
        if (bVar5 == 0) goto switchD_00532b38_caseD_0;
      }
      pbVar8 = pbVar9;
      switch(*pbVar4) {
      case 0:
        goto switchD_00532b38_caseD_0;
      case 0x22:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 0x22;
        break;
      case 0x27:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 0x27;
        break;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
        bVar2 = param_1[2];
        bVar3 = *pbVar4 - 0x30;
        bVar5 = (bVar2 + bVar3 * '\b') - 0x30;
        pbVar8 = param_1 + 2;
        if ((bVar2 & 0xf8) != 0x30) {
          bVar5 = bVar3;
          pbVar8 = pbVar4;
        }
        bVar3 = pbVar8[1];
        bVar2 = (bVar3 + bVar5 * '\b') - 0x30;
        pbVar4 = pbVar8 + 1;
        if ((bVar3 & 0xf8) != 0x30) {
          bVar2 = bVar5;
          pbVar4 = pbVar8;
        }
        pbVar8 = pbVar9 + 1;
        *pbVar9 = bVar2;
        break;
      case 0x3f:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 0x3f;
        break;
      case 0x58:
      case 0x78:
        if ((param_1[2] - 0x30 < 10) ||
           ((uVar6 = param_1[2] - 0x41, uVar6 < 0x26 &&
            ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) != 0)))) {
          uVar6 = 0;
          while( true ) {
            bVar5 = pbVar4[1];
            uVar7 = (uint)bVar5;
            if ((9 < uVar7 - 0x30) &&
               ((0x25 < uVar7 - 0x41 ||
                ((1L << ((ulong)(uVar7 - 0x41) & 0x3f) & 0x3f0000003fU) == 0)))) break;
            uVar1 = bVar5 + 9;
            if (bVar5 < 0x3a) {
              uVar1 = uVar7;
            }
            uVar6 = uVar1 & 0xf | uVar6 << 4;
            pbVar4 = pbVar4 + 1;
          }
          pbVar8 = pbVar9 + 1;
          *pbVar9 = (byte)uVar6;
        }
        break;
      case 0x5c:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 0x5c;
        break;
      case 0x61:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 7;
        break;
      case 0x62:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 8;
        break;
      case 0x66:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 0xc;
        break;
      case 0x6e:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 10;
        break;
      case 0x72:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 0xd;
        break;
      case 0x74:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 9;
        break;
      case 0x76:
        pbVar8 = pbVar9 + 1;
        *pbVar9 = 0xb;
      }
      bVar5 = pbVar4[1];
      param_1 = pbVar4 + 1;
      pbVar9 = pbVar8;
    } while (bVar5 != 0);
  }
switchD_00532b38_caseD_0:
  *pbVar8 = 0;
  return (int)pbVar8 - (int)param_2;
}


