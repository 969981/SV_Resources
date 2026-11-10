/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007944ac; name: FUN_007944ac
 */


void FUN_007944ac(long *param_1,undefined4 *param_2)

{
  long lVar1;
  size_t __n;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = param_1[3];
  (**(code **)(*param_1 + 0x18))(param_1,&DAT_044df8c0,1);
  uVar3 = (ulong)*(uint *)(param_1 + 3) & 0x3f;
  uVar2 = (uint)uVar3;
  if (uVar2 < 0x39) {
    if (uVar2 == 0x38) goto LAB_0079453c;
    __n = (size_t)(0x38 - uVar2);
  }
  else {
    memset((void *)((long)param_1 + uVar3 + 0x1c),0,(ulong)(0x40 - uVar2));
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar3 = 0;
    __n = 0x38;
  }
  memset((void *)((long)param_1 + uVar3 + 0x1c),0,__n);
LAB_0079453c:
  *(ulong *)((long)param_1 + 0x54) = (ulong)(uint)((int)lVar1 << 3);
  (**(code **)(*param_1 + 0x38))(param_1);
  *param_2 = (int)param_1[1];
  param_2[1] = *(undefined4 *)((long)param_1 + 0xc);
  param_2[2] = (int)param_1[2];
  param_2[3] = *(undefined4 *)((long)param_1 + 0x14);
  return;
}


