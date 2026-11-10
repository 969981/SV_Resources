/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0164be84; name: FUN_0164be84
 */


void FUN_0164be84(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
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
  plVar6 = param_1 + 5;
  *plVar6 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar6);
  *param_1 = (long)&PTR_LAB_04581ca8;
  param_1[4] = (long)&PTR_LAB_04581d38;
  plVar5 = param_1 + 8;
  *plVar6 = (long)&DAT_04581d88;
  do {
    *(undefined4 *)plVar5 = 0xffff;
    *(undefined1 *)((long)plVar5 + 4) = 0;
    *(undefined4 *)(plVar5 + 1) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    *(undefined4 *)(plVar5 + 2) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x14) = 0;
    *(undefined4 *)(plVar5 + 3) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x1c) = 0;
    *(undefined4 *)(plVar5 + 4) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x24) = 0;
    plVar5 = plVar5 + 5;
  } while (plVar5 != param_1 + 0x198);
  plVar5 = param_1 + 0x198;
  do {
    *(undefined4 *)plVar5 = 0xffff;
    *(undefined1 *)((long)plVar5 + 4) = 0;
    *(undefined4 *)(plVar5 + 1) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    *(undefined4 *)(plVar5 + 2) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x14) = 0;
    *(undefined4 *)(plVar5 + 3) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x1c) = 0;
    *(undefined4 *)(plVar5 + 4) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x24) = 0;
    plVar5 = plVar5 + 5;
  } while (plVar5 != param_1 + 0x292);
  plVar5 = param_1 + 0x292;
  do {
    *(undefined4 *)plVar5 = 0xffff;
    *(undefined1 *)((long)plVar5 + 4) = 0;
    *(undefined4 *)(plVar5 + 1) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    *(undefined4 *)(plVar5 + 2) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x14) = 0;
    *(undefined4 *)(plVar5 + 3) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x1c) = 0;
    *(undefined4 *)(plVar5 + 4) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x24) = 0;
    *(undefined4 *)(plVar5 + 5) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x2c) = 0;
    plVar5 = plVar5 + 6;
  } while (plVar5 != param_1 + 0x3be);
  plVar5 = param_1 + 0x3be;
  do {
    *(undefined4 *)plVar5 = 0xffff;
    *(undefined1 *)((long)plVar5 + 4) = 0;
    *(undefined4 *)(plVar5 + 1) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    *(undefined4 *)(plVar5 + 2) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x14) = 0;
    *(undefined4 *)(plVar5 + 3) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x1c) = 0;
    *(undefined4 *)(plVar5 + 4) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x24) = 0;
    plVar5 = plVar5 + 5;
  } while (plVar5 != param_1 + 0x486);
  plVar5 = param_1 + 0x486;
  do {
    *(undefined4 *)plVar5 = 0xffff;
    *(undefined1 *)((long)plVar5 + 4) = 0;
    *(undefined4 *)(plVar5 + 1) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    *(undefined4 *)(plVar5 + 2) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x14) = 0;
    *(undefined4 *)(plVar5 + 3) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x1c) = 0;
    *(undefined4 *)(plVar5 + 4) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x24) = 0;
    plVar5 = plVar5 + 5;
  } while (plVar5 != param_1 + 0x54e);
  plVar5 = param_1 + 0x54e;
  do {
    *(undefined4 *)plVar5 = 0xffff;
    *(undefined1 *)((long)plVar5 + 4) = 0;
    *(undefined4 *)(plVar5 + 1) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    *(undefined4 *)(plVar5 + 2) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x14) = 0;
    *(undefined4 *)(plVar5 + 3) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x1c) = 0;
    *(undefined4 *)(plVar5 + 4) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x24) = 0;
    *(undefined4 *)(plVar5 + 5) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x2c) = 0;
    plVar5 = plVar5 + 6;
  } while (plVar5 != param_1 + 0x8d2);
  plVar5 = param_1 + 0x8d2;
  do {
    *(undefined4 *)plVar5 = 0xffff;
    *(undefined1 *)((long)plVar5 + 4) = 0;
    *(undefined4 *)(plVar5 + 1) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    *(undefined4 *)(plVar5 + 2) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x14) = 0;
    *(undefined4 *)(plVar5 + 3) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x1c) = 0;
    *(undefined4 *)(plVar5 + 4) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x24) = 0;
    *(undefined4 *)(plVar5 + 5) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x2c) = 0;
    plVar5 = plVar5 + 6;
  } while (plVar5 != param_1 + 0x9fe);
  plVar5 = param_1 + 0x9fe;
  do {
    *(undefined4 *)plVar5 = 0xffff;
    *(undefined1 *)((long)plVar5 + 4) = 0;
    *(undefined4 *)(plVar5 + 1) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    *(undefined4 *)(plVar5 + 2) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x14) = 0;
    *(undefined4 *)(plVar5 + 3) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x1c) = 0;
    *(undefined4 *)(plVar5 + 4) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x24) = 0;
    *(undefined4 *)(plVar5 + 5) = 0xffff;
    *(undefined1 *)((long)plVar5 + 0x2c) = 0;
    plVar5 = plVar5 + 6;
  } while (plVar5 != param_1 + 0xa94);
  return;
}


