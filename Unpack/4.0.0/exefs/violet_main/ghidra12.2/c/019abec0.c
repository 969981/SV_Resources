/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019abec0; name: FUN_019abec0
 */


void FUN_019abec0(long *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *local_58;
  undefined8 local_38;
  
  puVar7 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  puVar7 = PTR_DAT_047d8c78;
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar12 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar12;
  param_1[4] = (long)puVar1;
  param_1[5] = (long)(puVar7 + 0xd8);
  plVar14 = param_1 + 6;
  *plVar14 = 0;
  param_1[7] = 0;
  puVar7 = PTR_DAT_047d3908;
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar1 = PTR_DAT_047d3910;
  uVar11 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar11;
  FUN_00d1a58c(&local_58,uVar11,param_1 + 5);
  puVar13 = (undefined8 *)*plVar14;
  *plVar14 = 0;
  if (puVar13 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar13 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)puVar1;
        *(long *)puVar8 = lVar10;
        local_38 = *puVar13;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  param_1[6] = (long)local_58;
  param_1[7] = *local_58;
  *param_1 = (long)&PTR_FUN_045e57b8;
  param_1[4] = (long)&PTR_LAB_045e5830;
  param_1[5] = (long)&DAT_045e5880;
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined1 *)((long)param_1 + 0x41) = param_3;
  *(undefined1 *)((long)param_1 + 0x42) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}


