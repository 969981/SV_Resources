/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002792e8; name: FUN_002792e8
 */


void FUN_002792e8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_002792e8(param_1,*param_2);
  FUN_002792e8(param_1,param_2[1]);
  if ((param_2[7] & 1) == 0) {
    puVar2 = param_2 + 8;
LAB_00279334:
    uVar3 = (ulong)param_2[7] >> 1;
    puVar2 = puVar2 + uVar3 * 0x12 + -1;
    lVar4 = uVar3 + 1;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      uVar1 = *puVar2;
      puVar2 = puVar2 + -0x12;
                    /* try { // try from 00279358 to 0027935b has its CatchHandler @ 002793b4 */
      FUN_00343d90(uVar1);
    }
    if ((*(byte *)(param_2 + 7) & 1) == 0) goto LAB_00279384;
    uVar1 = param_2[8];
  }
  else {
    puVar2 = (undefined8 *)param_2[8];
    if (puVar2 != (undefined8 *)0x0) goto LAB_00279334;
    uVar1 = 0;
  }
  FUN_0049e790(PTR_LAB_047cba48,uVar1);
LAB_00279384:
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_2[6]);
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


