/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00789d0c; name: FUN_00789d0c
 */


void FUN_00789d0c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  Result *pRVar5;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  pRVar5 = (Result *)&local_70;
  plVar2 = (long *)FUN_007ec544();
  puVar1 = PTR_DAT_047d0860;
  if (plVar2 == (long *)0x0) {
    local_58[0] = 0x10408;
LAB_00789e18:
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
  }
  else {
    if ((*(int *)((long)plVar2 + 0x34) + (uint)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) * -2) -
        0x3c < param_5) {
      local_58[0] = 0x10407;
      goto LAB_00789e18;
    }
    lVar3 = FUN_007ec4a8(param_2);
    if (lVar3 == 0) {
      local_58[0] = 0x2c27;
      goto LAB_00789e18;
    }
    (**(code **)(*plVar2 + 0x80))(local_58,plVar2,param_3);
    if (local_58[0] == 0) {
      if (*(char *)(*(long *)puVar1 + 0xc0) == '\0') {
        local_68[0] = 0x10408;
        local_70 = 0;
      }
      else {
        local_70 = 0;
        local_6c = 0;
        local_6a = 0;
        local_68[0] = (**(code **)(*param_2 + 0x18))(param_2);
        lVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,local_68,param_3,param_5,&local_70);
        if (lVar3 != 0) {
          FUN_007eba90(param_1,plVar2,param_4);
          return;
        }
        pRVar5 = (Result *)local_48;
        local_68[0] = 0;
        local_48[0] = 0;
      }
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_68 | 4),pRVar5);
      piVar4 = local_68;
      goto LAB_00789e34;
    }
  }
  piVar4 = local_58;
LAB_00789e34:
  FUN_00cbd7c0(param_1,piVar4);
  return;
}


