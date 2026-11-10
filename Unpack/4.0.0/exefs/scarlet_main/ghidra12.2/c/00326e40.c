/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00326e40; name: FUN_00326e40
 */


void FUN_00326e40(long param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  void *__ptr;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_80 [4];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + 0x78) != 0) goto LAB_00326ed0;
  __ptr = *(void **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 00326e80 to 00326e83 has its CatchHandler @ 003271d4 */
    free(__ptr);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x108);
  if (puVar10 == (undefined8 *)0x0) {
LAB_00326ea4:
    puVar10 = *(undefined8 **)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  else {
    plVar13 = puVar10 + 1;
    do {
      lVar7 = *plVar13;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 != 0) goto LAB_00326ea4;
    (**(code **)*puVar10)(puVar10);
    FUN_0049e790(PTR_LAB_047cba48,puVar10);
    puVar10 = *(undefined8 **)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (puVar10 != (undefined8 *)0x0) {
    plVar13 = puVar10 + 1;
    do {
      lVar7 = *plVar13;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(PTR_LAB_047cba48,puVar10);
    }
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
LAB_00326ed0:
  FUN_003752d8(param_1 + 0xd8,param_2,param_3);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_0034824c(*(long *)(param_1 + 0x40),param_2);
    lVar7 = *(long *)(param_1 + 0x40);
    FUN_00346c28(param_2);
    FUN_003673f0(local_80);
    FUN_00344ea0(lVar7 + 0xa0,1,local_80);
  }
                    /* try { // try from 00326f18 to 00326f1f has its CatchHandler @ 003271dc */
  FUN_0038db40(param_1 + 0x58);
  puVar2 = PTR_LAB_047cba48;
  plVar13 = *(long **)(param_1 + 0x150);
  do {
    while( true ) {
      if (plVar13 == (long *)(param_1 + 0x158)) {
        uVar6 = *(undefined8 *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x78) = *param_4;
        *param_4 = uVar6;
        if (*(long *)(param_1 + 0x78) == 0) {
          puVar10 = *(undefined8 **)(param_1 + 0x98);
          puVar9 = *(undefined8 **)(param_1 + 0xa0);
          *(undefined1 *)(param_1 + 0x90) = 0;
          puVar11 = *(undefined8 **)(param_1 + 0xa8);
          *(undefined8 *)(param_1 + 0x98) = 0;
          *(undefined8 *)(param_1 + 0xa0) = 0;
          *(undefined8 *)(param_1 + 0xa8) = 0;
          plVar13 = *(long **)(param_1 + 0x80);
        }
        else {
          puVar11 = (undefined8 *)0x0;
          puVar9 = (undefined8 *)0x0;
          puVar10 = (undefined8 *)0x0;
          plVar13 = *(long **)(param_1 + 0x80);
        }
        for (; plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
          lVar12 = *plVar13;
          lVar7 = *(long *)(lVar12 + 0x10);
          local_80[0] = 0;
                    /* try { // try from 00327050 to 0032707b has its CatchHandler @ 003271e0 */
          uVar4 = FUN_00325510(lVar7,lVar12,local_80);
          if ((uVar4 & 1) != 0) {
            *(undefined8 *)(lVar7 + 0x1a0) = 0;
            *(code **)(lVar7 + 400) = FUN_003261e0;
            *(long *)(lVar7 + 0x198) = lVar12;
            FUN_0035351c(auStack_58,lVar7 + 0x188,local_80[0]);
          }
        }
                    /* try { // try from 00327080 to 00327087 has its CatchHandler @ 003271d8 */
        FUN_0038db60(param_1 + 0x58);
        FUN_00327338(param_1 + 0x150,*(undefined8 *)(param_1 + 0x158));
        *(undefined8 *)(param_1 + 0x158) = 0;
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(long **)(param_1 + 0x150) = (long *)(param_1 + 0x158);
        if (puVar11 != (undefined8 *)0x0) {
          plVar13 = puVar11 + 1;
          do {
            lVar7 = *plVar13;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)*puVar11)(puVar11);
            FUN_0049e790(PTR_LAB_047cba48,puVar11);
          }
        }
        if (puVar9 != (undefined8 *)0x0) {
          plVar13 = puVar9 + 1;
          do {
            lVar7 = *plVar13;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)*puVar9)(puVar9);
            FUN_0049e790(PTR_LAB_047cba48,puVar9);
          }
        }
        if (puVar10 != (undefined8 *)0x0) {
          plVar13 = puVar10 + 1;
          do {
            lVar7 = *plVar13;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)*puVar10)(puVar10);
            FUN_0049e790(PTR_LAB_047cba48,puVar10);
          }
        }
        return;
      }
      lVar7 = plVar13[4];
      lVar12 = plVar13[5];
      plVar13[5] = 0;
      puVar10 = *(undefined8 **)(lVar7 + 0x48);
      if (puVar10 == (undefined8 *)0x0) break;
      plVar5 = puVar10 + 1;
      do {
        lVar8 = *plVar5;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 != 0) break;
      (**(code **)*puVar10)(puVar10);
      FUN_0049e790(puVar2,puVar10);
      *(long *)(lVar7 + 0x48) = lVar12;
      plVar5 = (long *)plVar13[1];
      if ((long *)plVar13[1] == (long *)0x0) goto LAB_00326fb4;
LAB_00326f7c:
      do {
        plVar13 = plVar5;
        plVar5 = (long *)*plVar13;
      } while (plVar5 != (long *)0x0);
    }
    *(long *)(lVar7 + 0x48) = lVar12;
    plVar5 = (long *)plVar13[1];
    if ((long *)plVar13[1] != (long *)0x0) goto LAB_00326f7c;
LAB_00326fb4:
    plVar5 = plVar13 + 2;
    bVar3 = *(long **)*plVar5 != plVar13;
    plVar13 = (long *)*plVar5;
    if (bVar3) {
      do {
        lVar7 = *plVar5;
        plVar5 = (long *)(lVar7 + 0x10);
        plVar13 = (long *)*plVar5;
      } while (*(long *)*plVar5 != lVar7);
    }
  } while( true );
}


