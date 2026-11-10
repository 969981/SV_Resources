/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02978d48; name: FUN_02978d48
 */


undefined2 FUN_02978d48(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined8 local_8;
  
  local_8 = param_2;
  lVar2 = FUN_02978d88(param_1 + 0x38,&local_8);
  uVar1 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined2 *)FUN_02978888(param_1 + 0x38,&local_8);
    uVar1 = *puVar3;
  }
  return uVar1;
}


