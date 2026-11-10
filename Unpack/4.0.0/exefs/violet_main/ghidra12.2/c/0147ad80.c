/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147ad80; name: FUN_0147ad80
 */


void FUN_0147ad80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)((long)param_1 + 0x3a) = 0;
  *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)(param_2 + 4);
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 3) = 0x500000005;
  *(undefined8 *)(param_1 + 1) = 0x500000005;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 5) = 0x500000005;
  return;
}


