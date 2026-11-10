/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a3c868; name: FUN_00a3c868
 */


undefined1 FUN_00a3c868(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  lVar2 = DAT_04836468;
  if (DAT_04836468 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    do {
      *(undefined1 *)(lVar2 + 0x30) = 0;
      if (*(char *)(lVar2 + 0x20) != '\0') goto LAB_00a3c908;
      iVar1 = *(int *)(lVar2 + 0x28);
      if (0x40 < iVar1) {
        return uVar4;
      }
      uVar3 = FUN_00a3d414(lVar2);
      if ((uVar3 & 1) != 0) {
        *(int *)(lVar2 + 0x28) = iVar1 + 1;
      }
      if ((((*(long *)(lVar2 + 0x10) != 0) && (*(char *)(*(long *)(lVar2 + 0x10) + 8) == '\0')) ||
          ((*(long *)(lVar2 + 0x40) != 0 && (*(char *)(*(long *)(lVar2 + 0x40) + 8) == '\0')))) ||
         ((*(long *)(lVar2 + 0x48) != 0 && (*(char *)(*(long *)(lVar2 + 0x48) + 8) == '\0')))) {
        *(undefined1 *)(lVar2 + 0x20) = 1;
        goto LAB_00a3c908;
      }
      uVar4 = 0;
    } while (*(char *)(lVar2 + 0x30) != '\0');
    if (*(char *)(lVar2 + 0x20) == '\0') {
      uVar4 = 0;
    }
    else {
LAB_00a3c908:
      FUN_00a42ac0();
      uVar4 = 0;
    }
  }
  return uVar4;
}


