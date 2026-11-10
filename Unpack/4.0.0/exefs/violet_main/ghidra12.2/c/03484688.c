/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03484688; name: FUN_03484688
 */


void FUN_03484688(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long local_28;
  
  uVar6 = *(uint *)(param_2 + 0x4c);
  plVar11 = *(long **)PTR_DAT_047e6f38;
  nn::os::LockMutex((MutexType *)(plVar11 + 3));
  uVar1 = *(uint *)(plVar11 + 1);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar6 / uVar1;
    }
    for (lVar5 = *(long *)(*plVar11 + (ulong)(uVar6 - uVar3 * uVar1) * 8); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x70)) {
      if (*(uint *)(lVar5 + 0x54) == uVar6) {
        *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + -1;
        FUN_034b3448(plVar11,uVar6);
        goto LAB_034846f8;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(plVar11 + 3));
LAB_034846f8:
  (**(code **)(*param_1 + 0x130))(param_1,1);
  puVar4 = PTR_DAT_047e70c0;
  lVar5 = param_1[0x12];
  if (((lVar5 != 0) && (bVar7 = *(byte *)(lVar5 + 0x98), (bVar7 >> 1 & 1) != 0)) &&
     (*(short *)(lVar5 + 0x94) == 0)) {
    plVar11 = (long *)(PTR_DAT_047e70c0 + 0x10);
    plVar9 = (long *)0x0;
    do {
      plVar8 = plVar9;
      plVar9 = (long *)*plVar11;
      plVar11 = plVar9 + 10;
    } while (plVar9 != (long *)0x0 && plVar9 != param_1);
    if (plVar9 != (long *)0x0) {
      plVar11 = (long *)(PTR_DAT_047e70c0 + 0x10);
      if (*(long **)(PTR_DAT_047e70c0 + 0x10) != plVar9) {
        plVar11 = plVar8 + 10;
      }
      *plVar11 = plVar9[10];
      if (*(long **)(puVar4 + 8) == plVar9) {
        *(long **)(puVar4 + 8) = plVar8;
      }
      *(int *)puVar4 = *(int *)puVar4 + -1;
      lVar5 = param_1[0x12];
      bVar7 = *(byte *)(lVar5 + 0x98);
    }
    *(byte *)(lVar5 + 0x98) = bVar7 & 0xfd;
  }
  puVar10 = *(undefined8 **)(param_2 + 8);
  iVar2 = *(int *)(puVar10 + 0x10);
  uVar6 = iVar2 - 1;
  *(uint *)(puVar10 + 0x10) = uVar6;
  if (iVar2 == 0 || uVar6 == 0) {
    if (uVar6 != 0) goto LAB_03484834;
LAB_034847c4:
    lVar5 = puVar10[5];
    if (lVar5 != 0) {
      uVar6 = ((uint)lVar5 ^ (uint)lVar5 >> 0x10) * -0x7a143595;
      uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
      local_28 = lVar5;
      FUN_034c6294(&DAT_048b02b8,&local_28,uVar6 ^ uVar6 >> 0x10);
      uVar6 = *(uint *)(puVar10 + 0x10);
    }
  }
  else {
    if (1 < uVar6) goto LAB_03484834;
    if (*(char *)((long)puVar10 + 0x84) != '\0') goto LAB_034847c4;
  }
  if (uVar6 == 0) {
    (**(code **)*puVar10)(puVar10);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar10);
  }
LAB_03484834:
  if (*(long *)(param_2 + 0x58) != 0) {
    *(undefined4 *)(param_2 + 0x60) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined4 *)(param_2 + 100) = 0;
  }
  puVar4 = PTR_DAT_047e2fd0;
  plVar11 = *(long **)(param_2 + 0x68);
  if (plVar11 != (long *)0x0) {
    plVar9 = (long *)*plVar11;
    if (plVar9 != (long *)0x0) {
      do {
        lVar5 = plVar9[1];
        *(undefined8 *)(lVar5 + 0x18) = 0;
        if (*(long *)(lVar5 + 0x20) != 0) {
          *(undefined4 *)(lVar5 + 0x28) = 0;
          (**(code **)(puVar4 + 0x30))(0);
          *(undefined8 *)(lVar5 + 0x20) = 0;
          *(undefined4 *)(lVar5 + 0x2c) = 0;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
      plVar11 = *(long **)(param_2 + 0x68);
    }
    iVar2 = (int)plVar11[5] + -1;
    *(int *)(plVar11 + 5) = iVar2;
    if (iVar2 == 0) {
      FUN_03499444(plVar11);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar11);
    }
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  return;
}


