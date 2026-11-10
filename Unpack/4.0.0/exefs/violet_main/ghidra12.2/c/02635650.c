/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02635650; name: FUN_02635650
 */


undefined8 FUN_02635650(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  uVar2 = FUN_02635700(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  if ((DAT_04855020 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04855020);
    if (iVar1 != 0) {
      DAT_04855918 = 1;
      __cxa_guard_release(&DAT_04855020,uVar3);
    }
  }
  FUN_0263578c(auStack_38,uVar2,uVar3);
  FUN_026358f0(param_1,auStack_38);
  FUN_02631be4(auStack_38);
  return 1;
}


