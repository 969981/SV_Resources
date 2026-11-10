/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e7d68; name: FUN_019e7d68
 */


void FUN_019e7d68(undefined8 param_1,long param_2,long param_3)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 == 0) {
    local_28[0] = 0x10407;
  }
  else {
    if (*(long **)(param_2 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019e7d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_2 + 0x18) + 0xd0))(param_1);
      return;
    }
    local_28[0] = 0xc0b;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


