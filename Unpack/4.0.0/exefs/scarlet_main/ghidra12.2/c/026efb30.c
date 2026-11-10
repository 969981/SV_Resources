/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026efb30; name: FUN_026efb30
 */


uint FUN_026efb30(undefined1 param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long local_60 [4];
  ulong local_40;
  undefined8 local_38;
  undefined1 auStack_18 [4];
  undefined1 local_14 [4];
  
  if ((((param_5 < 0x201) && (param_5 < 0x1f8)) &&
      (local_40 = *(ulong *)(param_3 + 0x20), (local_40 & 0xff) != 0)) &&
     ((*(char *)(param_3 + 0x28) != '\0') != (*(char *)(param_3 + 0x29) != '\0'))) {
    local_38 = param_2;
    local_14[0] = param_1;
    FUN_017522c8(local_60,param_4 + (ulong)param_5,0x200 - param_5);
    if (local_60[0] != 0) {
      FUN_026ef8bc(auStack_18,local_14,local_60[0] + 8);
      if (local_60[0] != 0) {
        FUN_01e62da0(auStack_18,&local_38,local_60[0] + 8);
        if (local_60[0] != 0) {
          FUN_014c2934(auStack_18,(ulong)&local_40 | 4,local_60[0] + 8);
          if (local_60[0] != 0) {
            uVar1 = *(undefined1 *)(param_3 + 0x29);
            lVar3 = FUN_0111b030(uVar1);
            if ((ulong)(*(long *)(local_60[0] + 0x18) + lVar3) <= *(ulong *)(local_60[0] + 0x10)) {
              *(undefined1 *)(*(long *)(local_60[0] + 8) + *(long *)(local_60[0] + 0x18)) = uVar1;
              *(long *)(local_60[0] + 0x18) = *(long *)(local_60[0] + 0x18) + 1;
            }
          }
        }
      }
    }
    iVar2 = FUN_014c27c8(local_60);
    param_5 = iVar2 + param_5;
    FUN_01694aa8(local_60);
  }
  return param_5;
}


