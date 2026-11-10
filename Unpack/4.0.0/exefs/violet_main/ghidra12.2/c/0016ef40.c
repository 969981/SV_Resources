/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0016ef40; name: FUN_0016ef40
 */


void FUN_0016ef40(long param_1,int *param_2)

{
  FUN_001843f0(param_1 + 0x1004,param_2 + 0x203,0x100,0x24,0xff);
  if (1 < *(int *)(param_1 + 0x1000)) {
    FUN_001843f0(param_1 + 0x1404,param_2 + 0x303,0x100,0,0xff);
  }
  FUN_001843f0(param_1 + 0x800,param_2 + 0x102,0x100,0x12,0xff);
  FUN_001843f0(param_1 + 0xc00,param_2 + 0x403,0x100,0xc,0xff);
  if (*param_2 != 1) {
    param_1 = param_1 + 0x400;
  }
  FUN_001843f0(param_1,param_2 + 2,0x100,0,0xff);
  return;
}


