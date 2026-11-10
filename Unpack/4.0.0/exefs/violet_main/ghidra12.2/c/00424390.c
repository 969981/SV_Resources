/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00424390; name: FUN_00424390
 */


ulong FUN_00424390(undefined8 param_1,char param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined1 local_34;
  undefined1 local_33;
  char local_30 [8];
  undefined1 local_28;
  
  uVar2 = 0;
  local_28 = 0;
  local_30 = (char  [8])s_SigEd448_03c39c04._0_8_;
  if (param_4 < 0x100) {
    local_34 = param_2 != '\0';
    local_33 = (undefined1)param_4;
    uVar3 = FUN_0043c8f0(0);
    uVar2 = FUN_0042bc40(param_1,uVar3,0);
    if ((int)uVar2 != 0) {
      sVar4 = strlen(local_30);
      uVar2 = FUN_0042bd60(param_1,local_30,sVar4);
      if (((int)uVar2 != 0) && (uVar2 = FUN_0042bd60(param_1,&local_34,2), (int)uVar2 != 0)) {
        iVar1 = FUN_0042bd60(param_1,param_3,param_4);
        uVar2 = (ulong)-(uint)(iVar1 != 0);
      }
    }
  }
  return uVar2;
}


