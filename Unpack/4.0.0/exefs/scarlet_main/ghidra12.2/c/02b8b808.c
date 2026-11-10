/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b8b808; name: FUN_02b8b808
 */


void FUN_02b8b808(undefined8 *param_1,undefined8 *param_2,void *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  memcpy(param_2 + 4,param_3,0x28);
  uVar4 = *(undefined8 *)((long)param_3 + 0x28);
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[9] = uVar4;
  FUN_00c43ef0(param_2 + 10,(long)param_3 + 0x30);
  param_2[0xc] = *(undefined8 *)((long)param_3 + 0x40);
  param_2[0xd] = *(undefined8 *)((long)param_3 + 0x48);
  param_2[0xe] = *(undefined8 *)((long)param_3 + 0x50);
  plVar3 = *(long **)((long)param_3 + 0x58);
  param_2[0xf] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  *param_2 = &LAB_02b8b968;
  param_2[1] = &LAB_02b8b970;
  param_2[2] = FUN_02b8bc58;
  param_2[3] = FUN_02b8bcdc;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


