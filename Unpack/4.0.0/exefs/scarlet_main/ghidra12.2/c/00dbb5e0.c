/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dbb5e0; name: FUN_00dbb5e0
 */


ushort * FUN_00dbb5e0(long param_1,ushort param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x68);
  if (uVar1 != 0xffff) {
    lVar4 = *(long *)(param_1 + 0x48);
    uVar5 = (ulong)(uint)uVar1;
    do {
      if (*(ushort *)(lVar4 + uVar5 * 0x10 + 2) == param_2) {
        puVar3 = (ushort *)(lVar4 + uVar5 * 0x10);
        goto LAB_00dbb6b8;
      }
      uVar2 = *(ushort *)(lVar4 + uVar5 * 0x10);
      uVar5 = (ulong)uVar2;
    } while (uVar2 != 0xffff);
  }
  uVar5 = (ulong)*(ushort *)(param_1 + 0x40);
  if (uVar5 == 0xffff) {
    uVar5 = (ulong)*(int *)(param_1 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) <= *(int *)(param_1 + 0x50)) {
      FUN_02f4fbec(param_1 + 0x48,PTR_PTR_047d1a50,uVar5 + 1);
    }
    puVar3 = (ushort *)(*(long *)(param_1 + 0x48) + uVar5 * 0x10);
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    uVar1 = *(ushort *)(param_1 + 0x68);
    *(int *)(param_1 + 0x50) = (int)(uVar5 + 1);
  }
  else {
    puVar3 = (ushort *)(*(long *)(param_1 + 0x48) + uVar5 * 0x10);
    *(ushort *)(param_1 + 0x40) = *puVar3;
  }
  *puVar3 = uVar1;
  *(short *)(param_1 + 0x68) = (short)uVar5;
  puVar3[1] = param_2;
  *(undefined1 *)(puVar3 + 2) = 0;
LAB_00dbb6b8:
  return puVar3 + 4;
}


