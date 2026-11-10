/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030b9194; name: FUN_030b9194
 */


void FUN_030b9194(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047e50f0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) << 2);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x20))
              (puVar1,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 4);
  }
  param_1[6] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x030b9258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


