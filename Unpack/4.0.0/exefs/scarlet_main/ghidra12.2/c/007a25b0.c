/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a25b0; name: FUN_007a25b0
 */


bool FUN_007a25b0(undefined8 param_1,int *param_2)

{
  bool bVar1;
  int local_90 [4];
  int local_80 [4];
  int local_70 [4];
  int local_60 [4];
  int local_50 [4];
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  local_30[0] = 0xc421;
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
  bVar1 = false;
  if (*param_2 != local_30[0]) {
    local_50[0] = 0;
    local_40[0] = 0xc420;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    bVar1 = false;
    if (*param_2 != local_40[0]) {
      local_60[0] = 0;
      local_50[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
      bVar1 = false;
      if (*param_2 != local_50[0]) {
        local_70[0] = 0;
        local_60[0] = 0xc47e;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
        bVar1 = false;
        if (*param_2 != local_60[0]) {
          local_80[0] = 0;
          local_70[0] = 0xc47f;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
          bVar1 = false;
          if (*param_2 != local_70[0]) {
            local_90[0] = 0;
            local_80[0] = 0xc481;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_90);
            bVar1 = false;
            if (*param_2 != local_80[0]) {
              local_18[0] = 0;
              local_90[0] = 0xc480;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_18);
              bVar1 = *param_2 != local_90[0];
            }
          }
        }
      }
    }
  }
  return bVar1;
}


