/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fb5e8; name: FUN_020fb5e8
 */


void FUN_020fb5e8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_04583f68;
  param_1[4] = &PTR_LAB_04583f98;
  FUN_0178cd48(param_1 + 0x17);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x12));
  plVar1 = param_1 + 5;
  FUN_020fb868(plVar1,param_1[0xb]);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_017920a4(param_1 + 6);
  return;
}


