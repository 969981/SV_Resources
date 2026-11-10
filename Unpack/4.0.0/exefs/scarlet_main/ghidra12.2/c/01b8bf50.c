/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b8bf50; name: FUN_01b8bf50
 */


void FUN_01b8bf50(char *param_1,undefined8 param_2)

{
  long lVar1;
  undefined2 *puVar2;
  
  lVar1 = 0xb0;
  if (DAT_0480bd48 == '\0') {
    lVar1 = -1;
  }
  puVar2 = (undefined2 *)FUN_01b8c640(param_2);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined2 *)(*(long *)(param_1 + 8) + lVar1) = *puVar2;
  }
  return;
}


