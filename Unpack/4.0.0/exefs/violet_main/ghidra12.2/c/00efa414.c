/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00efa414; name: FUN_00efa414
 */


undefined8 FUN_00efa414(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (((((*(long *)(param_1 + 0xb0) == 0) ||
        ((*(byte *)(*(long *)(param_1 + 0xb0) + 0x1e8) & 1) != 0)) &&
       ((*(long *)(param_1 + 0xf0) == 0 || ((*(byte *)(*(long *)(param_1 + 0xf0) + 0x1e8) & 1) != 0)
        ))) && ((*(char *)(param_1 + 0x48) == '\0' ||
                (((*(long *)(param_1 + 0xf0) != 0 &&
                  ((*(byte *)(*(long *)(param_1 + 0xf0) + 0x1e8) & 1) != 0)) &&
                 (uVar1 = FUN_00efa5dc(*(undefined8 *)(param_1 + 0xf0),param_1 + 0x50),
                 (uVar1 & 1) != 0)))))) &&
     ((((*(long *)(param_1 + 0x130) == 0 ||
        ((*(byte *)(*(long *)(param_1 + 0x130) + 0x1e8) & 1) != 0)) &&
       (((*(long *)(param_1 + 0x170) == 0 ||
         ((*(byte *)(*(long *)(param_1 + 0x170) + 0x1e8) & 1) != 0)) &&
        ((*(long *)(param_1 + 0x1b0) == 0 ||
         ((*(byte *)(*(long *)(param_1 + 0x1b0) + 0x1e8) & 1) != 0)))))) &&
      ((*(long *)(param_1 + 0x478) == 0 ||
       ((*(byte *)(*(long *)(param_1 + 0x478) + 0x1e8) & 1) != 0)))))) {
    if (*(char *)(param_1 + 0x4b0) != '\0') {
      plVar3 = *(long **)(param_1 + 0x4d8);
      for (lVar2 = *plVar3; lVar2 != plVar3[1]; lVar2 = lVar2 + 0x40) {
        if (*(long *)(lVar2 + 8) != 0) {
          if ((*(byte *)(*(long *)(lVar2 + 8) + 0x1e8) & 1) == 0) {
            return 0;
          }
          plVar3 = *(long **)(param_1 + 0x4d8);
        }
      }
    }
    if ((((*(long *)(param_1 + 0x1f0) == 0) ||
         ((*(byte *)(*(long *)(param_1 + 0x1f0) + 0x1e8) & 1) != 0)) &&
        ((*(long *)(param_1 + 0x270) == 0 ||
         ((*(byte *)(*(long *)(param_1 + 0x270) + 0x1e8) & 1) != 0)))) &&
       ((((*(long *)(param_1 + 0x230) == 0 ||
          ((*(byte *)(*(long *)(param_1 + 0x230) + 0x1e8) & 1) != 0)) &&
         (((*(long *)(param_1 + 0x438) == 0 ||
           ((*(byte *)(*(long *)(param_1 + 0x438) + 0x1e8) & 1) != 0)) &&
          ((((*(long *)(param_1 + 0x2b0) == 0 ||
             ((*(byte *)(*(long *)(param_1 + 0x2b0) + 0x1e8) & 1) != 0)) &&
            ((*(long *)(param_1 + 0x2f0) == 0 ||
             ((*(byte *)(*(long *)(param_1 + 0x2f0) + 0x1e8) & 1) != 0)))) &&
           ((*(long *)(param_1 + 0x330) == 0 ||
            ((*(byte *)(*(long *)(param_1 + 0x330) + 0x1e8) & 1) != 0)))))))) &&
        ((*(long *)(param_1 + 0x370) == 0 ||
         ((*(byte *)(*(long *)(param_1 + 0x370) + 0x1e8) & 1) != 0)))))) {
      return 1;
    }
  }
  return 0;
}


