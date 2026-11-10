/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bf154; name: FUN_007bf154
 */


void FUN_007bf154(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 local_50;
  undefined4 local_48;
  int local_40 [4];
  undefined4 local_28;
  int local_24;
  
  piVar2 = (int *)&local_50;
  if (*(char *)(param_3 + 0x648) == '\0') {
    local_40[0] = 0;
    local_50 = local_50 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)&local_50);
  }
  else {
    local_24 = 0;
    iVar1 = *(int *)(param_3 + 0x5f8);
    FUN_007929a0(local_40,*(undefined8 *)(param_2 + 0x18),param_3 + 0x30,iVar1,param_4,&local_24);
    if (local_40[0] == 0) {
      if ((local_24 == 0) || (local_24 != iVar1)) {
        local_50 = CONCAT44(local_50._4_4_,0x10408);
        goto LAB_007bf258;
      }
      *(undefined1 *)(*(long *)(param_2 + 0x58) + 0x127b) = 1;
    }
    else {
      if (*(char *)(param_2 + 0x10) == '\0') {
        local_50 = (ulong)local_50._4_4_ << 0x20;
LAB_007bf258:
        local_28 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)&local_28);
        goto LAB_007bf270;
      }
      local_50 = CONCAT44(local_50._4_4_,0x10407);
      local_28 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)&local_28);
      if (local_40[0] == (int)local_50) {
        local_48 = 0;
        local_50 = 1;
        FUN_007976c8(param_3,&local_50,0);
      }
    }
  }
  piVar2 = local_40;
LAB_007bf270:
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


