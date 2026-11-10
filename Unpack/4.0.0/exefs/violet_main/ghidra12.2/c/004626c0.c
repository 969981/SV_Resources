/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004626c0; name: FUN_004626c0
 */


undefined8 FUN_004626c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0x38a) {
    uVar2 = FUN_0042c3a0();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    lVar5 = 0x20;
    uVar2 = FUN_0042c3f0();
  }
  else if (iVar1 == 0x389) {
    uVar2 = FUN_0042c330();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    lVar5 = 0x18;
    uVar2 = FUN_0042c380();
  }
  else {
    if (iVar1 != 0x388) {
      return 0;
    }
    uVar2 = FUN_0042c2c0();
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    lVar5 = 0x10;
    uVar2 = FUN_0042c310();
  }
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(long *)(param_1 + 0xd0) = lVar5;
  lVar3 = *(long *)(param_1 + 0xa8);
  *(undefined ***)(param_1 + 0x150) = &PTR_LAB_044b6288;
  if (lVar3 == 0) {
    lVar3 = FUN_00439de0();
    *(long *)(param_1 + 0xa8) = lVar3;
    lVar4 = *(long *)(param_1 + 0xb0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0xb0);
  }
  if (lVar4 == 0) {
    lVar4 = FUN_00439de0();
    *(long *)(param_1 + 0xb0) = lVar4;
    lVar3 = *(long *)(param_1 + 0xa8);
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    return 0;
  }
  iVar1 = FUN_00439e90(lVar3,*(undefined8 *)(param_1 + 0xc0),0,0,0,1);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_00439e90(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 200),0,0,0,1),
     iVar1 == 0)) {
    return 0;
  }
  *(int *)(param_1 + 0x30) = (int)lVar5 << 3;
  lVar5 = lVar5 + 0x10;
  *(undefined ***)(param_1 + 0x150) = &PTR_LAB_044b6288;
  *(long *)(param_1 + 0x90) = lVar5;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0xb8);
    if (lVar5 == 0) {
      lVar5 = FUN_00439de0();
      *(long *)(param_1 + 0xb8) = lVar5;
      if (lVar5 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_00439e90(lVar5,*(undefined8 *)(param_1 + 0xc0),0,&DAT_03cffd51,0,1);
    if (iVar1 == 0) {
      return 0;
    }
    lVar5 = 0x7fffffff;
    *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x48) = 0x7fffffff;
    *(ulong *)(param_1 + 0x50) = *(ulong *)(param_1 + 0xd0) >> 1;
    *(undefined8 *)(param_1 + 0x60) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0x58) = 0x7fffffff;
  }
  else {
    *(long *)(param_1 + 0x40) = lVar5;
    *(long *)(param_1 + 0x48) = lVar5;
    *(long *)(param_1 + 0x60) = lVar5;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(long *)(param_1 + 0x68) = lVar5;
  *(undefined8 *)(param_1 + 0x38) = 0x10000;
  return 1;
}


