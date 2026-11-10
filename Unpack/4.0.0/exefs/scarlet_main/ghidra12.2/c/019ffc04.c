/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019ffc04; name: FUN_019ffc04
 */


void FUN_019ffc04(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 auStack_50 [8];
  undefined4 local_18 [2];
  
  uVar1 = FUN_019ffcd0(param_1,param_2,&local_58);
  if (0 < (int)uVar1) {
    local_18[0] = local_58;
    FUN_01461214(param_1);
    uVar2 = FUN_0293e624();
    FUN_01973f14(uVar2,auStack_60,local_18);
    if (uVar1 != 1) {
      local_18[0] = local_54;
      FUN_01461214(param_1);
      uVar2 = FUN_0293e624();
      FUN_01973f14(uVar2,auStack_60,local_18);
      if (uVar1 != 2) {
        lVar3 = (ulong)uVar1 - 2;
        puVar4 = auStack_50;
        do {
          local_18[0] = *puVar4;
          FUN_01461214(param_1);
          uVar2 = FUN_0293e624();
          FUN_01973f14(uVar2,auStack_60,local_18);
          lVar3 = lVar3 + -1;
          puVar4 = puVar4 + 1;
        } while (lVar3 != 0);
      }
    }
  }
  return;
}


