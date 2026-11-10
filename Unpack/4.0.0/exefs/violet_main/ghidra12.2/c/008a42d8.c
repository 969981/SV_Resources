/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a42d8; name: FUN_008a42d8
 */


void FUN_008a42d8(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_48;
  
  uVar10 = *(uint *)(param_1 + 0x14);
  if ((uVar10 & 3) != 0) {
    uVar5 = (int)((uint)*(byte *)(param_1 + 0x48) << 0x1c) >> 0x1c;
    if ((int)(uVar10 & 3) <= (int)uVar5) {
      uVar5 = uVar10 & 3;
    }
    if ('\0' < (char)(*(byte *)(param_1 + 0x48) << 4)) {
      if ((int)uVar5 < 2) {
        uVar5 = 1;
      }
      lVar11 = 0;
      lVar12 = 8;
      do {
        lVar2 = *(long *)(param_1 + 0x18);
        uVar4 = *(ushort *)(param_1 + 0x4a);
        lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
        iVar6 = FUN_008947b8();
        plVar1 = (long *)(lVar2 + lVar12);
        uVar3 = *(undefined4 *)(lVar13 + (long)(int)(iVar6 * (uint)uVar4) * 4 + lVar11);
        uVar4 = *(ushort *)(plVar1 + -1);
        puVar7 = (undefined8 *)
                 FUN_00893d90(*(undefined8 *)(param_2 + 0xb8),uVar4 & 3,uVar4 >> 2 & 3,
                              uVar4 >> 4 & 7,uVar4 >> 7 & 1);
        local_48 = *puVar7;
        FUN_00c5afc0(param_3,uVar3,4,*plVar1 + 8,&local_48);
        lVar11 = lVar11 + 4;
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar5 * 4 != lVar11);
      uVar10 = *(uint *)(param_1 + 0x14);
    }
  }
  if ((uVar10 >> 0x11 & 1) != 0) {
    uVar8 = FUN_008942ac(*(undefined8 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x4a));
    iVar6 = FUN_008f1cbc(uVar8,4,2,"uTexture3");
    if (-1 < iVar6) {
      uVar8 = FUN_00892efc(param_2);
      uVar9 = FUN_00892f04(param_2);
      FUN_00c5afc0(param_3,iVar6,4,uVar8,uVar9);
    }
  }
  return;
}


