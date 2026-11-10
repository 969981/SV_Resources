/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03236010; name: FUN_03236010
 */


void FUN_03236010(long param_1,long *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if (param_3 < 1) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x10));
  puVar2 = PTR_PTR_047d1a50;
  lVar3 = 0;
  plVar6 = param_2;
  do {
    lVar5 = *plVar6;
    *(undefined2 *)(lVar5 + 4) = 0xfffe;
    *(long *)(lVar5 + 0x58) = lVar3;
    lVar3 = lVar5 + 0x30;
    if (*(long *)(lVar5 + 0x20) != lVar3) {
      if (-1 < *(int *)(lVar5 + 0x2c)) {
        uVar1 = *(int *)(lVar5 + 0x28) - 1;
        uVar1 = uVar1 | (int)uVar1 >> 0x10;
        uVar1 = uVar1 | (int)uVar1 >> 8;
        uVar1 = uVar1 | (int)uVar1 >> 4;
        uVar1 = uVar1 | (int)uVar1 >> 2;
        uVar1 = uVar1 | (int)uVar1 >> 1;
        if ((int)uVar1 < 1) {
          iVar4 = 2;
        }
        else {
          iVar4 = uVar1 + 1;
          if (*(int *)(lVar5 + 0x2c) <= iVar4) goto LAB_032360dc;
          lVar3 = 0;
        }
        FUN_0323dbcc(puVar2,(long *)(lVar5 + 0x20),lVar3,iVar4);
      }
    }
LAB_032360dc:
    lVar3 = lVar5 + 0x50;
    if (*(long *)(lVar5 + 0x40) != lVar3) {
      if (-1 < *(int *)(lVar5 + 0x4c)) {
        uVar1 = *(int *)(lVar5 + 0x48) - 1;
        uVar1 = uVar1 | (int)uVar1 >> 0x10;
        uVar1 = uVar1 | (int)uVar1 >> 8;
        uVar1 = uVar1 | (int)uVar1 >> 4;
        uVar1 = uVar1 | (int)uVar1 >> 2;
        uVar1 = uVar1 | (int)uVar1 >> 1;
        if ((int)uVar1 < 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = uVar1 + 1;
          if (*(int *)(lVar5 + 0x4c) <= iVar4) goto LAB_0323613c;
          lVar3 = 0;
        }
        FUN_0323dbcc(puVar2,(long *)(lVar5 + 0x40),lVar3,iVar4);
      }
    }
LAB_0323613c:
    plVar6 = (long *)((long)plVar6 + (long)param_4);
    param_3 = param_3 + -1;
    lVar3 = lVar5;
    if (param_3 == 0) {
      *(undefined8 *)(*param_2 + 0x58) = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar5;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x10));
      return;
    }
  } while( true );
}


