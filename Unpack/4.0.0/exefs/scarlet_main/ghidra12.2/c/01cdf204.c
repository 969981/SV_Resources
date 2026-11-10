/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cdf204; name: FUN_01cdf204
 */


void FUN_01cdf204(char *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = 0x2dc;
  if (DAT_0481b828 == '\0') {
    lVar2 = -1;
  }
  puVar4 = (undefined8 *)FUN_01cdf760(param_2);
  uVar3 = *puVar4;
  uVar5 = puVar4[2];
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar2);
    puVar1[1] = puVar4[1];
    puVar1[2] = uVar5;
    *puVar1 = uVar3;
  }
  return;
}


