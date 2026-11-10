/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0f710; name: FUN_00c0f710
 */


int FUN_00c0f710(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
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
      pbVar9 = param_1;
      if ((bVar5 == 0) || (bVar5 == 0x5c)) break;
      param_1 = param_1 + 1;
    }
  }
  else {
    bVar5 = *param_1;
    pbVar9 = param_2;
  }
  if (bVar5 != 0) {
    do {
      pbVar4 = param_1 + 1;
      if (bVar5 == 0x5c) {
        bVar5 = *pbVar4;
        uVar6 = (uint)bVar5;
        if (bVar5 < 0x3f) {
          if (bVar5 < 0x30) {
            if (uVar6 == 0x22) {
              *pbVar9 = 0x22;
              pbVar9 = pbVar9 + 1;
            }
            else if (uVar6 == 0x27) {
              *pbVar9 = 0x27;
              pbVar9 = pbVar9 + 1;
            }
            else if (uVar6 == 0) break;
          }
          else {
            uVar6 = uVar6 - 0x30;
            if (uVar6 < 8) {
              uVar7 = (uint)param_1[2];
              uVar2 = (uVar7 + uVar6 * 8) - 0x30;
              pbVar8 = param_1 + 2;
              if ((uVar7 & 0xf8) != 0x30) {
                uVar2 = uVar6;
                pbVar8 = pbVar4;
              }
              bVar3 = pbVar8[1];
              bVar5 = (bVar3 + (byte)uVar2 * '\b') - 0x30;
              pbVar4 = pbVar8 + 1;
              if ((bVar3 & 0xf8) != 0x30) {
                bVar5 = (byte)uVar2;
                pbVar4 = pbVar8;
              }
              *pbVar9 = bVar5;
              pbVar9 = pbVar9 + 1;
            }
          }
        }
        else if (bVar5 < 0x62) {
          if (bVar5 < 0x5c) {
            if (uVar6 == 0x3f) {
              *pbVar9 = 0x3f;
              pbVar9 = pbVar9 + 1;
            }
            else if (uVar6 == 0x58) goto switchD_00c0f7c4_caseD_78;
          }
          else if (uVar6 == 0x5c) {
            *pbVar9 = 0x5c;
            pbVar9 = pbVar9 + 1;
          }
          else if (uVar6 == 0x61) {
            *pbVar9 = 7;
            pbVar9 = pbVar9 + 1;
          }
        }
        else {
          switch(uVar6) {
          case 0x6e:
            *pbVar9 = 10;
            pbVar9 = pbVar9 + 1;
            break;
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x73:
          case 0x75:
          case 0x77:
            break;
          case 0x72:
            *pbVar9 = 0xd;
            pbVar9 = pbVar9 + 1;
            break;
          case 0x74:
            *pbVar9 = 9;
            pbVar9 = pbVar9 + 1;
            break;
          case 0x76:
            *pbVar9 = 0xb;
            pbVar9 = pbVar9 + 1;
            break;
          case 0x78:
switchD_00c0f7c4_caseD_78:
            if (9 < param_1[2] - 0x30) {
              uVar6 = param_1[2] - 0x41;
              if ((0x25 < uVar6) || ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) == 0)) break;
            }
            bVar5 = 0;
            while( true ) {
              bVar3 = pbVar4[1];
              if ((9 < bVar3 - 0x30) &&
                 ((uVar6 = bVar3 - 0x41, 0x25 < uVar6 ||
                  ((1L << ((ulong)uVar6 & 0x3f) & 0x3f0000003fU) == 0)))) break;
              bVar1 = bVar3 + 9;
              if (bVar3 < 0x3a) {
                bVar1 = bVar3;
              }
              bVar5 = bVar1 & 0xf | bVar5 << 4;
              pbVar4 = pbVar4 + 1;
            }
            *pbVar9 = bVar5;
            pbVar9 = pbVar9 + 1;
            break;
          default:
            if (uVar6 == 0x62) {
              *pbVar9 = 8;
              pbVar9 = pbVar9 + 1;
            }
            else if (uVar6 == 0x66) {
              *pbVar9 = 0xc;
              pbVar9 = pbVar9 + 1;
            }
          }
        }
        param_1 = pbVar4 + 1;
        pbVar8 = pbVar9;
      }
      else {
        pbVar8 = pbVar9 + 1;
        *pbVar9 = bVar5;
        param_1 = pbVar4;
      }
      bVar5 = *param_1;
      pbVar9 = pbVar8;
    } while (bVar5 != 0);
  }
  *pbVar9 = 0;
  return (int)pbVar9 - (int)param_2;
}


