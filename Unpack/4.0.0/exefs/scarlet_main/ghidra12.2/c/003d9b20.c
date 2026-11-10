/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d9b20; name: FUN_003d9b20
 */


undefined4 FUN_003d9b20(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int local_44;
  int local_38;
  undefined4 local_34;
  
  uVar1 = (uint)(param_4 != 0) << 0xc;
  if (param_5 != 0) {
    lVar5 = FUN_00483c90(param_3);
    if (lVar5 == 0) {
      uVar2 = 0xffffffff;
      if (param_1 == 0) goto LAB_003d9bd4;
LAB_003d9b74:
      iVar3 = FUN_003af490(param_1,uVar1 | 0x60010,uVar2,0,param_3);
    }
    else {
      uVar2 = FUN_0043dbd0();
      if (param_1 != 0) goto LAB_003d9b74;
LAB_003d9bd4:
      iVar3 = FUN_003af4c0(param_2,uVar1 | 0x60010,uVar2,0,param_3);
    }
    if (iVar3 == 0) {
      return 399;
    }
    goto LAB_003d9c14;
  }
  lVar5 = FUN_00483c90(param_3);
  if (lVar5 == 0) {
    uVar2 = 0xffffffff;
    if (param_1 == 0) goto LAB_003d9bfc;
LAB_003d9bb0:
    iVar3 = FUN_003af490(param_1,uVar1 | 0x60011,uVar2,0,param_3);
  }
  else {
    uVar2 = FUN_0043dbd0();
    if (param_1 != 0) goto LAB_003d9bb0;
LAB_003d9bfc:
    iVar3 = FUN_003af4c0(param_2,uVar1 | 0x60011,uVar2,0,param_3);
  }
  if (iVar3 == 0) {
    return 0x18d;
  }
LAB_003d9c14:
  uVar4 = FUN_00499a10(param_3);
  if ((uVar4 >> 0xd & 1) == 0) {
    iVar3 = FUN_00485d60(param_3,&local_38,&local_44,&local_34,0);
    if (iVar3 == 0) {
      local_34 = 0xffffffff;
    }
    if (local_38 == 0) {
      local_38 = local_44;
    }
    if (param_1 == 0) {
      iVar3 = FUN_003af4c0(param_2,uVar1 | 0x60012,local_34,local_38,param_3);
    }
    else {
      iVar3 = FUN_003af490(param_1);
    }
  }
  else {
    iVar3 = 1;
  }
  uVar2 = 0x18e;
  if (iVar3 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}


