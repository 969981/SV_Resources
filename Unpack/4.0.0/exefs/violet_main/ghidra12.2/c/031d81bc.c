/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d81bc; name: FUN_031d81bc
 */


int FUN_031d81bc(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  return iVar2 + iVar1;
}


