/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8aae4; name: FUN_02e8aae4
 */


void FUN_02e8aae4(long param_1,undefined8 param_2,undefined8 param_3,ushort param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  ushort local_8 [4];
  
  if ((*(byte *)(param_1 + 0x48 + (ulong)param_4 * 0x40 + *(long *)(param_1 + 0x48) + 0x1e) >> 6 & 1
      ) != 0) {
    local_8[0] = param_4;
    FUN_00cb0a40(param_1,local_8,1);
    uVar1 = FUN_00cb2110(param_1);
    if (*(char *)(param_1 + 0x94) != '\0') {
      uVar2 = 2;
      if ((uVar1 & 1) != 0) {
        uVar2 = 3;
      }
      FUN_00cb04b4(param_1 + 0xa0,param_1,uVar2);
    }
  }
  return;
}


