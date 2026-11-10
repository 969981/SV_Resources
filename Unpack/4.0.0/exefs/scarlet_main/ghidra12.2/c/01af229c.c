/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01af229c; name: FUN_01af229c
 */


void FUN_01af229c(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = 0x50;
  if (DAT_048020f0 == '\0') {
    lVar2 = -1;
  }
  puVar3 = (undefined8 *)FUN_01af3d38(param_2);
  uVar6 = *puVar3;
  uVar5 = puVar3[3];
  uVar4 = puVar3[2];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar2);
    puVar1[1] = puVar3[1];
    *puVar1 = uVar6;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
  return;
}


