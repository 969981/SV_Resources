/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038d140; name: FUN_0038d140
 */


undefined8 FUN_0038d140(byte *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar2 = 0;
    while ((*param_1 - 0x30 < 10 && (uVar1 = ((uint)*param_1 + uVar2 * 10) - 0x30, uVar2 <= uVar1)))
    {
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      uVar2 = uVar1;
      if (param_2 == 0) {
        *param_3 = uVar1;
        return 1;
      }
    }
  }
  return 0;
}


