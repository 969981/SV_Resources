/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f3280; name: FUN_022f3280
 */


undefined8 FUN_022f3280(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = (ulong)param_2 << 0x20 | 1;
  lVar1 = FUN_022f2750(param_1,&local_18);
  if (**(char **)(lVar1 + 8) == '\0') {
    uVar2 = 0;
  }
  else {
    local_18 = CONCAT71(local_18._1_7_,1);
    local_18 = CONCAT44(param_2,(undefined4)local_18);
    uVar2 = FUN_022f32e8(param_1,&local_18);
  }
  return uVar2;
}


