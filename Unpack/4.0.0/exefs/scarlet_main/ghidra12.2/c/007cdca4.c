/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cdca4; name: FUN_007cdca4
 */


int FUN_007cdca4(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar3 = *(long *)(lVar2 + 0x20);
  if (lVar3 == lVar2 + 0x18) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      lVar4 = *(long *)(lVar3 + 0x10);
      if (((*(char *)(lVar4 + 0x28) != -3) && (*(long *)(lVar4 + 0x30) != param_2)) &&
         (*(byte *)(lVar4 + 0x3a) - 1 < 2)) {
        iVar1 = iVar1 + (uint)*(byte *)(lVar4 + 0x359);
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != lVar2 + 0x18);
  }
  return iVar1;
}


