/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ea0a4; name: FUN_029ea0a4
 */


void FUN_029ea0a4(long param_1,char *param_2,ulong param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char local_38;
  char local_37;
  
  if ((ulong)((*(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 4) * -0x5555555555555555) <=
      (ulong)*(uint *)(param_2 + 4)) {
LAB_029ea264:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar5 = *(long *)(param_1 + 0xb8) + (ulong)*(uint *)(param_2 + 4) * 0x30;
  pcVar6 = (char *)(lVar5 + 0x28);
  cVar1 = *pcVar6;
  piVar8 = (int *)(lVar5 + 0x2c);
  iVar3 = *piVar8;
  if ((param_3 & 1) == 0) {
    *piVar8 = iVar3 + -1;
    if (cVar1 != '\0' && iVar3 < 2) {
      *pcVar6 = '\0';
    }
  }
  else {
    *piVar8 = iVar3 + 1;
    if (cVar1 != '\x01' && -2 < iVar3) {
      *pcVar6 = '\x01';
    }
  }
  lVar5 = *(long *)(param_1 + 0xb8);
  uVar7 = (ulong)*(uint *)(param_2 + 4);
  if ((ulong)((*(long *)(param_1 + 0xc0) - lVar5 >> 4) * -0x5555555555555555) <= uVar7)
  goto LAB_029ea264;
  cVar2 = *(char *)(lVar5 + uVar7 * 0x30 + 0x28);
  if ((*(long *)(param_1 + 0x250) == 0) || ((cVar1 != '\0') == (cVar2 != '\0'))) goto LAB_029ea174;
  if (*param_2 == '\0') {
    if ((*PTR_DAT_047d3e28 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28);
      puVar11 = (undefined8 *)PTR_DAT_047d3e30;
      if (iVar3 != 0) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
        goto LAB_029ea1a8;
      }
    }
    puVar11 = (undefined8 *)PTR_DAT_047d3e30;
  }
  else {
    puVar11 = (undefined8 *)(lVar5 + uVar7 * 0x30 + 8);
  }
LAB_029ea1a8:
  local_60 = *puVar11;
  uStack_58 = puVar11[1];
  uVar10 = *(undefined8 *)param_2;
  local_50 = puVar11[2];
  plVar4 = (long *)puVar11[3];
  local_48 = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar9 = *(long **)(param_1 + 0x228);
  local_40 = uVar10;
  local_38 = cVar1;
  local_37 = cVar2;
  if (plVar9 != (long *)0x0) {
    do {
      (*(code *)plVar9[6])(plVar9 + 10,&local_60);
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
    plVar4 = local_48;
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
LAB_029ea174:
  return;
}


