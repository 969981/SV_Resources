/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cc45b0; name: FUN_01cc45b0
 */


void FUN_01cc45b0(char *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  
  cVar3 = *param_1;
  if (cVar3 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar4 != 0)) {
      uVar2 = param_3[1];
      lVar4 = lVar4 + param_2;
      *(undefined8 *)(lVar4 + -0x28) = *param_3;
      *(undefined8 *)(lVar4 + -0x20) = uVar2;
    }
  }
  else if (((cVar3 == '\x01') || (cVar3 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    uVar2 = param_3[1];
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    return;
  }
  return;
}


