/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014551c0; name: FUN_014551c0
 */


void FUN_014551c0(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0x160,0x10);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0xe8))();
  }
  *plVar2 = 0;
  lVar6 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    plVar2[3] = param_2[1];
    lVar6 = *param_2;
    plVar2[4] = param_2[2];
    plVar2[2] = lVar6;
    plVar2[5] = param_2[3];
    plVar2[6] = param_2[4];
    plVar2[7] = param_2[5];
    plVar4 = (long *)param_2[6];
    plVar2[8] = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    plVar2[9] = param_2[7];
    plVar2[10] = param_2[8];
    plVar2[0xb] = param_2[9];
    plVar4 = (long *)param_2[10];
    plVar2[0xc] = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    lVar6 = param_2[0xb];
    plVar2[0xe] = 0;
    *(int *)(plVar2 + 0xd) = (int)lVar6;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    plVar2[0x11] = 0;
    if ((code *)param_2[0xe] != (code *)0x0) {
      (*(code *)param_2[0xe])(param_2 + 0x10,plVar2 + 0x12);
      lVar6 = param_2[0xf];
      plVar2[0xf] = param_2[0xd];
      plVar2[0x11] = lVar6;
      lVar6 = param_2[0xc];
      plVar2[0x10] = param_2[0xe];
      plVar2[0xe] = lVar6;
    }
    lVar6 = param_2[0x1c];
    plVar2[0x1f] = 0;
    plVar2[0x20] = 0;
    *(int *)(plVar2 + 0x1e) = (int)lVar6;
    FUN_00d0a71c(plVar2 + 0x1f,param_2 + 0x1d);
    plVar2[0x21] = param_2[0x1f];
    plVar2[0x22] = param_2[0x20];
    plVar2[0x23] = param_2[0x21];
    plVar4 = (long *)param_2[0x22];
    plVar2[0x24] = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    lVar6 = param_2[0x26];
    plVar2[0x27] = param_2[0x25];
    lVar3 = param_2[0x24];
    *(short *)(plVar2 + 0x28) = (short)lVar6;
    plVar2[0x26] = lVar3;
    lVar6 = param_2[0x28];
    *(undefined2 *)((long)plVar2 + 0x154) = *(undefined2 *)((long)param_2 + 0x144);
    *(int *)(plVar2 + 0x2a) = (int)lVar6;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    plVar2[3] = param_2[1];
    lVar6 = *param_2;
    plVar2[4] = param_2[2];
    plVar2[2] = lVar6;
    plVar2[5] = param_2[3];
    plVar2[6] = param_2[4];
    plVar2[7] = param_2[5];
    plVar4 = (long *)param_2[6];
    plVar2[8] = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    plVar2[9] = param_2[7];
    plVar2[10] = param_2[8];
    plVar2[0xb] = param_2[9];
    plVar4 = (long *)param_2[10];
    plVar2[0xc] = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    lVar6 = param_2[0xb];
    plVar2[0xe] = 0;
    *(int *)(plVar2 + 0xd) = (int)lVar6;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    plVar2[0x11] = 0;
    if ((code *)param_2[0xe] != (code *)0x0) {
      (*(code *)param_2[0xe])(param_2 + 0x10,plVar2 + 0x12);
      lVar6 = param_2[0xf];
      plVar2[0xf] = param_2[0xd];
      plVar2[0x11] = lVar6;
      lVar6 = param_2[0xc];
      plVar2[0x10] = param_2[0xe];
      plVar2[0xe] = lVar6;
    }
    lVar6 = param_2[0x1c];
    plVar2[0x1f] = 0;
    plVar2[0x20] = 0;
    *(int *)(plVar2 + 0x1e) = (int)lVar6;
    FUN_00d0a71c(plVar2 + 0x1f,param_2 + 0x1d);
    plVar2[0x21] = param_2[0x1f];
    plVar2[0x22] = param_2[0x20];
    plVar2[0x23] = param_2[0x21];
    plVar4 = (long *)param_2[0x22];
    plVar2[0x24] = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    lVar6 = param_2[0x26];
    plVar2[0x27] = param_2[0x25];
    lVar5 = param_2[0x24];
    *(short *)(plVar2 + 0x28) = (short)lVar6;
    plVar2[0x26] = lVar5;
    lVar6 = param_2[0x28];
    *(undefined2 *)((long)plVar2 + 0x154) = *(undefined2 *)((long)param_2 + 0x144);
    *(int *)(plVar2 + 0x2a) = (int)lVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  plVar2[1] = (long)param_1;
  lVar6 = *param_1;
  *plVar2 = lVar6;
  *(long **)(lVar6 + 8) = plVar2;
  *param_1 = (long)plVar2;
  param_1[2] = param_1[2] + 1;
  return;
}


