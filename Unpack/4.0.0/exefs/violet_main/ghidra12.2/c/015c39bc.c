/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c39bc; name: FUN_015c39bc
 */


void FUN_015c39bc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&PTR_LAB_045b32b8;
  param_1[1] = lVar5;
  param_1[4] = (long)&PTR_LAB_045b3330;
  plVar6 = param_1 + 5;
  *plVar6 = (long)&PTR_LAB_045b33e0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar6);
  *param_1 = (long)&PTR_FUN_045b3100;
  param_1[4] = (long)&PTR_LAB_045b31b0;
  *plVar6 = (long)&PTR_LAB_045b3260;
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 1;
  nn::os::InitializeLightEvent(param_1 + 9,0,1);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  puVar1 = PTR_DAT_047de190 + 0xe0;
  puVar2 = PTR_DAT_047de190 + 400;
  *param_1 = (long)(PTR_DAT_047de190 + 0x10);
  param_1[4] = (long)puVar1;
  *plVar6 = (long)puVar2;
  FUN_015c3b20(param_1 + 0xd);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  return;
}


