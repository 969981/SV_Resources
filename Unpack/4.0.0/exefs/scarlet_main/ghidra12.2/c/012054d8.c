/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012054d8; name: FUN_012054d8
 */


void FUN_012054d8(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x311) != '\0') {
    return;
  }
  local_34 = param_3;
  FUN_01064488();
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  puVar4 = *(undefined8 **)(param_1 + 0x228);
  if (puVar4 < *(undefined8 **)(param_1 + 0x230)) {
    uVar5 = *(undefined8 *)(param_1 + 0x238);
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
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    }
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    puVar4[2] = param_2[2];
    plVar3 = (long *)param_2[3];
    puVar4[3] = plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
    }
    *(undefined4 *)(puVar4 + 4) = param_3;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x228) = puVar4 + 5;
  }
  else {
    FUN_01205738(param_1 + 0x220,param_2,&local_34);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return;
}


