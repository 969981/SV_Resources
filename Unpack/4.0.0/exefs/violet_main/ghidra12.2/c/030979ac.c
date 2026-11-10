/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030979ac; name: FUN_030979ac
 */


undefined8 FUN_030979ac(long param_1,int *param_2,long param_3,ulong *param_4)

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
  undefined4 uVar12;
  ulong uVar13;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_58;
  
  piVar2 = (int *)(*(long *)(param_1 + 0x18) + (long)*param_2 * 0x10);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar9 = *(long *)(param_1 + 0x38);
  puVar6 = (undefined8 *)(lVar9 + (long)*(int *)(lVar8 + (long)*piVar2 * 0x14) * 0x10);
  uStack_68 = puVar6[1];
  local_70 = *puVar6;
  uVar1 = *piVar2 + 1;
  if ((int)uVar1 < *piVar2 + (int)(short)piVar2[2] + -1) {
    lVar10 = (long)(int)uVar1;
    lVar11 = ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) + (long)(int)uVar1)
             * 4;
    uVar12 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
    uVar13 = CONCAT44(uVar12,uVar12);
    bVar3 = false;
    while( true ) {
      lVar10 = lVar10 + 1;
      puVar6 = (undefined8 *)(lVar9 + (long)*(int *)(lVar8 + lVar11) * 0x10);
      uStack_78 = puVar6[1];
      local_80 = *puVar6;
      puVar6 = (undefined8 *)(lVar9 + (long)((int *)(lVar8 + lVar11))[1] * 0x10);
      uStack_88 = puVar6[1];
      local_90 = *puVar6;
      local_58 = uVar13;
      iVar7 = FUN_0086eb50(param_3,&local_70,&local_80,&local_90,0,&local_58,auStack_a0);
      bVar5 = (float)local_58 < (float)uVar13;
      iVar4 = -(uint)bVar5;
      if (iVar7 != 0) {
        bVar3 = (bool)(bVar5 | bVar3);
      }
      uVar13 = uVar13 ^ (uVar13 ^ local_58 ^ (local_58 ^ uVar13) & ~CONCAT44(iVar4,iVar4)) &
                        ~CONCAT44(-(uint)(iVar7 == 0),-(uint)(iVar7 == 0));
      if ((int)(short)piVar2[2] + *piVar2 + -1 <= lVar10) break;
      lVar8 = *(long *)(param_1 + 0x28);
      lVar11 = lVar11 + 0x14;
      lVar9 = *(long *)(param_1 + 0x38);
    }
    if (bVar3) {
      *param_4 = uVar13;
      return 1;
    }
  }
  return 0;
}


