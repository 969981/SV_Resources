/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f59e8; name: FUN_021f59e8
 */


uint FUN_021f59e8(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_58 [28];
  undefined1 auStack_3c [28];
  
  uVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  FUN_0100bbbc(auStack_3c,uVar1,*(undefined1 *)(*(long *)PTR_DAT_047d90c8 + 0x3d0));
  FUN_01e9da00(*(undefined8 *)(param_1 + 0x70),auStack_58,0xd);
  uVar2 = FUN_0131cbf0(auStack_58,auStack_3c);
  return uVar2 & 1;
}


