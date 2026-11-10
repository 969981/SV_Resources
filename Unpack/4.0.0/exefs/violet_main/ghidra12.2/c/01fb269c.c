/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb269c; name: FUN_01fb269c
 */


undefined1  [16] FUN_01fb269c(long param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  pcVar2 = (char *)(param_1 + 0x3040);
  lVar1 = *param_2;
  if (((((((*pcVar2 == '\0') || (*(long *)(param_1 + 0x3048) != lVar1)) &&
         ((pcVar2 = (char *)(param_1 + 0x3058), *pcVar2 == '\0' ||
          (*(long *)(param_1 + 0x3060) != lVar1)))) &&
        ((pcVar2 = (char *)(param_1 + 0x3070), *pcVar2 == '\0' ||
         (*(long *)(param_1 + 0x3078) != lVar1)))) &&
       (((pcVar2 = (char *)(param_1 + 0x3088), *pcVar2 == '\0' ||
         (*(long *)(param_1 + 0x3090) != lVar1)) &&
        (((pcVar2 = (char *)(param_1 + 0x30a0), *pcVar2 == '\0' ||
          (*(long *)(param_1 + 0x30a8) != lVar1)) &&
         ((pcVar2 = (char *)(param_1 + 0x30b8), *pcVar2 == '\0' ||
          (*(long *)(param_1 + 0x30c0) != lVar1)))))))) &&
      (((pcVar2 = (char *)(param_1 + 0x30d0), *pcVar2 == '\0' ||
        (*(long *)(param_1 + 0x30d8) != lVar1)) &&
       ((pcVar2 = (char *)(param_1 + 0x30e8), *pcVar2 == '\0' ||
        (*(long *)(param_1 + 0x30f0) != lVar1)))))) &&
     (((((pcVar2 = (char *)(param_1 + 0x3100), *pcVar2 == '\0' ||
         (*(long *)(param_1 + 0x3108) != lVar1)) &&
        ((pcVar2 = (char *)(param_1 + 0x3118), *pcVar2 == '\0' ||
         (*(long *)(param_1 + 0x3120) != lVar1)))) &&
       (((pcVar2 = (char *)(param_1 + 0x3130), *pcVar2 == '\0' ||
         (*(long *)(param_1 + 0x3138) != lVar1)) &&
        ((pcVar2 = (char *)(param_1 + 0x3148), *pcVar2 == '\0' ||
         (*(long *)(param_1 + 0x3150) != lVar1)))))) &&
      ((((pcVar2 = (char *)(param_1 + 0x3160), *pcVar2 == '\0' ||
         (*(long *)(param_1 + 0x3168) != lVar1)) &&
        ((pcVar2 = (char *)(param_1 + 0x3178), *pcVar2 == '\0' ||
         (*(long *)(param_1 + 0x3180) != lVar1)))) &&
       ((pcVar2 = (char *)(param_1 + 0x3190), *pcVar2 == '\0' ||
        (*(long *)(param_1 + 0x3198) != lVar1)))))))) {
    pcVar2 = (char *)(param_1 + 0x31a8);
    uVar3 = 0xbff0000000000000;
    if ((*pcVar2 == '\0') || (*(long *)(param_1 + 0x31b0) != lVar1)) goto LAB_01fb26dc;
  }
  uVar3 = *(ulong *)(pcVar2 + 0x10);
LAB_01fb26dc:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


