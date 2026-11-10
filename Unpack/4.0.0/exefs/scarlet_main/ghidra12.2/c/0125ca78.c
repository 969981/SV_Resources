/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0125ca78; name: FUN_0125ca78
 */


void FUN_0125ca78(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  long local_48;
  
  uVar1 = param_1[5];
  if (uVar1 < (ulong)param_1[6]) {
    lVar4 = param_1[4];
    uVar5 = *param_1;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      uVar5 = *param_2;
      *param_2 = 0;
      *(undefined8 *)(lVar4 + uVar1 * 8) = uVar5;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar5 = *param_2;
      *param_2 = 0;
      *(undefined8 *)(lVar4 + uVar1 * 8) = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[5] = param_1[5] + 1;
  }
  else {
    local_48 = param_1[4] + uVar1 * 8;
    FUN_0125cbac(auStack_50,param_1,&local_48,param_2);
  }
  return;
}


