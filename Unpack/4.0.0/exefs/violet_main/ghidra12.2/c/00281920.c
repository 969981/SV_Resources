/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00281920; name: FUN_00281920
 */


void FUN_00281920(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    puVar5 = param_1 + 1;
    uVar2 = 1;
    puVar7 = puVar5;
    if (param_3 < 2) goto LAB_00281960;
LAB_00281994:
    uVar6 = uVar1 >> 1;
    uVar1 = param_3;
    if (param_3 <= uVar2 << 1) {
      uVar1 = uVar2 << 1;
    }
    puVar4 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar1 * 0x90);
    uVar2 = param_3;
    puVar7 = puVar4;
  }
  else {
    puVar5 = (ulong *)param_1[1];
    uVar2 = param_1[2];
    puVar7 = puVar5;
    if (uVar2 < param_3) goto LAB_00281994;
LAB_00281960:
    uVar1 = uVar1 >> 1;
    uVar6 = uVar1 - param_3;
    if (uVar1 < param_3) {
      uVar6 = 0;
      puVar4 = puVar7 + uVar1 * 0x12;
      puVar5 = (ulong *)0x0;
      uVar2 = param_3 - uVar1;
    }
    else {
      puVar5 = puVar7 + param_3 * 0x12;
      uVar2 = 0;
      puVar4 = (ulong *)0x0;
      uVar1 = param_3;
    }
    if (uVar1 != 0) {
      puVar7 = puVar7 + 0x11;
      do {
        uVar8 = *param_2;
        puVar7[-0x10] = param_2[1];
        puVar7[-0x11] = uVar8;
        uVar9 = param_2[3];
        uVar8 = param_2[2];
        uVar11 = param_2[5];
        uVar10 = param_2[4];
        uVar13 = param_2[7];
        uVar12 = param_2[6];
        uVar14 = param_2[8];
        puVar7[-8] = param_2[9];
        puVar7[-9] = uVar14;
        puVar7[-10] = uVar13;
        puVar7[-0xb] = uVar12;
        puVar7[-0xc] = uVar11;
        puVar7[-0xd] = uVar10;
        puVar7[-0xe] = uVar9;
        puVar7[-0xf] = uVar8;
        uVar13 = param_2[0xf];
        uVar12 = param_2[0xe];
        uVar9 = param_2[0xb];
        uVar8 = param_2[10];
        uVar11 = param_2[0xd];
        uVar10 = param_2[0xc];
        *(int *)(puVar7 + -1) = (int)param_2[0x10];
        puVar7[-2] = uVar13;
        puVar7[-3] = uVar12;
        puVar7[-4] = uVar11;
        puVar7[-5] = uVar10;
        puVar7[-6] = uVar9;
        puVar7[-7] = uVar8;
        FUN_00343d90(*puVar7);
        uVar1 = uVar1 - 1;
        *puVar7 = param_2[0x11];
        param_2[0x11] = 0;
        param_2 = param_2 + 0x12;
        puVar7 = puVar7 + 0x12;
      } while (uVar1 != 0);
    }
    uVar1 = 0;
    puVar7 = (ulong *)0x0;
    if (uVar2 == 0) goto LAB_00281a9c;
  }
  do {
    uVar8 = *param_2;
    uVar2 = uVar2 - 1;
    puVar4[1] = param_2[1];
    *puVar4 = uVar8;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    uVar11 = param_2[5];
    uVar10 = param_2[4];
    uVar12 = param_2[6];
    uVar14 = param_2[9];
    uVar13 = param_2[8];
    puVar4[7] = param_2[7];
    puVar4[6] = uVar12;
    puVar4[9] = uVar14;
    puVar4[8] = uVar13;
    puVar4[3] = uVar9;
    puVar4[2] = uVar8;
    puVar4[5] = uVar11;
    puVar4[4] = uVar10;
    uVar13 = param_2[0xf];
    uVar12 = param_2[0xe];
    uVar9 = param_2[0xb];
    uVar8 = param_2[10];
    uVar11 = param_2[0xd];
    uVar10 = param_2[0xc];
    *(int *)(puVar4 + 0x10) = (int)param_2[0x10];
    puVar4[0xd] = uVar11;
    puVar4[0xc] = uVar10;
    puVar4[0xf] = uVar13;
    puVar4[0xe] = uVar12;
    puVar4[0xb] = uVar9;
    puVar4[10] = uVar8;
    puVar4[0x11] = param_2[0x11];
    param_2[0x11] = 0;
    puVar4 = puVar4 + 0x12;
    param_2 = param_2 + 0x12;
  } while (uVar2 != 0);
LAB_00281a9c:
  if (puVar5 != (ulong *)0x0) {
    puVar5 = puVar5 + uVar6 * 0x12 + -1;
    lVar3 = uVar6 + 1;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      uVar2 = *puVar5;
      puVar5 = puVar5 + -0x12;
                    /* try { // try from 00281ac0 to 00281ac3 has its CatchHandler @ 00281b1c */
      FUN_00343d90(uVar2);
    }
  }
  uVar2 = *param_1;
  if (puVar7 != (ulong *)0x0) {
    if ((uVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar2 = *param_1;
    }
    uVar2 = uVar2 | 1;
    param_1[1] = (ulong)puVar7;
    param_1[2] = uVar1;
    *param_1 = uVar2;
  }
  *param_1 = uVar2 & 1 | param_3 << 1;
  return;
}


