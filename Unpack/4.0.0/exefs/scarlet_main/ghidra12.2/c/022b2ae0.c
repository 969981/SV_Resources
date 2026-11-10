/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022b2ae0; name: FUN_022b2ae0
 */


void FUN_022b2ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_80 [2];
  undefined8 local_70 [3];
  undefined1 auStack_58 [24];
  long local_40;
  undefined4 local_38;
  uint local_34;
  undefined4 local_14;
  
  puVar1 = PTR_LAB_047dde80;
  if (DAT_04843c20 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_80[0] = param_3;
  local_70[0] = param_2;
  local_14 = param_5;
  uVar2 = FUN_02294d00(param_6);
  FUN_022b34fc(auStack_58,param_4,puVar1,0,local_70,local_80,&local_14,uVar2);
  FUN_022b3540(param_1,auStack_58);
  local_38 = 0;
  if ((-1 < (int)local_34) && (local_40 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_40,(ulong)local_34 << 5);
  }
  return;
}


