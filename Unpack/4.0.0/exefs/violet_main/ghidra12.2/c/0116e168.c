/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0116e168; name: FUN_0116e168
 */


void FUN_0116e168(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 local_18;
  
  piVar1 = (int *)((long)param_1 + 0x1c);
  do {
    iVar4 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 != -1) {
    if ((*PTR_DAT_047d3908 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d3908);
      if (iVar4 != 0) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
    }
    lVar5 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar5;
    local_18 = *param_1;
    FUN_00c44438(lVar5 + 0x8040,&local_18);
  }
  return;
}


