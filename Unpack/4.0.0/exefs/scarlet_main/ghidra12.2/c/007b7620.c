/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b7620; name: FUN_007b7620
 */


void FUN_007b7620(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *local_48 [2];
  undefined *local_38;
  char *pcStack_30;
  undefined4 local_28 [2];
  
  FUN_007b78a0();
  if (DAT_047f9e81 == '\x01') {
    local_38 = (undefined *)CONCAT44(local_38._4_4_,0x10402);
    local_48[0]._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_48);
    ppuVar1 = &local_38;
  }
  else {
    local_38 = PTR_DAT_047d0878 + 0x10;
    pcStack_30 = "pia lan heap";
    FUN_0078a00c(5,0,&local_38);
    DAT_047f9e81 = '\x01';
    FUN_007949ac(&local_38,5);
    if ((int)local_38 == 0) {
      local_48[0]._0_4_ = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      ppuVar1 = local_48;
    }
    else {
      ppuVar1 = &local_38;
    }
  }
  FUN_00cbd7c0(param_1,ppuVar1);
  return;
}


