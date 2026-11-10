/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc6104; name: FUN_01bc6104
 */


void FUN_01bc6104(char *param_1,undefined8 param_2)

{
  long lVar1;
  undefined2 *puVar2;
  
  lVar1 = 8;
  if (DAT_0480ee30 == '\0') {
    lVar1 = -1;
  }
  puVar2 = (undefined2 *)FUN_01bc39d8(param_2);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined2 *)(*(long *)(param_1 + 8) + lVar1) = *puVar2;
  }
  return;
}


