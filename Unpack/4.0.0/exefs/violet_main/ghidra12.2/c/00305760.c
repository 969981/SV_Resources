/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00305760; name: FUN_00305760
 */


undefined8 FUN_00305760(uint *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar3 = 0;
  if ((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) {
    puVar4 = param_2;
    if ((*param_1 <= *param_2) &&
       ((puVar4 = param_1, *param_1 == *param_2 && (puVar4 = param_2, param_1[1] <= param_2[1])))) {
      puVar4 = param_1;
    }
    puVar6 = param_1 + 2;
    puVar7 = param_2 + 2;
    puVar5 = puVar6;
    if (((*puVar6 <= *puVar7) && (puVar5 = puVar7, *puVar6 == *puVar7)) &&
       (puVar5 = puVar6, param_1[3] <= param_2[3])) {
      puVar5 = puVar7;
    }
    uVar1 = *puVar4;
    uVar2 = *puVar5;
    if (uVar1 <= uVar2) {
      if (uVar1 == uVar2) {
        if (puVar4[1] < puVar5[1]) {
          return 0;
        }
      }
      else if (uVar1 < uVar2) {
        return 0;
      }
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)puVar4;
    }
    uVar3 = 1;
  }
  return uVar3;
}


