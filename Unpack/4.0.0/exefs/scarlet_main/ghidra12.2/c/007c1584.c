/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c1584; name: FUN_007c1584
 */


long FUN_007c1584(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x88))();
  if ((uVar2 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1 + 0x12;
      FUN_007c9e3c(plVar4);
    }
    lVar5 = param_2 + -0x20;
    if ((*(ulong *)(param_2 + -8) & 1) != 0) {
      lVar5 = *(ulong *)(param_2 + -8) - 1;
    }
    uVar3 = param_3 + 7U & 0xfffffffffffffff8;
    uVar2 = *(ulong *)(lVar5 + 0x18) - uVar3;
    if (*(ulong *)(lVar5 + 0x18) < uVar3) {
      lVar5 = 0;
    }
    else if ((uVar2 == 0) || (uVar2 < 0x20)) {
      lVar5 = lVar5 + (ulong)*(ushort *)(lVar5 + 0x12) + 0x20;
    }
    else {
      *(ulong *)(lVar5 + 0x18) = uVar3;
      puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar3 + (ulong)*(ushort *)(lVar5 + 0x12));
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1[3] = uVar2 - 0x20;
      FUN_007c026c(param_1);
      lVar5 = lVar5 + 0x20 + (ulong)*(ushort *)(lVar5 + 0x12);
    }
    if (plVar4 != (long *)0x0) {
      FUN_007c9e44(plVar4);
    }
  }
  return lVar5;
}


