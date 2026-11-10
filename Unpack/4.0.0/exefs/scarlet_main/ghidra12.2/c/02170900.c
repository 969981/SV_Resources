/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02170900; name: FUN_02170900
 */


void FUN_02170900(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  if (param_4 == 0) {
    return;
  }
  if (param_4 == 2) {
    puVar6 = (undefined8 *)(param_2 + -0x1d0);
    piVar4 = (int *)*puVar6;
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
       (uVar1 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)((long)piVar4 + uVar1);
    }
    piVar4 = (int *)*param_1;
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
       (uVar1 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar1 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)((long)piVar4 + uVar1);
    }
    if (uVar5 <= uVar3) {
      FUN_0113987c(param_5,param_1);
      param_5 = param_5 + 0x1d0;
      goto LAB_02170944;
    }
    FUN_0113987c(param_5,puVar6);
    param_5 = param_5 + 0x1d0;
  }
  else if (param_4 != 1) {
    if ((long)param_4 < 9) {
      FUN_02170e90(param_1,param_2,param_5);
      return;
    }
    uVar1 = param_4 >> 1;
    puVar6 = param_1 + uVar1 * 0x3a;
    FUN_0113a120(param_1,puVar6,param_3,uVar1,param_5,uVar1);
    lVar2 = param_4 - (param_4 >> 1);
    FUN_0113a120(puVar6,param_2,param_3,lVar2,param_5 + uVar1 * 0x1d0,lVar2);
    FUN_02171010(param_1,puVar6,puVar6,param_2,param_5);
    return;
  }
  puVar6 = param_1;
LAB_02170944:
  FUN_0113987c(param_5,puVar6);
  return;
}


