/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e97c8; name: FUN_021e97c8
 */


void FUN_021e97c8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [32];
  
  FUN_021e90ac(&local_70);
  if (param_2 != param_3) {
    do {
      FUN_00c6c204(param_1 + 0x38,*(undefined8 *)(param_2 + 8));
      param_2 = param_2 + 0x18;
    } while (param_3 != param_2);
  }
  pcVar1 = local_68;
  if (local_68 != (code *)0x0) {
    local_70 = 0;
    local_68 = (code *)0x0;
    uStack_60 = 0;
    (*pcVar1)(auStack_50);
  }
  return;
}


