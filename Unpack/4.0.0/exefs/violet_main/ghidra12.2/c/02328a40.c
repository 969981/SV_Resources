/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02328a40; name: FUN_02328a40
 */


undefined8 FUN_02328a40(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_02328b00(param_1,1);
  uVar4 = FUN_00c646d0(param_1,2,0);
  iVar1 = FUN_00c92df0(param_1,3,0);
  if (((DAT_04847038 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04847038), iVar2 != 0)) {
    DAT_048477d8 = 1;
    __cxa_guard_release(&DAT_04847038);
  }
  FUN_02328b8c(uVar3,uVar4,(long)iVar1);
  return 0;
}


