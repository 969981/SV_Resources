/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01243624; name: FUN_01243624
 */


bool FUN_01243624(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  char local_28 [8];
  undefined1 auStack_8 [8];
  
  iVar2 = FUN_01243680();
  if (iVar2 == 2) {
    local_28[0] = '\0';
    uVar3 = FUN_0124368c(*(undefined8 *)(param_1 + 0x78));
    FUN_01249124(uVar3,local_28,auStack_8);
    bVar1 = local_28[0] != '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


