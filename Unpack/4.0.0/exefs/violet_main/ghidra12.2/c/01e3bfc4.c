/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3bfc4; name: FUN_01e3bfc4
 */


void FUN_01e3bfc4(long param_1,long *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x40) = param_3;
  if (*(long *)(param_1 + 0x38) == -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01e3bfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x228))(param_2,*(long *)(param_1 + 0x38),param_3,0,0);
  return;
}


