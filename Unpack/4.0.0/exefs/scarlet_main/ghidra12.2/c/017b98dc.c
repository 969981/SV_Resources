/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b98dc; name: FUN_017b98dc
 */


undefined8 FUN_017b98dc(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  lVar3 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar4 = *(undefined8 *)(lVar3 + *(long *)(param_1 + 0x40) + -8);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -8;
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  local_28 = uVar4;
  if (puVar1 == *(undefined8 **)(param_1 + 0x88)) {
    FUN_017b9a08(param_1 + 0x78,&local_28);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      *puVar1 = uVar4;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar1 = local_28;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      uVar4 = local_28;
    }
    *(undefined8 **)(param_1 + 0x80) = puVar1 + 1;
  }
  return uVar4;
}


