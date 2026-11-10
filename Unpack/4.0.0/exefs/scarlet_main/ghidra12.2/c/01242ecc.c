/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01242ecc; name: FUN_01242ecc
 */


bool FUN_01242ecc(long param_1,byte param_2,byte param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  if (iVar1 == 2) {
    puVar4 = &DAT_03d6a45a;
joined_r0x01242f30:
    if (param_2 < 5) {
      cVar2 = puVar4[param_2];
    }
    else {
      cVar2 = '\x02';
    }
    if (param_3 < 5) {
      cVar3 = puVar4[param_3];
      goto LAB_01242f0c;
    }
  }
  else {
    if (iVar1 == 1) {
      puVar4 = &DAT_03d6a455;
      goto joined_r0x01242f30;
    }
    if (iVar1 == 0) {
      puVar4 = &DAT_03d6a450;
      goto joined_r0x01242f30;
    }
    cVar2 = '\x02';
  }
  cVar3 = '\x02';
LAB_01242f0c:
  return cVar2 == cVar3;
}


