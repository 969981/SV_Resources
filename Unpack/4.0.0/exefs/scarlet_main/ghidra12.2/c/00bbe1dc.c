/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bbe1dc; name: FUN_00bbe1dc
 */


/* WARNING: Removing unreachable block (ram,0x00bbe228) */

undefined8 FUN_00bbe1dc(long param_1,ulong *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
LAB_00bbe1f8:
  while (pbVar8 = (byte *)*param_2, (byte *)param_2[1] <= pbVar8) {
    uVar4 = 0;
LAB_00bbe230:
    iVar3 = FUN_00c096d0(param_2,uVar4);
    bVar2 = iVar3 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar3;
    uVar4 = (ulong)CONCAT14(bVar2,iVar3);
    if (bVar2) goto LAB_00bbe254;
LAB_00bbe29c:
    if (((uint)uVar4 == 0) || (((uint)uVar4 & 7) == 4)) {
      return 1;
    }
    uVar6 = *(ulong *)(param_1 + 8);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_00b7714c((ulong *)(param_1 + 8));
    }
    else {
      uVar6 = uVar6 & 0xfffffffffffffffe;
    }
    uVar4 = FUN_00c01b50(param_2,uVar4 & 0xffffffff,uVar6);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  bVar1 = *pbVar8;
  uVar4 = (ulong)(uint)bVar1;
  if ((char)bVar1 < '\x01') goto LAB_00bbe230;
  *(uint *)(param_2 + 4) = (uint)bVar1;
  *param_2 = (ulong)(pbVar8 + 1);
LAB_00bbe254:
  uVar5 = (uint)(uVar4 >> 3) & 0x1fffffff;
  if (uVar5 == 2) {
    if ((int)uVar4 != 0x10) goto LAB_00bbe29c;
    pbVar8 = (byte *)*param_2;
    pbVar7 = (byte *)param_2[1];
  }
  else {
    if ((uVar5 != 1) || ((int)uVar4 != 8)) goto LAB_00bbe29c;
    pbVar8 = (byte *)*param_2;
    if (pbVar8 < (byte *)param_2[1]) {
      uVar4 = (ulong)*pbVar8;
      if ((char)*pbVar8 < '\0') goto LAB_00bbe2e8;
      *param_2 = (ulong)(pbVar8 + 1);
    }
    else {
      uVar4 = 0;
LAB_00bbe2e8:
      uVar4 = FUN_00c0944c(param_2,uVar4);
      if ((long)uVar4 < 0) {
        return 0;
      }
    }
    *(int *)(param_1 + 0x18) = (int)uVar4;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    pbVar8 = (byte *)*param_2;
    pbVar7 = (byte *)param_2[1];
    if ((pbVar7 <= pbVar8) || (*pbVar8 != 0x10)) goto LAB_00bbe1f8;
    pbVar8 = pbVar8 + 1;
    *param_2 = (ulong)pbVar8;
  }
  if (pbVar8 < pbVar7) {
    uVar4 = (ulong)*pbVar8;
    if ((char)*pbVar8 < '\0') goto LAB_00bbe34c;
    *param_2 = (ulong)(pbVar8 + 1);
  }
  else {
    uVar4 = 0;
LAB_00bbe34c:
    uVar4 = FUN_00c0944c(param_2,uVar4);
    if ((long)uVar4 < 0) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x1c) = (int)uVar4;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  if ((*param_2 == param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00bbe1f8;
}


