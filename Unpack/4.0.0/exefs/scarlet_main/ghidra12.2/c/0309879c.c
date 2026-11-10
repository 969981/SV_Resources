/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309879c; name: FUN_0309879c
 */


undefined8
FUN_0309879c(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,ulong *param_5)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_b0 [24];
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  piVar2 = (int *)(*(long *)(param_1 + 0x18) + (long)*param_2 * 0x10);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar9 = *(long *)(param_1 + 0x38);
  puVar6 = (undefined8 *)(lVar9 + (long)*(int *)(lVar8 + (long)*piVar2 * 0x14) * 0x10);
  uStack_68 = puVar6[1];
  local_70 = *puVar6;
  uVar1 = *piVar2 + 1;
  if ((int)uVar1 < *piVar2 + (int)(short)piVar2[2] + -1) {
    lVar10 = (long)(int)uVar1;
    uVar12 = NEON_fmov(0x3f800000,4);
    bVar3 = false;
    lVar11 = ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) + (long)(int)uVar1)
             * 4;
    while( true ) {
      lVar10 = lVar10 + 1;
      puVar6 = (undefined8 *)(lVar9 + (long)*(int *)(lVar8 + lVar11) * 0x10);
      uStack_78 = puVar6[1];
      local_80 = *puVar6;
      puVar6 = (undefined8 *)(lVar9 + (long)((int *)(lVar8 + lVar11))[1] * 0x10);
      uStack_88 = puVar6[1];
      local_90 = *puVar6;
      local_98 = uVar12;
      iVar7 = FUN_0086e810(param_3,param_4,&local_70,&local_80,&local_90,&local_98,auStack_b0);
      bVar5 = (float)local_98 < (float)uVar12;
      iVar4 = -(uint)bVar5;
      if (iVar7 != 0) {
        bVar3 = (bool)(bVar5 | bVar3);
      }
      uVar12 = uVar12 ^ (uVar12 ^ local_98 ^ (local_98 ^ uVar12) & ~CONCAT44(iVar4,iVar4)) &
                        ~CONCAT44(-(uint)(iVar7 == 0),-(uint)(iVar7 == 0));
      if ((int)(short)piVar2[2] + *piVar2 + -1 <= lVar10) break;
      lVar8 = *(long *)(param_1 + 0x28);
      lVar11 = lVar11 + 0x14;
      lVar9 = *(long *)(param_1 + 0x38);
    }
    if (bVar3) {
      *param_5 = uVar12;
      return 1;
    }
  }
  return 0;
}


