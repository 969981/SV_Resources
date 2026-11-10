/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a4694; name: FUN_034a4694
 */


undefined4 FUN_034a4694(float param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long *plVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar2 = *param_3;
  lVar8 = param_3[1];
  plVar3 = (long *)param_2[0x3e];
  uVar10 = *(uint *)(param_2 + 0x3f);
  uVar11 = (ulong)uVar10;
  plVar5 = plVar3 + uVar11 * 3;
  uVar12 = (uint)lVar8;
  if (param_1 == 1.0) {
    if (uVar10 != 0) {
      lVar8 = uVar11 * 0x18;
      do {
        if ((*plVar3 == lVar2) && (((*(byte *)(plVar3 + 1) ^ uVar12) & 1) == 0)) goto LAB_034a4750;
        lVar8 = lVar8 + -0x18;
        plVar3 = plVar3 + 3;
      } while (lVar8 != 0);
      plVar3 = plVar5;
    }
LAB_034a4750:
    if (plVar5 != plVar3) {
      if (plVar3 < plVar5 + -3) {
        do {
          plVar7 = plVar3 + 3;
          plVar3[2] = plVar3[5];
          *plVar3 = *plVar7;
          plVar3[1] = plVar3[4];
          plVar3 = plVar7;
        } while (plVar7 < plVar5 + -3);
        uVar10 = *(uint *)(param_2 + 0x3f);
      }
      *(uint *)(param_2 + 0x3f) = uVar10 - 1;
    }
    uVar4 = 1;
    goto LAB_034a4834;
  }
  plVar7 = plVar3;
  if (uVar10 == 0) {
LAB_034a479c:
    if (plVar7 == plVar5) goto LAB_034a47b0;
    pfVar6 = (float *)(plVar7 + 2);
    *pfVar6 = param_1;
  }
  else {
    lVar9 = uVar11 * 0x18;
    do {
      if ((*plVar7 == lVar2) && (((*(byte *)(plVar7 + 1) ^ uVar12) & 1) == 0)) goto LAB_034a479c;
      lVar9 = lVar9 + -0x18;
      plVar7 = plVar7 + 3;
    } while (lVar9 != 0);
LAB_034a47b0:
    uVar12 = *(uint *)((long)param_2 + 0x1fc);
    if (uVar10 < uVar12) {
LAB_034a47f8:
      if (uVar10 < uVar12) {
        uVar10 = *(uint *)(param_2 + 0x3f);
        *(uint *)(param_2 + 0x3f) = uVar10 + 1;
        if (plVar3 != (long *)0x0) {
          plVar3 = plVar3 + (ulong)uVar10 * 3;
          *plVar3 = lVar2;
          plVar3[1] = lVar8;
          pfVar6 = (float *)(plVar3 + 2);
          *pfVar6 = param_1;
          goto LAB_034a4828;
        }
      }
    }
    else {
      iVar1 = uVar12 + (uVar12 >> 1);
      if (uVar12 == 0) {
        iVar1 = 1;
      }
      uVar12 = iVar1 + uVar12;
      plVar3 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar3,(ulong)uVar12 * 0x18);
      if (plVar3 != (long *)0x0) {
        param_2[0x3e] = (long)plVar3;
        *(uint *)((long)param_2 + 0x1fc) = uVar12;
        goto LAB_034a47f8;
      }
    }
    pfVar6 = (float *)0x0;
  }
LAB_034a4828:
  uVar4 = 1;
  if (pfVar6 == (float *)0x0) {
    uVar4 = 2;
  }
LAB_034a4834:
  (**(code **)(*param_2 + 0x70))(param_2);
  return uVar4;
}


