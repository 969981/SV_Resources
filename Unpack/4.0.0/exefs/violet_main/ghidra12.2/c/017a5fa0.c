/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a5fa0; name: FUN_017a5fa0
 */


undefined8 FUN_017a5fa0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char local_24 [4];
  
  iVar1 = FUN_00f7d58c(*param_2,param_2[1],local_24);
  if ((iVar1 == 1 && local_24[0] == '\x01') &&
     (*(int *)(param_1 + 0x40) <
      (int)((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) >> 3) * -0x33333333)) {
    FUN_017a6028(param_1);
    FUN_017a60e4(param_2 + 2,*(undefined8 *)(param_1 + 0x48));
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


