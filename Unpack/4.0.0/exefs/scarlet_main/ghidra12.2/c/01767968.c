/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01767968; name: FUN_01767968
 */


void FUN_01767968(long param_1,long *param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_1 + 0x1d8;
  if ((param_3 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x1e0);
    if (lVar4 != lVar3) {
      do {
        if (*(int *)(lVar3 + 0x10) == (int)*param_2) {
          FUN_01767b00(lVar4);
          break;
        }
        lVar3 = *(long *)(lVar3 + 8);
      } while (lVar4 != lVar3);
    }
    if (*(long *)(param_1 + 0x1e8) == 0) {
      *(undefined1 *)(param_1 + 0x312) = 0;
    }
  }
  else {
    if (*(long *)(param_1 + 0x1e8) == 0) {
      *(undefined1 *)(param_1 + 0x312) = 1;
    }
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x1f0) + 0x10))
                               (*(long **)(param_1 + 0x1f0),0x18,4);
    if (plVar2 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x1f0) + 0xe8))();
    }
    *plVar2 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x1f0);
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      plVar2[2] = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      plVar2[2] = *param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    plVar2[1] = lVar4;
    lVar4 = *(long *)(param_1 + 0x1d8);
    *plVar2 = lVar4;
    *(long **)(lVar4 + 8) = plVar2;
    *(long **)(param_1 + 0x1d8) = plVar2;
    *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 1;
  }
  return;
}


