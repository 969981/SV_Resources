/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ac890; name: FUN_003ac890
 */


undefined8 FUN_003ac890(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  local_18 = 0;
  uVar3 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_004400b0(param_1,0);
    if (((lVar2 != 0) && (iVar1 = FUN_0043fda0(lVar2), 0 < iVar1)) &&
       (iVar1 = FUN_0043fe30(lVar2,&local_18), iVar1 < 1)) {
      FUN_0043e1f0(local_18);
      local_18 = 0;
    }
    FUN_00440340(lVar2);
    uVar3 = local_18;
  }
  return uVar3;
}


