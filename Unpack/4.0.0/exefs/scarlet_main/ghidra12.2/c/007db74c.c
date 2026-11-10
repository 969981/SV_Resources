/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007db74c; name: FUN_007db74c
 */


undefined8 FUN_007db74c(long param_1)

{
  undefined8 uVar1;
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  FUN_007d3ad8(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  local_40[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  FUN_00cbd7c0(auStack_30,local_40);
  FUN_0078cb28(uVar1,auStack_30);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}


