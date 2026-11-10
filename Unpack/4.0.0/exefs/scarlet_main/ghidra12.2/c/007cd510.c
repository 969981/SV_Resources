/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cd510; name: FUN_007cd510
 */


void FUN_007cd510(undefined8 param_1,long param_2,ushort param_3)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 == 0xffff) {
    param_3 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
  }
  else if ((param_3 < 2) || (*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) < param_3)) {
    local_28[0] = 0x10407;
    goto LAB_007cd574;
  }
  *(ushort *)(param_2 + 8) = param_3;
  local_28[0] = 0;
LAB_007cd574:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


