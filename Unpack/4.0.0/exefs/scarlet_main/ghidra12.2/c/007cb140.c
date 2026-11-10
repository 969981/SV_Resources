/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cb140; name: FUN_007cb140
 */


void FUN_007cb140(undefined8 param_1)

{
  undefined *local_38;
  char *pcStack_30;
  undefined4 local_28 [2];
  
  FUN_007cb390();
  if (DAT_047fb1f1 == '\x01') {
    local_38 = (undefined *)CONCAT44(local_38._4_4_,0x10402);
  }
  else {
    local_38 = PTR_DAT_047d0878 + 0x10;
    pcStack_30 = "pia reckoning heap";
    FUN_0078a00c(0x11,0,&local_38);
    DAT_047fb1f1 = '\x01';
    FUN_007949ac(&local_38,0x11);
    local_38 = (undefined *)((ulong)local_38 & 0xffffffff00000000);
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,&local_38);
  return;
}


