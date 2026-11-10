/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f569c; name: FUN_001f569c
 */


int FUN_001f569c(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_001f5710(param_1,param_3);
  if (iVar1 == 0) {
    memset((void *)(param_1 + 0x40),0,0x400);
    if (param_2 < 0x1000) {
      *(undefined1 *)(param_1 + 0x450) = 1;
      *(ulong *)(param_1 + 0x30) = param_2;
    }
    else {
      *(undefined1 *)(param_1 + 0x450) = 0;
    }
    *(ulong *)(param_1 + 0x440) = param_2;
    *(undefined8 *)(param_1 + 0x448) = 0xffffffff;
  }
  return iVar1;
}


