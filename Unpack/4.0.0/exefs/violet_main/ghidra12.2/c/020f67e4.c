/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020f67e4; name: FUN_020f67e4
 */


void FUN_020f67e4(long param_1,uint param_2,uint param_3,undefined8 param_4,byte param_5,
                 byte param_6)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = 0;
  if ((param_2 & 0xfffe) != 0x298 && (param_2 & 0xffff) != 0x2e8) {
    uVar2 = param_3 & 0xffff;
  }
  cVar3 = FUN_00f51268(param_2,param_3);
  param_1 = param_1 + ((ulong)param_2 & 0xffff) * 0x18;
  *(uint *)(param_1 + 0x50) = uVar2;
  uVar1 = 2;
  if (cVar3 != '\x03') {
    uVar1 = cVar3 == '\x02';
  }
  *(undefined1 *)(param_1 + 0x54) = uVar1;
  *(byte *)(param_1 + 0x55) = param_5 & 1;
  *(byte *)(param_1 + 0x56) = param_6 & 1;
  return;
}


