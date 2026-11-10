/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02466814; name: FUN_02466814
 */


void FUN_02466814(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_02465bb0();
  if (param_3 < uVar1) {
    FUN_024668b0(param_1,*(undefined8 *)(param_2 + 0x30),param_3,*(undefined4 *)(param_2 + 0x38),
                 *(undefined8 *)(param_2 + 0x40));
    return;
  }
  *param_1 = 0;
  return;
}


