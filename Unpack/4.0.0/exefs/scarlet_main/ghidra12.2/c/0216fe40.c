/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216fe40; name: FUN_0216fe40
 */


void FUN_0216fe40(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
                 undefined8 param_9,long param_10)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 != param_4) {
    do {
      if (param_6 == param_8) {
        do {
          param_10 = param_10 + -0x1d0;
          param_2 = param_2 + -0x3a;
          FUN_0113a684(param_10,param_2);
        } while (param_4 != param_2);
        return;
      }
      puVar5 = param_2 + -0x3a;
      piVar2 = (int *)*puVar5;
      puVar6 = param_6 + -0x3a;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
         (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar4 == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)((long)piVar2 + uVar4);
      }
      piVar2 = (int *)*puVar6;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
         (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar4 == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)((long)piVar2 + uVar4);
      }
      param_10 = param_10 + -0x1d0;
      if (uVar1 < uVar3) {
        FUN_0113a684(param_10,puVar6);
        puVar5 = param_2;
        param_6 = puVar6;
      }
      else {
        FUN_0113a684(param_10,puVar5);
      }
      param_2 = puVar5;
    } while (puVar5 != param_4);
  }
  return;
}


