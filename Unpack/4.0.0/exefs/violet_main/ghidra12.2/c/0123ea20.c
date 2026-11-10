/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123ea20; name: FUN_0123ea20
 */


void FUN_0123ea20(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 local_78 [2];
  undefined4 *local_70;
  byte local_68;
  undefined1 local_67;
  
  pbVar3 = (byte *)((undefined4 *)*param_3 + 0x908);
  bVar6 = *pbVar3;
  uVar12 = (uint)bVar6;
  if (bVar6 != 0) {
    uVar15 = 0;
    puVar8 = (undefined4 *)*param_3;
    do {
      puVar17 = puVar8 + 0x23;
      if (((uint)uVar15 & 0xff) < uVar12) {
        local_70 = puVar8 + 2;
        local_67 = 1;
        local_68 = (byte)((uint)*puVar17 >> 0x19) & 7;
        uVar9 = 1;
        if (puVar8[2] != 0) {
          plVar11 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
          uVar9 = (**(code **)(*plVar11 + 0x4a8))();
        }
        local_67 = uVar9;
        FUN_0123ecdc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x120),local_78,&local_70);
        *puVar17 = local_78[0];
        uVar12 = (uint)*pbVar3;
      }
      uVar15 = uVar15 + 1;
      puVar8 = puVar17;
    } while (uVar15 < (byte)uVar12);
    lVar16 = *param_3;
    pbVar3 = (byte *)(lVar16 + 0x2420);
    bVar6 = *pbVar3;
    uVar12 = (uint)bVar6;
    if ((uVar12 != 0) && (uVar12 != 1)) {
      uVar18 = 0;
      do {
        uVar1 = uVar18 + 1;
        lVar13 = lVar16 + 8 + (ulong)(uVar18 & 0xff) * 0x8c;
        bVar7 = *pbVar3;
        lVar14 = lVar16 + 8 + (ulong)(uVar1 & 0xff) * 0x8c;
        lVar4 = lVar13;
        if ((uint)bVar7 <= (uVar18 & 0xff)) {
          lVar4 = 0;
        }
        lVar5 = lVar14;
        if ((uint)bVar7 <= (uVar1 & 0xff)) {
          lVar5 = 0;
        }
        if (*(uint *)(lVar4 + 0x84) <= *(uint *)(lVar5 + 0x84)) {
          if (*(uint *)(lVar4 + 0x84) == *(uint *)(lVar5 + 0x84)) {
            iVar10 = FUN_012421f0(param_1,2);
            if (iVar10 == 0) goto LAB_0123eb44;
            bVar7 = *pbVar3;
          }
          if (((uVar18 & 0xff) < (uint)bVar7) && ((uVar1 & 0xff) < (uint)bVar7)) {
            FUN_0123ef60(lVar13,lVar14);
          }
        }
LAB_0123eb44:
        uVar2 = uVar18 + 2;
        if (uVar2 != bVar6) {
          bVar7 = *pbVar3;
          lVar4 = lVar13;
          if ((uint)bVar7 <= (uVar18 & 0xff)) {
            lVar4 = 0;
          }
          lVar14 = lVar16 + (ulong)(uVar2 & 0xff) * 0x8c + 8;
          lVar5 = lVar14;
          if ((uint)bVar7 <= (uVar2 & 0xff)) {
            lVar5 = 0;
          }
          if (*(uint *)(lVar4 + 0x84) <= *(uint *)(lVar5 + 0x84)) {
            if (*(uint *)(lVar4 + 0x84) == *(uint *)(lVar5 + 0x84)) {
              iVar10 = FUN_012421f0(param_1,2);
              if (iVar10 == 0) goto LAB_0123eb80;
              bVar7 = *pbVar3;
            }
            if (((uVar18 & 0xff) < (uint)bVar7) && ((uVar2 & 0xff) < (uint)bVar7)) {
              FUN_0123ef60(lVar13,lVar14);
            }
          }
LAB_0123eb80:
          for (uVar2 = uVar18 + 3; uVar2 != bVar6; uVar2 = uVar2 + 1) {
            bVar7 = *pbVar3;
            lVar4 = lVar13;
            if ((uint)bVar7 <= (uVar18 & 0xff)) {
              lVar4 = 0;
            }
            lVar14 = lVar16 + (ulong)(uVar2 & 0xff) * 0x8c + 8;
            lVar5 = lVar14;
            if ((uint)bVar7 <= (uVar2 & 0xff)) {
              lVar5 = 0;
            }
            if (*(uint *)(lVar4 + 0x84) <= *(uint *)(lVar5 + 0x84)) {
              if (*(uint *)(lVar4 + 0x84) == *(uint *)(lVar5 + 0x84)) {
                iVar10 = FUN_012421f0(param_1,2);
                if (iVar10 == 0) goto LAB_0123ebf4;
                bVar7 = *pbVar3;
              }
              if (((uVar18 & 0xff) < (uint)bVar7) && ((uVar2 & 0xff) < (uint)bVar7)) {
                FUN_0123ef60(lVar13,lVar14);
              }
            }
LAB_0123ebf4:
          }
        }
        uVar18 = uVar1;
      } while (uVar1 != uVar12 - 1);
    }
  }
  return;
}


