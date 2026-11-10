/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03518540; name: FUN_03518540
 */


void FUN_03518540(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  int *__dest;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  
  plVar10 = (long *)&DAT_048d2010;
  plVar5 = (long *)0x0;
  do {
    plVar4 = plVar5;
    plVar5 = (long *)*plVar10;
    plVar10 = plVar5 + 0xe;
  } while (plVar5 != (long *)0x0 && plVar5 != param_1);
  if (plVar5 != (long *)0x0) {
    plVar10 = (long *)&DAT_048d2010;
    if (DAT_048d2010 != plVar5) {
      plVar10 = plVar4 + 0xe;
    }
    *plVar10 = plVar5[0xe];
    if (DAT_048d2008 == plVar5) {
      DAT_048d2008 = plVar4;
    }
  }
  lVar13 = param_1[0xc];
  if (lVar13 == 0) {
    return;
  }
  iVar14 = *(int *)(lVar13 + 0x2c);
  if (iVar14 != 0) {
    if ((*(byte *)((long)param_1 + 0x22) >> 5 & 1) != 0) {
      nn::os::LockMutex((MutexType *)&DAT_048d2028);
      uVar3 = DAT_048d2020;
      piVar6 = DAT_048d2018 + (ulong)DAT_048d2020 * 0xe;
      __dest = DAT_048d2018;
      if ((DAT_048d2020 != 0) && (*DAT_048d2018 != iVar14)) {
        lVar8 = (ulong)DAT_048d2020 * 0x38;
        do {
          lVar8 = lVar8 + -0x38;
          if (lVar8 == 0) {
            __dest = piVar6;
            goto LAB_03518648;
          }
          piVar1 = __dest + 0xe;
          __dest = __dest + 0xe;
        } while (*piVar1 != iVar14);
      }
LAB_03518648:
      if (piVar6 != __dest) {
        while (__dest < piVar6 + -0xe) {
          memcpy(__dest,__dest + 0xe,0x38);
          __dest = __dest + 0xe;
        }
        DAT_048d2020 = uVar3 - 1;
      }
      nn::os::UnlockMutex((MutexType *)&DAT_048d2028);
      iVar14 = *(int *)(lVar13 + 0x2c);
    }
    FUN_034b41c0(*(undefined8 *)PTR_DAT_047e6f38,iVar14,param_1 + 3);
    lVar8 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar8 != 0) {
      plVar10 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
      (**(code **)(*plVar10 + 0x130))(plVar10,1);
      lVar8 = (**(code **)(*param_1 + 0xd0))(param_1);
      puVar2 = PTR_DAT_047e70c0;
      lVar7 = *(long *)(lVar8 + 0x90);
      if (((lVar7 != 0) && (bVar9 = *(byte *)(lVar7 + 0x98), (bVar9 >> 1 & 1) != 0)) &&
         (*(short *)(lVar7 + 0x94) == 0)) {
        plVar10 = (long *)(PTR_DAT_047e70c0 + 0x10);
        lVar12 = 0;
        do {
          lVar11 = lVar12;
          lVar12 = *plVar10;
          plVar10 = (long *)(lVar12 + 0x50);
        } while (lVar12 != 0 && lVar12 != lVar8);
        if (lVar12 != 0) {
          plVar10 = (long *)(PTR_DAT_047e70c0 + 0x10);
          if (*(long *)(PTR_DAT_047e70c0 + 0x10) != lVar12) {
            plVar10 = (long *)(lVar11 + 0x50);
          }
          *plVar10 = *(long *)(lVar12 + 0x50);
          if (*(long *)(puVar2 + 8) == lVar12) {
            *(long *)(puVar2 + 8) = lVar11;
          }
          *(int *)puVar2 = *(int *)puVar2 + -1;
          lVar7 = *(long *)(lVar8 + 0x90);
          bVar9 = *(byte *)(lVar7 + 0x98);
        }
        *(byte *)(lVar7 + 0x98) = bVar9 & 0xfd;
      }
    }
  }
  FUN_0351dc28(lVar13);
                    /* WARNING: Could not recover jumptable at 0x035187a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar13);
  return;
}


