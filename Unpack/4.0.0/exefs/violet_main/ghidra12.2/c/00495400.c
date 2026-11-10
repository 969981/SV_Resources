/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00495400; name: FUN_00495400
 */


undefined8 FUN_00495400(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_88 [13];
  undefined8 *local_18;
  
  FUN_00486000();
  iVar1 = FUN_0045bea0();
  if ((iVar1 != 0) && (local_18 = local_88, -1 < iVar1)) {
    local_88[0] = CONCAT44(local_88[0]._4_4_,iVar1);
    plVar3 = (long *)FUN_0045c970(&local_18,&PTR_DAT_044c1ec8,0x2c,8,&LAB_00495650);
    if (plVar3 == (long *)0x0) {
      if (DAT_047f43e0 == 0) {
        return 0;
      }
      uVar2 = FUN_0047e200(DAT_047f43e0,local_88);
      lVar5 = FUN_0047e450(DAT_047f43e0,uVar2);
    }
    else {
      lVar5 = *plVar3;
    }
    if (lVar5 != 0) {
      uVar4 = FUN_00486010(param_1);
      local_88[0] = FUN_003df520();
      iVar1 = FUN_003df510(uVar4);
      if (*(long *)(lVar5 + 8) == 0) {
        uVar4 = (**(code **)(lVar5 + 0x20))(0,local_88,(long)iVar1);
        return uVar4;
      }
      uVar4 = FUN_003e1880(0,local_88,(long)iVar1);
      return uVar4;
    }
  }
  return 0;
}


