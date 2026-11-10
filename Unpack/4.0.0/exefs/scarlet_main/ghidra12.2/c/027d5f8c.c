/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027d5f8c; name: FUN_027d5f8c
 */


long FUN_027d5f8c(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_1;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1,0x150,0x10);
  if (lVar4 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_60 = *param_2;
  uStack_58 = param_2[1];
  local_50 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_48 = plVar1;
  if (plVar1 == (long *)0x0) {
    FUN_027d6720(lVar4,&local_60,param_3,param_4);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_027d6720(lVar4,&local_60,param_3,param_4);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  *(undefined4 *)(lVar4 + 0x18) = 0x100150;
  *(long **)(lVar4 + 8) = param_1;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return lVar4;
}


