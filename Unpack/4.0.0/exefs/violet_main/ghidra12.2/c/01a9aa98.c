/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a9aa98; name: FUN_01a9aa98
 */


void FUN_01a9aa98(long *param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  
  sVar3 = *(short *)(param_2 + 0x1a);
  if (sVar3 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 8);
    if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar7 = PTR_DAT_047d39b8, iVar9 != 0)) {
      if (((*PTR_DAT_047d39b0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar8 = PTR_DAT_047d39c8, iVar9 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
          *(undefined8 *)puVar8 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)puVar7 = puVar8;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
      *(undefined **)PTR_DAT_047d3ab0 = puVar7;
      __cxa_guard_release(PTR_DAT_047d3aa8);
    }
    if (puVar10 != (undefined8 *)0x0) {
      psVar1 = (short *)(param_2 + 0x1a);
      do {
        if (puVar10 == (undefined8 *)PTR_DAT_047d3ab0) goto LAB_01a9ab18;
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
  }
  goto LAB_01a9aab8;
  while( true ) {
    if (bVar6) {
      lVar2 = 0;
      if (*(long *)(param_2 + 0x10) != 0) {
        lVar2 = *(long *)(param_2 + 0x10) + -0x28;
      }
      *param_1 = lVar2;
      return;
    }
    sVar3 = sVar4;
    if (sVar4 == 0) break;
LAB_01a9ab18:
    sVar4 = *psVar1;
    if (sVar4 == sVar3) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01a9ab44;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01a9ab44:
      bVar6 = false;
    }
  }
LAB_01a9aab8:
  *param_1 = 0;
  return;
}


