/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01229de4; name: FUN_01229de4
 */


void FUN_01229de4(long *param_1,long param_2,undefined4 param_3,long param_4,long param_5,
                 undefined4 param_6,long *param_7,long *param_8,long *param_9)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_047d66f8;
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
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar6);
  *param_1 = (long)&PTR_FUN_045803b8;
  param_1[4] = (long)&PTR_LAB_04580430;
  *plVar6 = (long)&DAT_04580480;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = param_6;
  param_1[8] = param_2;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[0x11] = 0;
  param_1[10] = param_4;
  param_1[0xb] = param_5;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((code *)param_7[2] != (code *)0x0) {
    (*(code *)param_7[2])(param_7 + 4,param_1 + 0x12);
    lVar3 = param_7[3];
    param_1[0xf] = param_7[1];
    param_1[0x11] = lVar3;
    lVar3 = *param_7;
    param_1[0x10] = param_7[2];
    param_1[0xe] = lVar3;
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if ((code *)param_8[2] != (code *)0x0) {
    (*(code *)param_8[2])(param_8 + 4,param_1 + 0x24);
    lVar3 = param_8[3];
    param_1[0x21] = param_8[1];
    param_1[0x23] = lVar3;
    lVar3 = *param_8;
    param_1[0x22] = param_8[2];
    param_1[0x20] = lVar3;
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  if ((code *)param_9[2] != (code *)0x0) {
    (*(code *)param_9[2])(param_9 + 4,param_1 + 0x34);
    lVar3 = param_9[3];
    param_1[0x31] = param_9[1];
    param_1[0x33] = lVar3;
    lVar3 = *param_9;
    param_1[0x32] = param_9[2];
    param_1[0x30] = lVar3;
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (param_1[0x20] == 0) {
    pcVar5 = (code *)param_1[0x21];
    if (pcVar5 != (code *)0x0) {
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      (*pcVar5)(param_1 + 0x24);
    }
    param_1[0x20] = (long)&LAB_020e43dc;
    param_1[0x21] = (long)&LAB_02acc044;
    param_1[0x22] = (long)&LAB_02acc048;
    param_1[0x23] = (long)&LAB_02acc054;
    param_1[0x24] = (long)param_1;
  }
  return;
}


