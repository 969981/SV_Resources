/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dede8; name: FUN_007dede8
 */


undefined8 FUN_007dede8(long param_1)

{
  undefined8 uVar1;
  undefined4 local_50 [4];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  FUN_007d3ad8(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0xb4) == 0) {
    local_50[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_18);
    FUN_00cbd7c0(auStack_40,local_50);
    FUN_0078cb28(uVar1,auStack_40);
  }
  else {
    FUN_00cbd7c0(auStack_30);
    FUN_0078cb94(uVar1,auStack_30);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}


