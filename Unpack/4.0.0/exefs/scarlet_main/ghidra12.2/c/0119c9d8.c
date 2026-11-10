/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0119c9d8; name: FUN_0119c9d8
 */


void FUN_0119c9d8(long param_1,uint param_2)

{
  short *psVar1;
  long *plVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  short sVar10;
  int iVar11;
  long *plVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  
  lVar9 = *(long *)(param_1 + 0x1b8);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar10) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_0119ca48;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0119ca48:
        bVar6 = false;
      }
      if (bVar6) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        iVar3 = *(int *)(lVar9 + 0x188);
        plVar12 = (long *)(lVar9 + -0x28);
        if (0 < iVar3) {
          iVar11 = 0;
          do {
            puVar8 = (undefined8 *)FUN_00d4fa5c(plVar12,iVar11);
            local_60 = *puVar8;
            uStack_58 = puVar8[1];
            local_50 = puVar8[2];
            plVar2 = (long *)puVar8[3];
            plStack_48 = plVar2;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x18))(plVar2);
            }
            uVar7 = FUN_0276805c(plVar12,&local_60);
            if ((uVar7 & 1) != (param_2 & 1)) {
              FUN_02767ea4(plVar12,param_2 & 1,&local_60);
            }
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x20))(plVar2);
            }
            iVar11 = iVar11 + 1;
          } while (iVar3 != iVar11);
        }
                    /* WARNING: Could not recover jumptable at 0x0119cb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x60))(plVar12);
        return;
      }
      sVar10 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


