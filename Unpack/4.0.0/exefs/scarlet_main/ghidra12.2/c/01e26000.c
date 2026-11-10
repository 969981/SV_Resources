/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e26000; name: FUN_01e26000
 */


undefined8 FUN_01e26000(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  undefined1 auStack_30 [16];
  
  uVar2 = *param_2;
  FUN_01e261a4(&local_38);
  lVar1 = local_38;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_01e255b0(auStack_30);
  }
  return uVar2;
}


