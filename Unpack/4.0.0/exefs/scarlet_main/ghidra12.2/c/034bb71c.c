/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bb71c; name: FUN_034bb71c
 */


undefined8 * FUN_034bb71c(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + (uVar4 >> 1);
      uVar7 = *(ulong *)(*param_1 + (long)iVar1 * 0x28 + 0x20);
      if (uVar7 == param_2) {
        *param_3 = 1;
        return (undefined8 *)(*param_1 + (long)iVar1 * 0x28);
      }
      if (uVar7 < param_2) {
        iVar3 = iVar1 + 1;
      }
      uVar4 = uVar4 - (uVar7 < param_2) >> 1;
    } while (uVar4 != 0);
  }
  *param_3 = 0;
  if (*param_1 == 0) {
    uVar4 = *(uint *)(param_1 + 1);
    uVar5 = *(uint *)((long)param_1 + 0xc);
    if (uVar4 < uVar5) {
LAB_034bb7dc:
      if (uVar4 < uVar5) {
        uVar4 = *(uint *)(param_1 + 1);
        lVar6 = *param_1;
        *(uint *)(param_1 + 1) = uVar4 + 1;
        puVar2 = (undefined8 *)(lVar6 + (ulong)uVar4 * 0x28);
        if (lVar6 == 0) goto LAB_034bb790;
        lVar6 = lVar6 + (ulong)uVar4 * 0x28;
        *(undefined4 *)(lVar6 + 8) = 0;
        *(undefined1 *)(lVar6 + 0xc) = 0;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        *puVar2 = &PTR_LAB_047c4468;
        goto LAB_034bb794;
      }
    }
    else {
      iVar3 = uVar5 + (uVar5 >> 1);
      if (uVar5 == 0) {
        iVar3 = 1;
      }
      uVar7 = FUN_034bb9e0(param_1,iVar3);
      if ((uVar7 & 1) != 0) {
        uVar5 = *(uint *)((long)param_1 + 0xc);
        goto LAB_034bb7dc;
      }
    }
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_034bb838(param_1,iVar3);
LAB_034bb790:
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
LAB_034bb794:
    puVar2[4] = param_2;
  }
  return puVar2;
}


