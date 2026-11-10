/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ec124; name: FUN_007ec124
 */


void FUN_007ec124(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 < 0) {
    local_28[0] = 0x10407;
  }
  else {
    iVar1 = 1000;
    if (param_3 != 0) {
      iVar1 = param_3;
    }
    *param_2 = iVar1;
    local_28[0] = 0;
    *(int *)(PTR_DAT_047d0868 + 0x37c) = iVar1;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


