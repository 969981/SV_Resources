/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0267c6e0; name: FUN_0267c6e0
 */


undefined8 FUN_0267c6e0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  
  uVar2 = FUN_0267a0c0(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_04856550 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04856550), iVar1 != 0)) {
    DAT_04856540 = PTR_FUN_047e0688;
    DAT_04856548 = 0;
    __cxa_guard_release(&DAT_04856550,extraout_x1,uVar3);
  }
  FUN_0267c5b0(&DAT_04856540,uVar2,uVar3);
  return 0;
}


