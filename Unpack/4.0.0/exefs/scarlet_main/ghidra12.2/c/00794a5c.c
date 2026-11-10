/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00794a5c; name: FUN_00794a5c
 */


void FUN_00794a5c(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_2 - 2U < 0x13) {
    if ((*(int *)PTR_DAT_047d09c0 < 1) ||
       (iVar1 = *(int *)PTR_DAT_047d09c0 + -1,
       *(int *)(PTR_DAT_047d09c8 + (long)iVar1 * 4) != param_2)) {
      local_28[0] = 0x10408;
    }
    else {
      *(int *)PTR_DAT_047d09c0 = iVar1;
      local_28[0] = 0;
    }
  }
  else {
    local_28[0] = 0x10407;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


