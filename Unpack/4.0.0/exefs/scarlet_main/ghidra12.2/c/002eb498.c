/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002eb498; name: FUN_002eb498
 */


long FUN_002eb498(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    uVar4 = (ulong)*(byte *)(param_2 + 1);
    lVar5 = (long)param_2 + 9;
  }
  else {
    if (*(int *)(lVar5 + 8) == 1) {
      uVar4 = (ulong)*(uint *)(lVar5 + 0x60);
      goto LAB_002eb508;
    }
    if (*(int *)(lVar5 + 8) == 0) {
      uVar4 = (ulong)*(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar5 + 0x28) * 4);
      goto LAB_002eb508;
    }
    uVar4 = param_2[1];
    lVar5 = param_2[2];
  }
  uVar4 = FUN_0038cbd0(lVar5,uVar4,*(undefined4 *)PTR_DAT_047cc650);
LAB_002eb508:
  uVar8 = 0;
  do {
    uVar7 = *(ulong *)(param_1 + 0x18);
    uVar1 = (uVar4 & 0xffffffff) + uVar8;
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uVar1 / uVar7;
    }
    lVar5 = uVar1 - uVar2 * uVar7;
    if (*(char *)(*(long *)(param_1 + 0x28) + lVar5 * 0x30 + 0x28) == '\0') {
      return 0;
    }
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar5 * 0x30);
    uStack_58 = puVar6[1];
    local_60 = *puVar6;
    uStack_48 = puVar6[3];
    uStack_50 = puVar6[2];
    lStack_78 = param_2[1];
    local_80 = *param_2;
    lStack_68 = param_2[3];
    lStack_70 = param_2[2];
    iVar3 = FUN_00368020(&local_60,&local_80);
    if (iVar3 != 0) {
      return *(long *)(param_1 + 0x28) + lVar5 * 0x30 + 0x20;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 <= *(ulong *)(param_1 + 0x20));
  return 0;
}


