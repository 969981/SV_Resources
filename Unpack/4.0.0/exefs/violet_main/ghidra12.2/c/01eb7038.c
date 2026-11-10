/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb7038; name: FUN_01eb7038
 */


uint FUN_01eb7038(long param_1,undefined1 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *local_58 [4];
  undefined1 local_38 [8];
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  local_38[0] = param_2;
  FUN_016947d8(local_58);
  local_14 = 3;
  if (local_58[0] == (undefined8 *)0x0) {
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    FUN_00e5f2bc(auStack_18,&local_14,local_58[0] + 1);
    FUN_01eb70d8(auStack_18,local_38,local_58[0] + 1);
    uVar3 = *local_58[0];
    uVar1 = *(undefined4 *)(local_58[0] + 3);
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x70))(*(long **)(param_1 + 0xd0),uVar3,uVar1);
  FUN_01694aa8(local_58);
  return uVar2 & 1;
}


