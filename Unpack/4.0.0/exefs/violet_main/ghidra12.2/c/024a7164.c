/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a7164; name: FUN_024a7164
 */


void FUN_024a7164(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *local_40 [2];
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    std::runtime_error::runtime_error((runtime_error *)local_40,"call to empty boost::function");
    local_40[0] = &DAT_045bbc60;
    FUN_00fb9b60(local_40);
    std::runtime_error::~runtime_error((runtime_error *)local_40);
    uVar1 = *param_1;
  }
  (**(code **)((uVar1 & 0xfffffffffffffffe) + 8))(param_1 + 1,param_2,param_3);
  return;
}


