/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078f5b8; name: FUN_0078f5b8
 */


void FUN_0078f5b8(long *param_1,undefined4 param_2,long param_3,int param_4)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  int local_38 [2];
  
  puVar2 = PTR_DAT_047d0960;
  param_1[2] = (long)PTR_FUN_047d0958;
  param_1[3] = 0;
  local_50 = PTR_DAT_047d0878;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)param_1;
  local_50 = local_50 + 0x10;
  plVar1 = param_1 + 4;
  pcStack_48 = "Pia BackgroundScheduler";
  uVar5 = FUN_0078a12c();
  iVar3 = 0x5000;
  if (param_4 != 0) {
    iVar3 = param_4;
  }
  FUN_007ca938(plVar1,&local_50,param_1,uVar5,param_2,1,0x7fffffff,iVar3,0x20);
  param_1[0x23] = param_3;
  FUN_007c9e4c(param_1 + 0x24,0);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_0078f9d4(param_1 + 0x2e);
  *(undefined4 *)((long)param_1 + 0x184) = 0xffffffff;
  iVar3 = FUN_00789eb0();
  local_38[0] = 0;
  if (iVar3 == 0) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_047d0968);
    if (lVar6 == 0) {
      uVar4 = nn::os::GetCurrentCoreNumber();
    }
    else {
      uVar4 = (int)lVar6 - 1;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar4);
  }
  else {
    uVar4 = iVar3 - 1;
  }
  local_38[0] = 1 << (ulong)(uVar4 & 0x1f);
  FUN_007ca408(plVar1,local_38);
  FUN_007ca370(plVar1);
  *(undefined4 *)((long)param_1 + 0x184) = 0x18;
  return;
}


