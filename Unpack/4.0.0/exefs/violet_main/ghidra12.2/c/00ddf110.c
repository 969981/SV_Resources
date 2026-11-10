/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ddf110; name: FUN_00ddf110
 */


void FUN_00ddf110(undefined1 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_c0 [128];
  
  (**(code **)PTR_DAT_047d2cf0)(auStack_c0,*param_2);
  FUN_008f1714(auStack_c0,param_3);
  (**(code **)PTR_DAT_047d2d80)(auStack_c0,*param_4,param_5);
  if ((*(byte *)(param_3 + 0x10) >> 5 & 1) != 0) {
    FUN_008f29a0(auStack_c0,param_4,param_5,param_6);
  }
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  (**(code **)PTR_DAT_047d2e98)(param_1 + 0x10,auStack_c0);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


