/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018bbe18; name: FUN_018bbe18
 */


void FUN_018bbe18(long param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  int local_64;
  
  iVar6 = (int)((ulong)(param_2[1] - *param_2) >> 1);
  if (1 < iVar6) {
    uVar13 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x228);
      lVar9 = *(long *)(param_1 + 0x230) - lVar7;
      if (lVar9 != 0) {
        uVar8 = (lVar9 >> 5) * -0x5555555555555555;
        lVar9 = lVar7 + uVar13 * 0x60;
        uVar12 = 0;
        uVar1 = uVar8;
        if (uVar8 < 2) {
          uVar1 = 1;
        }
        do {
          if (*(short *)(lVar7 + uVar12 * 0x60 + 0x54) == *(short *)(*param_2 + uVar13 * 2)) {
            piVar10 = *(int **)(lVar9 + 0x18);
            piVar11 = *(int **)(lVar9 + 0x20);
            if (piVar10 != piVar11) {
              sVar4 = *(short *)(*param_2 + (uVar13 + 1) * 2);
              bVar5 = true;
              do {
                sVar3 = *(short *)(lVar7 + (long)*piVar10 * 0x60 + 0x54);
                bVar5 = (bool)(bVar5 & sVar3 != sVar4);
                if (piVar11 + -1 == piVar10) break;
                piVar10 = piVar10 + 1;
              } while (sVar3 != sVar4);
              if (!bVar5) goto LAB_018bbf0c;
            }
            FUN_029b0f48(param_1 + 0x228,uVar8 + 1);
            *(int *)(*(long *)(param_1 + 0x230) + -0x10) = (int)uVar12;
            *(undefined2 *)(*(long *)(param_1 + 0x230) + -0xc) =
                 *(undefined2 *)(*param_2 + (uVar13 + 1) * 2);
            uVar2 = param_3;
            if ((param_2[1] - *param_2 >> 1) - 2U != uVar13) {
              uVar2 = 0xffffffff;
            }
            *(undefined4 *)(*(long *)(param_1 + 0x230) + -0x50) = uVar2;
            lVar9 = *(long *)(param_1 + 0x230);
            *(undefined8 *)(lVar9 + -0x60) = 0;
            *(undefined8 *)(lVar9 + -0x58) = 0;
            local_64 = (int)((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228)) >> 5)
                       * -0x55555555 + -1;
            FUN_029b0f84(*(long *)(param_1 + 0x228) + uVar12 * 0x60 + 0x18,&local_64);
            break;
          }
LAB_018bbf0c:
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar1);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != iVar6 - 1);
  }
  return;
}


