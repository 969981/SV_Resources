/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02789f60; name: FUN_02789f60
 */


void FUN_02789f60(undefined8 param_1)

{
  undefined4 local_30 [4];
  undefined4 local_8 [2];
  
  if (DAT_0485e9d8 == (long *)0x0) {
    local_30[0] = 0x10408;
    local_8[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_8);
    FUN_00cbd7c0(param_1,local_30);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02789f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0485e9d8 + 0x60))(param_1);
  return;
}


