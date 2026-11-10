/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c6620; name: FUN_016c6620
 */


void FUN_016c6620(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x308) != 0) {
    local_38 = 0;
    local_70 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x230);
    uStack_68 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x238);
    local_50 = NEON_fmov(0x3f800000,4);
    local_60 = 0;
    uStack_58 = 0x40ffff00000000;
    local_48 = 0xffffffff3f800000;
    uStack_40 = 0;
    FUN_016c53c0(&local_70,*param_3);
    FUN_022017f8(*(undefined8 *)(param_1 + 0x308),param_2,1,&local_70);
    FUN_016c5c2c(*(undefined8 *)(param_1 + 0x308));
    *(undefined1 *)(param_1 + 0x3d0) = 1;
    FUN_016c5364(&local_70);
  }
  return;
}


