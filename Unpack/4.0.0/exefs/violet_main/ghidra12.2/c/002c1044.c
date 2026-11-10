/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c1044; name: FUN_002c1044
 */


bool FUN_002c1044(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  uVar10 = FUN_002c124c();
  if ((uVar10 & 1) != 0) {
    pbVar3 = *(byte **)(param_1 + 0x28);
    pbVar5 = *(byte **)(param_1 + 0x30);
    pbVar4 = *(byte **)(param_2 + 0x28);
    if ((long)pbVar5 - (long)pbVar3 == *(long *)(param_2 + 0x30) - (long)pbVar4) {
      while( true ) {
        if (pbVar3 == pbVar5) {
          bVar8 = (*(char *)(param_1 + 0x40) != '\0') == (*(char *)(param_2 + 0x40) != '\0');
          if ((bVar8) && (*(char *)(param_1 + 0x40) != '\0')) {
            bVar8 = *(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44);
          }
          return bVar8;
        }
        bVar6 = *pbVar3;
        sVar1 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar3 + 8);
        }
        bVar7 = *pbVar4;
        sVar2 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar4 + 8);
        }
        if (sVar1 != sVar2) break;
        pbVar11 = *(byte **)(pbVar3 + 0x10);
        if ((bVar6 & 1) == 0) {
          pbVar11 = pbVar3 + 1;
        }
        pbVar12 = *(byte **)(pbVar4 + 0x10);
        if ((bVar7 & 1) == 0) {
          pbVar12 = pbVar4 + 1;
        }
        if ((bVar6 & 1) == 0) {
          if (sVar1 != 0) {
            uVar10 = 0;
            do {
              if (pbVar3[uVar10 + 1] != pbVar12[uVar10]) {
                return false;
              }
              uVar10 = uVar10 + 1;
            } while (bVar6 >> 1 != uVar10);
          }
        }
        else if ((sVar1 != 0) && (iVar9 = memcmp(pbVar11,pbVar12,sVar1), iVar9 != 0)) {
          return false;
        }
        if (*(int *)(pbVar3 + 0x18) != *(int *)(pbVar4 + 0x18)) {
          return false;
        }
        if (*(long *)(pbVar3 + 0x20) != *(long *)(pbVar4 + 0x20)) {
          return false;
        }
        if (*(long *)(pbVar3 + 0x28) != *(long *)(pbVar4 + 0x28)) {
          return false;
        }
        bVar6 = pbVar3[0x30];
        bVar7 = pbVar4[0x30];
        sVar1 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar1 = *(size_t *)(pbVar3 + 0x38);
        }
        sVar2 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar2 = *(size_t *)(pbVar4 + 0x38);
        }
        if (sVar1 != sVar2) {
          return false;
        }
        pbVar11 = *(byte **)(pbVar3 + 0x40);
        if ((bVar6 & 1) == 0) {
          pbVar11 = pbVar3 + 0x31;
        }
        pbVar12 = *(byte **)(pbVar4 + 0x40);
        if ((bVar7 & 1) == 0) {
          pbVar12 = pbVar4 + 0x31;
        }
        if ((bVar6 & 1) == 0) {
          if (sVar1 != 0) {
            uVar10 = 0;
            do {
              if (pbVar3[uVar10 + 0x31] != pbVar12[uVar10]) {
                return false;
              }
              uVar10 = uVar10 + 1;
            } while (bVar6 >> 1 != uVar10);
          }
        }
        else if ((sVar1 != 0) && (iVar9 = memcmp(pbVar11,pbVar12,sVar1), iVar9 != 0)) {
          return false;
        }
        if (pbVar3[0x50] != pbVar4[0x50]) {
          return false;
        }
        if (pbVar3[0x51] != pbVar4[0x51]) {
          return false;
        }
        pbVar3 = pbVar3 + 0x58;
        pbVar4 = pbVar4 + 0x58;
      }
    }
  }
  return false;
}


