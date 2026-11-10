/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016323d4; name: FUN_016323d4
 */


void FUN_016323d4(long param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if ((uint)param_2[1] + (uint)*param_2 != 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar11 = (ulong)*(byte *)(lVar10 + 0x938);
    uVar9 = 0;
    do {
      iVar2 = *(int *)(param_2 + uVar9 * 0xc + 8);
      uVar4 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),iVar2);
      *(undefined1 *)(lVar10 + uVar11 * 0xc4 + (uVar4 & 0xff) * 2 + (uVar4 & 0xff) + 0x25) = 1;
      if ((uint)param_2[1] + (uint)*param_2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar6 = (ulong)param_2[1] + (ulong)*param_2;
        if (uVar6 < 2) {
          uVar6 = 1;
        }
        pbVar8 = param_2 + 0xe;
        do {
          if (*(int *)(pbVar8 + -6) == iVar2) {
            if ((*pbVar8 >> 1 & 1) != 0) {
              uVar7 = 2;
              break;
            }
            if ((*pbVar8 & 1) != 0) {
              uVar7 = 1;
              break;
            }
          }
          uVar7 = 0;
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 0xc;
        } while (uVar6 != 0);
      }
      lVar3 = (uVar4 & 0xff) * 3;
      *(undefined1 *)(lVar10 + uVar11 * 0xc4 + lVar3 + 0x26) = uVar7;
      if ((uint)param_2[1] + (uint)*param_2 != 0) {
        uVar1 = (uint)param_2[1] + (uint)*param_2;
        uVar4 = (ulong)uVar1;
        if (uVar1 < 2) {
          uVar4 = 1;
        }
        pbVar8 = param_2;
        do {
          if (*(int *)(pbVar8 + 8) == iVar2) {
            bVar5 = pbVar8[0xc];
            goto LAB_01632508;
          }
          uVar4 = uVar4 - 1;
          pbVar8 = pbVar8 + 0xc;
        } while (uVar4 != 0);
      }
      bVar5 = 7;
LAB_01632508:
      *(byte *)(lVar10 + uVar11 * 0xc4 + lVar3 + 0x27) = bVar5;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)param_2[1] + (ulong)*param_2);
  }
  return;
}


