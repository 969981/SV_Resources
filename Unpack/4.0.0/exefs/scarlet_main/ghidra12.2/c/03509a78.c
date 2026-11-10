/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03509a78; name: FUN_03509a78
 */


void FUN_03509a78(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 0x130) != 3) {
    if (*(int *)(param_1 + 0x130) == 1) {
      lVar8 = *(long *)(param_1 + 0x118);
      *(byte *)(*(long *)(lVar8 + 0x18) + 0x2ba) =
           *(byte *)(*(long *)(lVar8 + 0x18) + 0x2ba) & 0x8f | 8;
      puVar7 = *(undefined8 **)PTR_DAT_047e6988;
      iVar1 = *(int *)(*(long *)(lVar8 + 0x18) + 0x228);
      nn::os::LockMutex((MutexType *)(puVar7 + 4));
      piVar4 = (int *)*puVar7;
      uVar2 = *(uint *)(puVar7 + 1);
      piVar5 = piVar4;
      if (uVar2 == 0) {
LAB_03509b48:
        if (piVar5 != piVar4 + (ulong)uVar2 * 0xc) {
          *(undefined8 *)(piVar5 + 4) = puVar7[8];
          piVar5[7] = 0;
        }
      }
      else {
        lVar6 = (ulong)uVar2 * 0x30;
        do {
          if ((*piVar5 == iVar1) && (*(long *)(piVar5 + 2) == lVar8)) goto LAB_03509b48;
          lVar6 = lVar6 + -0x30;
          piVar5 = piVar5 + 0xc;
        } while (lVar6 != 0);
      }
      nn::os::UnlockMutex((MutexType *)(puVar7 + 4));
      uVar3 = 3;
    }
    else {
      if (*(long *)(param_1 + 0x118) != 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
        *(byte *)(lVar8 + 0x2ba) = *(byte *)(lVar8 + 0x2ba) & 0x87;
      }
      uVar3 = 2;
    }
    *(undefined4 *)(param_1 + 0x130) = uVar3;
  }
  return;
}


