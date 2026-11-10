/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007afb6c; name: FUN_007afb6c
 */


void FUN_007afb6c(undefined8 param_1,undefined8 param_2,Result *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  uVar1 = *(uint *)param_3;
  if (uVar1 == 0) {
    local_30[0] = 0;
    goto LAB_007afc68;
  }
  if ((uVar1 & 0x1ff) == 0xcb) {
    uVar2 = uVar1 >> 9 & 0x1fff;
    if (uVar2 - 0x11 < 5) {
LAB_007afba4:
      local_30[0] = 0xa466;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
      FUN_00cbd7c0(param_1,local_30);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)local_30,param_3);
      FUN_00796550(param_1,local_30);
      return;
    }
    if (uVar2 - 0x16 < 5) {
      if ((uVar1 & 0x3ffe00) == 0x3000) {
        local_30[0] = 0xc421;
      }
      else {
        if ((uVar1 & 0x3ffe00) != 0x2e00) goto LAB_007afba4;
        local_30[0] = 0xc420;
      }
      goto LAB_007afc68;
    }
    uVar1 = (uVar1 & 0x3fe000) - 0x4000 >> 0xd;
    if (uVar1 < 8) {
                    /* WARNING: Jumptable with 0 entries at 0x007afc50 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)",.?.."[uVar1] * 4 + 0x7afba4))();
      return;
    }
  }
  local_30[0] = 0x10408;
LAB_007afc68:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


