/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d7620; name: FUN_031d7620
 */


void FUN_031d7620(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_230 [448];
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  local_50 = auStack_230;
  local_60 = 1;
  uStack_58 = 0;
  uStack_48 = 0;
  local_70 = PTR_DAT_047e34b8 + 0x10;
  uStack_68 = 0xffffffff;
  local_40 = 0x1bf;
  local_38 = 0;
  memset(auStack_230,0,0x1c0);
  FUN_0322bd4c(&local_70,
               "Only AttributeArrayWithOwnership::AllocImpl\'s deallocate function should be used.",
               0x51);
  iVar1 = FUN_03226f50(0x296f573f,auStack_230,
                       "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Builder/hkTypeBuilder.cpp"
                       ,0x5d);
  if (iVar1 != 0) {
    CallSupervisor(0x26);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


