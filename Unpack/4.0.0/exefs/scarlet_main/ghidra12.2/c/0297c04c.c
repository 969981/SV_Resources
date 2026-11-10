/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297c04c; name: FUN_0297c04c
 */


void FUN_0297c04c(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  
  param_1 = param_1 + 8;
  local_24 = param_2;
  lVar1 = FUN_0297c0b8(param_1,&local_24);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)FUN_010807f8(param_1,&local_24);
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  local_2c = 0;
  local_34 = 0;
  local_38 = param_3;
  uVar3 = FUN_010807f8(param_1,&local_24);
  FUN_0297c1b8(uVar3,&local_38);
  return;
}


