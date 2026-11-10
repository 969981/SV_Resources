/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005b31f0; name: FUN_005b31f0
 */


void FUN_005b31f0(long *param_1,long *param_2)

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
  
  *(undefined1 *)(param_1 + 0xe) = 0;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x118))(*(long **)PTR_DAT_047cbb08,param_2[2]);
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar8 = param_2[3];
  lVar7 = param_2[2];
  lVar10 = param_2[5];
  lVar9 = param_2[4];
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x14] = (long)(param_1 + 8);
  param_1[0x15] = (long)param_1;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x85) = 0;
  param_1[9] = lVar6;
  param_1[8] = lVar5;
  param_1[0xb] = lVar8;
  param_1[10] = lVar7;
  param_1[0xd] = lVar10;
  param_1[0xc] = lVar9;
  if (*(char *)((long)param_1 + 9) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    param_1[0x1f] = param_1[3];
  }
  lVar5 = param_1[0xc];
  if (((lVar5 != 0) || (lVar5 = param_1[0xd], lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x28) != *(long *)(lVar5 + 0x20))) {
    plVar1 = (long *)(param_1[9] + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = FUN_00224e5c(param_1 + 0xf);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x005b32b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


