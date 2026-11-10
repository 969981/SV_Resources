/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01193998; name: FUN_01193998
 */


undefined4 FUN_01193998(long param_1)

{
  undefined4 uVar1;
  int local_90 [4];
  int local_80 [4];
  int local_70 [4];
  int local_60 [4];
  int local_50 [4];
  int local_40 [4];
  undefined4 local_18 [2];
  
  local_40[0] = 0;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x550) != local_40[0]) {
    local_40[0] = 0xc420;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    if (*(int *)(param_1 + 0x550) == local_40[0]) {
      uVar1 = 1;
    }
    else {
      local_40[0] = 0xc421;
      local_50[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
      if (*(int *)(param_1 + 0x550) == local_40[0]) {
        uVar1 = 2;
      }
      else {
        local_40[0] = 0x8c52;
        local_50[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
        if (*(int *)(param_1 + 0x550) != local_40[0]) {
          local_60[0] = 0;
          local_50[0] = 0xc406;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
          if (*(int *)(param_1 + 0x550) != local_50[0]) {
            local_70[0] = 0;
            local_60[0] = 0x6c0e;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
            if (*(int *)(param_1 + 0x550) != local_60[0]) {
              local_80[0] = 0;
              local_70[0] = 0x6c86;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
              if (*(int *)(param_1 + 0x550) != local_70[0]) {
                local_90[0] = 0;
                local_80[0] = 0x8c6e;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_90);
                if (*(int *)(param_1 + 0x550) == local_80[0]) {
                  return 3;
                }
                local_18[0] = 0;
                local_90[0] = 0xc47e;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_18);
                uVar1 = 3;
                if (*(int *)(param_1 + 0x550) != local_90[0]) {
                  uVar1 = 4;
                }
                return uVar1;
              }
            }
          }
        }
        uVar1 = 3;
      }
    }
  }
  return uVar1;
}


