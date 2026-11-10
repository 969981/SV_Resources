/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bfac0; name: FUN_031bfac0
 */


void FUN_031bfac0(undefined8 *param_1,uint param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (0 < (int)param_2) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar9 = *param_3;
      *(undefined4 *)(lVar9 + lVar6) = *(undefined4 *)((long)param_1 + lVar6 * 4);
      ((undefined4 *)(lVar9 + lVar6))[1] = (int)uVar7;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (param_2 != uVar7);
  }
  FUN_031c0430(*param_3,*param_3 + (long)(int)param_2 * 8,*param_4,*param_4 + (long)(int)param_2 * 8
               ,0xffffffff);
  if (0 < (int)param_2) {
    lVar9 = 0;
    lVar6 = 4;
    do {
      puVar1 = (uint *)(*param_3 + lVar6);
      lVar6 = lVar6 + 8;
      puVar8 = param_1 + (ulong)*puVar1 * 4;
      uVar10 = *puVar8;
      uVar12 = puVar8[3];
      uVar11 = puVar8[2];
      puVar2 = (undefined8 *)(*param_4 + lVar9);
      lVar9 = lVar9 + 0x20;
      puVar2[1] = puVar8[1];
      *puVar2 = uVar10;
      puVar2[3] = uVar12;
      puVar2[2] = uVar11;
    } while ((ulong)param_2 * 0x20 != lVar9);
  }
  iVar5 = param_2 * 2;
  if (0 < iVar5) {
    puVar8 = (undefined8 *)*param_4;
    do {
      iVar5 = iVar5 + -1;
      uVar3 = *(undefined4 *)(puVar8 + 1);
      uVar4 = *(undefined4 *)((long)puVar8 + 0xc);
      *param_1 = *puVar8;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((long)param_1 + 0xc) = uVar4;
      puVar8 = puVar8 + 2;
      param_1 = param_1 + 2;
    } while (iVar5 != 0);
  }
  return;
}


