/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b66d4; name: FUN_007b66d4
 */


void FUN_007b66d4(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  int *piVar2;
  int local_90 [8];
  int local_70 [4];
  int local_60 [4];
  undefined1 auStack_50 [24];
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined1 local_24 [4];
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_38[0] = 0x2c09;
    local_28 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)&local_28);
    FUN_00cbd7c0(param_1,local_38);
    return;
  }
  FUN_007b5118(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)PTR_DAT_047d0860);
  piVar2 = local_90;
  FUN_0284e338(auStack_50);
  local_24[0] = 0;
  FUN_007927c8(local_60,*(undefined8 *)(param_2 + 0x18),param_3 + 0x30,0x5c0,auStack_50,local_24,
               (int *)(param_3 + 0x5f8));
  if (local_60[0] == 0) {
    if (*(int *)(param_3 + 0x5f8) <= **(int **)PTR_DAT_047d0928) {
      FUN_00796584(local_90);
      FUN_007968fc(local_90,auStack_50);
      uVar1 = FUN_007967e8(local_90,*(long *)(param_2 + 0x58) + 0x98);
      if ((uVar1 & 1) == 0) {
        FUN_00796828(param_3 + 0x628,local_90);
        *(undefined1 *)(param_3 + 0x620) = local_24[0];
        FUN_00796f04(local_70,param_3);
        FUN_018ff39c(local_60,local_70);
        if (local_60[0] == 0) {
          local_70[0] = 0;
        }
        else {
          local_70[0] = 0x2c09;
        }
      }
      else {
        local_70[0] = 0x2c09;
      }
      local_28 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)&local_28);
      piVar2 = local_70;
      goto LAB_007b695c;
    }
LAB_007b680c:
    local_90[0] = 0x2c09;
  }
  else {
    if (*(char *)(param_2 + 0x10) == '\0') goto LAB_007b680c;
    local_90[0] = 0x2c09;
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_70);
    if (local_60[0] == local_90[0]) {
LAB_007b67e8:
      piVar2 = local_60;
      goto LAB_007b695c;
    }
    local_90[0] = 0x10407;
    local_70[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_70);
    if (local_60[0] == local_90[0]) {
      local_90[0] = 0xc406;
    }
    else {
      local_90[0] = 0xc47e;
      local_70[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_70);
      if (local_60[0] != local_90[0]) {
        local_28 = 0;
        local_70[0] = 0x2c18;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)&local_28);
        if (local_60[0] != local_70[0]) goto LAB_007b67e8;
      }
      local_90[0] = 0x2c09;
    }
  }
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_70);
LAB_007b695c:
  FUN_00cbd7c0(param_1,piVar2);
  FUN_0284e3d4(auStack_50);
  return;
}


