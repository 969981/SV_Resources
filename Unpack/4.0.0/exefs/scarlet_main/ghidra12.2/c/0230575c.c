/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0230575c; name: FUN_0230575c
 */


void FUN_0230575c(long *param_1,char *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar4 = *param_1;
  puVar3 = (undefined4 *)FUN_022fcb00(param_3);
  uVar2 = puVar3[1];
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    puVar1 = (undefined4 *)(*(long *)(param_2 + 8) + lVar4);
    *puVar1 = *puVar3;
    puVar1[1] = uVar2;
  }
  return;
}


