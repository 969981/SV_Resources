/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d7b224; name: FUN_00d7b224
 */


undefined8 FUN_00d7b224(long param_1,uint *param_2,int *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x54) == 2) {
    lVar6 = *(long *)(param_1 + 0x78);
    uVar5 = (*param_3 - (int)*(short *)(lVar6 + 10)) +
            (param_3[1] - (int)*(short *)(lVar6 + 0xc)) * (uint)*(ushort *)(lVar6 + 0xe);
    uVar4 = 1;
    pbVar2 = (byte *)(*(long *)(param_1 + 0x90) +
                     (-(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1) +
                     (long)(int)uVar5);
    *param_2 = *pbVar2 & 0x3f;
    uVar5 = (uint)CONCAT12(*pbVar2 >> 6,CONCAT11(pbVar2[1],pbVar2[2]));
  }
  else {
    switch(*(int *)(param_1 + 0x54)) {
    case 0:
      lVar6 = *(long *)(param_1 + 0x78);
      uVar4 = 1;
      puVar1 = (undefined8 *)
               (*(long *)(param_1 + 0x80) +
               (long)(int)((*param_3 - (int)*(short *)(lVar6 + 10)) +
                          (param_3[1] - (int)*(short *)(lVar6 + 0xc)) *
                          (uint)*(ushort *)(lVar6 + 0xe)) * 8);
      *param_2 = (int)(char)((ulong)*puVar1 >> 0x18);
      uVar5 = *(uint *)((long)puVar1 + 4) & 0xffffff;
      break;
    case 1:
      lVar6 = *(long *)(param_1 + 0x78);
      uVar5 = (*param_3 - (int)*(short *)(lVar6 + 10)) +
              (param_3[1] - (int)*(short *)(lVar6 + 0xc)) * (uint)*(ushort *)(lVar6 + 0xe);
      lVar6 = *(long *)(param_1 + 0x88);
      uVar4 = 1;
      *param_2 = (uint)*(byte *)(lVar6 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 |
                                         (ulong)uVar5 << 2));
      uVar5 = *(uint *)(lVar6 + (long)(int)uVar5 * 4) >> 8;
      break;
    default:
      uVar5 = 0;
      uVar4 = 0;
      *param_2 = 0;
      break;
    case 3:
      lVar6 = *(long *)(param_1 + 0x78);
      iVar3 = (*param_3 - (int)*(short *)(lVar6 + 10)) +
              (param_3[1] - (int)*(short *)(lVar6 + 0xc)) * (uint)*(ushort *)(lVar6 + 0xe);
      lVar6 = *(long *)(param_1 + 0x98);
      uVar4 = 1;
      *param_2 = *(ushort *)(lVar6 + (long)iVar3 * 2) & 3;
      uVar5 = (uint)(*(ushort *)(lVar6 + (long)iVar3 * 2) >> 2);
      break;
    case 4:
      uVar4 = 1;
      uVar5 = 0;
      *param_2 = 1;
    }
  }
  param_2[1] = uVar5;
  return uVar4;
}


