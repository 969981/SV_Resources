/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e937c; name: FUN_021e937c
 */


undefined8 FUN_021e937c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [32];
  
  FUN_021e90ac(&local_60);
  uVar2 = FUN_021da140(param_1 + 0x38);
  pcVar1 = local_58;
  if (local_58 != (code *)0x0) {
    local_58 = (code *)0x0;
    uStack_50 = 0;
    local_60 = 0;
    (*pcVar1)(auStack_40);
  }
  return uVar2;
}


