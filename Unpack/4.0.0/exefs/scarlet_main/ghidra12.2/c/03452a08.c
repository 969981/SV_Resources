/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03452a08; name: FUN_03452a08
 */


void FUN_03452a08(long param_1,long *param_2,int param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  undefined4 local_98 [18];
  
  puVar4 = PTR_DAT_047e6f38;
  uVar1 = *(uint *)(param_2 + 6);
  if (uVar1 != 0) {
    plVar13 = *(long **)PTR_DAT_047e6f38;
    nn::os::LockMutex((MutexType *)(plVar13 + 3));
    uVar10 = *(uint *)(plVar13 + 1);
    if (uVar10 != 0) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = uVar1 / uVar10;
      }
      for (lVar8 = *(long *)(*plVar13 + (ulong)(uVar1 - uVar12 * uVar10) * 8); lVar8 != 0;
          lVar8 = *(long *)(lVar8 + 0x70)) {
        if (*(uint *)(lVar8 + 0x54) == uVar1) {
          *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
          break;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(plVar13 + 3));
  }
  (**(code **)(*(long *)param_2[1] + 0x10))();
  iVar6 = FUN_03458890(param_2[1]);
  uVar2 = *(ushort *)PTR_DAT_047e6d08;
  uVar1 = iVar6 + param_3;
  uVar10 = 0;
  if (uVar2 != 0) {
    uVar10 = uVar1 / uVar2;
  }
  iVar6 = *(int *)(param_1 + 0x78);
  uVar12 = (uint)uVar2;
  *(int *)(param_2 + 2) = iVar6;
  *(uint *)((long)param_2 + 0x14) = uVar1 - uVar10 * uVar12;
  if (uVar1 < uVar12) {
    uVar10 = 0;
  }
  else if (*(short *)(param_2[1] + 0x34) == 0x503) {
    bVar5 = *(uint *)(PTR_DAT_047e6ce8 + 0x14) <= uVar10;
    uVar3 = uVar10 - *(uint *)(PTR_DAT_047e6ce8 + 0x14);
    uVar10 = 0;
    if (bVar5) {
      uVar10 = uVar3;
    }
    *(uint *)((long)param_2 + 0x14) = uVar1 - uVar10 * uVar12;
  }
  if ((uVar10 == 0) && ((param_4 & 1) == 0)) {
    if ((param_2[8] != 0) && (*(long *)(param_2[8] + 0x28) != 0)) {
      FUN_034c4b58();
    }
    (**(code **)(*(long *)param_2[1] + 0x40))((long *)param_2[1],param_2);
    uVar1 = *(uint *)(param_2 + 6);
    if (uVar1 != 0) {
      plVar13 = *(long **)puVar4;
      nn::os::LockMutex((MutexType *)(plVar13 + 3));
      uVar10 = *(uint *)(plVar13 + 1);
      if (uVar10 != 0) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar1 / uVar10;
        }
        for (lVar8 = *(long *)(*plVar13 + (ulong)(uVar1 - uVar12 * uVar10) * 8); lVar8 != 0;
            lVar8 = *(long *)(lVar8 + 0x70)) {
          if (*(uint *)(lVar8 + 0x54) == uVar1) {
            *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + -1;
            FUN_034b3448(plVar13,uVar1);
            goto LAB_03452c78;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(plVar13 + 3));
    }
LAB_03452c78:
    (**(code **)(*(long *)param_2[1] + 0x18))();
    (**(code **)(*param_2 + 8))(param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(PTR_DAT_047e2fd0 + 0x30);
LAB_03452ca4:
                    /* WARNING: Could not recover jumptable at 0x03452cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0,param_2);
    return;
  }
  uVar10 = uVar10 + iVar6;
  *(uint *)(param_2 + 2) = uVar10;
  puVar4 = PTR_DAT_047e2fd0;
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
    if (puVar7 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_2[1] + 0x18))();
      (**(code **)(*param_2 + 8))(param_2);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar4 + 0x30);
      goto LAB_03452ca4;
    }
    *puVar7 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar7;
  }
  *(uint *)(puVar7 + 1) = uVar10;
  *(long **)(*(long *)(param_1 + 0x38) + 0x10) = param_2;
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    *(undefined8 *)(param_1 + 0x38) = *puVar7;
    *puVar7 = 0;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    if (uVar10 < *(uint *)(puVar7 + 1)) {
      plVar13 = *(long **)(param_1 + 0x38);
      *(long **)(param_1 + 0x28) = plVar13;
      plVar11 = plVar13;
    }
    else {
      do {
        puVar9 = puVar7;
        puVar7 = (undefined8 *)*puVar9;
        if (puVar7 == (undefined8 *)0x0) {
          plVar13 = *(long **)(param_1 + 0x38);
          *(long **)(param_1 + 0x30) = plVar13;
          goto LAB_03452cd0;
        }
      } while (*(uint *)(puVar7 + 1) <= uVar10);
      plVar13 = *(long **)(param_1 + 0x38);
LAB_03452cd0:
      *puVar9 = plVar13;
      plVar11 = *(long **)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x38) = *plVar11;
    *plVar13 = (long)puVar7;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  local_98[0] = 0;
  plVar13 = (long *)param_2[1];
  if ((*(short *)((long)plVar13 + 0x34) == 0x403) ||
     ((*(short *)((long)plVar13 + 0x34) == 0x503 && (*(char *)((long)plVar13 + 0xc4) != '\0')))) {
    (**(code **)(*plVar13 + 0x58))(plVar13,local_98);
  }
  return;
}


