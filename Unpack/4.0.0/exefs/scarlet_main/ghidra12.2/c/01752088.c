/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01752088; name: FUN_01752088
 */


void FUN_01752088(long *param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  void *__s;
  long lVar4;
  ulong __n;
  long *plVar5;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  __n = (ulong)param_2;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047d8c78;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar4;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar5 = param_1 + 5;
  *plVar5 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  *param_1 = (long)&DAT_045ce1c8;
  param_1[4] = (long)&PTR_LAB_045ce240;
  *plVar5 = (long)&DAT_045ce290;
  plVar5 = (long *)param_1[1];
  *(undefined1 *)(param_1 + 8) = 1;
  __s = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,__n,1);
  if (__s == (void *)0x0) {
    lVar3 = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    lVar4 = *(long *)(lVar3 + 0x80) + 1;
    *(long *)(lVar3 + 0x80) = lVar4;
    if (param_2 != 0) {
      memset(__s,0,__n);
      lVar4 = *(long *)(lVar3 + 0x80);
    }
    param_1[9] = (long)__s;
    param_1[10] = (long)plVar5;
    param_1[0xb] = __n;
    param_1[0xc] = 1;
    *(long *)(lVar3 + 0x80) = lVar4 + -1;
    lVar3 = param_1[9];
  }
  FUN_017522c8(param_1 + 0xd,lVar3,__n);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}


