/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00254a3c; name: FUN_00254a3c
 */


void FUN_00254a3c(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00254a3c(param_1,*param_2);
  FUN_00254a3c(param_1,param_2[1]);
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    (**(code **)(*(long *)param_2[7] + 0x18))
              ((long *)param_2[7],param_2[6],param_2[4] & 0xfffffffffffffffe,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00254aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0x48,8);
  return;
}


