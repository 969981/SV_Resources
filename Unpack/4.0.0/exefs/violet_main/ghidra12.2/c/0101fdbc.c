/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0101fdbc; name: FUN_0101fdbc
 */


undefined8 FUN_0101fdbc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  undefined1 auStack_30 [16];
  
  uVar2 = *param_2;
  FUN_01f92440(&local_38);
  lVar1 = local_38;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_01f92598(auStack_30);
  }
  return uVar2;
}


