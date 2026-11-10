/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02978c18; name: FUN_02978c18
 */


undefined8 FUN_02978c18(long param_1,undefined2 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined2 local_14 [2];
  
  local_14[0] = param_2;
  lVar1 = FUN_02978c48(param_1 + 0xa0,local_14);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  return uVar2;
}


