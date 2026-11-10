/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a21a8; name: FUN_010a21a8
 */


void FUN_010a21a8(long *param_1,long param_2,long param_3)

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
  *param_1 = (long)&DAT_046001e8;
  param_1[4] = (long)&PTR_LAB_04600a10;
  *plVar5 = (long)&DAT_04600a60;
  param_1[8] = (long)&PTR_LAB_04600ab8;
  FUN_010a24b4(param_1 + 9);
  *(undefined8 *)((long)param_1 + 0x405) = 0;
  param_1[0x80] = 0;
  *(undefined1 *)((long)param_1 + 0x40d) = 2;
  *(undefined8 *)((long)param_1 + 0x41c) = 0;
  *(undefined1 *)((long)param_1 + 0x424) = 0;
  *(undefined8 *)((long)param_1 + 0x426) = 0;
  *(undefined1 *)((long)param_1 + 0x42e) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)((long)param_1 + 0x417) = 0;
  param_1[0x86] = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)((long)param_1 + 0x43a) = 0;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  *(undefined1 *)((long)param_1 + 0x444) = 0;
  *(undefined1 *)((long)param_1 + 0x44e) = 0;
  *(undefined8 *)((long)param_1 + 0x446) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)((long)param_1 + 0x45a) = 0;
  *(undefined8 *)((long)param_1 + 0x452) = 0;
  *(undefined1 *)((long)param_1 + 0x464) = 0;
  *(undefined8 *)((long)param_1 + 0x45c) = 0;
  *(undefined1 *)((long)param_1 + 0x466) = 0;
  param_1[0x8d] = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)((long)param_1 + 0x472) = 0;
  *(undefined1 *)((long)param_1 + 0x47a) = 0;
  *(undefined1 *)((long)param_1 + 0x47c) = 0;
  *(undefined4 *)((long)param_1 + 0x47e) = 0x10000;
  *(undefined8 *)((long)param_1 + 0x482) = 0;
  *(undefined4 *)((long)param_1 + 0x48a) = 0;
  *(undefined1 *)((long)param_1 + 0x48e) = 10;
  memset(param_1 + 0x92,0,0x25c);
  *(undefined1 *)(param_1 + 0xbb) = 10;
  *(undefined4 *)((long)param_1 + 0x5e4) = 0;
  *(undefined4 *)((long)param_1 + 0x5dc) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 10;
  *(undefined4 *)((long)param_1 + 0x5f4) = 0;
  *(undefined4 *)((long)param_1 + 0x5ec) = 0;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 10;
  *(undefined4 *)((long)param_1 + 0x604) = 0;
  *(undefined4 *)((long)param_1 + 0x5fc) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 10;
  *(undefined4 *)((long)param_1 + 0x614) = 0;
  *(undefined4 *)((long)param_1 + 0x60c) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 10;
  *(undefined4 *)((long)param_1 + 0x624) = 0;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)((long)param_1 + 0x61c) = 0;
  *(undefined1 *)(param_1 + 0xc5) = 10;
  *(undefined4 *)((long)param_1 + 0x634) = 0;
  *(undefined4 *)((long)param_1 + 0x62c) = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0;
  *(undefined1 *)(param_1 + 199) = 10;
  *(undefined4 *)((long)param_1 + 0x644) = 0;
  *(undefined4 *)((long)param_1 + 0x63c) = 0;
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 10;
  *(undefined4 *)((long)param_1 + 0x654) = 0;
  *(undefined4 *)((long)param_1 + 0x64c) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcb) = 10;
  *(undefined4 *)((long)param_1 + 0x664) = 0;
  *(undefined4 *)((long)param_1 + 0x65c) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0xcd) = 10;
  *(undefined4 *)((long)param_1 + 0x674) = 0;
  *(undefined2 *)(param_1 + 0xce) = 0;
  *(undefined4 *)((long)param_1 + 0x66c) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 10;
  *(undefined4 *)((long)param_1 + 0x684) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)((long)param_1 + 0x67c) = 0;
  *(undefined1 *)(param_1 + 0xd1) = 10;
  *(undefined4 *)((long)param_1 + 0x694) = 0;
  *(undefined2 *)(param_1 + 0xd2) = 0;
  *(undefined4 *)((long)param_1 + 0x68c) = 0;
  *(undefined1 *)(param_1 + 0xd3) = 10;
  *(undefined4 *)((long)param_1 + 0x6a4) = 0;
  *(undefined2 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)((long)param_1 + 0x69c) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 10;
  *(undefined4 *)((long)param_1 + 0x6b4) = 0;
  *(undefined2 *)(param_1 + 0xd6) = 0;
  *(undefined4 *)((long)param_1 + 0x6ac) = 0;
  *(undefined1 *)(param_1 + 0xd7) = 10;
  *(undefined4 *)((long)param_1 + 0x6c4) = 0;
  *(undefined2 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)((long)param_1 + 0x6bc) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 10;
  *(undefined4 *)((long)param_1 + 0x6d4) = 0;
  *(undefined2 *)(param_1 + 0xda) = 0;
  *(undefined4 *)((long)param_1 + 0x6cc) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 10;
  *(undefined4 *)((long)param_1 + 0x6e4) = 0;
  *(undefined2 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)((long)param_1 + 0x6dc) = 0;
  *(undefined1 *)(param_1 + 0xdd) = 10;
  *(undefined4 *)((long)param_1 + 0x6f2) = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined4 *)((long)param_1 + 0x6ec) = 0;
  param_1[0xe0] = param_2;
  param_1[0xe1] = param_3;
  return;
}


