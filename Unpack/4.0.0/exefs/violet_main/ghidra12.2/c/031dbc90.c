/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031dbc90; name: FUN_031dbc90
 */


void FUN_031dbc90(long param_1,ulong *param_2,int param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar3 = DAT_04884420;
  pMVar1 = (MutexType *)(DAT_04884420 + 0xc0);
  nn::os::LockMutex(pMVar1);
  uVar2 = FUN_031ddfe0(lVar3 + 0x38,param_2);
  lVar3 = *(long *)(lVar3 + 0x38);
  while( true ) {
    uVar4 = (uint)*param_2;
    if ((uVar4 >> 0x14 & 1) != 0) {
      uVar5 = 0;
      if (param_2 != (ulong *)0x0) {
        uVar5 = CONCAT44(uVar4,uVar4) & 0xfffff000fffff;
        uVar5 = (ulong)(ushort)param_2[(ulong)(byte)(POPCOUNT((char)uVar5) +
                                                     POPCOUNT((char)(uVar5 >> 8)) +
                                                    POPCOUNT((char)(uVar5 >> 0x10))) + 2];
      }
      goto LAB_031dbd2c;
    }
    if ((*param_2 & 1) != 0) break;
    param_2 = (ulong *)param_2[1];
    if (param_2 == (ulong *)0x0) {
      uVar5 = 0;
LAB_031dbd2c:
      if (*(int *)(lVar3 + (long)(int)uVar2 * 0x18 + 0x10) == 0) {
        uVar2 = 0xffffffff;
      }
      if ((-1 < (int)uVar2) && (0 < param_3)) {
        lVar3 = lVar3 + (ulong)uVar2 * 0x18;
        uVar2 = *(uint *)(lVar3 + 0x10);
        if (0 < (int)uVar2) {
          lVar3 = *(long *)(lVar3 + 8);
          iVar6 = 0;
          do {
            puVar7 = (undefined8 *)(lVar3 + (ulong)uVar2 * 0x10 + -8);
            lVar8 = (ulong)uVar2 + 1;
            do {
              (*(code *)*puVar7)(puVar7[-1] + param_1);
              lVar8 = lVar8 + -1;
              puVar7 = puVar7 + -2;
            } while (1 < lVar8);
            iVar6 = iVar6 + 1;
            param_1 = uVar5 + param_1;
          } while (iVar6 != param_3);
        }
      }
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  uVar5 = 0;
  goto LAB_031dbd2c;
}


