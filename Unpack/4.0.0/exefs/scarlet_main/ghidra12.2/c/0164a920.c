/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0164a920; name: FUN_0164a920
 */


void FUN_0164a920(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x19cc0,8);
  if (plVar3 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
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
    memset(plVar3 + 1,0,0x19cb8);
    *plVar3 = (long)(PTR_DAT_047dcc30 + 0x10);
    plVar3[0x3391] = 0;
    plVar3[0x3392] = 0;
    plVar3[0x3393] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
       (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
      lVar1 = tpidr_el0;
      lVar5 = *(long *)(lVar1 + 0x30);
      if (lVar5 == 0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        lVar5 = DAT_04859430;
        *(long *)(lVar1 + 0x30) = DAT_04859430;
      }
    }
    plVar3[0x3394] = lVar5;
    *(undefined4 *)(plVar3 + 0x3397) = 0;
    plVar3[0x3395] = 0x1fffffffffffffff;
    plVar3[0x3396] = 0;
    *param_1 = plVar3;
    param_1[1] = param_2;
    param_1[2] = 0x19cc0;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


