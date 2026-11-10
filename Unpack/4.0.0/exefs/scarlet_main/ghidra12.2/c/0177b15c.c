/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0177b15c; name: FUN_0177b15c
 */


void FUN_0177b15c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045691b8;
  param_1[1] = lVar3;
  puVar5 = (undefined4 *)((long)param_1 + 0x2d);
  param_1[4] = (long)&PTR_LAB_045691f0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  do {
    *puVar5 = 0xffffffff;
    *(undefined2 *)(puVar5 + 1) = 0;
    *(undefined4 *)((long)puVar5 + 6) = 0xffffffff;
    *(undefined2 *)((long)puVar5 + 10) = 0;
    puVar5[3] = 0xffffffff;
    *(undefined2 *)(puVar5 + 4) = 0;
    *(undefined4 *)((long)puVar5 + 0x12) = 0xffffffff;
    *(undefined2 *)((long)puVar5 + 0x16) = 0;
    puVar5 = puVar5 + 6;
  } while (puVar5 != (undefined4 *)((long)param_1 + 0x735));
  *(undefined1 *)(param_1 + 0xeb) = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  lVar3 = tpidr_el0;
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xf0] = lVar4;
  param_1[0xf1] = 0xaaaaaaaaaaaaaaa;
  param_1[0xf4] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
      (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar4 = DAT_04859430;
    *(long *)(lVar3 + 0x30) = DAT_04859430;
  }
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  plVar6 = param_1 + 0xfd;
  param_1[0xf5] = lVar4;
  param_1[0xf6] = 0xaaaaaaaaaaaaaaa;
  param_1[0xf9] = 0;
  puVar1 = PTR_LAB_047d3900;
  *(undefined4 *)(param_1 + 0xfa) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xfb) = 0;
  param_1[0xfc] = 0;
  do {
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(puVar1,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
        (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) &&
       (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar4 = DAT_04859430;
      *(long *)(lVar3 + 0x30) = DAT_04859430;
    }
    plVar6[4] = 0x199999999999999;
    plVar6[5] = 0;
    *(undefined4 *)(plVar6 + 6) = 0;
    plVar6[3] = lVar4;
    plVar6 = plVar6 + 7;
  } while (plVar6 != param_1 + 0x19e);
  FUN_0177b720(param_1 + 0x19e);
  FUN_0177b720(param_1 + 0x1ab);
  FUN_0177b720(param_1 + 0x1b8);
  FUN_0177b720(param_1 + 0x1c5);
  FUN_0177b720(param_1 + 0x1d2);
  FUN_0177b720(param_1 + 0x1df);
  FUN_0177b720(param_1 + 0x1ec);
  FUN_0177b720(param_1 + 0x1f9);
  FUN_0177b720(param_1 + 0x206);
  FUN_0177b720(param_1 + 0x213);
  FUN_0177b720(param_1 + 0x220);
  FUN_0177b720(param_1 + 0x22d);
  FUN_0177b720(param_1 + 0x23a);
  FUN_0177b720(param_1 + 0x247);
  FUN_0177b720(param_1 + 0x254);
  FUN_0177b720(param_1 + 0x261);
  FUN_0177b720(param_1 + 0x26e);
  FUN_0177b720(param_1 + 0x27b);
  FUN_0177b720(param_1 + 0x288);
  FUN_0177b720(param_1 + 0x295);
  FUN_0177b720(param_1 + 0x2a2);
  FUN_0177b720(param_1 + 0x2af);
  FUN_0177b720(param_1 + 700);
  *(undefined4 *)((long)param_1 + 0x165f) = 0;
  param_1[0x2cb] = 0;
  param_1[0x2ca] = 0;
  param_1[0x2c9] = 0;
  memset(param_1 + 0x2cd,0,0x48);
  return;
}


