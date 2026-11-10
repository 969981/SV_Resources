/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c29a64; name: FUN_01c29a64
 */


void FUN_01c29a64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  
  if (DAT_04838eb8 != 0) {
    FUN_01c27e68(&DAT_04838eb8,0);
  }
  local_28 = FUN_0126a9c0();
  uVar1 = FUN_01e66090(local_28,&local_28);
  FUN_01c27ea4(&local_30,uVar1);
  FUN_01c27e68(&DAT_04838eb8,0);
  DAT_04838eb8 = local_30;
  local_30 = 0;
  FUN_01c1abf8(&local_30);
  FUN_01c1b608(param_1,DAT_04838eb8);
  return;
}


