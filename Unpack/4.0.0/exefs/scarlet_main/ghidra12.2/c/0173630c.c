/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173630c; name: FUN_0173630c
 */


undefined8 FUN_0173630c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_28 = &local_18;
    local_18 = 0;
    uStack_20 = param_2;
    uVar1 = FUN_0173634c(*param_1 + 0x108,&local_28);
  }
  return uVar1;
}


