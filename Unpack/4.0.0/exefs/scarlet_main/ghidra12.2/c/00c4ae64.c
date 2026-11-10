/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4ae64; name: FUN_00c4ae64
 */


void FUN_00c4ae64(long *param_1,long param_2)

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
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 *puVar13;
  
  puVar11 = PTR_DAT_047dd328;
  sVar3 = *(short *)(param_2 + 0x1a);
  if (sVar3 != 0) {
    puVar13 = *(undefined8 **)(param_2 + 8);
    if (((*PTR_DAT_047dd320 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047dd320), puVar10 = PTR_DAT_047d9108, iVar12 != 0)) {
      if (((*PTR_DAT_047d9100 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d9100), puVar9 = PTR_DAT_047d3ab0, iVar12 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar7 = PTR_DAT_047d39b8, iVar12 != 0))
        {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar8 = PTR_DAT_047d39c8, iVar12 != 0
             )) {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar12 != 0)) {
              *(undefined8 *)puVar8 = 0;
              __cxa_guard_release(PTR_DAT_047d39c0);
            }
            *(undefined **)puVar7 = puVar8;
            __cxa_guard_release(PTR_DAT_047d39b0);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
        *(undefined **)puVar10 = puVar9;
        __cxa_guard_release(PTR_DAT_047d9100);
      }
      *(undefined **)puVar11 = puVar10;
      __cxa_guard_release(PTR_DAT_047dd320);
    }
    if (puVar13 != (undefined8 *)0x0) {
      psVar1 = (short *)(param_2 + 0x1a);
      do {
        if (puVar13 == (undefined8 *)puVar11) goto LAB_00c4aef8;
        puVar13 = (undefined8 *)*puVar13;
      } while (puVar13 != (undefined8 *)0x0);
    }
  }
  goto LAB_00c4ae88;
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
LAB_00c4aef8:
    sVar4 = *psVar1;
    if (sVar4 == sVar3) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00c4af24;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00c4af24:
      bVar6 = false;
    }
  }
LAB_00c4ae88:
  *param_1 = 0;
  return;
}


