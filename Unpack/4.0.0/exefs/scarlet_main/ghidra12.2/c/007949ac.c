/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007949ac; name: FUN_007949ac
 */


void FUN_007949ac(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  puVar2 = PTR_DAT_047d09c0;
  if (0x12 < param_2 - 2U) {
    local_28[0] = 0x10407;
    goto LAB_00794a30;
  }
  iVar1 = *(int *)PTR_DAT_047d09c0;
  if (iVar1 < 0x15) {
    if (iVar1 == 0) {
      if (param_2 == 2) goto LAB_00794a20;
    }
    else if (*(int *)(PTR_DAT_047d09c8 + (long)iVar1 * 4 + -4) <= param_2) {
LAB_00794a20:
      *(int *)(PTR_DAT_047d09c8 + (long)iVar1 * 4) = param_2;
      *(int *)puVar2 = iVar1 + 1;
      local_28[0] = 0;
      goto LAB_00794a30;
    }
  }
  local_28[0] = 0x10408;
LAB_00794a30:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


