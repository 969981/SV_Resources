/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02303108; name: FUN_02303108
 */


undefined1  [16] FUN_02303108(long *param_1,code *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0x40490fdb00000000;
  uVar3 = 0x40490fdb;
  if ((*param_1 != 0) && (lVar4 = *(long *)(*param_1 + 0x10), lVar4 != 0)) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(lVar4 + ((long)param_3 >> 1) + -0x28));
    }
    puVar2 = (undefined8 *)(*param_2)();
    uVar1 = *puVar2;
    uVar3 = (ulong)*(uint *)(puVar2 + 1);
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar1;
  return auVar5;
}


