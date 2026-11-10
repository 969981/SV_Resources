/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ee1bc; name: FUN_007ee1bc
 */


void FUN_007ee1bc(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_047d14f8;
  puVar3 = (undefined8 *)param_1[0xd];
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = FUN_007bfae0(puVar3);
    if (0xa7 < uVar2) {
      uVar4 = 0;
      puVar5 = puVar3;
      do {
        (**(code **)*puVar5)(puVar5);
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x15;
      } while (uVar4 < uVar2 / 0xa8);
    }
    FUN_007bfaa0(puVar3);
    param_1[0xd] = 0;
  }
  thunk_FUN_007ec33c(param_1);
  return;
}


