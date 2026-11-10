/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010c3528; name: FUN_010c3528
 */


uint FUN_010c3528(long param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  FUN_00f0f040(uVar5);
  FUN_00f0fd68(uVar5);
  FUN_00f0f854(uVar5);
  FUN_010c363c(*(undefined8 *)(param_1 + 0xa8),1);
  lVar4 = *(long *)(param_1 + 0xb8);
  if (lVar4 == 0) {
    uVar1 = 0;
  }
  else {
    pcVar3 = *(code **)(lVar4 + 0xd0);
    if ((*(ulong *)(lVar4 + 0xd8) & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)(lVar4 + ((long)*(ulong *)(lVar4 + 0xd8) >> 1)));
    }
    uVar1 = (*pcVar3)();
  }
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    pcVar3 = *(code **)(lVar4 + 0xd0);
    if ((*(ulong *)(lVar4 + 0xd8) & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)(lVar4 + ((long)*(ulong *)(lVar4 + 0xd8) >> 1)));
    }
    uVar2 = (*pcVar3)();
    uVar1 = uVar1 | uVar2;
  }
  lVar4 = *(long *)(param_1 + 200);
  if (lVar4 != 0) {
    pcVar3 = *(code **)(lVar4 + 0xd0);
    if ((*(ulong *)(lVar4 + 0xd8) & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)(lVar4 + ((long)*(ulong *)(lVar4 + 0xd8) >> 1)));
    }
    uVar2 = (*pcVar3)();
    uVar1 = uVar1 | uVar2;
  }
  lVar4 = *(long *)(param_1 + 0xd0);
  if (lVar4 != 0) {
    pcVar3 = *(code **)(lVar4 + 0xd0);
    if ((*(ulong *)(lVar4 + 0xd8) & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)(lVar4 + ((long)*(ulong *)(lVar4 + 0xd8) >> 1)));
    }
    uVar2 = (*pcVar3)();
    uVar1 = uVar1 | uVar2;
  }
  lVar4 = *(long *)(param_1 + 0xd8);
  if (lVar4 != 0) {
    pcVar3 = *(code **)(lVar4 + 0xd0);
    if ((*(ulong *)(lVar4 + 0xd8) & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(long *)(lVar4 + ((long)*(ulong *)(lVar4 + 0xd8) >> 1)));
    }
    uVar2 = (*pcVar3)();
    uVar1 = uVar1 | uVar2;
  }
  return uVar1 & 1;
}


