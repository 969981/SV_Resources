/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c35cc; name: FUN_034c35cc
 */


void FUN_034c35cc(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x034c3628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 0x30))(2,param_1);
  return;
}


