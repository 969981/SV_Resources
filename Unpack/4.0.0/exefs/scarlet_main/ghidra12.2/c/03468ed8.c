/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03468ed8; name: FUN_03468ed8
 */


void FUN_03468ed8(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = param_2 / uVar1;
    }
    uVar6 = (ulong)(param_2 - uVar3 * uVar1);
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar6 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      if (*(uint *)(puVar5 + 1) == param_2) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        do {
          puVar7 = puVar5;
          puVar5 = (undefined8 *)*puVar7;
          if (puVar5 == (undefined8 *)0x0) goto LAB_03468fe0;
        } while (*(uint *)(puVar5 + 1) != param_2);
      }
      iVar2 = *(int *)(puVar5 + 6);
      *(int *)(puVar5 + 6) = iVar2 + -1;
      puVar4 = PTR_DAT_047e2fd0;
      if (iVar2 + -1 == 0) {
        if (puVar5[2] != 0) {
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(*(undefined4 *)((long)puVar5 + 0x1c));
          puVar5[2] = 0;
          puVar5[3] = 0xffffffff00000000;
          if (*(int *)(puVar5 + 6) != 0) goto LAB_03468fe0;
        }
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)(*(long *)(param_1 + 0x90) + uVar6 * 8);
        }
        *puVar7 = *puVar5;
        if (puVar5[4] != 0) {
          *(undefined4 *)(puVar5 + 5) = 0;
          (**(code **)(puVar4 + 0x30))(0);
          puVar5[4] = 0;
          *(undefined4 *)((long)puVar5 + 0x2c) = 0;
        }
        (**(code **)(puVar4 + 0x30))(0,puVar5);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
      }
    }
  }
LAB_03468fe0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
  return;
}


