/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ae5e10; name: FUN_02ae5e10
 */


bool FUN_02ae5e10(short *param_1,short *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  long *plVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  short *psVar11;
  short *psVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  
  switch(((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333) {
  case 0:
  case 1:
    break;
  case 2:
    bVar1 = *(int *)(param_2 + -0x12) < *(int *)(param_1 + 2);
    if (param_2[-0x14] != *param_1) {
      bVar1 = param_2[-0x14] < *param_1;
    }
    if (bVar1) {
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      uVar2 = *(undefined8 *)param_1;
      uVar7 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -0x14);
      uVar3 = *(undefined8 *)(param_1 + 8);
      uVar8 = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -0xc);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + -8);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      uVar9 = *(undefined8 *)(param_2 + -4);
      param_2[-4] = 0;
      param_2[-3] = 0;
      param_2[-2] = 0;
      param_2[-1] = 0;
      *(undefined8 *)(param_1 + 0x10) = uVar9;
      plVar5 = *(long **)(param_2 + -4);
      *(undefined8 *)(param_2 + -0x14) = uVar2;
      *(undefined8 *)(param_2 + -0x10) = uVar7;
      *(undefined8 *)(param_2 + -0xc) = uVar3;
      *(undefined8 *)(param_2 + -8) = uVar8;
      param_2[-4] = 0;
      param_2[-3] = 0;
      param_2[-2] = 0;
      param_2[-1] = 0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      *(undefined8 *)(param_2 + -4) = uVar10;
    }
    break;
  case 3:
    FUN_02ae5630(param_1,param_1 + 0x14,param_2 + -0x14);
    break;
  case 4:
    FUN_02ae5920(param_1,param_1 + 0x14,param_1 + 0x28,param_2 + -0x14);
    break;
  case 5:
    FUN_02ae5b40(param_1,param_1 + 0x14,param_1 + 0x28,param_1 + 0x3c,param_2 + -0x14);
    break;
  default:
    FUN_02ae5630(param_1,param_1 + 0x14,param_1 + 0x28);
    if (param_1 + 0x3c != param_2) {
      lVar15 = 0;
      iVar14 = 0;
      psVar11 = param_1 + 0x3c;
      psVar12 = param_1 + 0x28;
      do {
        psVar6 = psVar11;
        bVar1 = *(int *)(psVar6 + 2) < *(int *)(psVar12 + 2);
        if (*psVar6 != *psVar12) {
          bVar1 = *psVar6 < *psVar12;
        }
        if (bVar1) {
          uVar2 = *(undefined8 *)psVar6;
          uVar3 = *(undefined8 *)(psVar6 + 4);
          plVar5 = (long *)0x0;
          uVar7 = *(undefined8 *)(psVar6 + 8);
          uVar8 = *(undefined8 *)(psVar6 + 0xc);
          uVar9 = *(undefined8 *)(psVar6 + 0x10);
          psVar6[0x10] = 0;
          psVar6[0x11] = 0;
          psVar6[0x12] = 0;
          psVar6[0x13] = 0;
          lVar13 = lVar15;
          while( true ) {
            *(undefined8 *)((long)param_1 + lVar13 + 0x78) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x50);
            *(undefined8 *)((long)param_1 + lVar13 + 0x80) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x58);
            *(undefined8 *)((long)param_1 + lVar13 + 0x98) = 0;
            *(undefined8 *)((long)param_1 + lVar13 + 0x88) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x60);
            *(undefined8 *)((long)param_1 + lVar13 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x68);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))();
            }
            uVar10 = *(undefined8 *)((long)param_1 + lVar13 + 0x70);
            *(undefined8 *)((long)param_1 + lVar13 + 0x70) = 0;
            *(undefined8 *)((long)param_1 + lVar13 + 0x98) = uVar10;
            if (lVar13 == -0x50) {
              psVar11 = param_1;
              goto LAB_02ae6010;
            }
            sVar4 = *(short *)((long)param_1 + lVar13 + 0x28);
            bVar1 = (int)((ulong)uVar2 >> 0x20) < *(int *)((long)param_1 + lVar13 + 0x2c);
            if (sVar4 != (short)uVar2) {
              bVar1 = (short)uVar2 < sVar4;
            }
            if (!bVar1) break;
            plVar5 = *(long **)((long)param_1 + lVar13 + 0x70);
            lVar13 = lVar13 + -0x28;
          }
          psVar11 = (short *)((long)param_1 + lVar13 + 0x50);
LAB_02ae6010:
          *(undefined8 *)psVar11 = uVar2;
          *(undefined8 *)(psVar11 + 4) = uVar3;
          *(undefined8 *)((long)param_1 + lVar13 + 0x60) = uVar7;
          *(undefined8 *)(psVar11 + 0xc) = uVar8;
          plVar5 = *(long **)((long)param_1 + lVar13 + 0x70);
          *(undefined8 *)((long)param_1 + lVar13 + 0x70) = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))();
          }
          iVar14 = iVar14 + 1;
          *(undefined8 *)((long)param_1 + lVar13 + 0x70) = uVar9;
          if (iVar14 == 8) {
            return psVar6 + 0x14 == param_2;
          }
        }
        lVar15 = lVar15 + 0x28;
        psVar11 = psVar6 + 0x14;
        psVar12 = psVar6;
      } while (psVar6 + 0x14 != param_2);
    }
  }
  return true;
}


