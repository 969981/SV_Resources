/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038b1d0; name: FUN_0038b1d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0038b1d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = _UNK_03caaa28;
  uVar1 = _DAT_03caaa20;
  *(undefined1 *)(param_1 + 2) = 2;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  puVar3 = (undefined8 *)(*(code *)*param_3)(param_3,0,0,0x60);
  param_1[3] = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  return 1;
}


