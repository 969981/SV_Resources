/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00558b48; name: FUN_00558b48
 */


void FUN_00558b48(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00558b48(param_1,*param_2);
  FUN_00558b48(param_1,param_2[1]);
  FUN_00558ba4(param_1 + 0x10,param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00558b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),param_2,0xb8,8);
  return;
}


