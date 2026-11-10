/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


