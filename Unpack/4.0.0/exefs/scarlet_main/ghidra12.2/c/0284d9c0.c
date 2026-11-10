/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284d9c0; name: FUN_0284d9c0
 */


void FUN_0284d9c0(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  puVar12 = *(undefined8 **)(param_1 + 8);
  do {
    while( true ) {
      do {
        if (puVar12 == param_2) {
          *(undefined8 **)(param_1 + 8) = param_2;
          return;
        }
        puVar12 = puVar12 + -2;
        puVar11 = (undefined8 *)*puVar12;
      } while (puVar11 == (undefined8 *)0x0);
      psVar1 = (short *)(puVar11 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 != 1) break;
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar6);
        }
        lVar10 = *(long *)puVar7;
        *(long *)puVar8 = lVar10;
        local_68 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_68);
      }
    }
  } while (sVar3 != 0);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


