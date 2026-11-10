/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f45c8; name: FUN_022f45c8
 */


uint FUN_022f45c8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_18;
  
  local_18 = (ulong)param_2 << 0x20 | 1;
  lVar2 = FUN_022f4084(param_1,&local_18);
  if (**(char **)(lVar2 + 8) == '\0') {
    uVar1 = 0;
  }
  else {
    local_18 = CONCAT71(local_18._1_7_,1);
    local_18 = CONCAT44(param_2,(undefined4)local_18);
    uVar1 = FUN_022f4634(param_1,&local_18);
  }
  return uVar1 & 1;
}


