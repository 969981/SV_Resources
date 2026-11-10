/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00346070; name: FUN_00346070
 */


void FUN_00346070(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  *param_1 = 0;
  param_1[9] = 0;
                    /* try { // try from 00346088 to 00346093 has its CatchHandler @ 00346188 */
  iVar3 = FUN_0038c900();
  if (iVar3 == 0) {
    uVar6 = *param_1;
    uVar4 = 1;
    param_1[9] = 1;
  }
  else {
    uVar4 = FUN_0038c900();
    uVar6 = *param_1;
    uVar4 = uVar4 & 0xffffffff;
    param_1[9] = uVar4;
  }
  if ((uVar6 & 1) == 0) {
    puVar8 = param_1 + 1;
    uVar7 = 1;
  }
  else {
    puVar8 = (ulong *)param_1[1];
    uVar7 = param_1[2];
  }
  if (uVar7 < uVar4) {
    uVar6 = uVar6 >> 1;
    uVar2 = uVar4;
    if (uVar4 <= uVar7 << 1) {
      uVar2 = uVar7 << 1;
    }
    uVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar2 << 6);
    if (uVar6 != 0) {
      puVar5 = (ulong *)(uVar7 + 0x10);
      do {
        puVar5[-2] = *puVar8;
        puVar5[-1] = puVar8[1];
        *puVar5 = puVar8[2];
        puVar1 = puVar8 + 3;
        uVar6 = uVar6 - 1;
        puVar8 = puVar8 + 8;
        puVar5[1] = *puVar1;
        puVar5 = puVar5 + 8;
      } while (uVar6 != 0);
    }
    uVar6 = *param_1;
    if ((uVar6 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
      uVar6 = *param_1;
    }
    uVar4 = param_1[9];
    *param_1 = uVar6 | 1;
    param_1[1] = uVar7;
    param_1[2] = uVar2;
  }
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
                    /* try { // try from 00346160 to 00346167 has its CatchHandler @ 0034618c */
      FUN_0034aa84(param_1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_1[9]);
  }
  return;
}


