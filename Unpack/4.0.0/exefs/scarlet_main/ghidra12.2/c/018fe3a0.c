/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018fe3a0; name: FUN_018fe3a0
 */


void FUN_018fe3a0(undefined8 param_1)

{
  long *plVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((DAT_047f8f68 & 1) == 0) {
    local_30[0] = 0x1040c;
  }
  else if ((DAT_047f8f6a & 1) == 0) {
    local_30[0] = 0x10408;
  }
  else {
    plVar1 = (long *)FUN_0078a12c();
    (**(code **)(*plVar1 + 0x28))();
    FUN_0078a184();
    DAT_047f8f6a = 0;
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


