/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a34fc; name: FUN_017a34fc
 */


void FUN_017a34fc(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  int *__dest;
  long *plVar6;
  undefined8 uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x7640));
  __dest = *(int **)(param_1 + 0xf0);
  piVar1 = __dest;
  if (*(long *)(param_1 + 0xf8) != 0) {
    piVar1 = __dest + *(long *)(param_1 + 0xf8) * 6;
  }
  if (piVar1 != __dest) {
    do {
      if (((*__dest == *param_2) && (__dest[1] == param_2[1])) && (__dest[2] == param_2[2]))
      goto LAB_017a3580;
      __dest = __dest + 6;
    } while (piVar1 != __dest);
    __dest = piVar1;
  }
LAB_017a3580:
  if (piVar1 == __dest) goto LAB_017a35f4;
  plVar6 = *(long **)(param_1 + 8);
  uVar7 = *(undefined8 *)(__dest + 4);
  iVar2 = __dest[3];
  uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar3 & 1) == 0) {
LAB_017a35a8:
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar7,iVar2,8);
  }
  else {
    lVar4 = FUN_00c4e600();
    if (*(int *)(lVar4 + 0x12c8) < 1) goto LAB_017a35a8;
    FUN_00c48fe8(plVar6,uVar7,iVar2,8);
  }
  lVar4 = *(long *)(param_1 + 0xf8);
  piVar5 = (int *)(*(long *)(param_1 + 0xf0) + lVar4 * 0x18);
  piVar1 = __dest + 6;
  if (piVar1 != piVar5) {
    memmove(__dest,piVar1,(long)piVar5 - (long)piVar1);
    lVar4 = *(long *)(param_1 + 0xf8);
  }
  *(long *)(param_1 + 0xf8) = lVar4 + -1;
LAB_017a35f4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7640));
  return;
}


