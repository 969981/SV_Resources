/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0345259c; name: FUN_0345259c
 */


undefined8 FUN_0345259c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 local_98 [18];
  
  puVar6 = PTR_DAT_047e6fe0;
  puVar5 = PTR_DAT_047e6f38;
  puVar4 = PTR_DAT_047e2fd0;
  puVar10 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar10 == (undefined8 *)0x0) || (*(uint *)(param_1 + 0x78) < *(uint *)(puVar10 + 1))) {
    uVar7 = 0;
  }
  else {
    do {
      plVar11 = (long *)puVar10[2];
      *(undefined8 *)(param_1 + 0x28) = *puVar10;
      if (*(undefined8 **)(param_1 + 0x30) == puVar10) {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *puVar10 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = puVar10;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      local_98[0] = 0;
      plVar8 = (long *)plVar11[1];
      if ((*(short *)((long)plVar8 + 0x34) == 0x403) ||
         ((*(short *)((long)plVar8 + 0x34) == 0x503 && (*(char *)((long)plVar8 + 0xc4) != '\0')))) {
        (**(code **)(*plVar8 + 0x58))(plVar8,local_98);
      }
      if ((plVar11[8] != 0) && (*(long *)(plVar11[8] + 0x28) != 0)) {
        FUN_034c4b58();
      }
      (**(code **)(*(long *)plVar11[1] + 0x40))((long *)plVar11[1],plVar11);
      uVar1 = *(uint *)(plVar11 + 6);
      if (uVar1 != 0) {
        plVar8 = *(long **)puVar5;
        nn::os::LockMutex((MutexType *)(plVar8 + 3));
        uVar2 = *(uint *)(plVar8 + 1);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (lVar9 = *(long *)(*plVar8 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar9 != 0;
              lVar9 = *(long *)(lVar9 + 0x70)) {
            if (*(uint *)(lVar9 + 0x54) == uVar1) {
              *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + -1;
              FUN_034b3448(plVar8,uVar1);
              goto LAB_034526d4;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(plVar8 + 3));
      }
LAB_034526d4:
      (**(code **)(*(long *)plVar11[1] + 0x18))();
      (**(code **)(*plVar11 + 8))(plVar11);
      (**(code **)(puVar4 + 0x30))(0,plVar11);
      *(int *)puVar6 = *(int *)puVar6 + 1;
      puVar10 = *(undefined8 **)(param_1 + 0x28);
    } while ((puVar10 != (undefined8 *)0x0) && (*(uint *)(puVar10 + 1) <= *(uint *)(param_1 + 0x78))
            );
    uVar7 = 1;
  }
  return uVar7;
}


