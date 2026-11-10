/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c52b8; name: FUN_016c52b8
 */


undefined2 FUN_016c52b8(long param_1,undefined8 *param_2)

{
  undefined2 local_68 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x308) == 0) {
    local_68[0] = 0xffff;
  }
  else {
    local_28 = 0;
    local_60 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x230);
    uStack_58 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x238);
    local_40 = NEON_fmov(0x3f800000,4);
    local_50 = 0;
    uStack_48 = 0x40ffff00000000;
    local_38 = 0xffffffff3f800000;
    uStack_30 = 0;
    FUN_016c53c0(&local_60,*param_2);
    FUN_016c59d4(*(undefined8 *)(param_1 + 0x308),&local_60,1,local_68);
    FUN_016c5c2c(*(undefined8 *)(param_1 + 0x308));
    *(undefined1 *)(param_1 + 0x3d0) = 1;
    FUN_016c5364(&local_60);
  }
  return local_68[0];
}


