/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f8d0c; name: FUN_007f8d0c
 */


void FUN_007f8d0c(long param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_80 [3];
  undefined2 local_68;
  
  *param_2 = 0;
  *param_3 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x58));
  lVar3 = *(long *)(param_1 + 0x6e8);
  if (lVar3 != param_1 + 0x6e0) {
    puVar1 = PTR_DAT_047d08c0 + 0x10;
    do {
      uVar2 = FUN_0078a324(param_5);
      if ((uVar2 & 1) == 0) {
LAB_007f8d7c:
        uVar2 = FUN_0078b108(lVar3 + 0x18,param_4);
        if ((uVar2 & 1) != 0) {
          *param_2 = *(undefined4 *)(lVar3 + 0x10);
          *param_3 = *(undefined4 *)(lVar3 + 0x14);
          break;
        }
      }
      else {
        local_80[0] = puVar1;
        FUN_0284e360(local_80,0xffffffff);
        local_68 = 0;
        uVar2 = FUN_0078b108(lVar3 + 0x38,local_80);
        if ((uVar2 & 1) != 0) {
          FUN_0284e3d4(local_80);
          goto LAB_007f8d7c;
        }
        uVar2 = FUN_0078b108(lVar3 + 0x38,param_5);
        FUN_0284e3d4(local_80);
        if ((uVar2 & 1) != 0) goto LAB_007f8d7c;
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != param_1 + 0x6e0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x58));
  return;
}


