/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029dbc68; name: FUN_029dbc68
 */


void FUN_029dbc68(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_28;
  
  if (param_2 != 0) {
    plVar5 = *(long **)(param_1 + 0x78);
    plVar2 = *(long **)(param_1 + 0x80);
    if ((plVar5 != plVar2) && (*plVar5 != param_2)) {
      do {
        if (plVar2 + -1 == plVar5) {
          plVar5 = plVar2;
          goto LAB_029dbcc8;
        }
        plVar1 = plVar5 + 1;
        plVar5 = plVar5 + 1;
      } while (*plVar1 != param_2);
    }
LAB_029dbcc8:
    __n = (long)plVar2 - (long)(plVar5 + 1);
    local_28 = param_2;
    if (__n != 0) {
      memmove(plVar5,plVar5 + 1,__n);
    }
    *(size_t *)(param_1 + 0x80) = (long)plVar5 + __n;
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == *(long **)(param_1 + 0x50)) {
      FUN_017b9a08(param_1 + 0x40,&local_28);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar4 == 0) {
        *plVar5 = param_2;
      }
      else {
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *plVar5 = local_28;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      }
      *(long **)(param_1 + 0x48) = plVar5 + 1;
    }
  }
  return;
}


