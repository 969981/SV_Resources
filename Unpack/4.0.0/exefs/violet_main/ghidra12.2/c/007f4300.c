/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f4300; name: FUN_007f4300
 */


undefined8
FUN_007f4300(long param_1,undefined8 param_2,undefined2 param_3,undefined4 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40 [2];
  
  uVar1 = FUN_00793910(param_4);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_007f3fa0(local_40,param_1 + 0x48);
    FUN_007f3fa0(local_40,param_1 + 0x60);
    if (*(byte *)(param_1 + 0x28) < 0x18) {
      lVar2 = FUN_01f7c4f0(*(undefined8 *)PTR_DAT_047d0860);
      lVar2 = lVar2 + (ulong)*(byte *)(param_1 + 0x28) * 0x30;
      *(undefined8 *)(lVar2 + 0x6450) = 0;
      *(undefined8 *)(lVar2 + 0x6458) = 0;
      *(undefined8 *)(lVar2 + 0x6460) = 0;
      *(undefined8 *)(lVar2 + 0x6468) = 0;
      *(undefined8 *)(lVar2 + 0x6470) = 0;
      *(undefined4 *)(lVar2 + 0x6478) = 0;
      *(undefined1 *)(lVar2 + 0x647c) = 0;
    }
    local_40[0] = 0;
    FUN_007935cc(local_40);
    *(undefined8 *)(param_1 + 0x30) = param_2;
    *(char *)(param_1 + 0x28) = (char)param_4;
    *(undefined2 *)(param_1 + 0x38) = param_3;
    *(undefined8 *)(param_1 + 0x80) = local_40[0];
    *(undefined8 *)(param_1 + 0x88) = local_40[0];
    FUN_00796828(param_1 + 8,param_5);
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x3a) = 1;
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return uVar3;
}


