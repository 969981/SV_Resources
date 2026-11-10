/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00323654; name: FUN_00323654
 */


void FUN_00323654(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long local_60 [4];
  
  puVar6 = PTR_DAT_047cc628;
  local_60[3] = *(long *)PTR_DAT_047cc628;
  local_60[0] = local_60[3] + 800;
  local_60[1] = local_60[3] + 0x340;
  local_60[2] = local_60[3] + 0x360;
  local_60[3] = local_60[3] + 0x380;
  iVar3 = *(int *)(param_1 + 0x2c0);
  plVar7 = *(long **)(param_1 + 0xc0);
  if (0 < *(int *)(param_1 + 0x244)) {
    iVar3 = iVar3 + 1;
  }
  do {
    lVar9 = *plVar7;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar9 + (ulong)(uint)(iVar3 << 5);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((ulong)plVar7[1] < (ulong)(uint)(iVar3 << 5) + lVar9) {
    lVar9 = FUN_0038e7c0();
  }
  else {
    lVar9 = (long)plVar7 + lVar9 + 0x20;
  }
  lVar1 = param_2 + 0xa0;
  *(long *)(param_2 + 0x98) = lVar9;
  FUN_00377b00((long *)(param_1 + 0x2c0),lVar1);
  if (*(long *)(param_2 + 0x168) == 0) {
    iVar3 = *(int *)(param_1 + 0x244);
  }
  else {
    FUN_00377560(lVar1,0x15);
    iVar3 = *(int *)(param_1 + 0x244);
  }
  if (0 < iVar3) {
    uVar8 = FUN_00376310(*(long *)puVar6 + 0x2a0,local_60[iVar3 + -1],0);
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x98) + *(long *)(param_1 + 0x2c0) * 0x20);
    *puVar2 = uVar8;
    lVar9 = FUN_00377430(lVar1,puVar2,0x15);
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  *(byte *)(param_2 + 0x538) = *(byte *)(param_2 + 0x538) | 1;
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
  plVar7 = *(long **)(param_3 + 0x20);
  *plVar7 = lVar1;
  *(undefined4 *)(plVar7 + 1) = *(undefined4 *)(param_1 + 0x3a8);
  plVar7[2] = *(long *)(param_1 + 0x3b0);
  return;
}


