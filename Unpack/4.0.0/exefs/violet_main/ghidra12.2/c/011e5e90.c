/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e5e90; name: FUN_011e5e90
 */


ulong FUN_011e5e90(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long local_68;
  long lStack_60;
  long local_58;
  long *local_50;
  long *local_48;
  
  FUN_011e79d8(&local_48);
  plVar4 = local_48;
  plVar3 = (long *)PTR_DAT_047d8b70;
  plVar2 = (long *)PTR_PTR_047d4508;
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 6;
  }
  local_68 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 7;
  }
  lStack_60 = *plVar1;
  if (local_48 == (long *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = local_48[8];
  }
  local_50 = (long *)0x0;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48);
  }
  local_50 = plVar4;
  uVar6 = FUN_00d4e220(uVar9,&local_68,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar1 = local_48;
  if ((uVar6 & 0xff) != 0) goto LAB_011e5f28;
  if (local_48 != (long *)0x0) {
    plVar2 = local_48 + 7;
    plVar3 = local_48 + 6;
  }
  lVar8 = *(long *)(param_1 + 0x30);
  local_68 = *plVar3;
  lStack_60 = *plVar2;
  if (local_48 == (long *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = local_48[8];
  }
  local_50 = (long *)0x0;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))(local_48);
  }
  local_50 = plVar1;
  uVar6 = FUN_00d4e220(lVar8,&local_68,0);
  if ((uVar6 & 0xff) == 0) {
    uVar6 = FUN_011e86a0(lVar8,&local_68,param_2 + 0x20,0);
LAB_011e602c:
    uVar7 = uVar6 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xff;
  }
  else {
    iVar5 = strcmp(*(char **)(param_2 + 0x28),"IrradianceVolume");
    if (iVar5 != 0) {
      lVar8 = *(long *)(lVar8 + 0x38) + ((long)uVar6 >> 0x20) * 0x1d0;
      *(int *)(lVar8 + 0x1c0) = *(int *)(lVar8 + 0x1c0) + 1;
      goto LAB_011e602c;
    }
    uVar7 = 0;
    uVar6 = 0;
  }
  uVar6 = uVar6 | uVar7;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
LAB_011e5f28:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return uVar6;
}


