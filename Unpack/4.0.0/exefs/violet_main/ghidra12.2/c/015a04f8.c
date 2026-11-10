/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a04f8; name: FUN_015a04f8
 */


void FUN_015a04f8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (((lVar2 == 0) || (uVar1 = FUN_013e7f90(lVar2 + 8), (uVar1 & 1) == 0)) ||
     (uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar1 & 1) != 0)) {
    return;
  }
  if (*(char *)*param_2 == '\0') {
    FUN_015a057c();
    return;
  }
  FUN_01f8cfc4(lVar2 + -0x20,*(undefined4 *)param_2[1]);
  return;
}


