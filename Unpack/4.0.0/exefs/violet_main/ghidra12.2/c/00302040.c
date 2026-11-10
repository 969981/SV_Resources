/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00302040; name: FUN_00302040
 */


undefined8 FUN_00302040(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_24 [4];
  
  local_24[0] = 1;
  lVar2 = FUN_00445b60();
  if (lVar2 != 0) {
    uVar3 = FUN_0043c2a0();
    iVar1 = FUN_00445600(lVar2,param_2,0x20,uVar3,0);
    if ((((iVar1 != 0) && (iVar1 = FUN_00445a80(lVar2,param_3,6), iVar1 != 0)) &&
        (iVar1 = FUN_00445a80(lVar2,local_24,1), iVar1 != 0)) &&
       (iVar1 = FUN_00445aa0(lVar2,&local_70,0), iVar1 != 0)) {
      FUN_00445bf0(lVar2);
      param_1[1] = uStack_68;
      *param_1 = local_70;
      return 0;
    }
    FUN_00445bf0(lVar2);
  }
  return 0xd;
}


