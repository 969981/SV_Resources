/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb81f0; name: FUN_00fb81f0
 */


void FUN_00fb81f0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((param_1 & 1) != 0) {
    local_28 = &DAT_04546a28;
    uStack_20 = param_2;
    local_18 = param_3;
    FUN_00fb9b60(&local_28);
    std::exception::~exception((exception *)&local_28);
  }
  return;
}


