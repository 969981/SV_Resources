/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a54978; name: FUN_01a54978
 */


void FUN_01a54978(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 local_60;
  int local_58 [5];
  undefined4 local_44;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_047d0a08;
  if (*(long *)PTR_DAT_047d0a08 != 0) {
    iVar3 = FUN_00f21480();
    puVar1 = PTR_DAT_047d0860;
    if (((iVar3 == 1) && (*(long *)PTR_DAT_047d0860 != 0)) &&
       (plVar4 = (long *)FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,DAT_0485ea70,0x7c),
       plVar4 != (long *)0x0)) {
      while (local_28 = 0, local_44 = 0,
            (**(code **)(*plVar4 + 0x68))(local_58,plVar4,&local_28,param_1 + 0xc0,&local_44,0x100),
            local_58[0] == 0) {
        local_60 = local_28;
        FUN_01a54aec(param_1,&local_60,param_1 + 0xc0,local_44);
      }
    }
    if (((*(long *)puVar2 != 0) && (iVar3 = FUN_00f21480(), iVar3 == 1)) &&
       ((*(long *)puVar1 != 0 &&
        (plVar4 = (long *)FUN_00f21488(*(long *)puVar1 + 0x10,DAT_0485ea7c,0x80),
        plVar4 != (long *)0x0)))) {
      while (local_28 = 0, local_44 = 0,
            (**(code **)(*plVar4 + 0x68))(local_58,plVar4,&local_28,param_1 + 0xc0,&local_44,0x100),
            local_58[0] == 0) {
        local_60 = local_28;
        FUN_01a54aec(param_1,&local_60,param_1 + 0xc0,local_44);
      }
    }
  }
  return;
}


