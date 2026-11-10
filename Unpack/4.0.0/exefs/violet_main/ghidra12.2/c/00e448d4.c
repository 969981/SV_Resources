/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e448d4; name: FUN_00e448d4
 */


void FUN_00e448d4(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  lVar9 = *param_2;
  if ((lVar9 != 0) && (sVar2 = *(short *)(lVar9 + 0x1a), sVar2 != 0)) {
    puVar11 = *(undefined8 **)(lVar9 + 8);
    if (((*PTR_DAT_047d39b0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar6 = PTR_DAT_047d39c8, iVar7 != 0)) {
      if (((*PTR_DAT_047d39c0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar7 != 0)) {
        *(undefined8 *)puVar6 = 0;
        __cxa_guard_release(PTR_DAT_047d39c0);
      }
      *(undefined **)PTR_DAT_047d39b8 = puVar6;
      __cxa_guard_release(PTR_DAT_047d39b0);
    }
    if (puVar11 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        if (puVar11 == (undefined8 *)PTR_DAT_047d39b8) goto LAB_00e44964;
        puVar11 = (undefined8 *)*puVar11;
      } while (puVar11 != (undefined8 *)0x0);
    }
  }
  goto LAB_00e448f0;
  while (sVar2 = sVar3, sVar3 != 0) {
LAB_00e44964:
    sVar3 = *psVar1;
    if (sVar3 == sVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00e44988;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00e44988:
      bVar5 = false;
    }
    if (bVar5) {
      if (*(long *)(lVar9 + 0x10) != 0) {
        plVar8 = (long *)param_2[2];
        plVar10 = (long *)(*(long *)(lVar9 + 0x10) + -8);
        *param_1 = (long)plVar8;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x10))();
        }
                    /* WARNING: Could not recover jumptable at 0x00e449d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x18))(plVar10);
        return;
      }
      break;
    }
  }
LAB_00e448f0:
  *param_1 = 0;
  return;
}


