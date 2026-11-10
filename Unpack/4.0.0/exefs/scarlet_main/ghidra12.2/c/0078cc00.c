/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078cc00; name: FUN_0078cc00
 */


void FUN_0078cc00(undefined4 *param_1)

{
  code *pcVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  local_30[0] = 0x6c05;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(auStack_40,local_30);
  FUN_018ff39c(param_1 + 1,auStack_40);
  *param_1 = 4;
  FUN_00cbd7c0(auStack_50,param_1 + 1);
  pcVar1 = *(code **)(param_1 + 6);
  if (pcVar1 != (code *)0x0) {
    FUN_00cbd7c0(local_30,auStack_50);
    (*pcVar1)(local_30,*(undefined8 *)(param_1 + 8));
  }
  return;
}


