/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eac5c; name: FUN_007eac5c
 */


void FUN_007eac5c(undefined8 param_1,long param_2,ushort param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  *(ushort *)(param_2 + 0x10) = param_3;
  if (param_3 < 2) {
    local_48[0] = 0x10407;
  }
  else {
    uVar1 = FUN_0078a12c();
    uVar4 = (ulong)param_3;
    lVar2 = FUN_007bf9f0(uVar4 * 0x650,uVar1);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      do {
        FUN_0079704c(lVar3);
        uVar4 = uVar4 - 1;
        lVar3 = lVar3 + 0x650;
      } while (uVar4 != 0);
    }
    *(long *)(param_2 + 8) = lVar2;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


