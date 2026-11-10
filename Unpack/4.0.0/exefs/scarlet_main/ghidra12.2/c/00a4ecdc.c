/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4ecdc; name: FUN_00a4ecdc
 */


ulong FUN_00a4ecdc(long param_1,int param_2)

{
  long lVar1;
  ushort *puVar2;
  ulong uVar3;
  ushort *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ushort *local_90;
  long local_88;
  long local_80;
  long *plStack_78;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 2) {
    lVar1 = 0x6140;
  }
  else if (param_2 == 1) {
    lVar1 = 0x60d0;
  }
  else {
    lVar1 = 0x6060;
  }
  FUN_00a52fe4(&local_90,param_1 + lVar1);
  uVar6 = (local_88 - (long)local_90 >> 3) * -0x5555555555555555;
  iVar5 = (int)uVar6;
  if (iVar5 != 0) {
    if (*(int *)(param_1 + 0x64b8) == 0) {
      if ((int)(uint)*(byte *)(param_1 + 0x622a) <
          (int)((ulong)(*(long *)(param_1 + 0x61f8) - *(long *)(param_1 + 0x61f0)) >> 4)) {
        uVar7 = *(uint *)(*(long *)(param_1 + 0x61f0) + (ulong)*(byte *)(param_1 + 0x622a) * 0x10);
        param_1 = param_1 + (long)(int)uVar7 * 0x18;
        local_58 = *(undefined8 *)(param_1 + 0x2c);
        local_50 = *(undefined8 *)(param_1 + 0x34);
        uStack_48 = *(undefined8 *)(param_1 + 0x3c);
        FUN_00a64a1c(&local_58);
        uVar3 = FUN_00a65174(&local_58,param_2,0);
        if (((uVar3 & 1) == 0) && (uVar3 = FUN_00a65174(&local_58,param_2,1), (uVar3 & 1) == 0)) {
          FUN_00a65174(&local_58,param_2,2);
        }
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = *(uint *)(*(long *)(param_1 + 0x6480) +
                       ((ulong)(~(uint)*(ushort *)(param_1 + 0x6228) +
                               ((uint)(*(int *)(param_1 + 0x6488) - (int)*(long *)(param_1 + 0x6480)
                                      ) >> 5)) & 0xffff) * 0x20);
    }
    if (0 < iVar5) {
      uVar3 = 0;
      puVar2 = local_90;
      do {
        puVar4 = local_90;
        if (uVar7 == *puVar2) goto LAB_00a4ee50;
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 0xc;
      } while ((uVar6 & 0xffffffff) != uVar3);
    }
  }
  uVar3 = 0;
  puVar4 = local_90;
  if (local_90 != (ushort *)0x0) {
LAB_00a4ee50:
    uVar6 = (**(code **)(*plStack_78 + 0xf8))(plStack_78);
    if (((uVar6 & 1) == 0) || (lVar1 = FUN_00c4e600(), *(int *)(lVar1 + 0x12c8) < 1)) {
      (**(code **)(*plStack_78 + 0x18))(plStack_78,puVar4,local_80 - (long)puVar4,4);
    }
    else {
      FUN_00c48fe8(plStack_78,puVar4,local_80 - (long)puVar4,4);
    }
  }
  return uVar3 & 0xffffffff;
}


