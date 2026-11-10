/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02728d2c; name: FUN_02728d2c
 */


void FUN_02728d2c(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long *local_38;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar2 = *(long *)(param_1 + 0x38);
  FUN_00c41540(lVar2);
  local_50 = 0xcfb6c0f3820db5c2;
  puStack_48 = PTR_s_ObjectAlpha_047e10b0;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  uVar1 = (**(code **)(*(long *)(*param_2 + 0x30) + 0x60))
                    ((long *)(*param_2 + 0x30),&local_50,&local_14);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(lVar2 + 0x10c) = local_14;
  }
  local_50 = 0xc48fa98e41e54f54;
  puStack_48 = PTR_s_OverrideRimPower_047dce38;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  uVar1 = (**(code **)(*(long *)(*param_2 + 0x30) + 0x60))
                    ((long *)(*param_2 + 0x30),&local_50,&local_14);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(lVar2 + 0x110) = local_14;
  }
  local_50 = 0x5af0945dc4c26284;
  puStack_48 = PTR_s_ObjectWetScale_047e10b8;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  uVar1 = (**(code **)(*(long *)(*param_2 + 0x30) + 0x60))
                    ((long *)(*param_2 + 0x30),&local_50,&local_14);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(lVar2 + 0x114) = local_14;
  }
  local_50 = 0xe808e7d9bfa5f320;
  puStack_48 = PTR_s_OverrideRimIntensity_047dce40;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  uVar1 = (**(code **)(*(long *)(*param_2 + 0x30) + 0x60))
                    ((long *)(*param_2 + 0x30),&local_50,&local_14);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(lVar2 + 0x118) = local_14;
  }
  local_50 = 0x13186c8477804a3f;
  puStack_48 = PTR_s_OverrideRimWeight_047dce28;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  uVar1 = (**(code **)(*(long *)(*param_2 + 0x30) + 0x60))
                    ((long *)(*param_2 + 0x30),&local_50,&local_14);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(lVar2 + 0x15c) = local_14;
  }
  local_50 = 0xcd754b86c93b29e4;
  puStack_48 = PTR_s_ObjectBlendColor_047dce20;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  uVar1 = (**(code **)(*(long *)(*param_2 + 0x30) + 0x70))
                    ((long *)(*param_2 + 0x30),&local_50,&local_60);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(lVar2 + 0x194) = uStack_58;
    *(undefined8 *)(lVar2 + 0x18c) = local_60;
  }
  local_50 = 0x1eb774d1eef8fbe2;
  puStack_48 = PTR_s_OverrideRimColor_047dce30;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  uVar1 = (**(code **)(*(long *)(*param_2 + 0x30) + 0x70))
                    ((long *)(*param_2 + 0x30),&local_50,&local_60);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(lVar2 + 0x154) = uStack_58;
    *(undefined8 *)(lVar2 + 0x14c) = local_60;
  }
  local_50 = 0x92caeea3ef5ad64c;
  puStack_48 = PTR_s_LightReceiveType_047d9490;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  uVar1 = (**(code **)(*(long *)(*param_2 + 0x30) + 0x80))
                    ((long *)(*param_2 + 0x30),&local_50,&local_18);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(lVar2 + 300) = local_18;
  }
  local_50 = 0x232b5c5547908bf7;
  puStack_48 = PTR_s_EnableInverseExposure_047e10c0;
  local_40 = 0x1f;
  local_38 = (long *)0x0;
  uVar1 = (**(code **)(*(long *)(*param_2 + 0x30) + 0x80))
                    ((long *)(*param_2 + 0x30),&local_50,&local_18);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(lVar2 + 0x180) = local_18;
  }
  return;
}


