/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011d3f10; name: FUN_011d3f10
 */


long * FUN_011d3f10(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long *plVar9;
  byte *pbVar10;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x499) >> 3 & 1) != 0) {
    uVar8 = 0;
    do {
      lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 8);
      uVar4 = FUN_00f7e2a0(*(undefined4 *)(lVar6 + 0x36c),*(undefined1 *)(lVar6 + 0x370),
                           uVar8 & 0xffffffff);
      if ((uVar4 & 1) == 0) goto LAB_011d3fe4;
      iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
      if (iVar1 == 2) {
        bVar2 = *(byte *)(*(long *)(param_1 + 0x10) + 0x95);
        uVar4 = (ulong)bVar2;
        if (bVar2 < 5) {
          puVar7 = &DAT_03d6a45a;
          goto LAB_011d3fc8;
        }
LAB_011d4008:
        lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x30);
        pbVar10 = (byte *)(lVar6 + uVar8 * 0x38 + 0x58);
        if (*pbVar10 != 0) {
          uVar4 = 0;
          do {
            plVar9 = *(long **)(lVar6 + uVar8 * 0x38 + 0x28 + uVar4 * 8);
            uVar5 = (**(code **)(*plVar9 + 0x78))(plVar9);
            if ((uVar5 & 1) == 0) {
              return plVar9;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *pbVar10);
        }
      }
      else {
        if (iVar1 != 1) {
          if ((iVar1 == 0) &&
             (bVar2 = *(byte *)(*(long *)(param_1 + 0x10) + 0x95), uVar4 = (ulong)bVar2, bVar2 < 5))
          {
            puVar7 = &DAT_03d6a450;
            goto LAB_011d3fc8;
          }
          goto LAB_011d4008;
        }
        bVar2 = *(byte *)(*(long *)(param_1 + 0x10) + 0x95);
        uVar4 = (ulong)bVar2;
        if (4 < bVar2) goto LAB_011d4008;
        puVar7 = &DAT_03d6a455;
LAB_011d3fc8:
        bVar2 = puVar7[uVar4];
        if (1 < bVar2) goto LAB_011d4008;
        bVar3 = puVar7[uVar8];
        if (bVar2 != bVar3 && bVar3 != 3) {
          if (bVar3 == 4) {
            if (bVar2 == 0) goto LAB_011d4008;
          }
          else if ((bVar3 != 5) || (bVar2 == 1)) goto LAB_011d4008;
        }
      }
LAB_011d3fe4:
      uVar8 = uVar8 + 1;
    } while (uVar8 != 5);
  }
  return (long *)0x0;
}


