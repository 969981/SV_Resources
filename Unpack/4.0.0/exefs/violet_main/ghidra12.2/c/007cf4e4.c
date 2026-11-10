/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cf4e4; name: FUN_007cf4e4
 */


undefined8 FUN_007cf4e4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  undefined4 local_48 [4];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  puVar1 = PTR_DAT_047d0a08;
  FUN_007cd5e0(*(undefined8 *)PTR_DAT_047d0a08,2);
  FUN_007cdb58(*(undefined8 *)puVar1);
  plVar2 = *(long **)(*(long *)puVar1 + 0x18);
  local_48[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
  FUN_00cbd7c0(auStack_38,local_48);
  (**(code **)(*plVar2 + 0x188))(plVar2,auStack_38);
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    FUN_00cbd7c0(auStack_58,local_48);
    FUN_0078cb28(lVar3,auStack_58);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}


