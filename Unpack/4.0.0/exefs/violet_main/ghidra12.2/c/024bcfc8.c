/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024bcfc8; name: FUN_024bcfc8
 */


void FUN_024bcfc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045bcaf0;
  FUN_024ab918(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))
              ((long *)param_1[0x16],param_1[0x17],param_1[0x19] * 0x28,8);
  }
  FUN_024ab970(param_1 + 0xe);
  FUN_024ab970(param_1 + 0xb);
  FUN_024ab9f4(param_1 + 8);
  FUN_024ab9f4(param_1 + 5);
  FUN_024ab9f4(param_1 + 2);
  return;
}


