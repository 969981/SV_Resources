/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fa7f0; name: FUN_004fa7f0
 */


void FUN_004fa7f0(mutex *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  puVar3 = PTR_LAB_047cba48;
  if (param_1 == (mutex *)0x0) {
    return;
  }
  puVar4 = *(ulong **)(param_1 + 0x20);
  puVar1 = *(ulong **)(param_1 + 0x28);
  if (puVar4 != puVar1) {
    do {
      uVar2 = puVar4[1];
      for (uVar5 = *puVar4; uVar5 < uVar2; uVar5 = uVar5 + 0x10) {
        if (*(long *)(uVar5 + 8) != 0) {
          FUN_0049e790(puVar3);
        }
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar1);
    puVar4 = *(ulong **)(param_1 + 0x20);
  }
  if (puVar4 != (ulong *)0x0) {
    *(ulong **)(param_1 + 0x28) = puVar4;
    FUN_0049e790(PTR_LAB_047cba48,puVar4);
  }
  std::mutex::~mutex(param_1);
  FUN_0049e790(PTR_LAB_047cba48,param_1);
  return;
}


