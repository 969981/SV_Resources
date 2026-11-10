/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008995d8; name: FUN_008995d8
 */


void FUN_008995d8(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if ((lVar1 != 0) && (lVar1 = FUN_008a8338(), lVar1 != 0)) {
    if ((*(long *)(lVar1 + 8) != 0) &&
       (((*(byte *)(lVar1 + 0x228) >> 2 & 1) == 0 &&
        ((*(byte *)(*(long *)(lVar1 + 8) + 4) >> 1 & 1) != 0)))) {
      (**(code **)(*param_2 + 0x38))(param_2);
      if ((*(long *)(lVar1 + 8) != 0) &&
         (((*(byte *)(lVar1 + 0x228) >> 2 & 1) == 0 &&
          ((*(byte *)(*(long *)(lVar1 + 8) + 4) >> 1 & 1) != 0)))) {
        *(undefined1 *)(lVar1 + 0x54) = 0;
      }
    }
    if (((*(long *)(lVar1 + 0x58) != 0) && ((*(byte *)(lVar1 + 0x228) >> 2 & 1) == 0)) &&
       ((*(byte *)(*(long *)(lVar1 + 0x58) + 8) >> 5 & 1) != 0)) {
      (**(code **)(*param_2 + 0x38))(param_2);
      if (((*(long *)(lVar1 + 0x58) != 0) && ((*(byte *)(lVar1 + 0x228) >> 2 & 1) == 0)) &&
         ((*(byte *)(*(long *)(lVar1 + 0x58) + 8) >> 5 & 1) != 0)) {
        *(undefined1 *)(lVar1 + 0x98) = 0;
      }
    }
  }
  return;
}


