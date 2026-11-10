/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d8bac; name: FUN_001d8bac
 */


undefined8 FUN_001d8bac(long *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = (int)param_1[0x4b];
  if (((*(uint *)(lVar3 + 0x1c0) & 0x22) == 2) || (iVar1 = FUN_001f32ac(param_1[0xaa]), iVar1 != 0))
  {
    uVar2 = 0x10001;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


