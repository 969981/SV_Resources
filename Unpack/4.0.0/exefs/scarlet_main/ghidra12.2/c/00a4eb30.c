/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4eb30; name: FUN_00a4eb30
 */


void FUN_00a4eb30(long param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(int *)(param_1 + 0x64b8) == 0) {
    iVar6 = (int)((ulong)(*(long *)(param_1 + 0x61f8) - *(long *)(param_1 + 0x61f0)) >> 4);
  }
  else {
    iVar6 = 1;
  }
  iVar7 = iVar6 + (uint)*(byte *)(param_1 + 0x622a) + -1;
  iVar9 = 0;
  if (iVar6 != 0) {
    iVar9 = iVar7 / iVar6;
  }
  uVar2 = iVar7 - iVar9 * iVar6;
  *(char *)(param_1 + 0x622a) = (char)uVar2;
  if (*(int *)(param_1 + 0x64b8) == 0) {
    uVar2 = uVar2 & 0xff;
    if ((int)uVar2 < (int)((ulong)(*(long *)(param_1 + 0x61f8) - *(long *)(param_1 + 0x61f0)) >> 4))
    {
      piVar1 = (int *)(*(long *)(param_1 + 0x61f0) + (ulong)uVar2 * 0x10);
      iVar6 = *piVar1;
      iVar7 = piVar1[1];
      iVar9 = piVar1[2];
      iVar8 = piVar1[3];
      lVar5 = param_1 + (long)iVar6 * 0x18;
      local_58 = *(undefined8 *)(lVar5 + 0x2c);
      local_50 = *(undefined8 *)(lVar5 + 0x34);
      uStack_48 = *(undefined8 *)(lVar5 + 0x3c);
      FUN_00a64a1c(&local_58);
      uVar3 = FUN_00a65174(&local_58,param_2,0);
      if (((uVar3 & 1) == 0) && (uVar3 = FUN_00a65174(&local_58,param_2,1), (uVar3 & 1) == 0)) {
        FUN_00a65174(&local_58,param_2,2);
      }
      goto LAB_00a4ebcc;
    }
    iVar8 = 0;
    iVar9 = 0;
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    piVar1 = (int *)(*(long *)(param_1 + 0x6480) +
                    ((ulong)(~(uint)*(ushort *)(param_1 + 0x6228) +
                            ((uint)(*(int *)(param_1 + 0x6488) - (int)*(long *)(param_1 + 0x6480))
                            >> 5)) & 0xffff) * 0x20);
    iVar6 = *piVar1;
    iVar7 = piVar1[2];
    iVar9 = piVar1[4];
    iVar8 = piVar1[7];
LAB_00a4ebcc:
    if (iVar9 - 4U < 2) {
      uVar4 = 1;
      goto LAB_00a4ec94;
    }
    if (iVar9 - 6U < 2) {
      uVar4 = 2;
      goto LAB_00a4ec94;
    }
  }
  uVar4 = 0;
LAB_00a4ec94:
  FUN_00a63fb0(param_1 + (long)iVar6 * 0x18 + 0x2c,param_2,iVar7,uVar4,
               iVar9 - 1U < 7 && (iVar9 - 1U & 1) == 0,iVar8);
  return;
}


