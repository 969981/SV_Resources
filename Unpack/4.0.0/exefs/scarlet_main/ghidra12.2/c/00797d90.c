/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00797d90; name: FUN_00797d90
 */


void FUN_00797d90(long *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 9);
    do {
      uVar1 = param_3;
      if (0x40 - uVar3 <= param_3) {
        uVar1 = 0x40 - uVar3;
      }
      memcpy((void *)((long)param_1 + (ulong)uVar3 + 8),param_2,(ulong)uVar1);
      uVar3 = uVar1 + (int)param_1[9];
      param_2 = (void *)((long)param_2 + (ulong)uVar1);
      param_3 = param_3 - uVar1;
      *(uint *)(param_1 + 9) = uVar3;
      if (0x3f < uVar3) {
        (**(code **)(*param_1 + 0x38))(param_1);
        iVar2 = *(int *)((long)param_1 + 0x4c);
        uVar3 = 0;
        *(undefined4 *)(param_1 + 9) = 0;
        *(int *)((long)param_1 + 0x4c) = iVar2 + 1;
        if (iVar2 == -1) {
          uVar3 = 0;
          *(int *)(param_1 + 10) = (int)param_1[10] + 1;
        }
      }
    } while (param_3 != 0);
  }
  return;
}


