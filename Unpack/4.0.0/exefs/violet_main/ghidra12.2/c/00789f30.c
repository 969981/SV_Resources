/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00789f30; name: FUN_00789f30
 */


undefined8 FUN_00789f30(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_047d0890;
  puVar1 = PTR_DAT_047d0888;
  if (*PTR_DAT_047d0888 != '\0') {
    return 0;
  }
  *(undefined8 *)PTR_DAT_047d0890 = param_1;
  *(ulong *)(puVar2 + 8) = param_2 & 0xffffffff;
  FUN_007c3bd4(puVar2);
  if (*(int *)PTR_DAT_047d0898 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined8 **)(PTR_DAT_047d0898 + 8);
  }
  FUN_007ca50c(uVar3);
  thunk_FUN_007ca614(*(undefined8 *)PTR_DAT_047d08a0,uVar3);
  puVar2 = PTR_DAT_047d08a8;
  *puVar1 = 1;
  *(undefined4 *)puVar2 = 0x13;
  return 1;
}


