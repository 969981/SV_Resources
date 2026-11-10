/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03307320; name: FUN_03307320
 */


void FUN_03307320(void)

{
  int iVar1;
  undefined1 auStack_220 [448];
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_40 = auStack_220;
  local_50 = 1;
  uStack_48 = 0;
  uStack_38 = 0;
  local_60 = PTR_DAT_047e34b8 + 0x10;
  uStack_58 = 0xffffffff;
  local_30 = 0x1bf;
  local_28 = 0;
  memset(auStack_220,0,0x1c0);
  FUN_0322bd4c(&local_60,
               "Upgrading hkaiNavMeshCutter from version 17 to 18 not implemented. Please reexport your data."
               ,0x5d);
  iVar1 = FUN_03226f50(0x6167d2e7,auStack_220,
                       "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Patches/2014_2_5/hkaiPatches_2014_2_5.cpp"
                       ,0x13);
  if (iVar1 != 0) {
    CallSupervisor(0x26);
  }
  return;
}


