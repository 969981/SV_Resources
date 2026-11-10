/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f64ddc; name: FUN_00f64ddc
 */


undefined2 * FUN_00f64ddc(long param_1,short param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x40);
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 < uVar1) {
    if ((int)(*(uint *)(param_1 + 100) & 0x7fffffff) < (int)uVar1) {
      FUN_02e8bb18((long *)(param_1 + 0x58),PTR_PTR_047d1a50,(long)(int)uVar1);
      uVar3 = *(uint *)(param_1 + 0x60);
    }
    if ((int)uVar3 < (int)uVar1) {
      *(uint *)(param_1 + 0x60) = uVar1;
      memset((void *)(*(long *)(param_1 + 0x58) + (long)(int)uVar3 * 2),0xff,
             (ulong)(uVar1 + ~uVar3) * 2 + 2);
    }
    else if ((int)uVar1 < (int)uVar3) {
      *(uint *)(param_1 + 0x60) = uVar1;
    }
  }
  uVar7 = (ulong)(param_3 & 0xffffff);
  uVar2 = *(ushort *)(*(long *)(param_1 + 0x58) + uVar7 * 2);
  if (uVar2 != 0xffff) {
    lVar5 = *(long *)(param_1 + 0x48);
    do {
      uVar6 = (ulong)uVar2;
      if (*(short *)(lVar5 + uVar6 * 0x10 + 2) == param_2) {
        puVar4 = (undefined2 *)(lVar5 + uVar6 * 0x10);
        goto LAB_00f64ef8;
      }
      uVar2 = *(ushort *)(lVar5 + uVar6 * 0x10);
    } while (uVar2 != 0xffff);
  }
  uVar6 = (ulong)*(ushort *)(param_1 + 0x40);
  if (uVar6 == 0xffff) {
    uVar6 = (ulong)*(int *)(param_1 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) <= *(int *)(param_1 + 0x50)) {
      FUN_02f4fbec(param_1 + 0x48,PTR_PTR_047d1a50,uVar6 + 1);
    }
    puVar4 = (undefined2 *)(*(long *)(param_1 + 0x48) + uVar6 * 0x10);
    *(undefined8 *)(puVar4 + 4) = 0;
    *(int *)(param_1 + 0x50) = (int)(uVar6 + 1);
  }
  else {
    puVar4 = (undefined2 *)(*(long *)(param_1 + 0x48) + uVar6 * 0x10);
    *(undefined2 *)(param_1 + 0x40) = *puVar4;
  }
  if ((param_3 & 0xffffff) == 0xffffff) {
    *puVar4 = *(undefined2 *)(param_1 + 0x68);
    *(short *)(param_1 + 0x68) = (short)uVar6;
  }
  else {
    *puVar4 = *(undefined2 *)(*(long *)(param_1 + 0x58) + uVar7 * 2);
    *(short *)(*(long *)(param_1 + 0x58) + uVar7 * 2) = (short)uVar6;
  }
  puVar4[1] = param_2;
  *(char *)(puVar4 + 2) = (char)(param_3 >> 0x18);
LAB_00f64ef8:
  return puVar4 + 4;
}


