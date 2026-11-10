/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f491ac; name: FUN_02f491ac
 */


void FUN_02f491ac(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  MutexType *pMVar11;
  ulong uVar12;
  long lVar13;
  
  pMVar11 = *(MutexType **)(param_1 + 0x48);
  lVar13 = *(long *)(param_2 + 0x78);
  nn::os::LockMutex(pMVar11);
  uVar5 = *(uint *)(param_1 + 0x24);
  plVar1 = (long *)(param_1 + 0x18);
  if ((int)uVar5 < 1) {
    lVar6 = *plVar1;
  }
  else {
    uVar3 = (int)lVar13 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar9 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (int)((ulong)lVar13 >> 0x20) * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar12 = (ulong)((uVar9 + (uVar9 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3) & uVar5);
    lVar6 = *plVar1;
    lVar7 = *(long *)(lVar6 + uVar12 * 0x10);
    if (lVar7 != -1) {
      if (lVar7 != lVar13) {
        do {
          uVar12 = (ulong)((int)uVar12 + 1U & uVar5);
          lVar7 = *(long *)(lVar6 + uVar12 * 0x10);
          if (lVar7 == -1) goto LAB_02f49268;
        } while (lVar7 != lVar13);
      }
      goto LAB_02f49270;
    }
  }
LAB_02f49268:
  uVar12 = (long)(int)uVar5 + 1;
LAB_02f49270:
  lVar13 = *(long *)(lVar6 + ((long)(uVar12 << 0x20) >> 0x1c) + 8);
  iVar10 = *(int *)(lVar13 + 0x18);
  if (1 < iVar10) {
    uVar5 = *(int *)(param_2 + 0x50) * -0x61c8864f;
    uVar3 = iVar10 - 1;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    while( true ) {
      uVar5 = uVar3 & uVar5;
      iVar2 = *(int *)(*(long *)(lVar13 + 0x10) + (long)(int)uVar5 * 4);
      if (iVar2 == -1) break;
      if (iVar2 == *(int *)(param_2 + 0x50)) {
        if ((int)uVar5 < iVar10) {
          *(int *)(lVar13 + 0x20) = *(int *)(lVar13 + 0x20) + -1;
          *(undefined4 *)(*(long *)(lVar13 + 0x10) + (long)(int)uVar5 * 4) = 0xffffffff;
          lVar6 = *(long *)(lVar13 + 0x10);
          uVar9 = uVar5;
          do {
            uVar9 = uVar9 + uVar3 & uVar3;
          } while (*(int *)(lVar6 + (long)(int)uVar9 * 4) != -1);
          uVar8 = uVar5 + 1 & uVar3;
          iVar10 = *(int *)(lVar6 + (long)(int)uVar8 * 4);
          if (iVar10 != -1) {
            uVar9 = uVar9 + 1 & uVar3;
            do {
              uVar4 = (iVar10 * -0x61c8864f & 0xff00ff00U) >> 8 |
                      (iVar10 * -0x61c8864f & 0xff00ffU) << 8;
              uVar4 = (uVar4 >> 0x10 | uVar4 << 0x10) & uVar3;
              if ((((uVar8 < uVar9) || (uVar4 <= uVar5)) &&
                  ((uVar5 <= uVar8 || ((uVar4 <= uVar5 && (uVar8 < uVar4)))))) &&
                 ((uVar4 <= uVar5 || (uVar9 <= uVar4)))) {
                *(int *)(lVar6 + (long)(int)uVar5 * 4) = iVar10;
                *(undefined4 *)(*(long *)(lVar13 + 0x10) + (long)(int)uVar8 * 4) = 0xffffffff;
                lVar6 = *(long *)(lVar13 + 0x10);
                uVar5 = uVar8;
              }
              uVar8 = uVar8 + 1 & uVar3;
              iVar10 = *(int *)(lVar6 + (long)(int)uVar8 * 4);
            } while (iVar10 != -1);
          }
        }
        break;
      }
      uVar5 = uVar5 + 1;
    }
  }
  if ((*(uint *)(lVar13 + 0x20) & 0x7fffffff) == 0) {
    lVar6 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                         (ulong)*(byte *)(*(long *)(lVar13 + 8) + 0x18) * 0x200 + 0x48))();
    FUN_02f49ee8(lVar6,lVar13,FUN_02f49b6c,0);
    FUN_02f4a18c(lVar6 + 8,lVar13,FUN_02f49ca8,0);
    *(undefined8 *)(lVar13 + 8) = 0;
    *(undefined1 *)(lVar13 + 0x28) = 0;
    FUN_02ef6198(plVar1,uVar12);
    iVar10 = *(int *)(param_1 + 0x30);
    lVar6 = (long)iVar10;
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) <= iVar10) {
      FUN_02f49fa8(param_1 + 0x28,lVar6 + 1);
      iVar10 = *(int *)(param_1 + 0x30);
    }
    *(long *)(*(long *)(param_1 + 0x28) + (long)iVar10 * 8) = lVar13;
    *(int *)(param_1 + 0x30) = (int)(lVar6 + 1);
  }
  nn::os::UnlockMutex(pMVar11);
  return;
}


