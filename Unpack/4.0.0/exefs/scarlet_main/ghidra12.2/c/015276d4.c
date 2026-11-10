/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015276d4; name: FUN_015276d4
 */


void FUN_015276d4(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  void *__s;
  long lVar2;
  long *plVar3;
  size_t __n;
  undefined8 uVar4;
  void *pvVar5;
  
  if ((ulong)param_1[5] < param_2) {
    plVar3 = (long *)*param_1;
    __n = param_2 << 2;
    __s = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,__n,4);
    if (__s == (void *)0x0) {
      plVar3 = (long *)0x0;
      __n = 0;
      uVar4 = 0;
      pvVar5 = (void *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      memset(__s,0,__n);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      uVar4 = 4;
      pvVar5 = __s;
    }
    memmove(__s,(void *)param_1[1],param_1[6]);
    lVar2 = param_1[1];
    param_1[1] = pvVar5;
    if (lVar2 != 0) {
      FUN_01529014(param_1 + 2);
    }
    param_1[2] = plVar3;
    param_1[3] = __n;
    param_1[4] = uVar4;
    param_1[5] = param_2;
  }
  return;
}


