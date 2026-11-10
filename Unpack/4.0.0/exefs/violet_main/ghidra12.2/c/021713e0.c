/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021713e0; name: FUN_021713e0
 */


void FUN_021713e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_1 != param_2) {
    do {
      if (param_3 == param_4) {
        do {
          FUN_0113a684(param_5,param_1);
          param_1 = param_1 + 0x3a;
          param_5 = param_5 + 0x1d0;
        } while (param_2 != param_1);
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
        FUN_0113a684(param_5,param_3);
        param_3 = param_3 + 0x3a;
      }
      else {
        FUN_0113a684(param_5,param_1);
        param_1 = param_1 + 0x3a;
      }
      param_5 = param_5 + 0x1d0;
    } while (param_1 != param_2);
  }
  return;
}


