/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dce9c; name: FUN_007dce9c
 */


undefined8 FUN_007dce9c(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  puVar1 = auStack_60;
  FUN_00cbd7b4(local_30,*(undefined8 *)PTR_DAT_047d0900);
  local_40[0] = 0x8c52;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  if (local_30[0] == local_40[0]) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    FUN_00cbd7c0(auStack_50,local_30);
    puVar1 = auStack_50;
  }
  else {
    FUN_007f72a4(local_40,*(undefined8 *)PTR_DAT_047d0860);
    if (local_40[0] == 0) {
      return 1;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    FUN_00cbd7c0(auStack_60,local_40);
  }
  FUN_0078cb94(uVar2,puVar1);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 0;
}


