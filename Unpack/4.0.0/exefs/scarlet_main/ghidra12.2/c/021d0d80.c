/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d0d80; name: FUN_021d0d80
 */


void FUN_021d0d80(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = (ulong)*param_1;
  uVar2 = param_1[3];
  if (*param_1 < uVar2) {
    uVar1 = param_1[4];
    do {
      uVar5 = (ulong)param_1[1];
      if (param_1[1] < uVar1) {
        uVar3 = (ulong)param_1[5];
        do {
          uVar6 = (ulong)param_1[2];
          if (param_1[2] < (uint)uVar3) {
            do {
              (**(code **)param_2[2])
                        (*(undefined8 *)param_2[3],
                         uVar4 << 0x20 | uVar5 << 0x10 | uVar6 |
                         (ulong)((uint)*(byte *)*param_2 - *(int *)param_2[1]) << 0x30);
              uVar3 = (ulong)param_1[5];
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar3);
            uVar1 = param_1[4];
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
        uVar2 = param_1[3];
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}


