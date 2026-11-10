/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ec964; name: FUN_007ec964
 */


void FUN_007ec964(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_50[0] = 0x10407;
  }
  else if (*(char *)(param_2 + 0x28) == '\0') {
    if (*(long *)(param_2 + 0x18) != param_2 + 0x10) {
      iVar1 = *(int *)(param_2 + 0x24);
      lVar2 = *(long *)(param_2 + 0x18) - (long)iVar1;
      do {
        FUN_007ec54c(lVar2,param_3);
        FUN_007ec55c(lVar2,param_4);
        lVar2 = *(long *)(lVar2 + *(int *)(param_2 + 0x24) + 8) - (long)*(int *)(param_2 + 0x24);
      } while (lVar2 != (param_2 + 0x10) - (long)iVar1);
    }
    *(undefined1 *)(param_2 + 0x28) = 1;
    local_50[0] = 0;
  }
  else {
    local_50[0] = 0x10408;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


