/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00817034; name: FUN_00817034
 */


void FUN_00817034(byte *param_1,long param_2)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  void *pvVar15;
  bool bVar16;
  
  FUN_00819aa0(0xc);
  puVar7 = PTR_DAT_047d0860;
  puVar6 = PTR_LAB_047cba48;
  if (1 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50)) {
    uVar10 = 0;
    bVar16 = false;
    do {
      do {
        lVar14 = *(long *)(param_2 + 0x860);
        uVar10 = uVar10 & 0xffff;
        if (*(long *)(lVar14 + uVar10 * 0xb0 + 8) != 0) {
          lVar12 = lVar14 + uVar10 * 0xb0;
          bVar4 = *(byte *)(lVar12 + 0x60);
          uVar11 = (ulong)(bVar4 >> 1);
          sVar2 = uVar11;
          if ((bVar4 & 1) != 0) {
            sVar2 = *(size_t *)(lVar12 + 0x68);
          }
          bVar5 = *param_1;
          sVar3 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar3 = *(size_t *)(param_1 + 8);
          }
          if (sVar2 == sVar3) {
            pvVar15 = *(void **)(lVar14 + uVar10 * 0xb0 + 0x70);
            if ((bVar4 & 1) == 0) {
              pvVar15 = (void *)(lVar12 + 0x61);
            }
            pbVar9 = param_1 + 1;
            if ((bVar5 & 1) != 0) {
              pbVar9 = *(byte **)(param_1 + 0x10);
            }
            if ((bVar4 & 1) == 0) {
              if (sVar2 != 0) {
                pbVar13 = (byte *)(lVar12 + 0x61);
                do {
                  if (*pbVar13 != *pbVar9) goto LAB_00817154;
                  uVar11 = uVar11 - 1;
                  pbVar13 = pbVar13 + 1;
                  pbVar9 = pbVar9 + 1;
                } while (uVar11 != 0);
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pvVar15,pbVar9,sVar2), iVar8 != 0))
            goto LAB_00817154;
            bVar16 = true;
          }
LAB_00817154:
          lVar14 = *(long *)(param_2 + 0x860) + uVar10 * 0xb0;
          bVar4 = *(byte *)(lVar14 + 0x78);
          uVar11 = (ulong)(bVar4 >> 1);
          sVar2 = uVar11;
          if ((bVar4 & 1) != 0) {
            sVar2 = *(size_t *)(lVar14 + 0x80);
          }
          bVar5 = *param_1;
          sVar3 = (ulong)(bVar5 >> 1);
          if ((bVar5 & 1) != 0) {
            sVar3 = *(size_t *)(param_1 + 8);
          }
          if (sVar2 == sVar3) {
            pvVar15 = *(void **)(*(long *)(param_2 + 0x860) + uVar10 * 0xb0 + 0x88);
            if ((bVar4 & 1) == 0) {
              pvVar15 = (void *)(lVar14 + 0x79);
            }
            pbVar9 = param_1 + 1;
            if ((bVar5 & 1) != 0) {
              pbVar9 = *(byte **)(param_1 + 0x10);
            }
            if ((bVar4 & 1) == 0) {
              if (sVar2 != 0) {
                pbVar13 = (byte *)(lVar14 + 0x79);
                do {
                  if (*pbVar13 != *pbVar9) goto LAB_008171e8;
                  uVar11 = uVar11 - 1;
                  pbVar13 = pbVar13 + 1;
                  pbVar9 = pbVar9 + 1;
                } while (uVar11 != 0);
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pvVar15,pbVar9,sVar2), iVar8 != 0))
            goto LAB_008171e8;
            bVar16 = true;
          }
        }
LAB_008171e8:
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar1;
      } while ((int)(uVar1 & 0xffff) < (int)(*(ushort *)(*(long *)puVar7 + 0x50) - 1));
      if (!bVar16) {
        return;
      }
      if ((*param_1 & 1) != 0) {
        FUN_0049e790(puVar6,*(undefined8 *)(param_1 + 0x10));
      }
      FUN_00819aa0(param_1,0xc);
      uVar10 = 0;
      bVar16 = false;
    } while (1 < *(ushort *)(*(long *)puVar7 + 0x50));
  }
  return;
}


