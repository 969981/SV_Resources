/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03448c10; name: FUN_03448c10
 */


long FUN_03448c10(uint param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  MutexType *pMVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  long *plVar14;
  
  lVar7 = DAT_048af9e0;
  if (param_1 == 0) {
    lVar7 = 0xe;
  }
  else {
    pMVar2 = (MutexType *)(DAT_048af9e0 + 0x2a0);
    nn::os::LockMutex(pMVar2);
    uVar5 = *(uint *)(lVar7 + 0x2c8);
    if (uVar5 != 0) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = param_1 / uVar5;
      }
      for (plVar14 = *(long **)(*(long *)(lVar7 + 0x2c0) + (ulong)(param_1 - uVar6 * uVar5) * 8);
          plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1]) {
        if (*(uint *)(plVar14 + 2) == param_1) {
          *(int *)((long)plVar14 + 0x14) = *(int *)((long)plVar14 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar2);
          uVar5 = *(uint *)(plVar14 + 6);
          (**(code **)(*plVar14 + 0x18))(plVar14);
          uVar6 = uVar5 >> 4 & 0xfff;
          uVar5 = uVar5 >> 0x10;
          if ((uVar6 == 0) && (uVar5 - 0xae < 7)) {
            lVar7 = (ulong)(uVar5 != 0xae) << 2;
            goto LAB_03448ba0;
          }
          if ((uVar6 == 0) && (uVar5 == 0xb5)) goto LAB_03448abc;
          iVar3 = (uVar6 << 4 | 7) + uVar5 * 0x10000;
          piVar8 = *(int **)PTR_DAT_047e6f70;
          uVar5 = *(uint *)(PTR_DAT_047e6f70 + 8);
          uVar9 = (ulong)uVar5;
          piVar4 = piVar8 + uVar9 * 8;
          piVar11 = piVar8;
          if ((uVar5 == 0) || (*piVar8 == iVar3)) goto LAB_03448b24;
          lVar7 = uVar9 * 0x20;
          piVar12 = piVar8;
          goto LAB_03448b08;
        }
      }
    }
    nn::os::UnlockMutex(pMVar2);
    lVar7 = 0xf;
  }
  return lVar7;
  while( true ) {
    piVar11 = piVar12 + 8;
    piVar13 = piVar12 + 8;
    piVar12 = piVar11;
    if (*piVar13 == iVar3) break;
LAB_03448b08:
    lVar7 = lVar7 + -0x20;
    if (lVar7 == 0) goto LAB_03448b2c;
  }
LAB_03448b24:
  if (piVar11 == piVar4) {
LAB_03448b2c:
    piVar11 = *(int **)PTR_DAT_047e6f78;
    uVar6 = *(uint *)(PTR_DAT_047e6f78 + 8);
    if ((uVar6 == 0) || (*piVar11 == iVar3)) {
      piVar12 = piVar11;
    }
    else {
      lVar10 = (ulong)uVar6 * 0x28;
      lVar7 = 0x58;
      piVar13 = piVar11;
      do {
        lVar10 = lVar10 + -0x28;
        if (lVar10 == 0) goto LAB_03448ba0;
        piVar12 = piVar13 + 10;
        piVar1 = piVar13 + 10;
        piVar13 = piVar12;
      } while (*piVar1 != iVar3);
    }
    if (piVar12 != piVar11 + (ulong)uVar6 * 10) goto LAB_03448b60;
  }
  else {
LAB_03448b60:
    if ((uVar5 != 0) && (*piVar8 != iVar3)) {
      lVar10 = uVar9 * 0x20;
      lVar7 = 0x58;
      piVar11 = piVar8;
      do {
        lVar10 = lVar10 + -0x20;
        if (lVar10 == 0) goto LAB_03448ba0;
        piVar8 = piVar11 + 8;
        piVar12 = piVar11 + 8;
        piVar11 = piVar8;
      } while (*piVar12 != iVar3);
    }
    if (piVar8 != piVar4) {
      if (*(code **)(piVar8 + 6) == (code *)0x0) {
LAB_03448abc:
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(piVar8 + 6))(param_2,param_3);
        if ((int)lVar7 == 1) {
          return lVar7;
        }
      }
      goto LAB_03448ba0;
    }
  }
  lVar7 = 0x58;
LAB_03448ba0:
  *param_2 = 0;
  return lVar7;
}


