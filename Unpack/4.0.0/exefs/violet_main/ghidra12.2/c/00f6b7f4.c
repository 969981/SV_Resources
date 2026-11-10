/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6b7f4; name: FUN_00f6b7f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f6b7f4(undefined8 *param_1,undefined8 param_2,code *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_18;
  
  FUN_02571768(&local_18);
  if (local_18 == 0) {
    FUN_018d3d60(&local_18);
    uVar2 = _UNK_03cabe58;
    uVar1 = _DAT_03cabe50;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0x3f4ccccd3f000000;
    param_1[5] = 0x83e4ccccd;
    param_1[3] = uVar2;
    param_1[2] = uVar1;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(local_18 + ((long)param_4 >> 1)));
    }
    (*param_3)(param_1);
    FUN_018d3d60(&local_18);
  }
  return;
}


