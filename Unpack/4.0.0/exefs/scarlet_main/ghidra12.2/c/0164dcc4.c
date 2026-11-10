/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0164dcc4; name: FUN_0164dcc4
 */


void FUN_0164dcc4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
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
  plVar5 = param_1 + 5;
  *plVar5 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  *param_1 = (long)&PTR_LAB_045815c0;
  param_1[4] = (long)&PTR_LAB_04581650;
  *plVar5 = (long)&DAT_045816a0;
  *(undefined2 *)(param_1 + 8) = 0x100;
  *(undefined2 *)((long)param_1 + 300) = 0;
  param_1[0x39] = 0;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  memset(param_1 + 9,0,0x4a);
  memset((void *)((long)param_1 + 0x94),0,0x4a);
  memset(param_1 + 0x1c,0,0x48);
  memset(param_1 + 0x26,0,0x4a);
  memset((void *)((long)param_1 + 0x17c),0,0x4a);
  *(undefined1 *)(param_1 + 0x25) = 1;
  memset(param_1 + 0x4b,0,0x98);
  memset(param_1 + 0x3a,0,0x81);
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
  param_1[0x5e] = lVar4;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x5f] = 0x924924924924924;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
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
  param_1[0x65] = lVar4;
  param_1[0x66] = 0x666666666666666;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined2 *)((long)param_1 + 0x34c) = 0x100;
  *(undefined2 *)(param_1 + 0x87) = 0;
  *(undefined8 *)((long)param_1 + 0x4d4) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  memset((void *)((long)param_1 + 0x354),0,0x4a);
  memset(param_1 + 0x74,0,0x4a);
  memset((void *)((long)param_1 + 0x3ec),0,0x48);
  memset((void *)((long)param_1 + 0x43c),0,0x4a);
  memset(param_1 + 0x91,0,0x4a);
  *(undefined1 *)((long)param_1 + 0x434) = 1;
  memset((void *)((long)param_1 + 0x4dc),0,0x81);
  *(undefined1 *)((long)param_1 + 0x55d) = 1;
  *(undefined2 *)(param_1 + 0xc9) = 0;
  *(undefined8 *)((long)param_1 + 0x6e4) = 0;
  *(undefined2 *)(param_1 + 0xac) = 0;
  memset((void *)((long)param_1 + 0x564),0,0x4a);
  memset(param_1 + 0xb6,0,0x4a);
  memset((void *)((long)param_1 + 0x5fc),0,0x48);
  memset((void *)((long)param_1 + 0x64c),0,0x4a);
  memset(param_1 + 0xd3,0,0x4a);
  *(undefined1 *)((long)param_1 + 0x644) = 1;
  memset((void *)((long)param_1 + 0x6ec),0,0x81);
  *(undefined1 *)((long)param_1 + 0x76d) = 1;
  *(undefined2 *)(param_1 + 0x10b) = 0;
  *(undefined8 *)((long)param_1 + 0x8f4) = 0;
  *(undefined2 *)(param_1 + 0xee) = 0;
  memset((void *)((long)param_1 + 0x774),0,0x4a);
  memset(param_1 + 0xf8,0,0x4a);
  memset((void *)((long)param_1 + 0x80c),0,0x48);
  memset((void *)((long)param_1 + 0x85c),0,0x4a);
  memset(param_1 + 0x115,0,0x4a);
  *(undefined1 *)((long)param_1 + 0x854) = 1;
  memset((void *)((long)param_1 + 0x8fc),0,0x80);
  *(undefined2 *)(param_1 + 0x167) = 0;
  memset(param_1 + 0x130,0,0x1a0);
  *(undefined1 *)((long)param_1 + 0xb3c) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xb5c) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x16d) = 0;
  *(undefined8 *)((long)param_1 + 0xb44) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xb4c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xb54) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0xb64) = 0;
  *(undefined4 *)(param_1 + 0x16f) = 0xffffffff;
  param_1[0x16e] = 0;
  memset((void *)((long)param_1 + 0xb7c),0xff,0x58);
  *(undefined4 *)((long)param_1 + 0xc04) = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  *(undefined2 *)(param_1 + 0x180) = 0;
  return;
}


