/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01327714; name: FUN_01327714
 */


void FUN_01327714(long *param_1,undefined8 *param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  puVar4 = PTR_DAT_047d8c78;
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar8;
  param_1[4] = (long)(puVar4 + 0x88);
  plVar9 = param_1 + 5;
  *plVar9 = (long)(puVar4 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar9);
  *param_1 = (long)&PTR_FUN_045ed338;
  param_1[4] = (long)&PTR_LAB_045ed3b0;
  *plVar9 = (long)&PTR_LAB_045ed400;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar7 = (undefined8 *)
           (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],param_4 + 0x20,8);
  param_1[8] = (long)puVar7;
  *(uint *)(param_1 + 9) = param_4 + 0x20;
  uVar2 = param_2[3];
  uVar1 = *param_2;
  uVar3 = param_2[1];
  puVar7[2] = param_2[2];
  puVar7[3] = uVar2;
  *puVar7 = uVar1;
  puVar7[1] = uVar3;
  memcpy((void *)(param_1[8] + 0x20),param_3,(ulong)param_4);
  return;
}


