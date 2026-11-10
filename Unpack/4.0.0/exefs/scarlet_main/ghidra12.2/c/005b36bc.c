/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005b36bc; name: FUN_005b36bc
 */


void FUN_005b36bc(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x118))(*(long **)PTR_DAT_047cbb08,param_2[2]);
  lVar11 = param_2[3];
  lVar10 = param_2[2];
  lVar6 = param_2[4];
  lVar4 = param_2[5];
  lVar9 = param_2[1];
  lVar8 = *param_2;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x14] = lVar4;
  param_1[0x13] = lVar6;
  param_1[0x1b] = (long)(param_1 + 0xf);
  param_1[0x1c] = (long)param_1;
  auVar7 = NEON_ext(*(undefined1 (*) [16])(param_1 + 5),*(undefined1 (*) [16])(param_1 + 5),8,1);
  param_1[0x2d] = param_1[2];
  lVar6 = param_1[0x13];
  param_1[0x12] = lVar11;
  param_1[0x11] = lVar10;
  param_1[0x17] = 0;
  param_1[0x10] = lVar9;
  param_1[0xf] = lVar8;
  *(undefined8 *)((long)param_1 + 0xbd) = 0;
  param_1[0x2f] = auVar7._8_8_;
  param_1[0x2e] = auVar7._0_8_;
  if (((lVar6 != 0) || (lVar6 = param_1[0x14], lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x28) != *(long *)(lVar6 + 0x20))) {
    plVar1 = (long *)(param_1[0x10] + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar5 = FUN_00224e5c(param_1 + 0x16);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005b377c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


