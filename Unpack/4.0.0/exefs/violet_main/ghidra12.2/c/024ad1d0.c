/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ad1d0; name: FUN_024ad1d0
 */


void FUN_024ad1d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bad_alloc abStack_40 [8];
  undefined8 local_38;
  
  *param_1 = 0;
  local_38 = param_3;
  puVar1 = (undefined8 *)(**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,0x28,8);
  *param_1 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    FUN_024ad274(&local_38,param_2);
    std::bad_alloc::bad_alloc(abStack_40);
    FUN_00fb9b60(abStack_40);
    std::bad_alloc::~bad_alloc(abStack_40);
  }
  else {
    uVar2 = *param_4;
    *puVar1 = &DAT_045bc2c8;
    puVar1[1] = 0x100000001;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = uVar2;
  }
  return;
}


