/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ecfb0; name: FUN_003ecfb0
 */


undefined4 * FUN_003ecfb0(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    lVar1 = FUN_003eb8f0(param_1 + 2,param_2 + 2);
    if (((lVar1 == 0) || (lVar1 = FUN_003eb8f0(param_1 + 8,param_2 + 8), lVar1 == 0)) ||
       (lVar1 = FUN_003eb8f0(param_1 + 0xe,param_2 + 0xe), lVar1 == 0)) {
      return (undefined4 *)0x0;
    }
    *param_1 = *param_2;
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
  }
  return param_1;
}


