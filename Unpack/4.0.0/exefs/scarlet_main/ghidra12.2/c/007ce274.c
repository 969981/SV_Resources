/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ce274; name: FUN_007ce274
 */


undefined8 FUN_007ce274(long param_1)

{
  int *piVar1;
  int local_d0 [4];
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  int local_80 [4];
  int local_70 [4];
  int local_60 [4];
  int local_50 [4];
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  FUN_00cbd7b4(local_30,*(undefined8 *)PTR_DAT_047d0900);
  local_40[0] = 0xc406;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  if (local_30[0] != local_40[0]) {
    local_18[0] = 0;
    local_50[0] = 0xc420;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_18);
    if (local_30[0] != local_50[0]) {
      local_60[0] = 0xc421;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_18);
      if (local_30[0] != local_60[0]) {
        local_70[0] = 0xa469;
        local_18[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_18);
        if (local_30[0] != local_70[0]) {
          local_80[0] = 0xec73;
          local_18[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_18);
          if (local_30[0] != local_80[0]) {
            local_90[0] = 0xa483;
            local_18[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_18);
            if (local_30[0] != local_90[0]) {
              local_a0[0] = 0xc47e;
              local_18[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)local_18);
              if (local_30[0] != local_a0[0]) {
                local_b0[0] = 0xc47f;
                local_18[0] = 0;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)local_b0 | 4),(Result *)local_18);
                if (local_30[0] != local_b0[0]) {
                  local_c0[0] = 0xc481;
                  local_18[0] = 0;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)local_c0 | 4),(Result *)local_18);
                  if (local_30[0] != local_c0[0]) {
                    local_d0[0] = 0xc480;
                    local_18[0] = 0;
                    nn::err::ErrorResultVariant::ErrorResultVariant
                              ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)local_18);
                    if (local_30[0] != local_d0[0]) {
                      FUN_007f72a4(local_40,*(undefined8 *)PTR_DAT_047d0860);
                      if (local_40[0] == 0) {
                        return 1;
                      }
                      piVar1 = local_40;
                      goto LAB_007ce458;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  piVar1 = local_30;
LAB_007ce458:
  FUN_018ff39c(param_1 + 0xa0,piVar1);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d11c0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "JoinSessionJobBase::ProcessSendMonitoringData";
  return 0;
}


