/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c6b88; name: FUN_012c6b88
 */


void FUN_012c6b88(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x10,0,1);
  FUN_012c7294(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x4048) = param_2;
  puVar1 = (undefined8 *)(param_1 + 0x4050);
  do {
    *puVar1 = &DAT_cbf29ce484222645;
    puVar1[1] = &DAT_03c886bc;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = &DAT_cbf29ce484222645;
    puVar1[8] = &DAT_03c886bc;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = &DAT_cbf29ce484222645;
    puVar1[0xf] = &DAT_03c886bc;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = &DAT_cbf29ce484222645;
    puVar1[0x16] = &DAT_03c886bc;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1 = puVar1 + 0x1c;
  } while (puVar1 != (undefined8 *)(param_1 + 0xb050));
  return;
}


