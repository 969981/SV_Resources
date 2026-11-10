/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271be50; name: FUN_0271be50
 */


bool FUN_0271be50(byte *param_1,byte *param_2)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  byte *pbVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if (param_2[-8] == *param_1) {
      sVar3 = *(short *)(param_2 + -2);
      sVar2 = *(short *)(param_1 + 6);
      if (sVar3 == sVar2) {
        sVar3 = *(short *)(param_2 + -6);
        sVar2 = *(short *)(param_1 + 2);
      }
      if (sVar2 <= sVar3) {
        return true;
      }
    }
    else if (*param_1 <= param_2[-8]) {
      return true;
    }
    uVar10 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = uVar10;
    break;
  case 3:
    FUN_00edbb30(param_1,param_1 + 8,param_2 + -8);
    break;
  case 4:
    FUN_00edb9e0(param_1,param_1 + 8,param_1 + 0x10,param_2 + -8);
    break;
  case 5:
    FUN_00edbcb0(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,param_2 + -8);
    break;
  default:
    FUN_00edbb30(param_1,param_1 + 8,param_1 + 0x10);
    if (param_1 + 0x18 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      pbVar4 = param_1 + 0x18;
      pbVar8 = param_1 + 0x10;
      do {
        pbVar9 = pbVar4;
        if (*pbVar9 == *pbVar8) {
          sVar2 = *(short *)(pbVar9 + 6);
          sVar3 = *(short *)(pbVar8 + 6);
          if (sVar2 == sVar3) {
            sVar2 = *(short *)(pbVar9 + 2);
            sVar3 = *(short *)(pbVar8 + 2);
          }
          if (sVar2 < sVar3) goto LAB_0271bef0;
        }
        else if (*pbVar9 < *pbVar8) {
LAB_0271bef0:
          uVar10 = *(undefined8 *)pbVar9;
          *(undefined8 *)pbVar9 = *(undefined8 *)pbVar8;
          if (pbVar8 != param_1) {
            lVar11 = lVar6;
            do {
              uVar1 = (uint)uVar10 & 0xff;
              if (param_1[lVar11 + 8] == uVar1) {
                sVar2 = (short)((ulong)uVar10 >> 0x30);
                if (*(short *)(param_1 + lVar11 + 0xe) == sVar2) {
                  if ((int)*(short *)(param_1 + lVar11 + 10) <= (int)(uint)uVar10 >> 0x10)
                  goto LAB_0271bf90;
                }
                else if (*(short *)(param_1 + lVar11 + 0xe) <= sVar2) {
                  pbVar8 = param_1 + lVar11 + 0x10;
                  goto LAB_0271bf90;
                }
              }
              else if (param_1[lVar11 + 8] <= uVar1) goto LAB_0271bf90;
              pbVar8 = pbVar8 + -8;
              bVar5 = lVar11 != -8;
              *(undefined8 *)(param_1 + lVar11 + 0x10) = *(undefined8 *)(param_1 + lVar11 + 8);
              lVar11 = lVar11 + -8;
            } while (bVar5);
            pbVar8 = param_1;
          }
LAB_0271bf90:
          iVar7 = iVar7 + 1;
          *(undefined8 *)pbVar8 = uVar10;
          if (iVar7 == 8) {
            return pbVar9 + 8 == param_2;
          }
        }
        lVar6 = lVar6 + 8;
        pbVar4 = pbVar9 + 8;
        pbVar8 = pbVar9;
      } while (pbVar9 + 8 != param_2);
    }
  }
  return true;
}


