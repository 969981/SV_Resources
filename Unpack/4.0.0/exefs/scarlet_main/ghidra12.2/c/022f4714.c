/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f4714; name: FUN_022f4714
 */


undefined * FUN_022f4714(long param_1,char *param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (*param_2 == '\0') {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar2 = PTR_DAT_047d3e30, iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    else {
      puVar2 = PTR_DAT_047d3e30;
    }
  }
  else {
    if ((ulong)((*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 4) * -0x5555555555555555)
        <= (ulong)*(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar2 = (undefined *)(*(long *)(param_1 + 0xf0) + (ulong)*(uint *)(param_2 + 4) * 0x30 + 8);
  }
  return puVar2;
}


