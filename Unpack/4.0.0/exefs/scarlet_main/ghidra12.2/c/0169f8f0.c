/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169f8f0; name: FUN_0169f8f0
 */


void FUN_0169f8f0(long *param_1)

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
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045ff070;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045ff0a8;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined2 *)((long)param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 8) = 0x1000000;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x46) = 0;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x5f) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_0169fbb0(param_1 + 0x19);
  FUN_0169fbb0(param_1 + 0x31);
  FUN_0169fbb0(param_1 + 0x49);
  FUN_0169fbb0(param_1 + 0x61);
  FUN_0169fbb0(param_1 + 0x79);
  puVar1 = PTR_DAT_047e2f48;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xa0] = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 0x50c) = 0;
  memset(param_1 + 0xa2,0,0x4e);
  param_1[0xac] = (long)(PTR_DAT_047e2f50 + 0x10);
  memset(param_1 + 0xad,0,0x4a);
  *(undefined2 *)((long)param_1 + 0x5c6) = 10;
  *(undefined4 *)(param_1 + 0xb9) = 0xa0a0a0a;
  *(undefined2 *)((long)param_1 + 0x5cc) = 10;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined2 *)((long)param_1 + 0x612) = 10;
  *(undefined4 *)((long)param_1 + 0x614) = 0xa0a0a0a;
  *(undefined2 *)(param_1 + 0xc3) = 10;
  *(undefined2 *)((long)param_1 + 0x61c) = 0;
  *(undefined1 *)((long)param_1 + 0x61e) = 0;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)((long)param_1 + 0x635) = 0;
  *(undefined8 *)((long)param_1 + 0x624) = 0;
  *(undefined1 *)((long)param_1 + 0x62c) = 0;
  *(undefined2 *)((long)param_1 + 0x62e) = 10;
  *(undefined1 *)((long)param_1 + 0x634) = 10;
  *(undefined4 *)(param_1 + 0xc6) = 0xa0a0a0a;
  *(undefined2 *)(param_1 + 199) = 0;
  *(undefined1 *)((long)param_1 + 0x63a) = 0;
  *(undefined2 *)((long)param_1 + 0x63c) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  param_1[200] = 0;
  *(undefined2 *)((long)param_1 + 0x64a) = 10;
  *(undefined4 *)((long)param_1 + 0x64c) = 0xa0a0a0a;
  *(undefined2 *)(param_1 + 0xca) = 10;
  *(undefined2 *)((long)param_1 + 0x654) = 0;
  *(undefined1 *)((long)param_1 + 0x656) = 0;
  *(undefined2 *)(param_1 + 0xcb) = 0;
  *(undefined1 *)((long)param_1 + 0x66d) = 0;
  *(undefined8 *)((long)param_1 + 0x65c) = 0;
  *(undefined1 *)((long)param_1 + 0x664) = 0;
  *(undefined2 *)((long)param_1 + 0x666) = 10;
  *(undefined4 *)(param_1 + 0xcd) = 0xa0a0a0a;
  *(undefined1 *)((long)param_1 + 0x66c) = 10;
  *(undefined2 *)(param_1 + 0xce) = 0;
  *(undefined1 *)((long)param_1 + 0x672) = 0;
  *(undefined2 *)((long)param_1 + 0x674) = 0;
  param_1[0xcf] = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined2 *)((long)param_1 + 0x682) = 10;
  *(undefined2 *)(param_1 + 0xd1) = 10;
  *(undefined4 *)((long)param_1 + 0x684) = 0xa0a0a0a;
  *(undefined2 *)((long)param_1 + 0x68c) = 0;
  *(undefined1 *)((long)param_1 + 0x68e) = 0;
  *(undefined2 *)(param_1 + 0xd2) = 0;
  *(undefined1 *)((long)param_1 + 0x6a5) = 0;
  *(undefined8 *)((long)param_1 + 0x694) = 0;
  *(undefined1 *)((long)param_1 + 0x69c) = 0;
  *(undefined2 *)((long)param_1 + 0x69e) = 10;
  *(undefined1 *)((long)param_1 + 0x6a4) = 10;
  *(undefined4 *)(param_1 + 0xd4) = 0xa0a0a0a;
  *(undefined2 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)((long)param_1 + 0x6aa) = 0;
  *(undefined2 *)((long)param_1 + 0x6ac) = 0;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  *(undefined2 *)(param_1 + 0xba) = 0;
  param_1[0xe5] = 0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  FUN_0169fe68(param_1);
  return;
}


