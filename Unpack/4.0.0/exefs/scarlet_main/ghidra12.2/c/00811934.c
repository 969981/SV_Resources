/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00811934; name: FUN_00811934
 */


undefined8 FUN_00811934(long param_1)

{
  undefined4 local_70 [4];
  undefined1 auStack_60 [16];
  undefined *local_50;
  byte local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  uint local_34;
  int local_30 [4];
  undefined4 local_18;
  undefined1 local_14 [4];
  
  local_30[0] = 0;
  local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)&local_50);
  local_14[0] = 0;
  local_34 = 0;
  local_50 = PTR_DAT_047d1868 + 0x10;
  (**(code **)(PTR_DAT_047d1868 + 0x38))(&local_50);
  FUN_007927c8(local_70,*(undefined8 *)(param_1 + 0x20),auStack_60,0x10,0,local_14,&local_34);
  FUN_018ff39c(local_30,local_70);
  if (local_30[0] == 0) {
    if (0xf < local_34) {
      FUN_00812860(local_70,&local_50,auStack_60);
      FUN_018ff39c(local_30,local_70);
      if (local_30[0] == 0) {
        if (local_48 - 0x65 < 3) {
          param_1 = param_1 + (ulong)(local_48 - 0x65) * 0x20;
          *(undefined8 *)(param_1 + 0x3e0) = uStack_40;
          *(ulong *)(param_1 + 0x3d8) = CONCAT71(uStack_47,local_48);
          *(int *)(param_1 + 1000) = *(int *)(param_1 + 1000) + 1;
        }
        return 1;
      }
    }
  }
  else {
    local_18 = 0;
    local_70[0] = 0x2c09;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)&local_18);
  }
  return 0;
}


