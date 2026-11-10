/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01179260; name: FUN_01179260
 */


void FUN_01179260(long *param_1,undefined8 param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  short sVar13;
  undefined8 *puVar14;
  
  puVar7 = PTR_DAT_047d39c8;
  puVar6 = PTR_DAT_047d39b8;
  plVar9 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar9 == plVar2) {
    return;
  }
  pbVar10 = PTR_DAT_047d39b0;
LAB_011792b4:
  lVar11 = *plVar9;
  if ((lVar11 != 0) && (sVar13 = *(short *)(lVar11 + 0x1a), sVar13 != 0)) {
    puVar14 = *(undefined8 **)(lVar11 + 8);
    if (((*pbVar10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d39b0), iVar8 != 0)) {
      if (((*PTR_DAT_047d39c0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar8 != 0)) {
        *(undefined8 *)puVar7 = 0;
        __cxa_guard_release(PTR_DAT_047d39c0);
      }
      *(undefined **)puVar6 = puVar7;
      __cxa_guard_release(PTR_DAT_047d39b0);
    }
    pbVar10 = PTR_DAT_047d39b0;
    if (puVar14 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        if (puVar14 == (undefined8 *)puVar6) goto LAB_0117934c;
        puVar14 = (undefined8 *)*puVar14;
      } while (puVar14 != (undefined8 *)0x0);
    }
  }
  goto LAB_011792bc;
  while (sVar13 = sVar3, sVar3 != 0) {
LAB_0117934c:
    sVar3 = *psVar1;
    if (sVar3 == sVar13) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01179370;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01179370:
      bVar5 = false;
    }
    pbVar10 = PTR_DAT_047d39b0;
    if (bVar5) {
      if (*(long *)(lVar11 + 0x10) != 0) {
        plVar12 = (long *)(*(long *)(lVar11 + 0x10) + -8);
        (*(code *)plVar9[2])(plVar9 + 6,param_2);
        (**(code **)(*plVar12 + 0x18))(plVar12);
        pbVar10 = PTR_DAT_047d39b0;
      }
      break;
    }
  }
LAB_011792bc:
  plVar9 = plVar9 + 0x12;
  if (plVar9 == plVar2) {
    return;
  }
  goto LAB_011792b4;
}


