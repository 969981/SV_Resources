/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c59d74; name: FUN_00c59d74
 */


void FUN_00c59d74(long param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(long *)(param_1 + 0xb0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c59d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e0ca8)(0,*(undefined8 *)(param_1 + 0x28),0,param_2,param_3);
  return;
}


