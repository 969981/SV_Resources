/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf2ba8; name: FUN_00cf2ba8
 */


bool FUN_00cf2ba8(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = FUN_00cf2c34();
  lVar3 = *param_2;
  lVar4 = *(long *)(lVar3 + (ulong)*(uint *)(param_1 + 0x60));
  if (lVar4 == 0x137e8707be8470ef) {
    bVar1 = iVar2 == *(int *)(lVar3 + (ulong)*(uint *)(param_1 + 100));
  }
  else if (lVar4 == 0x133a8707be4aa423) {
    bVar1 = iVar2 != *(int *)(lVar3 + (ulong)*(uint *)(param_1 + 100));
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


