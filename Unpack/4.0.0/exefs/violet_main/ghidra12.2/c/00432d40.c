/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00432d40; name: FUN_00432d40
 */


undefined8 FUN_00432d40(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  if (param_2 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[6] = param_2[6];
    puVar1[7] = param_2[7];
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar1[8] = *param_3;
    puVar1[9] = param_3[1];
    puVar1[10] = param_3[2];
    puVar1[0xb] = param_3[3];
  }
  puVar1[0x1c] = 0;
  return 1;
}


