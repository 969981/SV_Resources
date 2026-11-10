/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a0274; name: FUN_030a0274
 */


uint FUN_030a0274(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  uVar2 = (uint)param_3 & 0x3fffff;
  lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + (param_3 >> 0xe & 0x3ff00))
                   + 0x20);
  iVar1 = *(int *)(lVar5 + 0x60);
  uVar6 = uVar2 - *(int *)(lVar5 + 0x30);
  if ((int)uVar2 < *(int *)(lVar5 + 0x30)) {
    if (*(int *)(lVar5 + 0x78) == 0) {
      uVar6 = uVar2;
    }
    else {
      uVar6 = *(uint *)(*(long *)(lVar5 + 0x70) + (ulong)uVar2 * 4);
      if (uVar6 == 0xffffffff) {
        lVar3 = *(long *)(lVar5 + 0x58) + (long)(int)(iVar1 * uVar2) * 4;
        lVar5 = *(long *)(lVar5 + 0x28) + (ulong)uVar2 * 0x14;
        lVar4 = lVar3 + (long)iVar1 * 4;
        goto LAB_030a031c;
      }
    }
    lVar3 = *(long *)(lVar5 + 0x130) + (long)(int)(uVar6 * iVar1) * 4;
    lVar5 = *(long *)(lVar5 + 0xc0);
  }
  else {
    lVar3 = *(long *)(lVar5 + 0x150) + (long)(int)(iVar1 * uVar6) * 4;
    lVar5 = *(long *)(lVar5 + 0xe0);
  }
  lVar4 = lVar3 + (long)iVar1 * 4;
  lVar5 = lVar5 + (long)(int)uVar6 * 0x14;
LAB_030a031c:
  uVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))
                    (*(long **)(param_1 + 0x58),*(long *)(param_1 + 8),param_3 & 0xffffffff,lVar5,
                     lVar3,lVar4);
  return uVar2 & 1;
}


