/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080d0ac; name: FUN_0080d0ac
 */


undefined8 FUN_0080d0ac(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  puVar1 = PTR_DAT_047d0a08;
  iVar2 = FUN_00f21480(*(undefined8 *)PTR_DAT_047d0a08);
  if (iVar2 == 2) {
    if (*(int *)(*(long *)(*(long *)puVar1 + 0x10) + 0x784) == 4) {
      local_30[0] = 0x8c6e;
    }
    else {
      local_30[0] = 0x8c52;
    }
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  }
  else {
    if (iVar2 != 3) {
      return 1;
    }
    (**(code **)(**(long **)PTR_DAT_047d15d8 + 0xf8))(local_30);
  }
  FUN_018ff39c(param_1 + 0xc0,local_30);
  return 0;
}


