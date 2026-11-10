/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fe354; name: FUN_007fe354
 */


void FUN_007fe354(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  
  FUN_0079a668();
  puVar1 = PTR_DAT_047d15d0;
  *param_1 = (long)(PTR_DAT_047d1610 + 0x10);
  *(undefined4 *)(param_1 + 0x23d) = 0;
  param_1[0x23a] = (long)(puVar1 + 0x10);
  param_1[0x23e] = (long)(puVar1 + 0x68);
  param_1[0x23b] = (long)(param_1 + 0x23f);
  lVar4 = 0x100;
  param_1[0x23c] = 0x100;
  *(undefined1 *)(param_1 + 0x23f) = 0;
  puVar3 = (undefined1 *)((long)param_1 + 0x11fb);
  do {
    *(undefined2 *)(puVar3 + -2) = 0;
    lVar4 = lVar4 + -4;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 4;
  } while (lVar4 != 0);
  *(undefined8 *)((long)param_1 + 0x11e4) = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  *(undefined1 *)(param_1 + 0x262) = 0;
  param_1[0x263] = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  *(undefined4 *)(param_1 + 0x266) = 0;
  param_1[0x267] = 0;
  param_1[0x268] = 0;
  *(undefined4 *)(param_1 + 0x269) = 0;
  FUN_0284e338(param_1 + 0x26a);
  *(undefined2 *)(param_1 + 0x26e) = 0;
  FUN_0078cfe4(param_1 + 0x26f,10);
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  *(undefined1 *)(param_1 + 0x277) = 0;
  uVar2 = FUN_0078a12c();
  lVar4 = FUN_007bf9f0(0x78,uVar2);
  if (lVar4 != 0) {
    FUN_00800610(lVar4,param_1);
  }
  param_1[0x273] = lVar4;
  return;
}


