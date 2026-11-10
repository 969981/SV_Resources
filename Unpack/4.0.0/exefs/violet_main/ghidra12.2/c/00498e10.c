/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00498e10; name: FUN_00498e10
 */


undefined8 FUN_00498e10(long param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int local_60 [12];
  
  FUN_00498ee0();
  if (*(char *)(param_1 + 0xe0) < '\0') {
    return 0xffffffff;
  }
  if (param_2 == -1) {
    return 1;
  }
  uVar1 = param_2 - 1;
  if (8 < uVar1) {
    if (DAT_047f43e8 == 0) {
      return 0xffffffff;
    }
    local_60[0] = param_2;
    iVar2 = FUN_0047e200(DAT_047f43e8,local_60);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    uVar1 = iVar2 + 9;
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    if ((int)uVar1 < 0) {
      lVar3 = 0;
      goto LAB_00498e5c;
    }
    if (8 < (int)uVar1) {
      lVar3 = FUN_0047e450(DAT_047f43e8,iVar2);
      goto LAB_00498e5c;
    }
  }
  lVar3 = (ulong)uVar1 * 0x30 + 0x44c37a0;
LAB_00498e5c:
  uVar4 = (**(code **)(lVar3 + 0x10))(lVar3,param_1,param_3);
  return uVar4;
}


