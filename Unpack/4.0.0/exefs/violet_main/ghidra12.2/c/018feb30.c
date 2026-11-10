/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018feb30; name: FUN_018feb30
 */


void FUN_018feb30(undefined8 param_1,ulong *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_38 [2];
  
  FUN_007949a0();
  FUN_00789f20();
  if (((*param_2 == 0) || ((int)param_2[1] == 0)) || ((*param_2 & 7) != 0)) {
    uVar5 = 0x10407;
  }
  else {
    if (DAT_047f8f68 != '\x01') {
      DAT_047f8f6c = *(undefined4 *)((long)param_2 + 0xc);
      nn::time::Initialize();
      puVar3 = PTR_DAT_047d0868;
      if ((DAT_047f8f69 & 1) == 0) {
        FUN_0078fb00(PTR_DAT_047d0868);
        DAT_047f8f69 = 1;
      }
      else {
        uVar6 = *(undefined8 *)(PTR_DAT_047d0868 + 0x178);
        uVar2 = *(undefined2 *)(PTR_DAT_047d0868 + 0x180);
        uVar1 = PTR_DAT_047d0868[0x182];
        FUN_0078fb00(PTR_DAT_047d0868);
        *(undefined8 *)(puVar3 + 0x178) = uVar6;
        *(undefined2 *)(puVar3 + 0x180) = uVar2;
        puVar3[0x182] = uVar1;
      }
      FUN_00789f30(*param_2,(int)param_2[1]);
      puVar4 = PTR_DAT_047d0878;
      *(int *)(puVar3 + 0xa4) = (int)param_2[1];
      local_50 = puVar4 + 0x10;
      pcStack_48 = "pia common heap";
      FUN_0078a00c(2,0,&local_50);
      FUN_0078f1d8(&DAT_047f8f88);
      DAT_047f8f70 = &DAT_047f8f88;
      *(undefined **)PTR_DAT_047d0880 = &DAT_047f8f88;
      FUN_007bfc64(&PTR_PTR_044df318);
      DAT_047f8f68 = '\x01';
      FUN_007949ac(&local_50,2);
      local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
      goto LAB_018feb80;
    }
    uVar5 = 0x10402;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar5);
LAB_018feb80:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,&local_50);
  return;
}


