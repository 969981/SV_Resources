/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a06a0; name: FUN_010a06a0
 */


void FUN_010a06a0(long param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(int **)(param_1 + 8) = param_2;
  if (((param_2 != (int *)0x0) && (4 < *(ushort *)((long)param_2 - (long)*param_2))) &&
     (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar4 != 0)) {
    puVar1 = (uint *)((long)param_2 + uVar4);
    uVar2 = *(uint *)((long)puVar1 + (ulong)*puVar1);
    *(char *)(param_1 + 0x48) = (char)uVar2;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if ((((((uVar2 & 0xff) != 0) &&
          (FUN_00d7684c(param_1 + 0x10,uVar2 & 0xff,0), *(char *)(param_1 + 0x48) != '\0')) &&
         ((**(ulong **)(param_1 + 0x10) = **(ulong **)(param_1 + 0x10) & 0xfffffffffffffffe,
          1 < *(byte *)(param_1 + 0x48) &&
          ((**(ulong **)(param_1 + 0x10) = **(ulong **)(param_1 + 0x10) & 0xfffffffffffffffd,
           2 < *(byte *)(param_1 + 0x48) &&
           (**(ulong **)(param_1 + 0x10) = **(ulong **)(param_1 + 0x10) & 0xfffffffffffffffb,
           3 < *(byte *)(param_1 + 0x48))))))) &&
        (**(ulong **)(param_1 + 0x10) = **(ulong **)(param_1 + 0x10) & 0xfffffffffffffff7,
        4 < *(byte *)(param_1 + 0x48))) &&
       (((**(ulong **)(param_1 + 0x10) = **(ulong **)(param_1 + 0x10) & 0xffffffffffffffef,
         5 < *(byte *)(param_1 + 0x48) &&
         (**(ulong **)(param_1 + 0x10) = **(ulong **)(param_1 + 0x10) & 0xffffffffffffffdf,
         6 < *(byte *)(param_1 + 0x48))) &&
        (**(ulong **)(param_1 + 0x10) = **(ulong **)(param_1 + 0x10) & 0xffffffffffffffbf,
        7 < *(byte *)(param_1 + 0x48))))) {
      uVar4 = 7;
      do {
        uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
        uVar3 = uVar4 & 0x3f;
        uVar4 = uVar4 + 1;
        *(ulong *)(*(long *)(param_1 + 0x10) + uVar5) =
             *(ulong *)(*(long *)(param_1 + 0x10) + uVar5) & (1L << uVar3 ^ 0xffffffffffffffffU);
      } while (uVar4 < *(byte *)(param_1 + 0x48));
    }
  }
  return;
}


