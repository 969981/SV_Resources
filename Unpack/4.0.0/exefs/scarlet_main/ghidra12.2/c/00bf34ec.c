/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bf34ec; name: FUN_00bf34ec
 */


long FUN_00bf34ec(long param_1,undefined8 param_2)

{
  int iVar1;
  long extraout_x1;
  long extraout_x1_00;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x34) != -1) {
    iVar1 = FUN_00b7bcfc(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20),*(long *)(param_1 + 0x48)
                         ,param_2);
    if ((iVar1 == 2) && (extraout_x1 != 0 && *(char *)(extraout_x1 + 0x44) != '\0')) {
      lVar2 = *(long *)(param_1 + 8);
      if (*(long *)(extraout_x1 + 0x50) == lVar2) {
        return extraout_x1;
      }
    }
    else {
      lVar2 = *(long *)(param_1 + 8);
    }
    if (*(char *)(*(long *)(lVar2 + 0x20) + 0x50) != '\0') {
      iVar1 = FUN_00b7bcfc(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20),
                           *(long *)(param_1 + 0x48),param_2);
      if (extraout_x1_00 == 0) {
        return 0;
      }
      if (iVar1 != 1) {
        return 0;
      }
      uVar3 = (ulong)*(uint *)(extraout_x1_00 + 0x78);
      if (0 < (int)*(uint *)(extraout_x1_00 + 0x78)) {
        lVar2 = *(long *)(extraout_x1_00 + 0x80);
        do {
          if ((((*(long *)(lVar2 + 0x50) == *(long *)(param_1 + 8)) &&
               (*(int *)(lVar2 + 0x3c) == 0xb)) && (*(int *)(lVar2 + 0x40) == 1)) &&
             (*(long *)(lVar2 + 0x68) == extraout_x1_00)) {
            return lVar2;
          }
          lVar2 = lVar2 + 0x90;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  return 0;
}


