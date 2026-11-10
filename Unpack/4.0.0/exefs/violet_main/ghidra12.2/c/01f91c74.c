/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f91c74; name: FUN_01f91c74
 */


undefined8 FUN_01f91c74(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (((lVar3 == 0) || (uVar1 = FUN_013e7f90(lVar3 + 8), (uVar1 & 1) == 0)) ||
     (uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar1 & 1) != 0)) {
    return 0;
  }
  uVar2 = FUN_01f8d2f4(lVar3 + -0x20);
  return uVar2;
}


