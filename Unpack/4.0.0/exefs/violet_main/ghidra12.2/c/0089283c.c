/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089283c; name: FUN_0089283c
 */


void FUN_0089283c(byte *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if ((int)(uint)*param_1 < (int)param_2) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00896e98();
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
    }
    puVar1 = (undefined8 *)FUN_00896e78((ulong)param_2 << 5);
    *puVar1 = 0;
    *(undefined8 **)(param_1 + 8) = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      *param_1 = (byte)param_2;
    }
  }
  return;
}


