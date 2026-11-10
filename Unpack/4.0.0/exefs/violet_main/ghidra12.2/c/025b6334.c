/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025b6334; name: FUN_025b6334
 */


undefined1  [16] FUN_025b6334(long *param_1,code *param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined1 auVar4 [16];
  
  uVar3 = 0;
  uVar5 = 0;
  if ((*param_1 != 0) && (lVar2 = *(long *)(*param_1 + 0x10), lVar2 != 0)) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(lVar2 + ((long)param_3 >> 1) + -0x28));
    }
    puVar1 = (undefined8 *)(*param_2)(0);
    uVar5 = puVar1[1];
    uVar3 = *puVar1;
  }
  auVar4._8_8_ = uVar5;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


