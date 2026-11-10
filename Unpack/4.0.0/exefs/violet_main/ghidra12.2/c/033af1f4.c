/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033af1f4; name: FUN_033af1f4
 */


void FUN_033af1f4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)&PTR_LAB_047b3368;
  puVar1 = PTR_DAT_047d1a08;
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    FUN_033791fc(lVar2);
    (**(code **)(puVar1 + 8))(0,lVar2,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x033af26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))(0,param_1,0);
  return;
}


