/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175bf68; name: FUN_0175bf68
 */


long FUN_0175bf68(long *param_1,undefined4 *param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_28;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_1;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  lVar10 = (**(code **)(*param_1 + 0x10))(param_1,0x1b8,8);
  if (lVar10 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
LAB_0175c180:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar4 = *param_2;
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_00c43ef0(&local_60,param_3);
  local_50 = *(undefined8 *)(param_3 + 0x10);
  local_48 = *(undefined1 *)(param_3 + 0x18);
  FUN_0175c198(lVar10,uVar4,&local_60);
  puVar7 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_0175c180;
  }
  *(undefined4 *)(lVar10 + 0x18) = 0x801b8;
  *(long **)(lVar10 + 8) = param_1;
  *(long *)(lVar10 + 0x10) = lVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  return lVar10;
}


