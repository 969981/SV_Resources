/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ee27c; name: FUN_018ee27c
 */


/* WARNING: Removing unreachable block (ram,0x018ee384) */
/* WARNING: Removing unreachable block (ram,0x018ee454) */

void FUN_018ee27c(char *param_1,byte *param_2)

{
  short *psVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  short sVar9;
  
  cVar2 = DAT_048537d0;
  if ((1 < *param_2) ||
     (puVar5 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047de158 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047de158);
      puVar5 = PTR_DAT_047de160;
      if (iVar4 != 0) {
        *(undefined8 *)(PTR_DAT_047de160 + 0x30) = 0;
        *(undefined8 *)(puVar5 + 0x38) = 0;
        *(undefined8 *)(puVar5 + 0x20) = 0;
        *(undefined8 *)(puVar5 + 0x28) = 0;
        *(undefined8 *)(puVar5 + 0x10) = 0;
        *(undefined8 *)(puVar5 + 0x18) = 0;
        *(undefined **)puVar5 = PTR_DAT_047d94a8 + 0x10;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_FUN_047de178,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047de158);
      }
    }
    else {
      puVar5 = PTR_DAT_047de160;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_047dffb8;
  if (cVar2 == '\0') {
    UNRECOVERED_JUMPTABLE = (code *)0x0;
  }
  cVar2 = *param_1;
  if (cVar2 == '\x02') {
    if ((*(long *)(param_1 + 8) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar6 == 0)) {
      return;
    }
    lVar6 = lVar6 + -0x28;
  }
  else {
    if (cVar2 == '\x03') {
      lVar6 = *(long *)(param_1 + 8);
      if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar6 + 0x1a);
        sVar9 = *(short *)(lVar6 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar9) {
            cVar2 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 != '\0') goto LAB_018ee424;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_018ee424:
            bVar8 = false;
          }
          if (bVar8) {
            plVar7 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
            if (*(long *)(lVar6 + 0x10) == 0) {
              return;
            }
            (*UNRECOVERED_JUMPTABLE)(plVar7,puVar5);
                    /* WARNING: Could not recover jumptable at 0x018ee478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar7 + 0x60))(plVar7);
            return;
          }
          sVar9 = sVar3;
        } while (sVar3 != 0);
      }
      return;
    }
    if ((cVar2 != '\x01') && (cVar2 != '\0')) {
      return;
    }
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x018ee390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar6,puVar5);
  return;
}


