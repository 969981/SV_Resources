/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f0308; name: FUN_008f0308
 */


void FUN_008f0308(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_008f01ac();
  *(long *)(param_1 + 8) = param_4;
  if (*(int *)(param_1 + 0x1c) == 2) {
    if (*(int *)(param_1 + 0x20) == 2) {
      if (0 < *(int *)(param_1 + 0x28)) {
        lVar4 = 0;
        do {
          iVar1 = *(int *)(param_1 + 0x40);
          iVar3 = 0;
          if (iVar1 != 0) {
            iVar3 = (int)lVar4 / iVar1;
          }
          *(int *)(param_4 + lVar4 * 4) = (int)lVar4 - iVar3 * iVar1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x28));
      }
    }
    else if ((*(int *)(param_1 + 0x20) == 3) && (0 < *(int *)(param_1 + 0x40))) {
      lVar4 = 0;
      puVar6 = (undefined4 *)(param_4 + 8);
      do {
        puVar6[-2] = (int)lVar4;
        iVar1 = *(int *)(param_1 + 0x40);
        lVar4 = lVar4 + 1;
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = (int)lVar4 / iVar1;
        }
        puVar6[-1] = (int)lVar4 - iVar3 * iVar1;
        *puVar6 = *(undefined4 *)(param_1 + 0x40);
        puVar6 = puVar6 + 3;
      } while (lVar4 < *(int *)(param_1 + 0x40));
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl("","",0);
    }
    if (*(int *)(param_1 + 0x20) == 2) {
      if (0 < *(int *)(param_1 + 0x28)) {
        lVar4 = 0;
        do {
          iVar1 = *(int *)(param_1 + 0x40);
          sVar2 = 0;
          if (iVar1 != 0) {
            sVar2 = (short)((int)lVar4 / iVar1);
          }
          *(short *)(param_4 + lVar4 * 2) = (short)lVar4 - sVar2 * (short)iVar1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x28));
      }
    }
    else if ((*(int *)(param_1 + 0x20) == 3) && (0 < *(int *)(param_1 + 0x40))) {
      lVar4 = 0;
      puVar5 = (undefined2 *)(param_4 + 4);
      do {
        puVar5[-2] = (short)lVar4;
        iVar1 = *(int *)(param_1 + 0x40);
        lVar4 = lVar4 + 1;
        sVar2 = 0;
        if (iVar1 != 0) {
          sVar2 = (short)((int)lVar4 / iVar1);
        }
        puVar5[-1] = (short)lVar4 - sVar2 * (short)iVar1;
        *puVar5 = (short)*(undefined4 *)(param_1 + 0x40);
        puVar5 = puVar5 + 3;
      } while (lVar4 < *(int *)(param_1 + 0x40));
    }
  }
  return;
}


