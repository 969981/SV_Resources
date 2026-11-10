/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a4508; name: FUN_007a4508
 */


void FUN_007a4508(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((param_3 == 0) ||
     (uVar1 = (*(uint *)(param_3 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 4) & 0xff00ff) << 8,
     *(uint *)(param_2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10, param_4 < 8)) {
    local_28[0] = 0x10407;
  }
  else {
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


