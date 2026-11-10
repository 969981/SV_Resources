/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026233a4; name: FUN_026233a4
 */


void FUN_026233a4(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar4 = (uint)DAT_04854de0;
  puVar3 = (undefined8 *)FUN_02624744(param_2);
  uVar2 = puVar3[1];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) - ((ulong)~uVar4 & 1));
    *puVar1 = *puVar3;
    puVar1[1] = uVar2;
  }
  return;
}


