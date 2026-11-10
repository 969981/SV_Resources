/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c46f0; name: FUN_016c46f0
 */


void FUN_016c46f0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 local_24 [4];
  
  lVar4 = *param_1;
  if (((*(int *)(lVar4 + 0x15c) == 1) && (uVar2 = FUN_00ea79f4(lVar4), (uVar2 & 1) != 0)) &&
     (lVar3 = *(long *)(lVar4 + 0x108), lVar3 != 0)) {
    for (lVar1 = *(long *)(lVar3 + 0x38); lVar1 != *(long *)(lVar3 + 0x40); lVar1 = lVar1 + 0x40) {
      if (*(long *)(lVar1 + 8) == 0) {
        return;
      }
      if ((*(byte *)(*(long *)(lVar1 + 8) + 0x1e8) & 1) == 0) {
        return;
      }
    }
    if ((((*(long *)(lVar4 + 0x110) == 0) ||
         ((lVar3 = *(long *)(*(long *)(lVar4 + 0x110) + 0x38), lVar3 != 0 &&
          ((*(byte *)(lVar3 + 0x1e8) & 1) != 0)))) &&
        ((*(long *)(lVar4 + 0x118) == 0 ||
         ((lVar4 = *(long *)(*(long *)(lVar4 + 0x118) + 0x38), lVar4 != 0 &&
          ((*(byte *)(lVar4 + 0x1e8) & 1) != 0)))))) &&
       (lVar4 = *(long *)(*param_1 + 0x168), lVar4 != 0)) {
      local_24[0] = 1;
      (**(code **)(lVar4 + 0x30))(lVar4 + 0x50,local_24);
    }
  }
  return;
}


