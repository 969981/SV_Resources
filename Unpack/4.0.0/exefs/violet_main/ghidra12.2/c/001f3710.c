/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3710; name: FUN_001f3710
 */


ulong FUN_001f3710(long param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if ((uVar2 < param_3) && (*(code **)(param_1 + 0x848) != (code *)0x0)) {
    uVar1 = uVar2 + 0x100;
    if (param_3 <= uVar2 + 0x100) {
      uVar1 = param_3;
    }
    uVar3 = (**(code **)(param_1 + 0x848))(param_1,param_2,uVar1,*(undefined8 *)(param_1 + 0x8b8));
    uVar2 = 0xfffffffffffffc7a;
    if ((long)*param_2 <= (long)uVar3 && (long)uVar3 <= (long)uVar1) {
      uVar2 = uVar3;
    }
  }
  return uVar2;
}


