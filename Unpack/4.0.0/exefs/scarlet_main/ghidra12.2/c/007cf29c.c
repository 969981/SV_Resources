/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cf29c; name: FUN_007cf29c
 */


undefined8 FUN_007cf29c(long param_1)

{
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
                    if ((local_30[0] != local_d0[0]) &&
                       (FUN_007f72a4(local_40,*(undefined8 *)PTR_DAT_047d0860), local_40[0] == 0)) {
                      return 1;
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
  FUN_007cd5a0(*(undefined8 *)PTR_DAT_047d0a08);
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d1228;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveSessionJob::CompleteProcess";
  return 0;
}


