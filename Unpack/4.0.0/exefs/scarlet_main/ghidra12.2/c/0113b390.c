/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0113b390; name: FUN_0113b390
 */


void FUN_0113b390(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    do {
      if (param_3 == param_4) {
        if (param_1 == param_2) {
          return;
        }
        FUN_0113987c(param_5,param_1);
        if (param_1 + 0x3a == param_2) {
          return;
        }
        FUN_0113987c(param_5 + 0x1d0);
        if (param_1 + 0x74 == param_2) {
          return;
        }
        FUN_0113987c(param_5 + 0x3a0);
        if (param_1 + 0xae == param_2) {
          return;
        }
        lVar5 = 0x570;
        do {
          FUN_0113987c(param_5 + lVar5,(long)param_1 + lVar5);
          lVar5 = lVar5 + 0x1d0;
        } while ((long)param_2 - (long)param_1 != lVar5);
        return;
      }
      piVar2 = (int *)*param_3;
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
        FUN_0113987c(param_5,param_3);
        param_3 = param_3 + 0x3a;
      }
      else {
        FUN_0113987c(param_5,param_1);
        param_1 = param_1 + 0x3a;
      }
      param_5 = param_5 + 0x1d0;
    } while (param_1 != param_2);
  }
  if ((((param_3 != param_4) && (FUN_0113987c(param_5,param_3), param_3 + 0x3a != param_4)) &&
      (FUN_0113987c(param_5 + 0x1d0), param_3 + 0x74 != param_4)) &&
     (FUN_0113987c(param_5 + 0x3a0), param_3 + 0xae != param_4)) {
    FUN_0113987c(param_5 + 0x570);
    param_3 = param_3 + 0xe8;
    if (param_3 != param_4) {
      param_5 = param_5 + 0x740;
      do {
        FUN_0113987c(param_5,param_3);
        param_3 = param_3 + 0x3a;
        param_5 = param_5 + 0x1d0;
      } while (param_4 != param_3);
    }
  }
  return;
}


