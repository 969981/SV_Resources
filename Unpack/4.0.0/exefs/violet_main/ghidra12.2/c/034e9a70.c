/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e9a70; name: FUN_034e9a70
 */


void FUN_034e9a70(long param_1,long *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    (**(code **)(puVar1 + 0x30))(5);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    (**(code **)(puVar1 + 0x30))(5);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(puVar1 + 0x30))(5);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    (**(code **)(puVar1 + 0x30))(5);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(long *)(param_1 + 0x48) = 0;
  return;
}


