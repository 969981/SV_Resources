/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fc920; name: FUN_007fc920
 */


void FUN_007fc920(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *local_30;
  char *pcStack_28;
  undefined4 local_18 [2];
  
  uVar1 = FUN_018fe360();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x10408;
  }
  else {
    if (DAT_047fb489 != '\x01') {
      local_30 = PTR_DAT_047d0878 + 0x10;
      pcStack_28 = "pia wan heap";
      FUN_0078a00c(8,0,&local_30);
      DAT_047fb489 = '\x01';
      FUN_007949ac(&local_30,8);
      local_30 = (undefined *)((ulong)local_30 & 0xffffffff00000000);
      goto LAB_007fc9b8;
    }
    uVar2 = 0x10402;
  }
  local_30 = (undefined *)CONCAT44(local_30._4_4_,uVar2);
LAB_007fc9b8:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,&local_30);
  return;
}


