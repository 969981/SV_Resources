/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014aeb48; name: FUN_014aeb48
 */


undefined8 FUN_014aeb48(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
  uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),0);
  if (((((((uVar1 & 1) == 0) || (*(char *)(param_1 + 0x174) == '\0')) &&
        ((lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8),
         uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),1),
         (uVar1 & 1) == 0 || (*(char *)(param_1 + 0x175) == '\0')))) &&
       ((lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8),
        uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),2),
        (uVar1 & 1) == 0 || (*(char *)(param_1 + 0x176) == '\0')))) &&
      ((lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8),
       uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),3),
       (uVar1 & 1) == 0 || (*(char *)(param_1 + 0x177) == '\0')))) &&
     ((lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8),
      uVar1 = FUN_00f7e2a0(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),4),
      (uVar1 & 1) == 0 || (*(char *)(param_1 + 0x178) == '\0')))) {
    return 0;
  }
  return 1;
}


