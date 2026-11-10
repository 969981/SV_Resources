/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b75c4; name: FUN_021b75c4
 */


bool FUN_021b75c4(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (((lVar3 == 0) || (uVar2 = FUN_0142ac94(lVar3 + 8), (uVar2 & 1) == 0)) ||
     (uVar2 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar2 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(lVar3 + 0xd0) == *(long *)*param_2;
  }
  return bVar1;
}


