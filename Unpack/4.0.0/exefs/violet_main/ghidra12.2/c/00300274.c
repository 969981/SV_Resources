/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00300274; name: FUN_00300274
 */


void FUN_00300274(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_50 [32];
  long local_28;
  
  FUN_0038db40(param_1 + 0x10);
                    /* try { // try from 0030029c to 003002b7 has its CatchHandler @ 003004e4 */
  FUN_003673f0(auStack_50,param_2);
  lVar4 = FUN_003427d0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),auStack_50,0)
  ;
  if (lVar4 == 0) {
                    /* try { // try from 003002d0 to 003002e7 has its CatchHandler @ 003004dc */
    FUN_00367770(auStack_50,param_2);
    lVar4 = FUN_00300724(auStack_50,param_3);
    plVar8 = (long *)(param_1 + 0x38);
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      *(long *)(param_1 + 0x38) = lVar4;
      plVar9 = (long *)(param_1 + 0x40);
    }
    else {
      *(long *)(lVar7 + 0x30) = lVar4;
      plVar9 = plVar8;
    }
    *plVar9 = lVar4;
    *(long *)(lVar4 + 0x28) = lVar7;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
                    /* try { // try from 003003a4 to 003003af has its CatchHandler @ 003004b8 */
    auVar11 = FUN_00342850(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),lVar4,
                           lVar4,0);
    uVar5 = *(ulong *)(param_1 + 0x48);
    *(undefined1 (*) [16])(param_1 + 0x50) = auVar11;
    if (*(ulong *)(param_1 + 0x30) < uVar5) {
      puVar10 = *(undefined8 **)(param_1 + 0x40);
      if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0030049c to 0030049f has its CatchHandler @ 003004dc */
        abort();
      }
      lVar4 = puVar10[5];
      lVar7 = puVar10[6];
      if (lVar7 == 0) {
        *plVar8 = lVar4;
      }
      else {
        *(long *)(lVar7 + 0x28) = lVar4;
        lVar4 = puVar10[5];
      }
      plVar8 = (long *)(param_1 + 0x40);
      if (lVar4 != 0) {
        plVar8 = (long *)(lVar4 + 0x30);
      }
      *plVar8 = lVar7;
      *(ulong *)(param_1 + 0x48) = uVar5 - 1;
                    /* try { // try from 00300404 to 0030040f has its CatchHandler @ 003004b4 */
      auVar11 = FUN_00342b00(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),puVar10
                             ,0);
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar11;
      puVar6 = (undefined8 *)*puVar10;
      if ((puVar6 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar6, plVar8 != (long *)0x0)) {
        do {
          lVar4 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 + -1 == 0) {
                    /* try { // try from 0030043c to 0030043f has its CatchHandler @ 003004a0 */
          (*(code *)puVar6[3])(puVar6[4]);
        }
      }
      puVar6 = (undefined8 *)puVar10[4];
      puVar10[4] = 0;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        FUN_0049e790(PTR_LAB_047cba48,puVar6);
      }
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
  }
  else {
    lVar7 = *(long *)(lVar4 + 0x28);
    lVar1 = *(long *)(lVar4 + 0x30);
    if (lVar1 == 0) {
      *(long *)(param_1 + 0x38) = lVar7;
    }
    else {
      *(long *)(lVar1 + 0x28) = lVar7;
      lVar7 = *(long *)(lVar4 + 0x28);
    }
    plVar8 = (long *)(param_1 + 0x40);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x30);
    }
    *plVar8 = lVar1;
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00300498 to 0030049b has its CatchHandler @ 003004e4 */
      abort();
    }
    plVar8 = (long *)(param_1 + 0x38);
    lVar7 = *plVar8;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
    if (lVar7 == 0) {
      *(long *)(param_1 + 0x38) = lVar4;
      plVar8 = (long *)(param_1 + 0x40);
    }
    else {
      *(long *)(lVar7 + 0x30) = lVar4;
    }
    *plVar8 = lVar4;
    *(long *)(lVar4 + 0x28) = lVar7;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    local_28 = *param_3;
    *param_3 = 0;
                    /* try { // try from 00300368 to 0030036f has its CatchHandler @ 003004c0 */
    FUN_003004fc(lVar4,&local_28);
    lVar4 = local_28;
    local_28 = 0;
    if (lVar4 != 0) {
                    /* try { // try from 0030037c to 0030037f has its CatchHandler @ 003004bc */
      FUN_003b8e30();
    }
  }
                    /* try { // try from 0030047c to 00300483 has its CatchHandler @ 003004e0 */
  FUN_0038db60(param_1 + 0x10);
  return;
}


