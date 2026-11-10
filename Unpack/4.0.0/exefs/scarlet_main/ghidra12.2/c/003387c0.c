/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003387c0; name: FUN_003387c0
 */


ulong * FUN_003387c0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = *param_1;
  if ((uVar10 & 1) == 0) {
    puVar7 = param_1 + 1;
    uVar3 = 0x20;
    puVar2 = puVar7;
    if (uVar10 >> 1 == 0x20) {
LAB_00338814:
      uVar9 = uVar3 << 1;
      puVar2 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,uVar3 << 4);
      puVar6 = puVar2;
      goto LAB_00338830;
    }
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar3 = param_1[2];
    puVar2 = puVar7;
    if (uVar10 >> 1 == uVar3) goto LAB_00338814;
  }
  uVar9 = 0;
  puVar6 = (ulong *)0x0;
  puVar7 = puVar2;
LAB_00338830:
  uVar8 = uVar10 >> 1;
  uVar3 = *param_2;
  *param_2 = 0;
  puVar2[uVar8] = uVar3;
  if (puVar6 == (ulong *)0x0) {
    uVar10 = *param_1;
  }
  else {
    if (uVar8 != 0) {
      puVar4 = puVar7;
      if (uVar8 == 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          uVar5 = *puVar4;
          puVar1 = puVar6 + uVar3;
          *puVar4 = 0;
          *puVar1 = uVar5;
          uVar5 = puVar4[1];
          uVar3 = uVar3 + 2;
          puVar4[1] = 0;
          puVar4 = puVar4 + 2;
          puVar1[1] = uVar5;
        } while ((uVar8 & 0x7ffffffffffffffe) != uVar3);
      }
      if (((uint)uVar10 >> 1 & 1) != 0) {
        uVar10 = *puVar4;
        *puVar4 = 0;
        puVar6[uVar3] = uVar10;
      }
    }
                    /* try { // try from 003388ac to 003388bb has its CatchHandler @ 00338900 */
    FUN_003384c0(param_1,puVar7,uVar8);
    uVar10 = *param_1;
    if ((uVar10 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar10 = *param_1;
    }
    uVar10 = uVar10 | 1;
    param_1[1] = (ulong)puVar6;
    param_1[2] = uVar9;
  }
  *param_1 = uVar10 + 2;
  return puVar2 + uVar8;
}


