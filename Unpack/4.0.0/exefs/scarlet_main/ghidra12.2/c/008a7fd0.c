/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a7fd0; name: FUN_008a7fd0
 */


void FUN_008a7fd0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  
  if (((*(byte *)(param_1 + 0xb) ^ 0xff) & 0x81) != 0) {
    return;
  }
  if (((*(byte *)((long)param_1 + 0x5c) >> 4 & 1) != 0) && (*(char *)((long)param_1 + 0x5a) != '\0')
     ) {
    if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) != 0) {
      lVar1 = param_1[0x15] + 0xc;
      uVar2 = *(uint *)(param_1[0x15] + 0x10);
      FUN_008aa75c(*(undefined8 *)
                    (lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar2 + 4 +
                                                      (ulong)*(byte *)(lVar1 + (ulong)(*(int *)(
                                                  lVar1 + (ulong)uVar2 + 4) + uVar2) + 0xc) * 4) +
                                    uVar2) + 8),param_2,param_3);
      bVar3 = *(byte *)(param_1 + 0xb);
      goto joined_r0x008a8090;
    }
    (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_3);
  }
  bVar3 = *(byte *)(param_1 + 0xb);
joined_r0x008a8090:
  if (((bVar3 >> 1 & 1) == 0) || (*(char *)((long)param_1 + 0x5a) != '\0')) {
    for (plVar4 = (long *)param_1[5]; plVar4 != param_1 + 4; plVar4 = (long *)plVar4[1]) {
      (**(code **)(plVar4[-1] + 0xb8))(plVar4 + -1,param_2,param_3);
    }
  }
  return;
}


