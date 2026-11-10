/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f5770; name: FUN_001f5770
 */


int FUN_001f5770(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_001f5710();
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 200) = 0x1000;
    *(undefined8 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xe0) = 0x100000000;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_001f3fd0(param_1 + 0x48);
    FUN_001f3fd0(param_1 + 0x70);
    *(undefined2 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0xea) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return iVar1;
}


