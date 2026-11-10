/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


