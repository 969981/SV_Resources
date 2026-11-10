/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c90ab8; name: FUN_00c90ab8
 */


void FUN_00c90ab8(long *param_1,long *param_2)

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
  long lVar11;
  undefined8 *puVar12;
  
  puVar9 = PTR_DAT_047dca90;
  lVar11 = *param_2;
  if ((lVar11 != 0) && (sVar3 = *(short *)(lVar11 + 0x1a), sVar3 != 0)) {
    puVar12 = *(undefined8 **)(lVar11 + 8);
    if (((*PTR_DAT_047dca88 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047dca88), puVar7 = PTR_DAT_047d39b8, iVar10 != 0)) {
      if (((*PTR_DAT_047d39b0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar8 = PTR_DAT_047d39c8, iVar10 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar10 != 0)) {
          *(undefined8 *)puVar8 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)puVar7 = puVar8;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
      *(undefined **)puVar9 = puVar7;
      __cxa_guard_release(PTR_DAT_047dca88);
    }
    if (puVar12 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        if (puVar12 == (undefined8 *)puVar9) goto LAB_00c90b58;
        puVar12 = (undefined8 *)*puVar12;
      } while (puVar12 != (undefined8 *)0x0);
    }
  }
  goto LAB_00c90ad8;
  while( true ) {
    if (bVar6) {
      lVar2 = 0;
      if (*(long *)(lVar11 + 0x10) != 0) {
        lVar2 = *(long *)(lVar11 + 0x10) + -8;
      }
      *param_1 = lVar2;
      return;
    }
    sVar3 = sVar4;
    if (sVar4 == 0) break;
LAB_00c90b58:
    sVar4 = *psVar1;
    if (sVar4 == sVar3) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00c90b7c;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00c90b7c:
      bVar6 = false;
    }
  }
LAB_00c90ad8:
  *param_1 = 0;
  return;
}


