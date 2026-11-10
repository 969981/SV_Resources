/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03455744; name: FUN_03455744
 */


void FUN_03455744(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined4 local_88 [18];
  
  uVar1 = (int)param_2[2] + (*(int *)(param_1 + 0x78) - (int)param_2[3]);
  *(uint *)(param_2 + 2) = uVar1;
  puVar4 = PTR_DAT_047e2fd0;
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
    if (puVar5 == (undefined8 *)0x0) {
      local_88[0] = 0;
      plVar8 = (long *)param_2[1];
      if ((*(ushort *)((long)plVar8 + 0x34) | 0x100) == 0x503) {
        (**(code **)(*plVar8 + 0x58))(plVar8,local_88);
      }
      plVar8 = *(long **)PTR_DAT_047e6f38;
      uVar1 = *(uint *)(param_2 + 6);
      nn::os::LockMutex((MutexType *)(plVar8 + 3));
      uVar2 = *(uint *)(plVar8 + 1);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        for (lVar6 = *(long *)(*plVar8 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar6 != 0;
            lVar6 = *(long *)(lVar6 + 0x70)) {
          if (*(uint *)(lVar6 + 0x54) == uVar1) {
            *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + -1;
            FUN_034b3448(plVar8,uVar1);
            goto LAB_034558f0;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(plVar8 + 3));
LAB_034558f0:
      (**(code **)(*(long *)param_2[1] + 0x18))();
      (**(code **)(*param_2 + 8))(param_2);
      (**(code **)(puVar4 + 0x30))(0,param_2);
      return;
    }
    *puVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar5;
  }
  *(uint *)(puVar5 + 1) = uVar1;
  *(long **)(*(long *)(param_1 + 0x38) + 0x10) = param_2;
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    *(undefined8 *)(param_1 + 0x38) = *puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    if (uVar1 < *(uint *)(puVar5 + 1)) {
      plVar8 = *(long **)(param_1 + 0x38);
      *(long **)(param_1 + 0x28) = plVar8;
      plVar9 = plVar8;
    }
    else {
      do {
        puVar7 = puVar5;
        puVar5 = (undefined8 *)*puVar7;
        if (puVar5 == (undefined8 *)0x0) {
          plVar8 = *(long **)(param_1 + 0x38);
          *(long **)(param_1 + 0x30) = plVar8;
          goto LAB_034558a0;
        }
      } while (*(uint *)(puVar5 + 1) <= uVar1);
      plVar8 = *(long **)(param_1 + 0x38);
LAB_034558a0:
      *puVar7 = plVar8;
      plVar9 = *(long **)(param_1 + 0x38);
    }
    *(long *)(param_1 + 0x38) = *plVar9;
    *plVar8 = (long)puVar5;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}


