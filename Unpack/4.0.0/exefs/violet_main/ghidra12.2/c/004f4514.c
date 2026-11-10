/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f4514; name: FUN_004f4514
 */


ulong FUN_004f4514(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (*(char *)(param_3 + 0x43) != '\0') {
    uVar1 = FUN_005213cc(param_2 + (ulong)*(uint *)(param_1 + 0x28),*(undefined4 *)(param_3 + 0x44))
    ;
    return uVar1;
  }
  lVar2 = *(long *)(param_3 + 0x58);
  if ((lVar2 == 0) ||
     ((*(int *)(lVar2 + 0x18) == 1 && (*(char *)(**(long **)(lVar2 + 0x20) + 0x41) != '\0')))) {
    uVar1 = FUN_004f4588();
    return uVar1;
  }
  return (ulong)(*(int *)(param_2 +
                         (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                                      (int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x10) + 0x30
                                                                     )) >> 4) * -0x55555554)) ==
                *(int *)(param_3 + 0x44));
}


