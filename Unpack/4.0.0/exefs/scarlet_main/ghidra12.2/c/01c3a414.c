/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c3a414; name: FUN_01c3a414
 */


void FUN_01c3a414(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  
  lVar2 = 9;
  if (DAT_048124f8 == '\0') {
    lVar2 = -1;
  }
  puVar4 = (undefined4 *)FUN_01c2c6fc(param_2);
  uVar3 = *(undefined2 *)(puVar4 + 1);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 8) + lVar2);
    *puVar1 = *puVar4;
    *(undefined2 *)(puVar1 + 1) = uVar3;
  }
  return;
}


