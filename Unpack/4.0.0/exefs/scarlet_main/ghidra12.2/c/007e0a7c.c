/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e0a7c; name: FUN_007e0a7c
 */


void FUN_007e0a7c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_58 [8];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    local_58[0] = 0x10408;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    if (*(long *)(lVar1 + 0x18) != lVar1 + 0x10) {
      lVar2 = (long)*(int *)(lVar1 + 0x24);
      lVar3 = *(long *)(lVar1 + 0x18) - lVar2;
      do {
        if (*(char *)(*(long *)(lVar3 + 0x10) + 0x28) == *(char *)(param_3 + 0x28))
        goto LAB_007e0aec;
        lVar3 = *(long *)(lVar3 + lVar2 + 8) - lVar2;
      } while (lVar3 != (lVar1 + 0x10) - lVar2);
    }
    lVar3 = 0;
LAB_007e0aec:
    FUN_00796868(local_58,param_3 + 8);
    FUN_007968fc(param_4,local_58);
    FUN_0284e3d4(local_58);
    *(undefined1 *)(param_4 + 0x20) = *(undefined1 *)(param_3 + 0x28);
    *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_3 + 0x30);
    *(short *)(param_4 + 0x22) = (short)*(undefined4 *)(lVar3 + 0x18);
    local_58[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


