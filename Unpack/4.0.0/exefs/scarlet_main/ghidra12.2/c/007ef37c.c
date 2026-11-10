/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ef37c; name: FUN_007ef37c
 */


void FUN_007ef37c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (*(short *)(param_2 + 0x28) == 0) {
    local_48[0] = 0x1040c;
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = 0;
    puVar1 = PTR_DAT_047d0860;
    *(undefined8 *)(param_2 + 0x30) = 1;
    if (*(short *)(*(long *)puVar1 + 0x50) != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        (**(code **)(*(long *)(*(long *)(param_2 + 0x38) + lVar2) + 0x10))();
        *(undefined8 *)(*(long *)(param_2 + 0x40) + uVar3 * 8) = 0;
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x28;
      } while (uVar3 < *(ushort *)(*(long *)puVar1 + 0x50));
    }
    memset((void *)(param_2 + 0x74),0,4);
    memset((void *)(param_2 + 0x78),0,4);
    memset((void *)(param_2 + 0xa0),0,4);
    *(undefined1 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    local_48[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


