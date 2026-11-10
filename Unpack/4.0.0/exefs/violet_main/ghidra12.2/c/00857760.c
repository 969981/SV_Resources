/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00857760; name: FUN_00857760
 */


void FUN_00857760(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  float *pfVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar6 = *(long *)(param_1 + 0x18);
  lVar7 = (long)(int)param_3[1];
  lVar8 = lVar7 + *(int *)(lVar6 + 0x60);
  uVar1 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
  iVar5 = (int)lVar8;
  if (param_2 == 0) {
    if ((int)uVar1 < iVar5) {
      FUN_02e8df28(param_3,PTR_PTR_047d1a50,lVar8);
    }
    *(int *)(param_3 + 1) = iVar5;
    plVar2 = *(long **)(lVar6 + 0x58);
    if (plVar2 != (long *)0x0) {
      plVar4 = (long *)(*param_3 + lVar7 * 0x10);
      do {
        lVar8 = plVar2[2];
        plVar4[1] = plVar2[3];
        *plVar4 = lVar8;
        plVar2 = (long *)*plVar2;
        plVar4 = plVar4 + 2;
      } while (plVar2 != (long *)0x0);
    }
  }
  else {
    if ((int)uVar1 < iVar5) {
      FUN_02e8df28(param_3,PTR_PTR_047d1a50,(long)iVar5);
    }
    *(int *)(param_3 + 1) = iVar5;
    plVar2 = *(long **)(lVar6 + 0x58);
    if (plVar2 != (long *)0x0) {
      pfVar3 = (float *)(*param_3 + lVar7 * 0x10);
      do {
        auVar9 = NEON_scvtf(*(undefined1 (*) [16])(plVar2 + 4),4);
        uVar12 = *(undefined8 *)(lVar6 + 0x158);
        uVar10 = *(undefined8 *)(lVar6 + 0x150);
        uVar13 = *(undefined8 *)(lVar6 + 0x138);
        uVar11 = *(undefined8 *)(lVar6 + 0x130);
        pfVar3[2] = (float)uVar13 + (float)uVar12 * auVar9._8_4_;
        pfVar3[3] = (float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar12 >> 0x20) * 0.0;
        *pfVar3 = (float)uVar11 + (float)uVar10 * auVar9._0_4_;
        pfVar3[1] = (float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar10 >> 0x20) * auVar9._4_4_;
        plVar2 = (long *)*plVar2;
        pfVar3 = pfVar3 + 4;
      } while (plVar2 != (long *)0x0);
    }
  }
  return;
}


