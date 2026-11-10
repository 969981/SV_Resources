/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b40b8; name: FUN_034b40b8
 */


undefined8 FUN_034b40b8(long *param_1,uint param_2,long param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    uVar4 = 2;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 3));
    uVar6 = *(uint *)(param_1 + 1);
    if (uVar6 != 0) {
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = param_2 / uVar6;
      }
      for (lVar5 = *(long *)(*param_1 + (ulong)(param_2 - uVar2 * uVar6) * 8); lVar5 != 0;
          lVar5 = *(long *)(lVar5 + 0x70)) {
        if (*(uint *)(lVar5 + 0x54) == param_2) {
          uVar2 = *(uint *)(lVar5 + 0x28);
          uVar6 = *(uint *)(lVar5 + 0x2c);
          if (uVar2 < uVar6) {
LAB_034b416c:
            if (uVar2 < uVar6) {
              uVar6 = *(uint *)(lVar5 + 0x28);
              *(uint *)(lVar5 + 0x28) = uVar6 + 1;
              if (*(long *)(lVar5 + 0x20) != 0) {
                *(long *)(*(long *)(lVar5 + 0x20) + (ulong)uVar6 * 8) = param_3;
                *param_4 = *(undefined4 *)(lVar5 + 0x68);
                break;
              }
            }
          }
          else {
            iVar1 = uVar6 + (uVar6 >> 1);
            if (uVar6 == 0) {
              iVar1 = 1;
            }
            uVar6 = iVar1 + uVar6;
            lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                              (0,*(undefined8 *)(lVar5 + 0x20),(ulong)uVar6 << 3);
            if (lVar3 != 0) {
              *(long *)(lVar5 + 0x20) = lVar3;
              *(uint *)(lVar5 + 0x2c) = uVar6;
              goto LAB_034b416c;
            }
          }
          uVar4 = 2;
          goto LAB_034b4198;
        }
      }
    }
    uVar4 = 1;
LAB_034b4198:
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  }
  return uVar4;
}


