/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc5e5c; name: FUN_01bc5e5c
 */


void FUN_01bc5e5c(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0480ee28;
  puVar1 = (undefined8 *)FUN_01bc6e64(param_2);
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 8) - ((ulong)~uVar2 & 1)) = *puVar1;
  }
  return;
}


