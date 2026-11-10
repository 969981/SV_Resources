/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033abb4; name: FUN_0033abb4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0033abb4(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  FUN_0038db40(param_2 + 0x40);
  if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0033ace0 to 0033ace3 has its CatchHandler @ 0033ace4 */
    abort();
  }
  uVar8 = *(ulong *)(param_2 + 0x30);
  uVar6 = uVar8 >> 8;
  lVar5 = *(long *)(param_2 + 0x18);
  puVar1 = (undefined4 *)(*(long *)(lVar5 + uVar6 * 8) + (uVar8 & 0xff) * 0x10);
  *param_1 = *puVar1;
  *(undefined8 *)(param_1 + 2) = 0;
  plVar7 = (long *)(puVar1 + 2);
  lVar9 = *plVar7;
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    plVar2 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar8 = *(ulong *)(param_2 + 0x30);
    uVar6 = uVar8 >> 8;
    lVar9 = *plVar7;
    lVar5 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_1 + 2) = lVar9;
  puVar10 = *(undefined8 **)(*(long *)(lVar5 + uVar6 * 8) + (uVar8 & 0xff) * 0x10 + 8);
  if (puVar10 != (undefined8 *)0x0) {
    plVar7 = puVar10 + 1;
    do {
      lVar5 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
  }
  uVar6 = *(long *)(param_2 + 0x30) + _DAT_03caae20;
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + _UNK_03caae28;
  *(ulong *)(param_2 + 0x30) = uVar6;
  if (0x1ff < uVar6) {
    FUN_0049e790(PTR_LAB_047cba48,**(undefined8 **)(param_2 + 0x18));
    *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 8;
    *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + -0x100;
  }
                    /* try { // try from 0033aca8 to 0033acaf has its CatchHandler @ 0033acfc */
  FUN_0038db60(param_2 + 0x40);
  return;
}


