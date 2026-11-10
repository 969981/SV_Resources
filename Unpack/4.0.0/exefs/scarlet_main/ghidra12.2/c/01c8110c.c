/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c8110c; name: FUN_01c8110c
 */


void FUN_01c8110c(char *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_04815bc0;
  puVar1 = (undefined2 *)FUN_01832d1c(param_2);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined2 *)(*(long *)(param_1 + 8) - ((ulong)~uVar2 & 1)) = *puVar1;
  }
  return;
}


