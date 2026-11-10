/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dd640; name: FUN_003dd640
 */


int FUN_003dd640(byte *param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 local_70 [8];
  ulong local_68;
  
  uVar11 = param_3 & 7;
  if (uVar11 == 2) {
    if ((param_2 & 1) == 0) goto LAB_003dd6b0;
    uVar6 = 0x81;
    uVar7 = 0xa5;
  }
  else {
    if ((uVar11 != 4) || ((param_2 & 3) == 0)) {
LAB_003dd6b0:
      if (param_2 == 0) {
        return 0;
      }
      pbVar1 = param_1 + (int)param_2;
      iVar10 = 0;
      if (uVar11 == 4) {
        pbVar8 = param_1;
        do {
          bVar2 = (param_4 & 1) != 0;
          uVar11 = 0;
          if (bVar2 && pbVar8 == param_1) {
            uVar11 = 0x20;
          }
          pbVar13 = pbVar8 + 4;
          local_68 = (ulong)*pbVar8 << 0x18 | (ulong)pbVar8[1] << 0x10 | (ulong)pbVar8[2] << 8 |
                     (ulong)pbVar8[3];
          if (bVar2 && pbVar13 == pbVar1) {
            uVar11 = 0x40;
          }
          if ((param_3 >> 3 & 1) == 0) {
            iVar3 = FUN_003dd940(local_68,uVar11 | param_4,param_5,param_6,param_7);
            if (iVar3 < 0) {
              return -1;
            }
            iVar10 = iVar3 + iVar10;
          }
          else {
            uVar4 = FUN_003de7b0(local_70,6);
            if (0 < (int)uVar4) {
              uVar12 = (ulong)uVar4;
              puVar9 = local_70;
              do {
                iVar3 = FUN_003dd940(*puVar9,uVar11 | param_4,param_5,param_6,param_7);
                if (iVar3 < 0) {
                  return -1;
                }
                iVar10 = iVar3 + iVar10;
                puVar9 = puVar9 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          pbVar8 = pbVar13;
        } while (pbVar13 != pbVar1);
        return iVar10;
      }
      pbVar8 = param_1;
      do {
        while( true ) {
          uVar4 = 0;
          if (pbVar8 == param_1 && (param_4 & 1) != 0) {
            uVar4 = 0x20;
          }
          if (uVar11 == 0) {
            uVar5 = FUN_003de4e0(pbVar8,param_2,&local_68);
            if ((int)uVar5 < 0) {
              return -1;
            }
            pbVar13 = pbVar8 + uVar5;
            param_2 = param_2 - uVar5;
          }
          else if (uVar11 == 1) {
            pbVar13 = pbVar8 + 1;
            local_68 = (ulong)*pbVar8;
          }
          else {
            if (uVar11 != 2) {
              return -1;
            }
            pbVar13 = pbVar8 + 2;
            local_68 = (ulong)CONCAT11(*pbVar8,pbVar8[1]);
          }
          if (pbVar13 == pbVar1 && (param_4 & 1) != 0) {
            uVar4 = 0x40;
          }
          pbVar8 = pbVar13;
          if ((param_3 >> 3 & 1) != 0) break;
          iVar3 = FUN_003dd940(local_68,uVar4 | param_4,param_5,param_6,param_7);
          if (iVar3 < 0) {
            return -1;
          }
          iVar10 = iVar3 + iVar10;
          if (pbVar13 == pbVar1) {
            return iVar10;
          }
        }
        uVar5 = FUN_003de7b0(local_70,6,local_68);
        if (0 < (int)uVar5) {
          uVar12 = (ulong)uVar5;
          puVar9 = local_70;
          do {
            iVar3 = FUN_003dd940(*puVar9,uVar4 | param_4,param_5,param_6,param_7);
            if (iVar3 < 0) {
              return -1;
            }
            iVar10 = iVar3 + iVar10;
            puVar9 = puVar9 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      } while (pbVar13 != pbVar1);
      return iVar10;
    }
    uVar6 = 0x85;
    uVar7 = 0x9f;
  }
  FUN_004806c0(0xd,0x8e,uVar6,"external/openssl/crypto/asn1/a_strex.c",uVar7);
  return -1;
}


