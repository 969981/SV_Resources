/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197bda0; name: FUN_0197bda0
 */


void FUN_0197bda0(int *param_1)

{
  long *plVar1;
  float fVar2;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  long *local_30;
  undefined4 local_28;
  int local_24;
  
  local_28 = 1;
  local_24 = 1;
  plVar1 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  local_48 = 0xd0ae1f83d5073d77;
  puStack_40 = PTR_s_ResolutionWidth2D_047d8e58;
  local_38 = 0x1f;
  local_30 = (long *)0x0;
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_48,&local_24);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  plVar1 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  local_48 = 0x6b0411245f14fbe6;
  puStack_40 = PTR_s_ResolutionHeight2D_047d8e60;
  local_38 = 0x1f;
  local_30 = (long *)0x0;
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_48,&local_28);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  DAT_04835be0 = local_24;
  DAT_04835be4 = local_28;
  fVar2 = (float)local_24 / 1920.0;
  DAT_04835be8 = (int)((float)(int)(fVar2 * (float)param_1[2] * 0.03125) * 32.0);
  DAT_04835bec = (int)((float)(int)(fVar2 * (float)param_1[3] * 0.03125) * 32.0);
  DAT_04835bf0 = (int)(fVar2 * (float)*param_1 +
                      (float)(int)((fVar2 * (float)param_1[2] - (float)DAT_04835be8) * 0.5));
  DAT_04835bf4 = (int)(fVar2 * (float)param_1[1] +
                      (float)(int)((fVar2 * (float)param_1[3] - (float)DAT_04835bec) * 0.5));
  DAT_04835bf8 = (undefined1)param_1[4];
  FUN_0197c1b8();
  FUN_0197bf80();
  return;
}


