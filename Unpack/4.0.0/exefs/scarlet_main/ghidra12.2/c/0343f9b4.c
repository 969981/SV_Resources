/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343f9b4; name: FUN_0343f9b4
 */


undefined4 FUN_0343f9b4(long param_1,uint *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_1 + 0x53) == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + -0x48));
    if (*(char *)(param_1 + -7) == '\0') {
      uVar6 = 0x2e;
    }
    else {
      do {
        *param_2 = 0;
        bVar1 = *(byte *)(param_1 + 0x50);
        puVar3 = *(undefined8 **)(param_1 + 0x48);
        if (bVar1 != 0) {
          uVar4 = bVar1 & 7;
          if (6 < bVar1 - 1) {
            iVar5 = -(bVar1 & 0xf8);
            do {
              iVar5 = iVar5 + 8;
              puVar3 = *(undefined8 **)**(undefined8 **)**(undefined8 **)**(undefined8 **)*puVar3;
            } while (iVar5 != 0);
          }
          if ((bVar1 & 7) != 0) {
            do {
              puVar3 = (undefined8 *)*puVar3;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
        }
        uVar4 = 0;
        if (puVar3 == (undefined8 *)0x0) {
          uVar6 = 0x2e;
        }
        else {
          do {
            uVar4 = (*(int *)(puVar3[1] + 0x18) - *(int *)(puVar3 + 2)) + uVar4;
            *param_2 = uVar4;
            puVar3 = (undefined8 *)*puVar3;
          } while (puVar3 != (undefined8 *)0x0);
          uVar6 = 0x2d;
        }
        if ((*(char *)(param_1 + -6) == '\0') && (*(uint *)(param_1 + 0x28) <= uVar4))
        goto LAB_0343fac8;
        uVar2 = (**(code **)(**(long **)(param_1 + -0x20) + 0x58))
                          (*(long **)(param_1 + -0x20),param_1 + -0x70);
      } while ((uVar2 & 1) != 0);
      if (*(char *)(*(long *)(param_1 + -0x20) + 0x218) != '\0') {
LAB_0343fac8:
        uVar6 = 0x11;
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + -0x48));
  }
  else {
    uVar6 = 2;
  }
  return uVar6;
}


