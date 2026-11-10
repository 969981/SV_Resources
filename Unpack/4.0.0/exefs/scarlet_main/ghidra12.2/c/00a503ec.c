/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a503ec; name: FUN_00a503ec
 */


int FUN_00a503ec(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 2) {
    iVar4 = 0;
    lVar5 = -0x6030;
    do {
      lVar1 = param_1 + 0x2c + lVar5;
      local_58 = *(undefined8 *)(lVar1 + 0x6030);
      local_50 = *(undefined8 *)(lVar1 + 0x6038);
      uStack_48 = *(undefined8 *)(lVar1 + 0x6040);
      uVar2 = ((uint)local_58 & 0xffff) - 0x3d4;
      if ((0x2a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x40000000081U) == 0) &&
         (uVar3 = FUN_00a664ac(&local_58,2), (uVar3 & 1) != 0)) {
        uVar2 = FUN_00a65174(&local_58,2,param_3);
        iVar4 = iVar4 + (uVar2 & 1);
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0);
  }
  else {
    iVar4 = 0;
    lVar5 = -0x6030;
    do {
      lVar1 = param_1 + 0x2c + lVar5;
      local_58 = *(undefined8 *)(lVar1 + 0x6030);
      local_50 = *(undefined8 *)(lVar1 + 0x6038);
      uStack_48 = *(undefined8 *)(lVar1 + 0x6040);
      uVar3 = FUN_00a664ac(&local_58,param_2);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_00a65174(&local_58,param_2,param_3);
        iVar4 = iVar4 + (uVar2 & 1);
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0);
  }
  return iVar4;
}


