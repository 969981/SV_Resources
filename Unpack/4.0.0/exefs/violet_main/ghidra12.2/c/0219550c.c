/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219550c; name: FUN_0219550c
 */


void FUN_0219550c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xf0));
  FUN_02195064(param_1 + 0x70);
  plVar1 = (long *)(param_1 + 8);
  FUN_0219557c(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_02195648(param_1 + 0x10);
  return;
}


