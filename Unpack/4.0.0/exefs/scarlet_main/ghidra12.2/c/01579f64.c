/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01579f64; name: FUN_01579f64
 */


void FUN_01579f64(long *param_1,undefined8 *param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  puVar2 = PTR_DAT_047d8c78;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar6;
  param_1[4] = (long)(puVar2 + 0x88);
  plVar7 = param_1 + 5;
  *plVar7 = (long)(puVar2 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar7);
  *param_1 = (long)&PTR_FUN_045ee948;
  param_1[4] = (long)&PTR_LAB_045ee9c0;
  *plVar7 = (long)&PTR_LAB_045eea10;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar5 = (undefined8 *)
           (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],param_4 + 0x10,8);
  param_1[8] = (long)puVar5;
  *(uint *)(param_1 + 9) = param_4 + 0x10;
  uVar1 = param_2[1];
  *puVar5 = *param_2;
  puVar5[1] = uVar1;
  memcpy((void *)(param_1[8] + 0x10),param_3,(ulong)param_4);
  return;
}


