/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216fb10; name: FUN_0216fb10
 */


void FUN_0216fb10(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  
  if (param_2 - (long)param_1 != 0) {
    uVar2 = (param_2 - (long)param_1 >> 4) * 0x34f72c234f72c235;
    piVar1 = (int *)*param_3;
    do {
      uVar3 = uVar2 >> 1;
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
        uVar4 = 0;
      }
      else {
        uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = *(uint *)((long)piVar1 + uVar5);
        }
      }
      piVar7 = (int *)param_1[uVar3 * 0x3a];
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 9) ||
         (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[4], uVar5 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)((long)piVar7 + uVar5);
      }
      uVar5 = uVar2 + ~uVar3;
      uVar2 = uVar3;
      if (uVar6 <= uVar4) {
        param_1 = param_1 + uVar3 * 0x3a + 0x3a;
        uVar2 = uVar5;
      }
    } while (uVar2 != 0);
  }
  return;
}


