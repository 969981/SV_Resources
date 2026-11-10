/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00818818; name: FUN_00818818
 */


void FUN_00818818(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  undefined *puVar1;
  byte bVar2;
  
  puVar1 = PTR_DAT_047d1908;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = puVar1 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
                    /* try { // try from 0081885c to 0081886b has its CatchHandler @ 00818898 */
  FUN_001fcec0();
  bVar2 = FUN_00818d60(param_2,param_1 + 3);
  *(byte *)(param_1 + 8) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 7) = param_3;
  return;
}


