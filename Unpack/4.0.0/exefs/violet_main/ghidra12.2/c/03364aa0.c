/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03364aa0; name: FUN_03364aa0
 */


void FUN_03364aa0(ulong *param_1)

{
  ulong uVar1;
  
  if ((*(uint *)((long)param_1 + 0x1c) < 6 &&
       (1 << (ulong)(*(uint *)((long)param_1 + 0x1c) & 0x1f) & 0x32U) != 0) &&
     (uVar1 = param_1[2], uVar1 != 0)) {
    FUN_03364aa0(uVar1);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar1,0);
  }
  if ((param_1[1] & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[1] - 1,0);
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03364b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,*param_1 - 1,0);
  return;
}


