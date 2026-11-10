/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f220f8; name: FUN_02f220f8
 */


void FUN_02f220f8(long *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 local_68;
  
  uVar14 = (ulong)*(uint *)(param_1 + 1);
  if ((int)param_3 < (int)*(uint *)(param_1 + 1)) {
    lVar11 = (long)(int)param_3;
    do {
      FUN_02f24aec(((long *)*param_1)[lVar11],*(undefined8 *)(*(long *)*param_1 + 0x4e0));
      lVar10 = *(long *)(*param_1 + lVar11 * 8);
      if (lVar10 != 0) {
        FUN_02f24398(lVar10);
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar10,0);
      }
      uVar14 = (ulong)(int)param_1[1];
      lVar11 = lVar11 + 1;
    } while (lVar11 < (long)uVar14);
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < (int)param_3) {
      FUN_02f24284(param_1,(long)(int)param_3);
      uVar14 = (ulong)*(uint *)(param_1 + 1);
    }
    if (((int)uVar14 < (int)param_3) || ((int)param_3 < (int)uVar14)) {
      *(uint *)(param_1 + 1) = param_3;
      uVar14 = (ulong)param_3;
    }
  }
  if (0 < (int)uVar14) {
    lVar11 = 0;
    do {
      lVar13 = *(long *)(*param_1 + lVar11 * 8);
      FUN_031c2be4(lVar13 + 0x530,*(undefined8 *)(lVar13 + 0x4e0));
      FUN_031c2be4(lVar13 + 0x630,*(undefined8 *)(lVar13 + 0x4e0));
      puVar8 = *(undefined4 **)(*(long *)(lVar13 + 0x540) + (long)*(int *)(lVar13 + 0x548) * 8 + -8)
      ;
      uVar2 = *puVar8;
      uVar3 = *puVar8;
      *(undefined4 **)(lVar13 + 0x740) = puVar8;
      *(short *)(lVar13 + 0x748) = (short)((uint)uVar2 >> 0x10);
      *(short *)(lVar13 + 0x74a) = (short)uVar3;
      *(int *)(lVar13 + 0x74c) = -*(int *)(lVar13 + 0x538);
      lVar10 = *(long *)(lVar13 + 8);
      *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)(lVar10 + 0x490);
      *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(lVar10 + 0x8f8);
      lVar9 = *(long *)(lVar10 + 0x8b8);
      *(long *)(lVar13 + 0x10) = lVar9 + 0x20;
      *(long *)(lVar13 + 0x18) = lVar9 + 0xa20;
      lVar9 = *(long *)(*(long *)(lVar10 + 0x8a8) + 0x48);
      uVar4 = *(uint *)(*(long *)(lVar10 + 0x8a8) + 0x50);
      *(long *)(lVar13 + 0x20) = lVar9;
      *(ulong *)(lVar13 + 0x28) = lVar9 + (ulong)uVar4 * 0x50;
      lVar9 = *(long *)(*(long *)(lVar10 + 0x8b0) + 0x40);
      iVar7 = *(int *)(*(long *)(lVar10 + 0x8b0) + 0x48);
      *(long *)(lVar13 + 0x30) = lVar9;
      *(long *)(lVar13 + 0x38) = lVar9 + (long)iVar7 * 0x70;
      *(undefined8 *)(lVar13 + 0x500) = *(undefined8 *)(lVar10 + 0x118);
      FUN_02f224ac(*(long *)(*param_1 + lVar11 * 8) + 0x768,param_2 + 0x820);
      uVar14 = (ulong)(int)param_1[1];
      lVar11 = lVar11 + 1;
    } while (lVar11 < (long)uVar14);
  }
  if ((int)uVar14 < (int)param_3) {
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < (int)param_3) {
      FUN_02f24170(param_1,(long)(int)param_3);
    }
    uVar12 = -(uVar14 >> 0x1f & 1) & 0xfffffff800000000 | (uVar14 & 0xffffffff) << 3;
    do {
      puVar5 = PTR_DAT_047d1a08;
      local_68 = 2000;
      piVar6 = (int *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
      if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
        (**(code **)(puVar5 + 0x10))(piVar6,"hknpSimulationThreadContext");
      }
      *piVar6 = (int)uVar14;
      memset(piVar6 + 2,0,0x48);
      FUN_02ee3eb4(piVar6 + 0x14);
      FUN_02ee3eb4(piVar6 + 0x58);
      FUN_02ee3eb4(piVar6 + 0x9c);
      FUN_02ee3eb4(piVar6 + 0xe0);
      *(int **)(piVar6 + 0x150) = piVar6 + 0x158;
      piVar6[0x136] = 0;
      piVar6[0x137] = 0;
      piVar6[0x134] = 0;
      piVar6[0x135] = 0;
      piVar6[0x132] = 0;
      piVar6[0x133] = 0;
      piVar6[0x130] = 0;
      piVar6[0x131] = 0;
      piVar6[0x12e] = 0;
      piVar6[0x12f] = 0;
      piVar6[300] = 0;
      piVar6[0x12d] = 0;
      piVar6[0x140] = 0;
      piVar6[0x141] = 0;
      piVar6[0x142] = 0;
      piVar6[0x143] = 0;
      piVar6[0x144] = 0;
      piVar6[0x145] = 0;
      piVar6[0x146] = 0;
      piVar6[0x147] = -0x80000000;
      piVar6[0x148] = 0;
      piVar6[0x149] = 0;
      piVar6[0x14c] = 0;
      piVar6[0x14d] = 0;
      piVar6[0x152] = 0;
      piVar6[0x153] = -0x7fffffe8;
      piVar6[0x18c] = 0;
      piVar6[0x18d] = 0;
      *(int **)(piVar6 + 400) = piVar6 + 0x198;
      piVar6[0x192] = 0;
      piVar6[0x193] = -0x7fffffe8;
      piVar6[0x1d3] = 0;
      piVar6[0x1d4] = 0;
      piVar6[0x1d5] = 0;
      piVar6[0x1da] = 0;
      piVar6[0x1db] = 0;
      piVar6[0x1dc] = 0;
      piVar6[0x1dd] = -0x80000000;
      piVar6[0x1de] = 0;
      piVar6[0x1df] = 0;
      piVar6[0x1e0] = 0;
      piVar6[0x1e1] = -0x80000000;
      piVar6[0x1e2] = 0;
      piVar6[0x1e3] = 0;
      piVar6[0x1e4] = 0;
      piVar6[0x1e5] = -0x80000000;
      piVar6[0x1e6] = 0;
      piVar6[0x1e7] = 0;
      piVar6[0x1e8] = 0;
      piVar6[0x1e9] = -0x80000000;
      piVar6[0x1ea] = 0;
      piVar6[0x1eb] = 0;
      piVar6[0x1ec] = 0;
      piVar6[0x1ed] = -0x80000000;
      piVar6[0x1ee] = 0;
      piVar6[0x1ef] = 0;
      piVar6[0x1f0] = 0;
      piVar6[0x1f1] = -0x80000000;
      iVar7 = (int)param_1[1];
      lVar11 = (long)iVar7;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar7) {
        FUN_02f24170(param_1,lVar11 + 1);
        iVar7 = (int)param_1[1];
      }
      *(int **)(*param_1 + (long)iVar7 * 8) = piVar6;
      *(int *)(param_1 + 1) = (int)(lVar11 + 1);
      FUN_02f24730(*(undefined8 *)(*param_1 + uVar12),*(undefined8 *)(param_2 + 0x4a0),param_2,
                   param_1 + 0xa4);
      uVar4 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar4;
      uVar12 = uVar12 + 8;
    } while (param_3 != uVar4);
  }
  if (0 < (int)param_1[0xa5]) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(param_1[0xa4] + lVar11);
      *puVar1 = 0;
      *(undefined4 *)((long)puVar1 + 0xc) = 0;
      puVar1[2] = 0;
      lVar9 = param_1[0xa4] + lVar11;
      lVar11 = lVar11 + 0x20;
      *(long *)(param_1[0xa6] + lVar10 * 8) = lVar9;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[0xa5]);
  }
  return;
}


