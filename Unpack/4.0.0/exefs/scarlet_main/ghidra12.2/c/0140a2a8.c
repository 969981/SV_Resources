/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0140a2a8; name: FUN_0140a2a8
 */


void FUN_0140a2a8(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
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
  FUN_0140a3e0(plVar3 + 3);
  plVar3[10] = 0;
  puVar1 = PTR_DAT_047dbc68;
  *(undefined1 *)(plVar3 + 0xb) = 6;
  plVar3[8] = 0;
  plVar3[9] = -1;
  *(undefined8 *)((long)plVar3 + 0x5c) = 0xffffffffffffffff;
  *(undefined8 *)((long)plVar3 + 100) = 0xffffffffffffffff;
  *plVar3 = (long)(puVar1 + 0x10);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar3[10] = (long)param_2;
  *param_1 = plVar3;
  param_1[1] = param_2;
  param_1[2] = 0x70;
  param_1[3] = 8;
  return;
}


