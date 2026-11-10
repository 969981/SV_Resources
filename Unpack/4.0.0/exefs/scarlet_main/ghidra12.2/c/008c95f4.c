/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c95f4; name: FUN_008c95f4
 */


undefined8 FUN_008c95f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x238);
  lVar3 = *(long *)(lVar2 + 0x340);
  if ((lVar3 == 0) || ((*(int *)(lVar3 + 0x10c) == -1 && (*(int *)(lVar3 + 0x110) == -1)))) {
    uVar1 = 0;
    lVar3 = *(long *)(lVar2 + 0x348);
  }
  else {
    uVar1 = 1;
    lVar3 = *(long *)(lVar2 + 0x348);
  }
  if ((lVar3 != 0) && ((*(int *)(lVar3 + 0x10c) != -1 || (*(int *)(lVar3 + 0x110) != -1)))) {
    uVar1 = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x350);
  if ((lVar2 != 0) && ((*(int *)(lVar2 + 0x10c) != -1 || (*(int *)(lVar2 + 0x110) != -1)))) {
    uVar1 = 1;
  }
  return uVar1;
}


