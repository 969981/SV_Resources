/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f4a60; name: FUN_002f4a60
 */


long FUN_002f4a60(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar3 = 0;
    puVar4 = (undefined8 *)(param_1[1] + 8);
    do {
      iVar1 = strcmp((char *)*puVar4,"grpc.security_connector");
      if (((iVar1 == 0) && (*(int *)(puVar4 + -1) == 2)) && (puVar4[1] != 0)) {
        return puVar4[1];
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar3 < uVar2);
  }
  return 0;
}


