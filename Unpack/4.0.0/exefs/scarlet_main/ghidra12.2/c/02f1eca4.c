/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1eca4; name: FUN_02f1eca4
 */


void FUN_02f1eca4(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *__src;
  uint uVar3;
  long lVar4;
  undefined4 *__dest;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    if (*(uint *)(param_1 + 1) < uVar1) {
      FUN_0133ae28(param_1,0,uVar1,0x10);
    }
    uVar2 = *(int *)((long)param_1 + 0x24) + 1;
    if (uVar2 <= *(int *)((long)param_2 + 0x24) + 1U) {
      uVar2 = *(int *)((long)param_2 + 0x24) + 1;
    }
    if (uVar1 <= uVar2) {
      uVar2 = uVar1;
    }
    if (uVar2 != 0) {
      lVar4 = *param_2;
      uVar3 = 0;
      do {
        __dest = (undefined4 *)(*param_1 + (long)(int)uVar3 * 0x70);
        __src = (undefined4 *)(lVar4 + (long)(int)uVar3 * 0x70);
        if (*(char *)(__src + 0xe) == -1) {
          if (*(char *)(__dest + 0xe) != -1) {
            *__dest = 0;
            FUN_00cb4dc0(0x411cf5c3,__dest,1);
            *(char *)(__dest + 0xe) = -1;
          }
          *__dest = *__src;
        }
        else {
          memcpy(__dest,__src,0x70);
        }
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    if (uVar1 < *(uint *)(param_1 + 1)) {
      if (*(int *)((long)param_1 + 0x24) != -1) {
        uVar2 = uVar1 - 1;
        do {
          uVar2 = uVar2 + 1;
        } while (uVar2 <= *(uint *)((long)param_1 + 0x24));
      }
      FUN_0133ae28(param_1,0,uVar1,0x10);
    }
    *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
    *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
    *(int *)(param_1 + 4) = (int)param_2[4];
  }
  return;
}


