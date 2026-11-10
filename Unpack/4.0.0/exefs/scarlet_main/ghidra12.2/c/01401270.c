/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01401270; name: FUN_01401270
 */


void FUN_01401270(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x128,8);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_00d5a934(plVar3);
  puVar1 = PTR_DAT_047db450;
  plVar3[0x1e] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[0x1d] = 0;
  FUN_014013b8(plVar3 + 0x1f);
  *plVar3 = (long)(PTR_DAT_047db470 + 0x10);
  plVar3[0x24] = -1;
  FUN_00d5ae1c(plVar3 + 0x1d,8);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar3[0x1b] = (long)param_2;
  *param_1 = plVar3;
  param_1[1] = param_2;
  param_1[2] = 0x128;
  param_1[3] = 8;
  return;
}


