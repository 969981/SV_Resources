/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007208f0; name: FUN_007208f0
 */


void FUN_007208f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  
  FUN_007202c0(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar14 = 0;
    puVar8 = param_1 + 3;
    puVar13 = param_1 + 2;
    do {
      puVar9 = puVar8;
      pbVar10 = (byte *)*puVar13;
      pbVar15 = (byte *)*puVar9;
      bVar4 = *pbVar10;
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar10 + 8);
      }
      bVar5 = *pbVar15;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar15 + 8);
      }
      sVar3 = uVar1;
      if (uVar2 <= uVar1) {
        sVar3 = uVar2;
      }
      if (sVar3 == 0) {
LAB_007209bc:
        if (uVar2 < uVar1) {
LAB_007209c4:
          lVar6 = lVar14;
          do {
            lVar16 = lVar6;
            *(undefined8 *)((long)param_1 + lVar16 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar16 + 0x10);
            if (lVar16 == -0x10) {
              puVar8 = param_1;
              goto LAB_00720940;
            }
            pbVar10 = *(byte **)((long)param_1 + lVar16 + 8);
            bVar4 = *pbVar10;
            uVar1 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar1 = *(ulong *)(pbVar10 + 8);
            }
            bVar5 = *pbVar15;
            uVar2 = (ulong)(bVar5 >> 1);
            if ((bVar5 & 1) != 0) {
              uVar2 = *(ulong *)(pbVar15 + 8);
            }
            sVar3 = uVar1;
            if (uVar2 <= uVar1) {
              sVar3 = uVar2;
            }
            if (sVar3 == 0) {
LAB_007209d0:
              iVar7 = -1;
              if (uVar1 <= uVar2) break;
            }
            else {
              pbVar12 = pbVar15 + 1;
              if ((bVar5 & 1) != 0) {
                pbVar12 = *(byte **)(pbVar15 + 0x10);
              }
              pbVar11 = *(byte **)(pbVar10 + 0x10);
              if ((bVar4 & 1) == 0) {
                pbVar11 = pbVar10 + 1;
              }
              iVar7 = memcmp(pbVar12,pbVar11,sVar3);
              if (iVar7 == 0) goto LAB_007209d0;
            }
            lVar6 = lVar16 + -8;
          } while (iVar7 < 0);
          puVar8 = (undefined8 *)((long)param_1 + lVar16 + 0x10);
LAB_00720940:
          *puVar8 = pbVar15;
        }
      }
      else {
        pbVar12 = *(byte **)(pbVar15 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar12 = pbVar15 + 1;
        }
        pbVar11 = *(byte **)(pbVar10 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar11 = pbVar10 + 1;
        }
        iVar7 = memcmp(pbVar12,pbVar11,sVar3);
        if (iVar7 == 0) goto LAB_007209bc;
        if (iVar7 < 0) goto LAB_007209c4;
      }
      lVar14 = lVar14 + 8;
      puVar8 = puVar9 + 1;
      puVar13 = puVar9;
    } while (puVar9 + 1 != param_2);
  }
  return;
}


