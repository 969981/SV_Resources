/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a70f38; name: FUN_01a70f38
 */


void FUN_01a70f38(long param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ushort *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  
  lVar6 = *(long *)(param_1 + 0x48);
  if ((ulong)((*(long *)(param_1 + 0x50) - lVar6 >> 4) * -0x5555555555555555) <=
      (ulong)*(uint *)(param_2 + 4)) goto LAB_01a710e0;
  lVar7 = (ulong)*(uint *)(param_2 + 4) * 0x30;
  piVar3 = (int *)(lVar6 + lVar7 + 0x28);
  iVar1 = *piVar3;
  piVar8 = *(int **)(lVar6 + lVar7);
  puVar9 = (ushort *)((long)piVar8 - (long)*piVar8);
  if (*puVar9 < 7) {
    iVar5 = 0;
LAB_01a70fc0:
    iVar2 = 0;
  }
  else {
    iVar5 = 0;
    if ((ulong)puVar9[3] != 0) {
      iVar5 = *(int *)((long)piVar8 + (ulong)puVar9[3]);
    }
    if ((*puVar9 < 9) || ((ulong)puVar9[4] == 0)) goto LAB_01a70fc0;
    iVar2 = *(int *)((long)piVar8 + (ulong)puVar9[4]);
  }
  if (param_3 <= iVar2) {
    iVar2 = param_3;
  }
  if (iVar5 <= iVar2) {
    iVar5 = iVar2;
  }
  *piVar3 = iVar5;
  uVar4 = (ulong)*(uint *)(param_2 + 4);
  lVar6 = *(long *)(param_1 + 0x48);
  if ((ulong)((*(long *)(param_1 + 0x50) - lVar6 >> 4) * -0x5555555555555555) <= uVar4) {
LAB_01a710e0:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  iVar5 = *(int *)(lVar6 + uVar4 * 0x30 + 0x28);
  if (!(iVar1 != iVar5 && *(long *)(param_1 + 0x180) != 0)) goto LAB_01a71010;
  if (*param_2 == '\0') {
    if ((*PTR_DAT_047d3e28 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28);
      puVar12 = (undefined8 *)PTR_DAT_047d3e30;
      if (iVar2 != 0) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
        goto LAB_01a7104c;
      }
    }
    puVar12 = (undefined8 *)PTR_DAT_047d3e30;
  }
  else {
    puVar12 = (undefined8 *)(lVar6 + uVar4 * 0x30 + 8);
  }
LAB_01a7104c:
  local_70 = *puVar12;
  uStack_68 = puVar12[1];
  uVar13 = *(undefined8 *)param_2;
  local_60 = puVar12[2];
  plVar11 = (long *)puVar12[3];
  local_58 = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  plVar10 = *(long **)(param_1 + 0x158);
  local_50 = uVar13;
  local_48 = iVar1;
  iStack_44 = iVar5;
  if (plVar10 != (long *)0x0) {
    do {
      (*(code *)plVar10[6])(plVar10 + 10,&local_70);
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
    plVar11 = local_58;
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
LAB_01a71010:
  return;
}


