/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02582468; name: FUN_02582468
 */


undefined * FUN_02582468(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar3 = PTR_DAT_047d3e30, iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    else {
      puVar3 = PTR_DAT_047d3e30;
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x210);
    lVar1 = *(long *)(lVar4 + 0x138);
    if ((ulong)(*(long *)(lVar4 + 0x140) - lVar1 >> 5) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar3 = (undefined *)(lVar1 + (long)param_2 * 0x20);
  }
  return puVar3;
}


