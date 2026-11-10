/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01762420; name: FUN_01762420
 */


undefined1  [16] FUN_01762420(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  DirectoryEntryType aDStack_14 [4];
  
  pcVar2 = strrchr(param_1,0x2f);
  pcVar3 = strchr(param_1,0x2f);
  if (pcVar2 == pcVar3) {
    uVar4 = 0;
  }
  else {
    *pcVar2 = '\0';
    iVar1 = nn::fs::GetEntryType(aDStack_14,param_1);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      auVar8 = FUN_01762420(param_1);
      uVar6 = auVar8._0_8_;
      if (((uVar6 & 0xff00000000) == 0) || (auVar8._8_4_ != 0)) {
        uVar5 = uVar6 & 0xffffff0000000000;
        uVar6 = uVar6 & 0xffffffff00000000;
        goto LAB_01762468;
      }
      uVar4 = nn::fs::CreateDirectory(param_1);
      uVar4 = uVar4 & 0xffffffff;
    }
    *pcVar2 = '/';
  }
  uVar5 = 0;
  uVar6 = 0x100000000;
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = 10;
LAB_01762468:
  auVar7._0_8_ = uVar6 & 0xff00000000 | auVar8._0_8_ & 0xffffffff | uVar5;
  auVar7._8_8_ = auVar8._8_8_ & 0xffffffff;
  return auVar7;
}


