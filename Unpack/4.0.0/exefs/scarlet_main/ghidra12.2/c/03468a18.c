/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03468a18; name: FUN_03468a18
 */


undefined4
FUN_03468a18(void *param_1,int param_2,void *param_3,undefined4 param_4,ulong param_5,uint param_6,
            undefined2 param_7,long param_8)

{
  int *piVar1;
  undefined2 *puVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  ulong __n;
  undefined8 uVar13;
  
  __n = (ulong)param_6;
  sVar4 = **(short **)(param_8 + 8);
  iVar8 = 0x40001;
  if (sVar4 != -1) {
    if (sVar4 == 0x3041) {
      iVar8 = 0x140001;
    }
    else if (sVar4 == 0x3040) {
      iVar8 = 0x130001;
    }
    else {
      iVar8 = 1;
    }
  }
  piVar9 = *(int **)PTR_DAT_047e6f78;
  uVar3 = *(uint *)(PTR_DAT_047e6f78 + 8);
  if ((uVar3 == 0) || (*piVar9 == iVar8)) {
    piVar10 = piVar9;
  }
  else {
    lVar11 = (ulong)uVar3 * 0x28;
    piVar12 = piVar9;
    do {
      lVar11 = lVar11 + -0x28;
      if (lVar11 == 0) goto LAB_03468bf4;
      piVar10 = piVar12 + 10;
      piVar1 = piVar12 + 10;
      piVar12 = piVar10;
    } while (*piVar1 != iVar8);
  }
  if (((piVar10 == piVar9 + (ulong)uVar3 * 10) || (*(code **)(piVar10 + 6) == (code *)0x0)) ||
     (plVar7 = (long *)(**(code **)(piVar10 + 6))(), plVar7 == (long *)0x0)) {
LAB_03468bf4:
    uVar6 = 0x34;
  }
  else {
    memcpy(param_1,param_3,__n);
    puVar2 = (undefined2 *)((long)param_1 + (param_5 & 0xffffffff));
    *puVar2 = 0xfffe;
    puVar2[6] = param_7;
    puVar2[7] = 0x10;
    if ((param_6 & 3) != 0) {
      uVar13 = *(undefined8 *)((long)param_1 + ((ulong)param_6 - 8));
      uVar3 = 4 - (param_6 & 3);
      *(undefined4 *)((long)param_1 + ((ulong)param_6 - 8)) = 0x4b4e554a;
      *(uint *)((long)param_1 + ((ulong)param_6 - 4)) = uVar3;
      memset((void *)((long)param_1 + (ulong)param_6 + 8),0,(ulong)uVar3);
      param_6 = (param_6 - (param_6 & 3)) + 0xc;
      __n = (ulong)param_6;
      *(undefined8 *)((long)param_1 + (__n - 8)) = uVar13;
    }
    puVar5 = PTR_DAT_047e6d30;
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    uVar6 = (**(code **)(*plVar7 + 0x10))
                      (plVar7,(long)param_1 + __n,param_2 - param_6,param_3,param_4,
                       (long)param_1 + __n + -4);
    (**(code **)*plVar7)(plVar7);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,plVar7);
    nn::os::UnlockMutex((MutexType *)puVar5);
  }
  return uVar6;
}


