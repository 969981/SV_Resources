/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d1a2c; name: FUN_031d1a2c
 */


void FUN_031d1a2c(long *param_1,byte *param_2,ulong param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  size_t sVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  lVar5 = DAT_04883ee8;
  uVar10 = (ulong)*param_2;
  param_3 = param_3 & 0xff;
  pMVar1 = (MutexType *)(DAT_04883ee8 + uVar10 * 0x210 + param_3 * 0x20 + 0x158);
  nn::os::LockMutex(pMVar1);
  plVar7 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar7[1] = (long)plVar3;
  }
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)plVar7;
  }
  puVar9 = (undefined8 *)(lVar5 + uVar10 * 0x210 + param_3 * 0x10 + 0xf8);
  if ((long *)*puVar9 == param_1) {
    *puVar9 = plVar3;
  }
  lVar5 = lVar5 + uVar10 * 0x210 + param_3 * 0x10;
  plVar2 = (long *)(lVar5 + 0x100);
  if (*(long **)(lVar5 + 0x100) == param_1) {
    *plVar2 = (long)plVar7;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((((plVar7 != (long *)0x0) && ((ulong)plVar7[2] < 4)) &&
      ((lVar5 = *plVar7, lVar5 == 0 || (*(ulong *)(lVar5 + 0x10) < 4)))) &&
     ((plVar6 = (long *)plVar7[1], plVar6 != (long *)0x0 && ((ulong)plVar6[2] < 4)))) {
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar6;
    }
    *plVar6 = lVar5;
    if ((long *)*puVar9 == plVar7) {
      *puVar9 = plVar6;
    }
    if ((long *)*plVar2 == plVar7) {
      *plVar2 = lVar5;
    }
    plVar6 = *(long **)(PTR_DAT_047e4880 + 0x30);
    pcVar8 = (char *)plVar7[4];
    if (pcVar8 != (char *)0x0) {
      sVar4 = strlen(pcVar8);
      (**(code **)(*plVar6 + 0x18))(plVar6,pcVar8,(long)((int)sVar4 + 1));
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0x38);
  }
  if ((((plVar3 != (long *)0x0) && ((ulong)plVar3[2] < 4)) &&
      ((lVar5 = *plVar3, lVar5 == 0 || (*(ulong *)(lVar5 + 0x10) < 4)))) &&
     ((plVar7 = (long *)plVar3[1], plVar7 != (long *)0x0 && ((ulong)plVar7[2] < 4)))) {
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar7;
    }
    *plVar7 = lVar5;
    if ((long *)*puVar9 == plVar3) {
      *puVar9 = plVar7;
    }
    if ((long *)*plVar2 == plVar3) {
      *plVar2 = lVar5;
    }
    plVar7 = *(long **)(PTR_DAT_047e4880 + 0x30);
    pcVar8 = (char *)plVar3[4];
    if (pcVar8 != (char *)0x0) {
      sVar4 = strlen(pcVar8);
      (**(code **)(*plVar7 + 0x18))(plVar7,pcVar8,(long)((int)sVar4 + 1));
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar3,0x38);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


