/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292d050; name: FUN_0292d050
 */


undefined8 FUN_0292d050(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 - 1U < 3) {
    uVar1 = (*(code *)(&switchD_0292d070::switchdataD_045f1170)[(ulong)(param_1 - 1U) * 2])(param_2)
    ;
    return uVar1;
  }
  *param_2 = 0;
  return 0;
}


