/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5e7c4; name: FUN_00e5e7c4
 */


void FUN_00e5e7c4(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(param_2 + 0x5a) == '\x04') {
    lVar1 = -1;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x68);
    if (lVar1 != -1) {
      if (*(char *)(param_2 + 0x78) == '\0') {
        *param_3 = -1;
        local_28[0] = 0x4c11;
      }
      else {
        *param_3 = *(long *)(param_2 + 0x70);
        local_28[0] = 0;
      }
      goto LAB_00e5e814;
    }
  }
  *param_3 = lVar1;
  local_28[0] = 0x6c88;
LAB_00e5e814:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


