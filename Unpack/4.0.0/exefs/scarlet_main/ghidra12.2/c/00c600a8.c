/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c600a8; name: FUN_00c600a8
 */


void FUN_00c600a8(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  
  plVar9 = (long *)*param_1;
  uVar8 = param_1[1];
  if ((ulong)plVar9[0x15] <= uVar8) {
    return;
  }
  if ((uVar8 < (ulong)plVar9[8]) &&
     ((*(ulong *)(plVar9[7] + (uVar8 >> 3 & 0x1ffffffffffffff8)) >> (uVar8 & 0x3f) & 1) != 0)) {
    return;
  }
  pcVar10 = (char *)(*plVar9 + uVar8 * 0x48 + 0x28);
  if (*pcVar10 == '\0') {
    plVar9 = (long *)(*plVar9 + uVar8 * 0x48 + 0x30);
    lVar11 = *plVar9;
    if ((lVar11 != 0) && (sVar2 = *(short *)(lVar11 + 0x1a), sVar2 != 0)) {
      puVar13 = *(undefined8 **)(lVar11 + 8);
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
      if (puVar13 != (undefined8 *)0x0) {
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          if (puVar13 == (undefined8 *)PTR_DAT_047d39b8) goto LAB_00c6019c;
          puVar13 = (undefined8 *)*puVar13;
        } while (puVar13 != (undefined8 *)0x0);
      }
    }
  }
  goto LAB_00c60118;
  while (sVar2 = sVar3, sVar3 != 0) {
LAB_00c6019c:
    sVar3 = *psVar1;
    if (sVar3 == sVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00c601c0;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00c601c0:
      bVar5 = false;
    }
    if (bVar5) {
      if (*(long *)(lVar11 + 0x10) != 0) {
        plVar12 = (long *)(*(long *)(lVar11 + 0x10) + -8);
        uVar8 = FUN_0190e714(param_1[2],plVar9,param_2);
        if ((uVar8 & 1) != 0) {
          *pcVar10 = '\x01';
        }
                    /* WARNING: Could not recover jumptable at 0x00c6020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x18))(plVar12);
        return;
      }
      break;
    }
  }
LAB_00c60118:
  *pcVar10 = '\x01';
  return;
}


