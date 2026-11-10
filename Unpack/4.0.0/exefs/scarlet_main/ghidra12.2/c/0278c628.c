/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278c628; name: FUN_0278c628
 */


void FUN_0278c628(undefined8 param_1,uint *param_2,ErrorResultVariant *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint local_48;
  uint uStack_44;
  undefined4 local_38 [2];
  
  if (param_3 == (ErrorResultVariant *)0x0) {
    local_48 = 0x10407;
    goto LAB_0278c724;
  }
  if (*param_2 == 0) {
LAB_0278c6bc:
    local_48 = 0x10408;
  }
  else {
    local_48 = 0xa466;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
    if (*param_2 == local_48) {
      iVar1 = nn::err::ErrorResultVariant::GetState();
      if (iVar1 != 1) goto LAB_0278c6bc;
      uVar2 = *(undefined8 *)(param_2 + 1);
      *(uint *)(param_3 + 8) = param_2[3];
      *(undefined8 *)param_3 = uVar2;
    }
    else {
      local_48 = 0xc47e;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
      uStack_44 = FUN_00794af4(param_2);
      local_48 = uStack_44 / 10000;
      uStack_44 = uStack_44 % 10000;
      nn::err::ErrorResultVariant::operator=(param_3,(ErrorCode *)&local_48);
    }
    local_48 = 0;
  }
LAB_0278c724:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,&local_48);
  return;
}


