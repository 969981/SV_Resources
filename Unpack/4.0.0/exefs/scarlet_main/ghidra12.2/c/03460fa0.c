/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03460fa0; name: FUN_03460fa0
 */


void FUN_03460fa0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  char cVar13;
  
  FUN_03468598();
  FUN_03468808(param_1);
  puVar4 = PTR_DAT_047e6d30;
  puVar3 = PTR_DAT_047e2fd0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    lVar8 = **(long **)(param_1 + 0xa8);
    if (lVar8 == 0) {
      uVar5 = 0;
      do {
        if (*(int *)(param_1 + 0xb0) - 1 == uVar5) {
          return;
        }
        uVar5 = uVar5 + 1;
        lVar8 = (*(long **)(param_1 + 0xa8))[uVar5 & 0xffffffff];
      } while (lVar8 == 0);
    }
    else {
      uVar5 = 0;
    }
    uVar11 = uVar5 & 0xffffffff;
    do {
      lVar6 = *(long *)(lVar8 + 0x10);
      lVar12 = lVar6;
      if (lVar6 == 0) {
        uVar2 = *(uint *)(param_1 + 0xb0);
        uVar7 = uVar5 & 0xffffffff;
        uVar1 = uVar2;
        if (uVar2 <= (int)uVar5 + 1U) {
          uVar1 = (int)uVar5 + 1;
        }
        uVar11 = (ulong)uVar1;
        do {
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
          if (uVar2 <= uVar1) {
            lVar12 = 0;
            goto LAB_03461058;
          }
          lVar12 = *(long *)(*(long *)(param_1 + 0xa8) + (ulong)uVar1 * 8);
        } while (lVar12 == 0);
        uVar11 = uVar7;
      }
LAB_03461058:
      *(long *)(*(long *)(param_1 + 0xa8) + (uVar5 & 0xffffffff) * 8) = lVar6;
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
      puVar9 = *(undefined8 **)(lVar8 + 0x50);
      puVar10 = puVar9;
      if (*(int *)(lVar8 + 0x58) != 0) {
        do {
          nn::os::LockMutex((MutexType *)puVar4);
          if (puVar10 !=
              (undefined8 *)(*(long *)(lVar8 + 0x50) + (ulong)*(uint *)(lVar8 + 0x58) * 8)) {
            cVar13 = '\x01';
            puVar9 = puVar10;
            do {
              puVar10 = puVar9 + 1;
              (**(code **)(*(long *)*puVar9 + 0x18))();
              cVar13 = cVar13 + '\x01';
              if (cVar13 == '\0') break;
              puVar9 = puVar10;
            } while (puVar10 !=
                     (undefined8 *)(*(long *)(lVar8 + 0x50) + (ulong)*(uint *)(lVar8 + 0x58) * 8));
          }
          nn::os::UnlockMutex((MutexType *)puVar4);
          puVar9 = *(undefined8 **)(lVar8 + 0x50);
        } while (puVar10 != puVar9 + *(uint *)(lVar8 + 0x58));
      }
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined4 *)(lVar8 + 0x58) = 0;
        (**(code **)(puVar3 + 0x30))(0,puVar9);
        *(undefined8 *)(lVar8 + 0x50) = 0;
        *(undefined4 *)(lVar8 + 0x5c) = 0;
      }
      FUN_0346034c(lVar8,1);
      uVar5 = uVar11;
      lVar8 = lVar12;
    } while (lVar12 != 0);
  }
  return;
}


