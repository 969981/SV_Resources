/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e88a4; name: FUN_027e88a4
 */


void FUN_027e88a4(undefined8 param_1,long param_2,void *param_3,byte param_4)

{
  undefined4 local_40 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == (void *)0x0) || (0x30 < (byte)(param_4 - 0x10))) {
    local_40[0] = 0x10407;
  }
  else {
    memcpy((void *)(param_2 + 0x570),param_3,(ulong)param_4);
    *(byte *)(param_2 + 0x5b0) = param_4;
    local_40[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


