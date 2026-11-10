/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bc56c; name: FUN_034bc56c
 */


undefined8 * FUN_034bc56c(long *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + (uVar5 >> 1);
      uVar6 = *(uint *)(*param_1 + (long)iVar1 * 0x28 + 0x20);
      if (uVar6 == param_2) {
        *param_3 = 1;
        return (undefined8 *)(*param_1 + (long)iVar1 * 0x28);
      }
      if (uVar6 < param_2) {
        iVar4 = iVar1 + 1;
      }
      uVar5 = uVar5 - (uVar6 < param_2) >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  if (*param_1 == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    uVar6 = *(uint *)((long)param_1 + 0xc);
    if (uVar5 < uVar6) {
LAB_034bc62c:
      if (uVar5 < uVar6) {
        uVar5 = *(uint *)(param_1 + 1);
        lVar7 = *param_1;
        *(uint *)(param_1 + 1) = uVar5 + 1;
        puVar2 = (undefined8 *)(lVar7 + (ulong)uVar5 * 0x28);
        if (lVar7 == 0) goto LAB_034bc5e0;
        lVar7 = lVar7 + (ulong)uVar5 * 0x28;
        *(undefined4 *)(lVar7 + 8) = 0;
        *(undefined1 *)(lVar7 + 0xc) = 0;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *puVar2 = &PTR_LAB_047c44e8;
        goto LAB_034bc5e4;
      }
    }
    else {
      iVar4 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar4 = 1;
      }
      uVar3 = FUN_034bc830(param_1,iVar4);
      if ((uVar3 & 1) != 0) {
        uVar6 = *(uint *)((long)param_1 + 0xc);
        goto LAB_034bc62c;
      }
    }
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_034bc688(param_1,iVar4);
LAB_034bc5e0:
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
LAB_034bc5e4:
    *(uint *)(puVar2 + 4) = param_2;
  }
  return puVar2;
}


