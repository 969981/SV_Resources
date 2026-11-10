/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087af68; name: FUN_0087af68
 */


void FUN_0087af68(undefined8 param_1,long param_2,long param_3,undefined8 param_4,uint param_5,
                 undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 auStack_410 [128];
  
  puVar1 = auStack_410 + (ulong)param_5 * -2 + 0x80;
  if (param_5 != 0) {
    if (param_5 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      puVar4 = (undefined8 *)(param_2 + 8);
      puVar5 = (undefined8 *)(param_3 + 8);
      puVar6 = auStack_410 + (ulong)param_5 * -2 + 0x82;
      do {
        uVar3 = uVar3 + 2;
        uVar2 = puVar5[-1];
        puVar6[-2] = puVar4[-1];
        puVar6[-1] = uVar2;
        uVar2 = *puVar5;
        *puVar6 = *puVar4;
        puVar6[1] = uVar2;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
        puVar6 = puVar6 + 4;
      } while (((ulong)param_5 & 0xfffffffe) != uVar3);
    }
    if ((param_5 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_3 + uVar3 * 8);
      puVar1[uVar3 * 2] = *(undefined8 *)(param_2 + uVar3 * 8);
      (puVar1 + uVar3 * 2)[1] = uVar2;
    }
  }
  FUN_0087b1f0(puVar1,param_4,param_1,param_5,param_6);
  return;
}


