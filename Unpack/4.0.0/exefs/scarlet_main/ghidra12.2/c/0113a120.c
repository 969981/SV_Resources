/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0113a120; name: FUN_0113a120
 */


void FUN_0113a120(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
                 long param_6)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      piVar2 = *(int **)(param_2 + -0x1d0);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
         (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar4 == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)((long)piVar2 + uVar4);
      }
      piVar2 = (int *)*param_1;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
         (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar4 == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)((long)piVar2 + uVar4);
      }
      if (uVar1 < uVar3) {
        FUN_0113a9e0(param_1);
        return;
      }
    }
    else {
      if ((long)param_4 < 1) {
        FUN_021707e0(param_1,param_2);
        return;
      }
      uVar4 = param_4 >> 1;
      puVar6 = param_1 + uVar4 * 0x3a;
      if (param_6 < (long)param_4) {
        FUN_0113a120();
        FUN_0113a120(puVar6,param_2,param_3,param_4 - uVar4,param_5,param_6);
        FUN_02170bd0(param_1,puVar6,param_2,param_3,uVar4,param_4 - uVar4,param_5,param_6);
        return;
      }
      FUN_02170900(param_1,puVar6,param_3,uVar4);
      lVar5 = param_5 + uVar4 * 0x1d0;
      FUN_02170900(puVar6,param_2,param_3,param_4 - uVar4,lVar5);
      FUN_02170aa0(param_5,lVar5,lVar5,param_5 + param_4 * 0x1d0,param_1);
      uVar4 = param_5;
      while (uVar4 != 0) {
        FUN_01139754(param_5);
        param_5 = param_5 + 0x1d0;
        param_4 = param_4 - 1;
        uVar4 = param_4;
      }
    }
  }
  return;
}


