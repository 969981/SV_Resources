/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b5a28; name: FUN_007b5a28
 */


undefined8 FUN_007b5a28(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined4 local_58 [8];
  int local_38 [4];
  undefined4 local_28 [2];
  
  plVar1 = *(long **)(param_1 + 0x80);
  FUN_00796868(local_58,param_1 + 0x60);
  (**(code **)(*plVar1 + 0x388))(local_38,plVar1,local_58);
  FUN_0284e3d4(local_58);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  if (local_38[0] == 0) {
    local_58[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
    FUN_00cbd7c0(auStack_68,local_58);
    FUN_0078cb28(uVar2,auStack_68);
  }
  else {
    FUN_00cbd7c0(auStack_78,local_38);
    FUN_0078cb94(uVar2,auStack_78);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


