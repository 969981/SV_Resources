/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023027e4; name: FUN_023027e4
 */


void FUN_023027e4(undefined8 *param_1,long param_2,code *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    *param_1 = 0x40490fdb00000000;
    param_1[1] = 0x40490fdb40490fdb;
    uVar3 = 0x40490fdb;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(param_2 + ((long)param_4 >> 1)));
    }
    puVar2 = (undefined8 *)(*param_3)();
    uVar1 = puVar2[1];
    uVar3 = puVar2[2];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
  }
  param_1[2] = uVar3;
  return;
}


