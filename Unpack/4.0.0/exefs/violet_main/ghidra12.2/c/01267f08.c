/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01267f08; name: FUN_01267f08
 */


void FUN_01267f08(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ushort uVar9;
  ushort uVar10;
  long local_60;
  int local_58 [2];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  plVar6 = (long *)*param_2;
  if (plVar6 == (long *)0x0) goto LAB_01268048;
  lVar8 = *plVar6;
  lVar7 = plVar6[2];
  lVar1 = lVar7 + 1;
  bVar3 = *(byte *)(lVar8 + lVar7);
  uVar9 = (ushort)bVar3;
  plVar6[2] = lVar1;
  if (0x81 < bVar3) goto LAB_01268048;
  if (bVar3 == 0x80) {
    uVar9 = (ushort)*(byte *)(lVar8 + lVar1);
    lVar7 = lVar7 + 2;
LAB_01268070:
    plVar6[2] = lVar7;
  }
  else if (bVar3 == 0x81) {
    uVar9 = *(ushort *)(lVar8 + lVar1);
    lVar7 = lVar7 + 3;
    goto LAB_01268070;
  }
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      local_60 = 0;
      if ((*param_2 != 0) && (FUN_01267904(local_58,&local_60), local_58[0] == 0)) {
        plVar6 = *(long **)(param_1 + 0xa8);
        plVar2 = *(long **)(param_1 + 0xb0);
        if (plVar6 != plVar2) {
          do {
            if ((*plVar6 == local_60) && (plVar6[2] == *param_3)) goto LAB_01267fc4;
            plVar6 = plVar6 + 3;
          } while (plVar2 != plVar6);
          plVar6 = plVar2;
        }
LAB_01267fc4:
        if (plVar2 != plVar6) {
          sVar5 = (long)plVar2 - (long)(plVar6 + 3);
          if (sVar5 != 0) {
            memmove(plVar6,plVar6 + 3,sVar5);
          }
          *(size_t *)(param_1 + 0xb0) = (long)plVar6 + sVar5;
        }
        plVar6 = *(long **)(param_1 + 0x70);
        plVar2 = *(long **)(param_1 + 0x78);
        if (plVar6 != plVar2) {
          do {
            if ((*plVar6 == local_60) && (plVar6[2] == *param_3)) goto LAB_01268008;
            plVar6 = plVar6 + 3;
          } while (plVar2 != plVar6);
          plVar6 = plVar2;
        }
LAB_01268008:
        if (plVar2 != plVar6) {
          iVar4 = *(ushort *)(plVar6 + 1) - 1;
          if (*(ushort *)(plVar6 + 1) == 0 || iVar4 == 0) {
            sVar5 = (long)plVar2 - (long)(plVar6 + 3);
            if (sVar5 != 0) {
              memmove(plVar6,plVar6 + 3,sVar5);
            }
            *(size_t *)(param_1 + 0x78) = (long)plVar6 + sVar5;
          }
          else {
            *(short *)(plVar6 + 1) = (short)iVar4;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
LAB_01268048:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  return;
}


