/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00344800; name: FUN_00344800
 */


void FUN_00344800(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  if (PTR_DAT_047ccca0[0x10] != '\0') {
    FUN_0037b950("external/com_google_grpc_base/src/core/lib/channel/channel_stack.cc",0xe2,1,puVar1
                 ,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00344838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,param_2);
  return;
}


