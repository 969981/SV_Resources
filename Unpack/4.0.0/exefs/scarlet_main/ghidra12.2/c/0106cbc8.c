/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106cbc8; name: FUN_0106cbc8
 */


void FUN_0106cbc8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *local_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  do {
    if (puVar1 == *(undefined8 **)(param_1 + 0x18)) {
      local_28 = param_2;
      (**(code **)(*param_2 + 0xa8))(param_2,param_1);
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 == *(long **)(param_1 + 0x20)) {
        FUN_0106cd10((long *)(param_1 + 0x10),&local_28);
        return;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        *plVar4 = (long)param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *plVar4 = (long)local_28;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      *(long **)(param_1 + 0x18) = plVar4 + 1;
      return;
    }
    plVar4 = (long *)*puVar1;
    puVar1 = puVar1 + 1;
  } while (plVar4 != param_2);
  return;
}


