/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0027b208; name: FUN_0027b208
 */


void FUN_0027b208(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *local_58;
  
  uVar3 = *param_1;
  local_58 = param_2;
  if ((uVar3 & 1) == 0) {
    puVar4 = param_1 + 1;
    uVar5 = 1;
    puVar6 = puVar4;
    if (1 < param_3) {
LAB_0027b300:
      uVar10 = uVar3 >> 1;
      uVar3 = param_3;
      if (param_3 <= uVar5 << 1) {
        uVar3 = uVar5 << 1;
      }
      puVar6 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar3 * 0x90);
      uVar5 = param_3;
      puVar8 = puVar6;
      goto LAB_0027b334;
    }
  }
  else {
    puVar4 = (ulong *)param_1[1];
    uVar5 = param_1[2];
    puVar6 = puVar4;
    if (uVar5 < param_3) goto LAB_0027b300;
  }
  uVar3 = uVar3 >> 1;
  puVar4 = puVar6 + param_3 * 0x12;
  bVar2 = uVar3 < param_3;
  uVar10 = uVar3 - param_3;
  if (bVar2) {
    uVar10 = 0;
  }
  uVar5 = 0;
  if (bVar2) {
    uVar5 = param_3 - uVar3;
  }
  uVar9 = param_3;
  puVar8 = (ulong *)0x0;
  if (bVar2) {
    puVar4 = (ulong *)0x0;
    uVar9 = uVar3;
    puVar8 = puVar6 + uVar3 * 0x12;
  }
  if (uVar9 != 0) {
    puVar6 = puVar6 + 0x11;
    do {
      puVar1 = local_58;
      uVar3 = *local_58;
      puVar6[-0x10] = local_58[1];
      puVar6[-0x11] = uVar3;
      uVar11 = local_58[3];
      uVar3 = local_58[2];
      uVar13 = local_58[5];
      uVar12 = local_58[4];
      uVar15 = local_58[7];
      uVar14 = local_58[6];
      uVar16 = local_58[8];
      puVar6[-8] = local_58[9];
      puVar6[-9] = uVar16;
      puVar6[-10] = uVar15;
      puVar6[-0xb] = uVar14;
      puVar6[-0xc] = uVar13;
      puVar6[-0xd] = uVar12;
      puVar6[-0xe] = uVar11;
      puVar6[-0xf] = uVar3;
      uVar15 = local_58[0xf];
      uVar14 = local_58[0xe];
      uVar11 = local_58[0xb];
      uVar3 = local_58[10];
      uVar13 = local_58[0xd];
      uVar12 = local_58[0xc];
      *(int *)(puVar6 + -1) = (int)local_58[0x10];
      puVar6[-2] = uVar15;
      puVar6[-3] = uVar14;
      puVar6[-4] = uVar13;
      puVar6[-5] = uVar12;
      puVar6[-6] = uVar11;
      puVar6[-7] = uVar3;
      FUN_00343d90(*puVar6);
      uVar3 = FUN_003438f0(puVar1[0x11]);
      *puVar6 = uVar3;
      local_58 = local_58 + 0x12;
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 0x12;
    } while (uVar9 != 0);
  }
  uVar3 = 0;
  puVar6 = (ulong *)0x0;
LAB_0027b334:
                    /* try { // try from 0027b334 to 0027b347 has its CatchHandler @ 0027b3c8 */
  FUN_0027b3f0(param_1,puVar8,&local_58,uVar5);
  if (puVar4 != (ulong *)0x0) {
    puVar4 = puVar4 + uVar10 * 0x12 + -1;
    lVar7 = uVar10 + 1;
    while (lVar7 = lVar7 + -1, lVar7 != 0) {
      uVar5 = *puVar4;
      puVar4 = puVar4 + -0x12;
                    /* try { // try from 0027b36c to 0027b36f has its CatchHandler @ 0027b3e8 */
      FUN_00343d90(uVar5);
    }
  }
  uVar5 = *param_1;
  if (puVar6 != (ulong *)0x0) {
    if ((uVar5 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar5 = *param_1;
    }
    uVar5 = uVar5 | 1;
    param_1[1] = (ulong)puVar6;
    param_1[2] = uVar3;
    *param_1 = uVar5;
  }
  *param_1 = uVar5 & 1 | param_3 << 1;
  return;
}


