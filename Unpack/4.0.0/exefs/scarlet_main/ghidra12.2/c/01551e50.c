/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01551e50; name: FUN_01551e50
 */


void FUN_01551e50(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
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
  puVar1 = PTR_DAT_047db998 + 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  *plVar3 = (long)puVar1;
  plVar3[1] = 0;
  plVar3[2] = 0;
  FUN_01551f8c(plVar3 + 3);
  puVar1 = PTR_DAT_047dbad8;
  *(undefined1 *)(plVar3 + 0xb) = 6;
  *(undefined8 *)((long)plVar3 + 0x5c) = 0xffffffffffffffff;
  plVar3[9] = -1;
  plVar3[10] = 0;
  plVar3[8] = 0;
  *(undefined4 *)((long)plVar3 + 100) = 0xffffffff;
  *plVar3 = (long)(puVar1 + 0x10);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar3[10] = (long)param_2;
  *param_1 = plVar3;
  param_1[1] = param_2;
  param_1[2] = 0x68;
  param_1[3] = 8;
  return;
}


