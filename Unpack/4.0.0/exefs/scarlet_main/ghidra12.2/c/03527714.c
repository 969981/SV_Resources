/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03527714; name: FUN_03527714
 */


long * FUN_03527714(long param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  MutexType *pMVar11;
  long lVar12;
  
  if (param_2 != 0) {
    pMVar11 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar11);
    uVar1 = *(uint *)(pMVar11 + 0x28);
    if (uVar1 != 0) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = param_2 / uVar1;
      }
      for (lVar12 = *(long *)(*(long *)(pMVar11 + 0x20) + (ulong)(param_2 - uVar3 * uVar1) * 8);
          lVar12 != 0; lVar12 = *(long *)(lVar12 + 8)) {
        if (*(uint *)(lVar12 + 0x10) == param_2) {
          *(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar11);
          lVar10 = *(long *)(param_1 + 0x60);
          plVar9 = (long *)(lVar12 + -8);
          plVar6 = (long *)(**(code **)(*plVar9 + 0x268))
                                     (plVar9,param_1,*(undefined8 *)(lVar10 + 0x30),lVar10 + 0x18,
                                      *(undefined1 *)(lVar10 + 0x38));
          (**(code **)(*plVar9 + 0x30))(plVar9);
          if (plVar6 != (long *)0x0) {
            return plVar6;
          }
          goto LAB_0352777c;
        }
      }
    }
    nn::os::UnlockMutex(pMVar11);
  }
LAB_0352777c:
  puVar4 = PTR_DAT_047e2fd0;
  plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x90);
  if (plVar6 == (long *)0x0) {
    return (long *)0x0;
  }
  *(undefined2 *)(plVar6 + 0xb) = 0;
  plVar6[10] = -0xc0800000;
  plVar6[0xd] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  *(byte *)((long)plVar6 + 0x5a) = *(byte *)((long)plVar6 + 0x5a) & 0xe0;
  plVar6[2] = param_1;
  *(undefined4 *)(plVar6 + 4) = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  *plVar6 = (long)&PTR_LAB_047c85b8;
  plVar6[0x10] = 0;
  *(undefined4 *)(plVar6 + 0x11) = 0;
  plVar6[3] = (long)&PTR_LAB_047c8708;
  plVar6[5] = (long)&PTR_FUN_047c8730;
  *(undefined1 *)((long)plVar6 + 0x8c) = 0;
  *(undefined4 *)(plVar6 + 9) = 1;
  lVar12 = *(long *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(lVar12 + 0x30);
  cVar2 = *(char *)(lVar12 + 0x38);
  if (param_1 == 0) {
LAB_03527858:
    iVar5 = FUN_035182ec(plVar6,lVar12 + 0x18,uVar8,cVar2 != '\0');
    if (iVar5 != 1) goto LAB_035278f4;
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
      *(long **)(param_1 + 0x30) = plVar6;
      plVar6[1] = 0;
    }
    else {
      plVar6[1] = *(long *)(param_1 + 0x30);
      *(long **)(param_1 + 0x30) = plVar6;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    if (plVar6[2] == 0) goto LAB_03527858;
    plVar6[0xc] = *(long *)(plVar6[2] + 0x60);
  }
  puVar7 = (undefined8 *)(**(code **)(puVar4 + 0x10))(0,0x48);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar7 + 0x3c) = 4;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    *(undefined8 *)((long)puVar7 + 0x34) = 0;
    *(undefined1 *)(puVar7 + 8) = 0;
    *(byte *)((long)puVar7 + 0x44) = *(byte *)((long)puVar7 + 0x44) & 0xf8;
    puVar7[4] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    plVar9 = plVar6 + 0x10;
    if (*plVar9 != 0) {
      plVar9 = (long *)plVar6[0xf];
    }
    *plVar9 = (long)puVar7;
    plVar6[0xf] = (long)puVar7;
    *(undefined1 *)((long)plVar6 + 0x8c) = 1;
    if ((int)plVar6[9] != 0) {
      return plVar6;
    }
    if (plVar6[2] == 0) {
      FUN_03518540(plVar6);
    }
    else {
      FUN_0351c44c(plVar6[2],plVar6);
      plVar6[2] = 0;
    }
    (**(code **)(*plVar6 + 0x50))(plVar6);
    (**(code **)(puVar4 + 0x30))(0,plVar6);
    return plVar6;
  }
LAB_035278f4:
  (**(code **)(*plVar6 + 0x10))(plVar6,0);
  iVar5 = (int)plVar6[9] + -1;
  *(int *)(plVar6 + 9) = iVar5;
  if (iVar5 == 0) {
    if (plVar6[2] == 0) {
      FUN_03518540(plVar6);
    }
    else {
      FUN_0351c44c(plVar6[2],plVar6);
      plVar6[2] = 0;
    }
    (**(code **)(*plVar6 + 0x50))(plVar6);
    (**(code **)(puVar4 + 0x30))(0,plVar6);
  }
  return (long *)0x0;
}


