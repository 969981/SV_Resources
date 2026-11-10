/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005b3fcc; name: FUN_005b3fcc
 */


void FUN_005b3fcc(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  *(undefined1 *)(param_1 + 10) = 0;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x118))(*(long **)PTR_DAT_047cbb08,param_2[2]);
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar8 = param_2[3];
  lVar7 = param_2[2];
  lVar10 = param_2[5];
  lVar9 = param_2[4];
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = (long)(param_1 + 4);
  param_1[0x11] = (long)param_1;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x65) = 0;
  param_1[5] = lVar6;
  param_1[4] = lVar5;
  param_1[7] = lVar8;
  param_1[6] = lVar7;
  param_1[9] = lVar10;
  param_1[8] = lVar9;
  if (*(char *)((long)param_1 + 9) != '\0') {
    *(undefined1 *)((long)param_1 + 100) = 1;
  }
  lVar5 = param_1[8];
  if (((lVar5 != 0) || (lVar5 = param_1[9], lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x28) != *(long *)(lVar5 + 0x20))) {
    plVar1 = (long *)(param_1[5] + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = FUN_00224e5c(param_1 + 0xb);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005b4084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


