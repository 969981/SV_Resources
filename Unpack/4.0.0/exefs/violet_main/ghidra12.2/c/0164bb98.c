/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0164bb98; name: FUN_0164bb98
 */


void FUN_0164bb98(long *param_1)

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
  *param_1 = (long)&PTR_LAB_04583048;
  param_1[4] = (long)&PTR_LAB_045830d8;
  *plVar5 = (long)&DAT_04583128;
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 0x30;
    *(undefined4 *)((long)param_1 + lVar3 + 0x4a) = 0;
    *(undefined4 *)((long)param_1 + lVar3 + 0x50) = 0;
    *(undefined4 *)((long)param_1 + lVar3 + 0x53) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x40) = 0;
    *(undefined1 *)((long)param_1 + lVar3 + 0x48) = 0;
    *(undefined4 *)((long)param_1 + lVar3 + 0x62) = 0;
    *(undefined4 *)((long)param_1 + lVar3 + 0x68) = 0;
    *(undefined4 *)((long)param_1 + lVar3 + 0x6b) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x58) = 0;
    *(undefined1 *)((long)param_1 + lVar3 + 0x60) = 0;
    lVar3 = lVar4;
  } while (lVar4 != 48000);
  *(undefined4 *)((long)param_1 + 0xbc06) = 0;
  *(undefined4 *)((long)param_1 + 0xbc0f) = 0;
  *(undefined4 *)((long)param_1 + 0xbc0c) = 0;
  *(undefined4 *)((long)param_1 + 0xbc1e) = 0;
  *(undefined4 *)((long)param_1 + 0xbc27) = 0;
  *(undefined4 *)((long)param_1 + 0xbc24) = 0;
  *(undefined1 *)((long)param_1 + 0xbc1c) = 0;
  *(undefined8 *)((long)param_1 + 0xbc14) = 0;
  *(undefined4 *)((long)param_1 + 0xbc36) = 0;
  *(undefined4 *)((long)param_1 + 0xbc3f) = 0;
  *(undefined4 *)((long)param_1 + 0xbc3c) = 0;
  *(undefined1 *)((long)param_1 + 0xbc34) = 0;
  *(undefined8 *)((long)param_1 + 0xbc2c) = 0;
  *(undefined4 *)((long)param_1 + 0xbc4e) = 0;
  *(undefined4 *)((long)param_1 + 0xbc57) = 0;
  *(undefined4 *)((long)param_1 + 0xbc54) = 0;
  *(undefined1 *)((long)param_1 + 0xbc4c) = 0;
  *(undefined8 *)((long)param_1 + 0xbc44) = 0;
  *(undefined4 *)((long)param_1 + 0xbc66) = 0;
  *(undefined4 *)((long)param_1 + 0xbc6f) = 0;
  *(undefined4 *)((long)param_1 + 0xbc6c) = 0;
  *(undefined1 *)((long)param_1 + 0xbc64) = 0;
  *(undefined8 *)((long)param_1 + 0xbc5c) = 0;
  *(undefined4 *)((long)param_1 + 0xbc7e) = 0;
  *(undefined4 *)((long)param_1 + 0xbc87) = 0;
  *(undefined4 *)((long)param_1 + 0xbc84) = 0;
  *(undefined1 *)((long)param_1 + 0xbc7c) = 0;
  *(undefined8 *)((long)param_1 + 0xbc74) = 0;
  *(undefined4 *)((long)param_1 + 0xbc96) = 0;
  *(undefined4 *)((long)param_1 + 0xbc9f) = 0;
  *(undefined4 *)((long)param_1 + 0xbc9c) = 0;
  *(undefined1 *)((long)param_1 + 0xbc94) = 0;
  *(undefined8 *)((long)param_1 + 0xbc8c) = 0;
  *(undefined4 *)((long)param_1 + 0xbcae) = 0;
  *(undefined4 *)((long)param_1 + 0xbcb7) = 0;
  *(undefined4 *)((long)param_1 + 0xbcb4) = 0;
  *(undefined1 *)((long)param_1 + 0xbcac) = 0;
  *(undefined8 *)((long)param_1 + 0xbca4) = 0;
  *(undefined4 *)((long)param_1 + 0xbcc6) = 0;
  *(undefined4 *)((long)param_1 + 0xbccf) = 0;
  *(undefined4 *)((long)param_1 + 0xbccc) = 0;
  *(undefined1 *)((long)param_1 + 0xbcc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbcbc) = 0;
  *(undefined4 *)((long)param_1 + 0xbcde) = 0;
  *(undefined4 *)((long)param_1 + 0xbce7) = 0;
  *(undefined4 *)((long)param_1 + 0xbce4) = 0;
  *(undefined1 *)((long)param_1 + 0xbcdc) = 0;
  *(undefined8 *)((long)param_1 + 0xbcd4) = 0;
  *(undefined4 *)((long)param_1 + 0xbcf6) = 0;
  *(undefined4 *)((long)param_1 + 0xbcff) = 0;
  *(undefined4 *)((long)param_1 + 0xbcfc) = 0;
  *(undefined1 *)((long)param_1 + 0xbcf4) = 0;
  *(undefined8 *)((long)param_1 + 0xbcec) = 0;
  *(undefined4 *)((long)param_1 + 0xbd0e) = 0;
  *(undefined4 *)((long)param_1 + 0xbd17) = 0;
  *(undefined4 *)((long)param_1 + 0xbd14) = 0;
  *(undefined1 *)((long)param_1 + 0xbd0c) = 0;
  *(undefined8 *)((long)param_1 + 0xbd04) = 0;
  *(undefined4 *)((long)param_1 + 0xbd26) = 0;
  *(undefined4 *)((long)param_1 + 0xbd2f) = 0;
  *(undefined4 *)((long)param_1 + 0xbd2c) = 0;
  *(undefined1 *)((long)param_1 + 0xbd24) = 0;
  *(undefined8 *)((long)param_1 + 0xbd1c) = 0;
  *(undefined4 *)((long)param_1 + 0xbd3e) = 0;
  *(undefined4 *)((long)param_1 + 0xbd47) = 0;
  *(undefined4 *)((long)param_1 + 0xbd44) = 0;
  *(undefined1 *)((long)param_1 + 0xbd3c) = 0;
  *(undefined8 *)((long)param_1 + 0xbd34) = 0;
  *(undefined4 *)((long)param_1 + 0xbd56) = 0;
  *(undefined4 *)((long)param_1 + 0xbd5f) = 0;
  *(undefined4 *)((long)param_1 + 0xbd5c) = 0;
  *(undefined1 *)((long)param_1 + 0xbd54) = 0;
  *(undefined8 *)((long)param_1 + 0xbd4c) = 0;
  memset(param_1 + 0x1778,0,0x45);
  return;
}


