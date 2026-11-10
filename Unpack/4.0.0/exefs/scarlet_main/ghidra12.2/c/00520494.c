/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00520494; name: FUN_00520494
 */


void FUN_00520494(long param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar3 = *(ulong **)(param_1 + 0x18);
  do {
    if (puVar3 == (ulong *)0x0) {
      uVar4 = 8;
    }
    else {
      uVar4 = *puVar3 << 1;
      if (0x3f < uVar4) {
        uVar4 = 0x40;
      }
    }
    uVar2 = (ulong)((int)uVar4 * 0x10 + 0x17) & 0xff0;
    puVar1 = *(ulong **)(param_1 + 0x28);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar1) < uVar2) {
      puVar1 = (ulong *)FUN_00520b10(param_1);
      puVar3 = *(ulong **)(param_1 + 0x18);
    }
    else {
      *(ulong *)(param_1 + 0x28) = (long)puVar1 + uVar2;
    }
    *puVar1 = uVar4;
    puVar1[1] = (ulong)puVar3;
    *(ulong **)(param_1 + 0x18) = puVar1;
    *(ulong **)(param_1 + 0x38) = puVar1 + 2;
    *(ulong **)(param_1 + 0x40) = puVar1 + 2 + uVar4 * 2;
    puVar3 = puVar1;
  } while ((uVar4 & 0xfffffffffffffff) == 0);
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  *(ulong **)(param_1 + 0x38) = puVar1 + 4;
  return;
}


