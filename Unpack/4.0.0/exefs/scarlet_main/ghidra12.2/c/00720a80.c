/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00720a80; name: FUN_00720a80
 */


bool FUN_00720a80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    pbVar11 = (byte *)*param_1;
    bVar4 = *pbVar11;
    pbVar16 = (byte *)param_2[-1];
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar11 + 8);
    }
    bVar5 = *pbVar16;
    uVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar16 + 8);
    }
    sVar3 = uVar1;
    if (uVar2 <= uVar1) {
      sVar3 = uVar2;
    }
    if (sVar3 == 0) {
LAB_00720cfc:
      if (uVar1 <= uVar2) {
        return true;
      }
    }
    else {
      pbVar13 = *(byte **)(pbVar16 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar13 = pbVar16 + 1;
      }
      pbVar12 = *(byte **)(pbVar11 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar12 = pbVar11 + 1;
      }
      iVar7 = memcmp(pbVar13,pbVar12,sVar3);
      if (iVar7 == 0) goto LAB_00720cfc;
      if (-1 < iVar7) {
        return true;
      }
    }
    *param_1 = pbVar16;
    param_2[-1] = pbVar11;
    break;
  case 3:
    FUN_007202c0(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_007204f0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_007206b0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_007202c0(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar15 = 0;
      iVar7 = 0;
      puVar9 = param_1 + 3;
      puVar14 = param_1 + 2;
      do {
        puVar10 = puVar9;
        pbVar11 = (byte *)*puVar14;
        pbVar16 = (byte *)*puVar10;
        bVar4 = *pbVar11;
        uVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar11 + 8);
        }
        bVar5 = *pbVar16;
        uVar2 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          uVar2 = *(ulong *)(pbVar16 + 8);
        }
        sVar3 = uVar1;
        if (uVar2 <= uVar1) {
          sVar3 = uVar2;
        }
        if (sVar3 == 0) {
LAB_00720c00:
          if (uVar2 < uVar1) {
LAB_00720c08:
            lVar6 = lVar15;
            do {
              lVar17 = lVar6;
              *(undefined8 *)((long)param_1 + lVar17 + 0x18) =
                   *(undefined8 *)((long)param_1 + lVar17 + 0x10);
              if (lVar17 == -0x10) {
                puVar9 = param_1;
                goto LAB_00720b74;
              }
              pbVar11 = *(byte **)((long)param_1 + lVar17 + 8);
              bVar4 = *pbVar11;
              uVar1 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                uVar1 = *(ulong *)(pbVar11 + 8);
              }
              bVar5 = *pbVar16;
              uVar2 = (ulong)(bVar5 >> 1);
              if ((bVar5 & 1) != 0) {
                uVar2 = *(ulong *)(pbVar16 + 8);
              }
              sVar3 = uVar1;
              if (uVar2 <= uVar1) {
                sVar3 = uVar2;
              }
              if (sVar3 == 0) {
LAB_00720c14:
                iVar8 = -1;
                if (uVar1 <= uVar2) break;
              }
              else {
                pbVar13 = pbVar16 + 1;
                if ((bVar5 & 1) != 0) {
                  pbVar13 = *(byte **)(pbVar16 + 0x10);
                }
                pbVar12 = *(byte **)(pbVar11 + 0x10);
                if ((bVar4 & 1) == 0) {
                  pbVar12 = pbVar11 + 1;
                }
                iVar8 = memcmp(pbVar13,pbVar12,sVar3);
                if (iVar8 == 0) goto LAB_00720c14;
              }
              lVar6 = lVar17 + -8;
            } while (iVar8 < 0);
            puVar9 = (undefined8 *)((long)param_1 + lVar17 + 0x10);
LAB_00720b74:
            iVar7 = iVar7 + 1;
            *puVar9 = pbVar16;
            if (iVar7 == 8) {
              return puVar10 + 1 == param_2;
            }
          }
        }
        else {
          pbVar13 = *(byte **)(pbVar16 + 0x10);
          if ((bVar5 & 1) == 0) {
            pbVar13 = pbVar16 + 1;
          }
          pbVar12 = *(byte **)(pbVar11 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar12 = pbVar11 + 1;
          }
          iVar8 = memcmp(pbVar13,pbVar12,sVar3);
          if (iVar8 == 0) goto LAB_00720c00;
          if (iVar8 < 0) goto LAB_00720c08;
        }
        lVar15 = lVar15 + 8;
        puVar9 = puVar10 + 1;
        puVar14 = puVar10;
      } while (puVar10 + 1 != param_2);
    }
  }
  return true;
}


