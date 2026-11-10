/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02999c08; name: FUN_02999c08
 */


void FUN_02999c08(long *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x140))();
  uVar2 = (**(code **)(*param_1 + 0x658))(param_1);
  FUN_02999c50(uVar1,uVar2);
  return;
}


