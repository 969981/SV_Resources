/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0062573c; name: FUN_0062573c
 */


void FUN_0062573c(long *param_1,long *param_2)

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
  
  *(undefined1 *)(param_1 + 0xf) = 0;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x118))(*(long **)PTR_DAT_047cbb08,param_2[2]);
  lVar10 = param_2[5];
  lVar9 = param_2[4];
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar8 = param_2[3];
  lVar7 = param_2[2];
  param_1[0x15] = (long)(param_1 + 9);
  param_1[0x16] = (long)param_1;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0xc] = lVar8;
  param_1[0xb] = lVar7;
  param_1[0x27] = param_1[2];
  param_1[0x11] = 0;
  *(undefined8 *)((long)param_1 + 0x8d) = 0;
  param_1[0xe] = lVar10;
  param_1[0xd] = lVar9;
  param_1[10] = lVar6;
  param_1[9] = lVar5;
  if (param_1[4] != 0) {
    param_1[0x25] = param_1[4];
    param_1[0x26] = (long)param_1 + 0x32;
  }
  lVar5 = param_1[0xd];
  if (((lVar5 != 0) || (lVar5 = param_1[0xe], lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x28) != *(long *)(lVar5 + 0x20))) {
    plVar1 = (long *)(param_1[10] + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = FUN_00224e5c(param_1 + 0x10);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00625804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


