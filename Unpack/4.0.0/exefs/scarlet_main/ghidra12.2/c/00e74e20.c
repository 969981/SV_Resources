/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e74e20; name: FUN_00e74e20
 */


void FUN_00e74e20(long *param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  short sVar8;
  undefined8 *puVar9;
  
  sVar8 = *(short *)(param_2 + 0x1a);
  if (sVar8 != 0) {
    puVar9 = *(undefined8 **)(param_2 + 8);
    if (((*PTR_DAT_047dce98 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047dce98), iVar6 != 0)) {
      uVar7 = FUN_019caf50();
      *(undefined8 *)PTR_DAT_047dcea0 = uVar7;
      __cxa_guard_release(PTR_DAT_047dce98);
    }
    if (puVar9 != (undefined8 *)0x0) {
      psVar1 = (short *)(param_2 + 0x1a);
      do {
        if (puVar9 == (undefined8 *)PTR_DAT_047dcea0) goto LAB_00e74e7c;
        puVar9 = (undefined8 *)*puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
  }
  goto LAB_00e74e6c;
  while( true ) {
    if (bVar5) {
      lVar2 = 0;
      if (*(long *)(param_2 + 0x10) != 0) {
        lVar2 = *(long *)(param_2 + 0x10) + -0x28;
      }
      *param_1 = lVar2;
      return;
    }
    sVar8 = sVar3;
    if (sVar3 == 0) break;
LAB_00e74e7c:
    sVar3 = *psVar1;
    if (sVar3 == sVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00e74eac;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00e74eac:
      bVar5 = false;
    }
  }
LAB_00e74e6c:
  *param_1 = 0;
  return;
}


