/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e75b2c; name: FUN_01e75b2c
 */


ulong FUN_01e75b2c(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long *plVar16;
  long *local_90;
  long lStack_88;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  ulong local_70;
  uint local_68;
  ulong local_60;
  long *plStack_58;
  
  puVar7 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  puVar7 = PTR_DAT_047d8c78;
  if (lVar11 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar14 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar14;
  param_1[4] = (long)puVar1;
  param_1[5] = (long)(puVar7 + 0xd8);
  plVar16 = param_1 + 6;
  *plVar16 = 0;
  param_1[7] = 0;
  puVar7 = PTR_DAT_047d3908;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar8 = PTR_DAT_047d3918;
  puVar1 = PTR_DAT_047d3910;
  uVar12 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar12;
  FUN_00d1a58c(&local_90,uVar12,param_1 + 5);
  puVar15 = (ulong *)*plVar16;
  *plVar16 = 0;
  if (puVar15 != (ulong *)0x0) {
    puVar2 = puVar15 + 3;
    do {
      sVar4 = (short)*puVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *(short *)puVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)puVar1;
        *(long *)puVar8 = lVar11;
        local_70 = *puVar15;
        FUN_00c44438(lVar11 + 0x8040,&local_70);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  param_1[6] = (long)local_90;
  param_1[7] = *local_90;
  *param_1 = (long)&PTR_FUN_045e1028;
  param_1[4] = (long)&PTR_LAB_045e10a8;
  param_1[5] = (long)&DAT_045e10f8;
  param_1[8] = param_2;
  FUN_027b702c(param_1 + 9,param_3);
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x6d) = 0;
  uVar13 = 0;
  if (*param_3 != 0) {
    uVar12 = FUN_027b7148();
    uVar13 = FUN_01cfa5b0(&local_70,uVar12);
    uVar9 = (uint)((byte)local_70 >> 1);
    if ((local_70 & 1) != 0) {
      uVar9 = local_68;
    }
    local_90 = (long *)0x0;
    lStack_88 = 0;
    local_80 = 0;
    uStack_7b = 0;
    uStack_78 = 0;
    if (uVar9 < 0x1d) {
      uVar13 = (ulong)&local_70 | 1;
      if ((local_70 & 1) != 0) {
        uVar13 = local_60;
      }
      uVar9 = snprintf((char *)&local_90,0x1d,"%s",uVar13);
      uVar13 = (ulong)uVar9;
    }
    *(ulong *)((long)param_1 + 0x6d) = CONCAT53(uStack_78,uStack_7b);
    param_1[0xc] = lStack_88;
    param_1[0xd] = CONCAT35(uStack_7b,local_80);
    param_1[0xb] = (long)local_90;
    if (((byte)local_70 & 1) != 0) {
      uVar13 = (**(code **)(*plStack_58 + 0x18))
                         (plStack_58,local_60,local_70 & 0xfffffffffffffffe,1);
    }
  }
  return uVar13;
}


