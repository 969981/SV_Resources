/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b8a870; name: FUN_01b8a870
 */


void FUN_01b8a870(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  
  lVar2 = 0x50;
  if (DAT_0480bd38 == '\0') {
    lVar2 = -1;
  }
  puVar4 = (undefined4 *)FUN_01b8c42c(param_2);
  uVar3 = *(undefined1 *)(puVar4 + 1);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 8) + lVar2);
    *puVar1 = *puVar4;
    *(undefined1 *)(puVar1 + 1) = uVar3;
  }
  return;
}


