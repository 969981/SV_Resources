/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03370634; name: FUN_03370634
 */


void FUN_03370634(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_047ae1c8;
  if (lVar1 == 0) {
    return;
  }
  FUN_0337068c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0337067c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar1,0);
  return;
}


