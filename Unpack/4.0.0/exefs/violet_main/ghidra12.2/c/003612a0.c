/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003612a0; name: FUN_003612a0
 */


long FUN_003612a0(long param_1,long param_2,long *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_78 [8];
  
  FUN_0038db40();
  lVar6 = param_1 + 0x70;
  plVar4 = (long *)(param_1 + 0x80);
  lVar7 = 0;
  if (param_4 < 5) {
    uVar2 = FUN_00361990(lVar6);
    do {
      if ((uVar2 & 1) != 0) {
        if (param_2 < *(long *)(param_1 + 0x58)) goto LAB_00361588;
        dVar10 = (double)FUN_00361670(param_1 + 0x20);
        dVar10 = dVar10 * 0.33;
        dVar12 = dVar10;
        if (1.0 < dVar10) {
          dVar12 = 1.0;
        }
        lVar9 = param_2;
        if (param_2 <= *(long *)(param_1 + 0x58)) {
          lVar9 = *(long *)(param_1 + 0x58);
        }
        dVar11 = 10.0;
        if (0.01 <= dVar10) {
          dVar11 = dVar12 * 1000.0;
        }
        plVar5 = *(long **)(param_1 + 0x90);
        lVar1 = 0x7fffffffffffffff;
        if (lVar9 <= 0x7fffffffffffffff - (long)dVar11) {
          lVar1 = lVar9 + (long)dVar11;
        }
        *(long *)(param_1 + 0x58) = lVar1;
        if (plVar5 != plVar4) {
          plVar8 = (long *)plVar5[2];
          if (lVar1 <= *plVar5) goto LAB_0036150c;
          do {
            plVar8[3] = plVar5[3];
            *(long **)(plVar5[3] + 0x10) = plVar8;
            FUN_00361720(lVar6);
LAB_0036150c:
            do {
              plVar5 = plVar8;
              if (plVar5 == plVar4) goto LAB_00361530;
              plVar8 = (long *)plVar5[2];
            } while (*(long *)(param_1 + 0x58) <= *plVar5);
          } while( true );
        }
LAB_00361530:
        uVar2 = FUN_00361990(lVar6);
        if ((uVar2 & 1) != 0) goto LAB_00361588;
      }
      plVar5 = (long *)FUN_003619a0(lVar6);
      if (param_2 < *plVar5) goto LAB_00361588;
      *(undefined1 *)((long)plVar5 + 0xc) = 0;
      FUN_003619b0(lVar6);
      if (plVar5 == (long *)0x0) goto LAB_00361588;
      FUN_0035351c(auStack_78,plVar5[4],param_4);
      lVar7 = lVar7 + 1;
      uVar2 = FUN_00361990(lVar6);
    } while( true );
  }
  uVar2 = FUN_00361990(lVar6);
  do {
    if ((uVar2 & 1) != 0) {
      if (param_2 < *(long *)(param_1 + 0x58)) {
LAB_00361588:
        uVar2 = FUN_00361990(lVar6);
        if ((uVar2 & 1) == 0) {
          plVar4 = (long *)FUN_003619a0(lVar6);
          lVar6 = *plVar4;
        }
        else {
          lVar6 = *(long *)(param_1 + 0x58);
          if (lVar6 != 0x7fffffffffffffff) {
            lVar6 = lVar6 + 1;
          }
        }
        *param_3 = lVar6;
        FUN_0038db60(param_1);
        return lVar7;
      }
      dVar10 = (double)FUN_00361670(param_1 + 0x20);
      dVar10 = dVar10 * 0.33;
      dVar12 = dVar10;
      if (1.0 < dVar10) {
        dVar12 = 1.0;
      }
      lVar9 = param_2;
      if (param_2 <= *(long *)(param_1 + 0x58)) {
        lVar9 = *(long *)(param_1 + 0x58);
      }
      dVar11 = 10.0;
      if (0.01 <= dVar10) {
        dVar11 = dVar12 * 1000.0;
      }
      plVar5 = *(long **)(param_1 + 0x90);
      lVar1 = 0x7fffffffffffffff;
      if (lVar9 <= 0x7fffffffffffffff - (long)dVar11) {
        lVar1 = lVar9 + (long)dVar11;
      }
      *(long *)(param_1 + 0x58) = lVar1;
      if (plVar5 != plVar4) {
        plVar8 = (long *)plVar5[2];
        if (lVar1 <= *plVar5) goto LAB_003613bc;
        do {
          plVar8[3] = plVar5[3];
          *(long **)(plVar5[3] + 0x10) = plVar8;
          FUN_00361720(lVar6);
LAB_003613bc:
          do {
            plVar5 = plVar8;
            if (plVar5 == plVar4) goto LAB_003613e0;
            plVar8 = (long *)plVar5[2];
          } while (*(long *)(param_1 + 0x58) <= *plVar5);
        } while( true );
      }
LAB_003613e0:
      uVar2 = FUN_00361990(lVar6);
      if ((uVar2 & 1) != 0) goto LAB_00361588;
    }
    plVar5 = (long *)FUN_003619a0(lVar6);
    if (param_2 < *plVar5) goto LAB_00361588;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    FUN_003619b0(lVar6);
    if (plVar5 == (long *)0x0) goto LAB_00361588;
    lVar9 = plVar5[4];
    uVar3 = FUN_00350fb0(param_4);
    FUN_0035351c(auStack_78,lVar9,uVar3);
    lVar7 = lVar7 + 1;
    uVar2 = FUN_00361990(lVar6);
  } while( true );
}


