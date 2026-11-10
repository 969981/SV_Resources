/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0162fd40; name: FUN_0162fd40
 */


void FUN_0162fd40(long *param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  
  sVar3 = *(short *)(param_2 + 0x1a);
  if (sVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 8);
    if (((*PTR_DAT_047e0b70 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047e0b70), puVar9 = PTR_DAT_047d3ab0, iVar10 != 0)) {
      if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar7 = PTR_DAT_047d39b8, iVar10 != 0)) {
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar8 = PTR_DAT_047d39c8, iVar10 != 0))
        {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar10 != 0)) {
            *(undefined8 *)puVar8 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)puVar7 = puVar8;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(PTR_DAT_047d3aa8);
      }
      *(undefined **)PTR_DAT_047e0b78 = puVar9;
      __cxa_guard_release(PTR_DAT_047e0b70);
    }
    if (puVar11 != (undefined8 *)0x0) {
      psVar1 = (short *)(param_2 + 0x1a);
      do {
        if (puVar11 == (undefined8 *)PTR_DAT_047e0b78) goto LAB_0162fdb4;
        puVar11 = (undefined8 *)*puVar11;
      } while (puVar11 != (undefined8 *)0x0);
    }
  }
  goto LAB_0162fd60;
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
LAB_0162fdb4:
    sVar4 = *psVar1;
    if (sVar4 == sVar3) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_0162fde0;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0162fde0:
      bVar6 = false;
    }
  }
LAB_0162fd60:
  *param_1 = 0;
  return;
}


