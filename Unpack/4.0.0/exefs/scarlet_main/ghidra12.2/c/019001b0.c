/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019001b0; name: FUN_019001b0
 */


void FUN_019001b0(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *local_30;
  char *pcStack_28;
  undefined4 local_18 [2];
  
  FUN_007e87c0();
  uVar1 = FUN_018fe360();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x10408;
  }
  else {
    if (DAT_047fb230 != '\x01') {
      local_30 = PTR_DAT_047d0878 + 0x10;
      pcStack_28 = "pia transport heap";
      FUN_0078a00c(0xe,0,&local_30);
      DAT_047fb230 = '\x01';
      FUN_007949ac(&local_30,0xe);
      local_30 = (undefined *)((ulong)local_30 & 0xffffffff00000000);
      goto LAB_0190024c;
    }
    uVar2 = 0x10402;
  }
  local_30 = (undefined *)CONCAT44(local_30._4_4_,uVar2);
LAB_0190024c:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,&local_30);
  return;
}


