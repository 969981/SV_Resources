/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df7a00; name: FUN_01df7a00
 */


void FUN_01df7a00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((*PTR_DAT_047d3e28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01df7a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_1 + 0x1f,PTR_DAT_047d3e30);
  return;
}


