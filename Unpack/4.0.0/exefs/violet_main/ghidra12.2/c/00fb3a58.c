/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb3a58; name: FUN_00fb3a58
 */


undefined1 FUN_00fb3a58(long param_1)

{
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  if ((((*(char *)(param_1 + 0x158) == '\0') && (*(long *)(param_1 + 0x48) != 0)) &&
      ((*(byte *)(*(long *)(param_1 + 0x48) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x88) != 0 && ((*(byte *)(*(long *)(param_1 + 0x88) + 0x1e8) & 1) != 0)))
     ) {
    FUN_00fb9e50(&local_c8,param_1 + 0x80,param_1 + 0x40);
    *(undefined8 *)(param_1 + 200) = uStack_c0;
    *(undefined8 *)(param_1 + 0xd0) = local_b8;
    *(undefined8 *)(param_1 + 0xc0) = local_c8;
    FUN_00fb9ce0(param_1 + 0xd8,auStack_b0);
    FUN_00fb9ce0(param_1 + 0x118,auStack_70);
    FUN_00db239c(auStack_70);
    FUN_00db239c(auStack_b0);
    *(undefined1 *)(param_1 + 0x158) = 1;
  }
  return *(undefined1 *)(param_1 + 0x158);
}


