/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008db898; name: FUN_008db898
 */


void FUN_008db898(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_008cb198(param_2,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_2 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
  FUN_008db9d8(param_1,(undefined8 *)(param_2 + 0x48),
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x9f0));
  FUN_008db9d8(param_1,(undefined8 *)(param_2 + 0x50),
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0xa10));
  FUN_008db9d8(param_1,(undefined8 *)(param_2 + 0x58),
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0xa30));
  lVar3 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar3 + 0x878) == -1) {
    *(undefined8 *)(param_2 + 0x80) = 0;
    cVar1 = *(char *)(lVar3 + 0x8a9);
  }
  else {
    uVar2 = FUN_008dbfdc(param_1);
    lVar3 = *(long *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x80) = uVar2;
    cVar1 = *(char *)(lVar3 + 0x8a9);
  }
  if ((cVar1 != '\0') && (*(long *)(lVar3 + 0x8d0) != -1)) {
    uVar2 = FUN_008dbfdc(param_1);
    *(undefined8 *)(param_2 + 0x78) = uVar2;
  }
  FUN_008cb1b4(param_2,param_1 + 0xf0);
  FUN_008cbea0(param_2,param_1);
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_008cbccc(param_2,param_1);
    return;
  }
  return;
}


