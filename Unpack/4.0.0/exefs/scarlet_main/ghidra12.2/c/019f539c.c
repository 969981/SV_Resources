/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019f539c; name: FUN_019f539c
 */


long * FUN_019f539c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
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
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x70,8);
  puVar1 = PTR_DAT_047d66f8;
  if (plVar4 != (long *)0x0) {
    plVar4[2] = 0;
    *(undefined4 *)(plVar4 + 3) = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*(long *)(lVar5 + 0x80) != 0) {
        lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
      }
    }
    *plVar4 = (long)&DAT_04530e98;
    plVar4[1] = lVar6;
    plVar4[4] = (long)&PTR_LAB_04530f10;
    plVar7 = plVar4 + 5;
    *plVar7 = (long)&PTR_LAB_04530f60;
    plVar4[6] = 0;
    plVar4[7] = 0;
    FUN_00d1a3f4(plVar4 + 6,plVar7);
    plVar4[8] = 0;
    *(undefined8 *)((long)plVar4 + 0x46) = 0;
    puVar1 = PTR_DAT_047d6b28;
    *plVar4 = (long)(PTR_DAT_047d6b28 + 0x10);
    plVar4[1] = (long)param_1;
    plVar4[4] = (long)(puVar1 + 0xa0);
    *plVar7 = (long)(puVar1 + 0xf0);
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 0;
    plVar4[2] = (long)plVar4;
    *(undefined2 *)(plVar4 + 8) = 0x65;
    *(undefined4 *)(plVar4 + 3) = 0x80070;
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


