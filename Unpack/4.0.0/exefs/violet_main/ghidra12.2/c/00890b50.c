/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00890b50; name: FUN_00890b50
 */


undefined8 FUN_00890b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char acStack_238 [256];
  char local_138 [256];
  undefined4 local_38;
  undefined1 local_34;
  
  nn::util::SNPrintf(acStack_238,0x100,"ArchiveShader-%s.bnsh");
  local_38 = 0x68736762;
  local_34 = 0;
  if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
    nn::util::SNPrintf(local_138,0xff,"%s/%s",&local_38,acStack_238);
  }
  else {
    nn::util::SNPrintf(local_138,0xff,"%s/%s/%s",(char *)(param_1 + 0x40),&local_38,acStack_238);
  }
  iVar1 = FUN_00892230(param_1 + 8,local_138);
  if (iVar1 == -1) {
    uVar3 = 0;
  }
  else {
    local_138[0] = '\0';
    local_138[1] = '\0';
    local_138[2] = '\0';
    local_138[3] = '\0';
    local_138[4] = '\0';
    local_138[5] = '\0';
    local_138[6] = '\0';
    local_138[7] = '\0';
    lVar2 = FUN_008921c8(param_1 + 8,local_138,iVar1);
    uVar3 = 0;
    if (lVar2 != 0) {
      thunk_FUN_00893dd4(param_2,param_3,lVar2,0,0,0,0,3);
      uVar3 = 1;
    }
  }
  return uVar3;
}


