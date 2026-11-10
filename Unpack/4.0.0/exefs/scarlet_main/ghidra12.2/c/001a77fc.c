/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001a77fc; name: FUN_001a77fc
 */


void FUN_001a77fc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_044841a0;
  puVar1 = PTR_PTR_047cb898;
  uVar3 = param_1[0xdb];
  if (uVar3 == 0) {
LAB_001a786c:
    param_1[0x11e] = 0;
    if (param_1[0x11c] != 0) {
      (**(code **)puVar1)();
    }
    param_1[0x11c] = 0;
    param_1[0x11d] = 0;
    param_1[0xdb] = 0;
    if (param_1[0xd9] != 0) {
      (**(code **)puVar1)();
    }
    param_1[0xda] = 0;
    param_1[0xd9] = 0;
    param_1[0xd8] = 0;
    if (param_1[0xd6] != 0) {
      (**(code **)puVar1)();
    }
    param_1[0xd6] = 0;
    param_1[0xd7] = 0;
    FUN_001a7c64(param_1 + 0x53);
    FUN_001a7c0c(param_1 + 0x18);
    FUN_001a7bb4(param_1 + 0xb);
    FUN_001a7b5c(param_1 + 3);
    return;
  }
  lVar4 = 0;
  lVar2 = *(long *)param_1[0xd9];
  do {
    if (lVar2 == 0) {
      if (uVar3 <= lVar4 + 1U) goto LAB_001a786c;
    }
    else {
      (**(code **)puVar1)();
      uVar3 = param_1[0xdb];
      if (uVar3 <= lVar4 + 1U) goto LAB_001a786c;
    }
    lVar4 = lVar4 + 1;
    lVar2 = *(long *)(param_1[0xd9] + lVar4 * 8);
  } while( true );
}


