/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175c198; name: FUN_0175c198
 */


void FUN_0175c198(long *param_1,undefined1 param_2,long param_3)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *local_58;
  undefined8 local_38;
  
  puVar8 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar8 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  puVar8 = PTR_DAT_047d8c78;
  if (lVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar13 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar13;
  param_1[4] = (long)puVar1;
  param_1[5] = (long)(puVar8 + 0xd8);
  plVar15 = param_1 + 6;
  *plVar15 = 0;
  param_1[7] = 0;
  puVar8 = PTR_DAT_047d3908;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar9 = PTR_DAT_047d3918;
  puVar1 = PTR_DAT_047d3910;
  uVar12 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar12;
  FUN_00d1a58c(&local_58,uVar12,param_1 + 5);
  puVar14 = (undefined8 *)*plVar15;
  *plVar15 = 0;
  if (puVar14 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar14 + 3);
    do {
      sVar4 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)puVar14 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)puVar1;
        *(long *)puVar9 = lVar11;
        local_38 = *puVar14;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  param_1[6] = (long)local_58;
  param_1[7] = *local_58;
  *param_1 = (long)&PTR_FUN_045e5b78;
  param_1[4] = (long)&PTR_LAB_045e5c18;
  param_1[5] = (long)&DAT_045e5c68;
  param_1[8] = (long)&PTR_LAB_045e5cc0;
  *(undefined1 *)(param_1 + 9) = param_2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_00c43ef0(param_1 + 10,param_3);
  lVar11 = *(long *)(param_3 + 0x10);
  uVar5 = *(undefined1 *)(param_3 + 0x18);
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xd) = uVar5;
  param_1[0xc] = lVar11;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  FUN_0175c4a0();
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_0175c4a0(param_1 + 0x1a);
  memset(param_1 + 0x1e,0,0xc1);
  return;
}


