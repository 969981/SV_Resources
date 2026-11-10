/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03488060; name: FUN_03488060
 */


undefined8 FUN_03488060(long *param_1,int *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ushort *puVar10;
  bool bVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar10 = (ushort *)*param_1 + 1;
  uVar6 = *(ushort *)*param_1;
  *param_1 = (long)puVar10;
  uVar13 = (uint)uVar6;
  if (uVar13 != 0) {
    uVar14 = 0;
    while( true ) {
      uVar2 = *(undefined4 *)puVar10;
      *param_1 = (long)(puVar10 + 2);
      uVar6 = puVar10[2];
      *param_1 = (long)puVar10 + 5;
      uVar4 = *(undefined1 *)((long)puVar10 + 5);
      *param_1 = (long)(puVar10 + 3);
      bVar5 = (byte)puVar10[3];
      *param_1 = (long)puVar10 + 7;
      uVar1 = bVar5 & 0x7f;
      pbVar8 = (byte *)((long)puVar10 + 7);
      while ((char)bVar5 < '\0') {
        bVar5 = *pbVar8;
        uVar1 = bVar5 & 0x7f | uVar1 << 7;
        *param_1 = (long)(pbVar8 + 1);
        pbVar8 = pbVar8 + 1;
      }
      uVar3 = *(undefined4 *)pbVar8;
      *param_1 = (long)(pbVar8 + 4);
      bVar5 = pbVar8[4];
      *param_1 = (long)(pbVar8 + 5);
      uVar7 = *(ushort *)(pbVar8 + 5);
      *param_1 = (long)(pbVar8 + 7);
      *(ulong *)(param_3 + 0x28) = *(ulong *)(param_3 + 0x28) | 1L << ((ulong)uVar1 & 0x3f);
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0xff;
      local_70 = 0xff;
      local_68 = 0;
      bVar11 = false;
      if (*(long *)(param_3 + 0x30) != 0) {
        lVar12 = *(long *)(*(long *)(param_3 + 0x30) + 0x90);
        bVar11 = false;
        if (lVar12 != 0) {
          if (*(short *)(lVar12 + 0x90) < 1) {
            bVar11 = 0 < *(short *)(lVar12 + 0x94);
          }
          else {
            bVar11 = true;
          }
        }
      }
      uVar9 = FUN_034b5ad4(*(undefined8 *)PTR_DAT_047e6fd8,param_3,uVar2,(char)uVar6,uVar4,
                           (ulong)uVar1,uVar3,bVar5,pbVar8 + 7,(uint)uVar7,&local_90,4,bVar11);
      if ((int)uVar9 != 1) {
        return uVar9;
      }
      *param_1 = *param_1 + (ulong)(uint)uVar7 * 0xc;
      uVar14 = uVar14 + 1;
      *param_2 = *param_2 + (uint)uVar7 * -0xc;
      if (uVar14 == uVar13) break;
      puVar10 = (ushort *)*param_1;
    }
  }
  return 1;
}


