/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ec3c4; name: FUN_007ec3c4
 */


void FUN_007ec3c4(undefined8 param_1,long param_2,char *param_3)

{
  char cVar1;
  short sVar2;
  long lVar3;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  cVar1 = *param_3;
  if (cVar1 == -3) {
    local_28[0] = 0x10407;
  }
  else {
    if (*(char *)(param_2 + 0x4a) != cVar1) {
      *(char *)(param_2 + 0x4a) = cVar1;
    }
    lVar3 = *(long *)(param_3 + 8);
    if ((lVar3 != 0) && (*(long *)(param_2 + 0x40) != lVar3)) {
      *(long *)(param_2 + 0x40) = lVar3;
    }
    sVar2 = *(short *)(param_3 + 0x10);
    if ((sVar2 != 0) && (*(short *)(param_2 + 0x48) != sVar2)) {
      *(short *)(param_2 + 0x48) = sVar2;
    }
    lVar3 = *(long *)(param_3 + 0x18);
    if ((lVar3 != 0) && (*(long *)(param_2 + 0x50) != lVar3)) {
      *(long *)(param_2 + 0x50) = lVar3;
    }
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


