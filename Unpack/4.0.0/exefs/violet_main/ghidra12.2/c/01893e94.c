/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01893e94; name: FUN_01893e94
 */


ushort FUN_01893e94(undefined2 param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined *local_30;
  undefined2 local_28;
  
  local_30 = PTR_DAT_047ddad8 + 0x10;
  local_28 = param_1;
  uVar2 = FUN_01894478(&local_30);
  uVar1 = uVar2 & 0xf;
  if ((uVar2 & 0xff) != 0) {
    uVar2 = FUN_01894620(&local_30);
    sVar3 = FUN_018947c8(&local_30);
    uVar1 = uVar1 | (uVar2 & 0x3f) << 4 | sVar3 << 10;
  }
  return uVar1;
}


