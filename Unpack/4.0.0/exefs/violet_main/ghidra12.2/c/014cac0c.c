/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014cac0c; name: FUN_014cac0c
 */


void FUN_014cac0c(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
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
  plVar5 = param_1 + 5;
  *plVar5 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  *param_1 = (long)&PTR_LAB_04550b98;
  param_1[4] = (long)&PTR_LAB_04550c10;
  *plVar5 = (long)&PTR_LAB_04550c60;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_014cae50(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0x42b53333c3176666;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x4248000042340000;
  *(undefined8 *)((long)param_1 + 0x9c) = 0x42c9999a42340000;
  *(undefined8 *)((long)param_1 + 0xa4) = 0x3e99999a00000000;
  *(undefined8 *)((long)param_1 + 0xac) = 0x42c8000000000000;
  *(undefined8 *)((long)param_1 + 0xbc) = 0x42340000;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x41f0000042c80000;
  *(undefined8 *)((long)param_1 + 0xcc) = 0x4120000000000000;
  *(undefined8 *)((long)param_1 + 0xd4) = 0x4271333340a00000;
  *(undefined8 *)((long)param_1 + 0xdc) = 0x4271333300000000;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0x4248000000000000;
  *(undefined8 *)((long)param_1 + 0xe4) = 0x4248000000000000;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  FUN_014cae10(param_1 + 0x1f);
  param_1[0x32] = param_2;
  *(undefined1 *)(param_1 + 0x33) = 7;
  FUN_014cf650(param_1);
  FUN_014d5cc8(param_1);
  FUN_014cc298(param_1);
  memcpy(param_1 + 0x2c,&DAT_03d314d8,0x2c);
  return;
}


