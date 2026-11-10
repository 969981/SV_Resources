/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298c73c; name: FUN_0298c73c
 */


undefined8 FUN_0298c73c(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  
  if (((int)param_2 < 0xe) && (piVar3 = (int *)(param_1 + (ulong)param_2 * 4 + 0xa8), *piVar3 != 0))
  {
    uVar4 = (ulong)param_2;
    lVar1 = param_1 + 8 + uVar4 * 0x10;
    lVar2 = param_1 + 8 + uVar4 * 4;
    *(undefined8 *)(lVar1 + 0x348) = 0;
    *(undefined8 *)(lVar1 + 0x340) = 0;
    param_1 = param_1 + uVar4 * 0x2c;
    *(undefined4 *)(lVar2 + 0x30) = 0;
    *(undefined4 *)(lVar2 + 0x68) = 0;
    *piVar3 = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    return 1;
  }
  return 0;
}


