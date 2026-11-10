/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd0d38; name: FUN_00cd0d38
 */


void FUN_00cd0d38(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
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
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar6 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar6;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar7 = param_1 + 5;
  *plVar7 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar7);
  *param_1 = (long)&DAT_045e8de0;
  param_1[4] = (long)&PTR_LAB_045e8e90;
  *plVar7 = (long)&DAT_045e8ee0;
  plVar7 = (long *)param_1[1];
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = (long)plVar7;
  param_1[0x45] = param_2;
  lVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,param_2,0x1000);
  lVar6 = param_1[0x40];
  param_1[0x40] = lVar3;
  if (lVar6 != 0) {
    plVar9 = (long *)param_1[0x41];
    lVar3 = param_1[0x42];
    lVar8 = param_1[0x43];
    uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar9,lVar6,lVar3,lVar8);
        goto LAB_00cd0e2c;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar6,lVar3,lVar8);
  }
LAB_00cd0e2c:
  param_1[0x43] = 0x1000;
  param_1[0x41] = (long)plVar7;
  param_1[0x42] = param_2;
  *param_1 = (long)&DAT_045e8de0;
  param_1[0x46] = 0;
  param_1[4] = (long)&PTR_LAB_045e8e90;
  param_1[5] = (long)&DAT_045e8ee0;
  *(undefined4 *)((long)param_1 + 0x244) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x47,0,1);
  *(undefined1 *)((long)param_1 + 0x24a) = 0;
  *(undefined2 *)(param_1 + 0x49) = 0x100;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  return;
}


