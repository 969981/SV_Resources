/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02152218; name: FUN_02152218
 */


void FUN_02152218(long *param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  short sVar9;
  undefined8 *puVar10;
  
  sVar9 = *(short *)(param_2 + 0x1a);
  if (sVar9 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 8);
    if (((*PTR_DAT_047dd110 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047dd110), puVar6 = PTR_DAT_047dd048, iVar7 != 0)) {
      if (((*PTR_DAT_047dd040 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047dd040), iVar7 != 0)) {
        uVar8 = FUN_00ea2d24();
        *(undefined8 *)puVar6 = uVar8;
        __cxa_guard_release(PTR_DAT_047dd040);
      }
      *(undefined **)PTR_DAT_047dd118 = puVar6;
      __cxa_guard_release(PTR_DAT_047dd110);
    }
    if (puVar10 != (undefined8 *)0x0) {
      psVar1 = (short *)(param_2 + 0x1a);
      do {
        if (puVar10 == (undefined8 *)PTR_DAT_047dd118) goto LAB_02152260;
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
  }
  goto LAB_021522b8;
  while( true ) {
    if (bVar5) {
      lVar2 = 0;
      if (*(long *)(param_2 + 0x10) != 0) {
        lVar2 = *(long *)(param_2 + 0x10) + -0x28;
      }
      *param_1 = lVar2;
      return;
    }
    sVar9 = sVar3;
    if (sVar3 == 0) break;
LAB_02152260:
    sVar3 = *psVar1;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02152290;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02152290:
      bVar5 = false;
    }
  }
LAB_021522b8:
  *param_1 = 0;
  return;
}


