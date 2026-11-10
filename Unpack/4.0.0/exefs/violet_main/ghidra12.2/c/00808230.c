/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00808230; name: FUN_00808230
 */


void FUN_00808230(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *local_38;
  char *pcStack_30;
  undefined4 local_28 [2];
  
  FUN_008084b0();
  uVar1 = FUN_018fe360();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x10408;
  }
  else {
    if (DAT_047fb4c0 != '\x01') {
      local_38 = PTR_DAT_047d0878 + 0x10;
      pcStack_30 = "pia npln heap";
      FUN_0078a00c(9,0,&local_38);
      DAT_047fb4c0 = '\x01';
      FUN_007949ac(&local_38,9);
      local_38 = (undefined *)((ulong)local_38 & 0xffffffff00000000);
      goto LAB_008082d0;
    }
    uVar2 = 0x10402;
  }
  local_38 = (undefined *)CONCAT44(local_38._4_4_,uVar2);
LAB_008082d0:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,&local_38);
  return;
}


