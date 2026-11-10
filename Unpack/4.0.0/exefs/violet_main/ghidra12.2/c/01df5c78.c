/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df5c78; name: FUN_01df5c78
 */


undefined8 FUN_01df5c78(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *local_c0 [4];
  long *local_a0;
  undefined *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50 [4];
  long *local_30;
  undefined8 local_8;
  
  local_8 = param_2;
  FUN_01df5b88(local_50,&local_8);
  iVar1 = FUN_0172bf60(local_50);
  if (iVar1 != 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = PTR_DAT_047d8e88 + 0x10;
    local_88 = (long *)0x0;
    FUN_01df5b88(local_c0,&local_8);
    FUN_00dc5c18(&local_90,0,local_c0,0,*(undefined8 *)(param_1 + 8));
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    if (local_c0[0] != (long *)0x0) {
      (**(code **)(*local_c0[0] + 0x20))();
    }
    lVar2 = (**(code **)(*local_88 + 0x70))();
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*local_88 + 0x70))();
      FUN_00db239c(&local_90);
      goto LAB_01df5d38;
    }
    FUN_00db239c(&local_90);
  }
  uVar3 = 0;
LAB_01df5d38:
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_50[0] != (long *)0x0) {
    (**(code **)(*local_50[0] + 0x20))();
  }
  return uVar3;
}


