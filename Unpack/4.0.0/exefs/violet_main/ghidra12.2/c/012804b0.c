/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012804b0; name: FUN_012804b0
 */


void FUN_012804b0(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  char *pcVar8;
  
  pcVar5 = (char *)FUN_01280638(param_2 + 0x28,*(undefined8 *)(param_3 + 8));
  puVar3 = PTR_DAT_047d3e30;
  puVar2 = PTR_DAT_047d3e28;
  if (pcVar5 == (char *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    pcVar8 = *(char **)(puVar3 + 8);
    plVar7 = *(long **)(puVar3 + 0x18);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      cVar1 = *pcVar8;
      (**(code **)(*plVar7 + 0x20))(plVar7);
      goto joined_r0x0128056c;
    }
  }
  else {
    pcVar6 = pcVar5;
    pcVar8 = pcVar5;
    if (*pcVar5 != '\0') {
      do {
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
    }
  }
  cVar1 = *pcVar8;
joined_r0x0128056c:
  if (cVar1 != '\0') {
    plVar7 = *(long **)(*(long *)(param_2 + 0x20) + 0x18);
    (**(code **)(*plVar7 + 0x78))(plVar7,pcVar5,1);
    FUN_00faae34(param_1);
    return;
  }
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  FUN_00ddaef8(param_1,*(undefined8 *)(puVar3 + 8),0);
  return;
}


