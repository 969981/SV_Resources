/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0119b9f8; name: FUN_0119b9f8
 */


void FUN_0119b9f8(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
  puVar1 = PTR_DAT_047db180 + 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  *plVar5 = (long)puVar1;
  plVar5[1] = 0;
  plVar5[2] = 0;
  FUN_0119bb40(plVar5 + 3);
  puVar1 = PTR_DAT_047db188;
  plVar5[10] = 0;
  puVar3 = PTR_DAT_047db3c8;
  plVar5[8] = 0;
  plVar5[9] = -1;
  uVar2 = *puVar1;
  *(undefined8 *)((long)plVar5 + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar5 + 100) = 0xffffffff;
  *plVar5 = (long)(puVar3 + 0x10);
  *(undefined1 *)((long)plVar5 + 0x59) = 0;
  *(undefined1 *)(plVar5 + 0xb) = uVar2;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  plVar5[10] = (long)param_2;
  *param_1 = plVar5;
  param_1[1] = param_2;
  param_1[2] = 0x68;
  param_1[3] = 8;
  return;
}


