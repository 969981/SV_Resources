/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02728b5c; name: FUN_02728b5c
 */


void FUN_02728b5c(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  char *__s1;
  
  lVar4 = *(long *)(param_1 + 0x38);
  FUN_00c41540(lVar4);
  __s1 = *(char **)(param_2 + 8);
  iVar2 = strcmp(__s1,PTR_s_ObjectBlendColor_047dce20);
  if (iVar2 == 0) {
    puVar3 = (undefined8 *)(lVar4 + 0x18c);
  }
  else {
    iVar2 = strcmp(__s1,PTR_s_OverrideRimColor_047dce30);
    if (iVar2 != 0) {
      return;
    }
    puVar3 = (undefined8 *)(lVar4 + 0x14c);
  }
  uVar1 = param_3[1];
  *puVar3 = *param_3;
  puVar3[1] = uVar1;
  return;
}


