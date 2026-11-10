/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


