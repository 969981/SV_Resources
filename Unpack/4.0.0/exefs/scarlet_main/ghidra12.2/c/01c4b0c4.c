/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c4b0c4; name: FUN_01c4b0c4
 */


void FUN_01c4b0c4(char *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_04815b18;
  puVar4 = (undefined4 *)FUN_01c4add8(param_2);
  uVar3 = puVar4[2];
  uVar2 = puVar4[1];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 8) - ((ulong)~uVar5 & 1));
    *puVar1 = *puVar4;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
  }
  return;
}


