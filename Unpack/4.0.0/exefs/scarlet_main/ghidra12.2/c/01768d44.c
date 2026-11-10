/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01768d44; name: FUN_01768d44
 */


void FUN_01768d44(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
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
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar4;
  *(undefined4 *)(param_1 + 5) = 0;
  memset(param_1 + 0x1a,0,0x41);
  memset(param_1 + 9,0,0x48);
  *(undefined4 *)(param_1 + 0x24) = 0xa0a0000;
  *(undefined8 *)((long)param_1 + 0x124) = 0xffff000000000000;
  *(undefined1 *)((long)param_1 + 300) = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((long)param_1 + 0x135) = 0x7000007000007;
  *(undefined8 *)((long)param_1 + 0x12d) = 0x70000070000;
  *(undefined8 *)((long)param_1 + 0x145) = 0x70000070000;
  *(undefined8 *)((long)param_1 + 0x13d) = 0x700000700000700;
  *(undefined1 *)((long)param_1 + 0x14d) = 7;
  *(undefined4 *)(param_1 + 0x2e) = 1;
  *param_1 = (long)&DAT_04585218;
  param_1[4] = (long)&PTR_LAB_045854a0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0;
  *(undefined8 *)((long)param_1 + 0x17a) = 0;
  *(undefined1 *)((long)param_1 + 0x1a4) = 5;
  memset(param_1 + 0x57,0,0x41);
  memset(param_1 + 0x69,0,0x41);
  memset(param_1 + 0x7b,0,0x41);
  memset(param_1 + 0x8d,0,0x41);
  memset(param_1 + 0x9f,0,0x41);
  memset(param_1 + 0xb1,0,0x41);
  memset(param_1 + 0xc3,0,0x41);
  memset(param_1 + 0xd5,0,0x41);
  memset(param_1 + 0xe7,0,0x41);
  memset(param_1 + 0xf9,0,0x41);
  memset(param_1 + 0x10b,0,0x41);
  memset(param_1 + 0x11d,0,0x41);
  memset(param_1 + 0x12f,0,0x41);
  memset(param_1 + 0x141,0,0x41);
  memset(param_1 + 0x153,0,0x41);
  memset(param_1 + 0x165,0,0x41);
  *(undefined2 *)((long)param_1 + 0xb6c) = 0;
  param_1[0x37] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  return;
}


