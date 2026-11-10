/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040d510; name: FUN_0040d510
 */


bool FUN_0040d510(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return false;
  }
  lVar3 = FUN_003eb8f0(param_2,*(long *)(param_1 + 0x18));
  bVar1 = false;
  if (lVar3 != 0) {
    iVar2 = FUN_003eb480(*(undefined8 *)(param_1 + 0x18));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


