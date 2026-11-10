/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01645430; name: FUN_01645430
 */


void FUN_01645430(long *param_1)

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
  *param_1 = (long)&PTR_LAB_04581b70;
  param_1[4] = (long)&PTR_LAB_04581c00;
  *plVar5 = (long)&DAT_04581c50;
  plVar5 = param_1 + 8;
  do {
    *(undefined4 *)plVar5 = 0;
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[5] = 0;
    *(undefined4 *)(plVar5 + 6) = 0;
    plVar5[7] = 0;
    *(undefined4 *)(plVar5 + 8) = 0;
    plVar5[9] = 0;
    *(undefined4 *)(plVar5 + 10) = 0;
    plVar5[0xb] = 0;
    plVar5 = plVar5 + 0xc;
  } while (plVar5 != param_1 + 0x260);
  return;
}


