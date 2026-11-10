/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01739364; name: FUN_01739364
 */


void FUN_01739364(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_38;
  
  lVar1 = FUN_01739408(param_1 + 0x78);
  if (lVar1 == 0) {
    return;
  }
  FUN_01739524(param_1,param_2);
  FUN_01739604(&local_38,param_1 + 0x78,lVar1);
  lVar1 = local_38;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_01739780((long)register0x00000008 + -0x30);
  }
  return;
}


