/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050107c; name: FUN_0050107c
 */


void FUN_0050107c(long *param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_28;
  
  lVar1 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(lVar1 + param_3 * 8);
  if (lVar2 == 0) {
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(long *)(lVar1 + param_3 * 8) = param_4;
  }
  else {
    local_28 = param_4;
    if (lVar2 == *(long *)(lVar1 + (param_3 ^ 1) * 8)) {
      *(undefined8 *)(param_4 + 0x10) = 0;
      lVar1 = FUN_005015a0(*(undefined8 *)(lVar1 + param_3 * 8),&local_28,&local_28);
      lVar1 = *(long *)(lVar1 + 0x20);
      param_1[2] = param_3 & 0xfffffffffffffffe;
      *param_1 = lVar1;
      param_1[1] = param_2;
      return;
    }
    uVar3 = 0;
    lVar4 = lVar2;
    do {
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar3 = uVar3 + 1;
    } while (lVar4 != 0);
    if (uVar3 < 8) {
      *(long *)(param_4 + 0x10) = lVar2;
      *(long *)(lVar1 + param_3 * 8) = param_4;
      goto LAB_005010f4;
    }
    FUN_00501468(param_2,param_3);
    *(undefined8 *)(param_4 + 0x10) = 0;
    lVar1 = FUN_005015a0(*(undefined8 *)(*(long *)(param_2 + 0x20) + param_3 * 8),&local_28,
                         &local_28);
    param_4 = *(long *)(lVar1 + 0x20);
    param_3 = param_3 & 0xfffffffffffffffe;
  }
  uVar3 = param_3;
  if (*(ulong *)(param_2 + 0x18) <= param_3) {
    uVar3 = *(ulong *)(param_2 + 0x18);
  }
  *(ulong *)(param_2 + 0x18) = uVar3;
LAB_005010f4:
  *param_1 = param_4;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}


