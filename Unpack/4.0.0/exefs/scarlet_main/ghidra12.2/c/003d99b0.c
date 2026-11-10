/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d99b0; name: FUN_003d99b0
 */


long FUN_003d99b0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = 0x50;
  if (*(int *)(*(long *)(param_1 + 0x550) + 0x18) != 2) {
    lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
    if ((*(byte *)(lVar5 + 0x20) & 0x14) == 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2e0);
      if (lVar5 == 0) {
        return 0;
      }
      iVar2 = FUN_0043dbd0(*(undefined8 *)(lVar5 + 8));
      lVar5 = thunk_FUN_003ffef0();
      goto joined_r0x003d9a04;
    }
    iVar2 = 0x80;
    if (*(int *)(lVar5 + 0x44) != 0x100) {
      iVar2 = 0x50;
    }
  }
  lVar5 = thunk_FUN_003ffef0();
joined_r0x003d9a04:
  if (lVar5 == 0) {
    return 0;
  }
  lVar3 = FUN_003eb5b0();
  if ((lVar3 == 0) || (iVar1 = FUN_003eb9f0(lVar3,2), iVar1 == 0)) {
    FUN_00400010(lVar5);
  }
  else {
    iVar1 = FUN_003af440(param_1,0,0);
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    if (iVar1 < 0xc0) {
      if (iVar1 < 0x98) {
        if (iVar1 < 0x80) {
          if (iVar1 < 0x70) {
            lVar4 = FUN_003eb160(0);
          }
          else {
            lVar4 = FUN_003eb180(0);
          }
        }
        else {
          lVar4 = FUN_003eb1a0(0);
        }
      }
      else {
        lVar4 = FUN_003eb1c0(0);
      }
    }
    else {
      lVar4 = FUN_003eb1e0(0);
    }
    if ((lVar4 != 0) && (iVar2 = FUN_004001c0(lVar5,lVar4,0,lVar3), iVar2 != 0)) {
      return lVar5;
    }
    FUN_00400010(lVar5);
    FUN_003eb520(lVar4);
  }
  FUN_003eb520(lVar3);
  return 0;
}


