/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e3dc58; name: FUN_02e3dc58
 */


void FUN_02e3dc58(long *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = (**(code **)(*param_1 + 0x4d0))(param_1,0x1c);
  *(undefined4 *)((long)param_1 + 0x496) = 0;
  FUN_015807d0(param_1);
  if (*(char *)((long)param_1 + 0x6c) != '\0') {
    (**(code **)(*param_1 + 0x7f0))(param_1,0,1,1,1);
    *(undefined1 *)((long)param_1 + 0x482) = 0;
    param_1[0x86] = *(ulong *)((long)param_1 + 0x426);
    cVar1 = (*(ulong *)((long)param_1 + 0x426) & 0xffff) != 0;
    *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)((long)param_1 + 0x42e);
    if ((bool)cVar1) {
      *(undefined1 *)((long)param_1 + 0x482) = 1;
    }
    *(undefined1 *)((long)param_1 + 0x43a) = 1;
    *(undefined1 *)((long)param_1 + 0x44e) = *(undefined1 *)((long)param_1 + 0x444);
    *(ulong *)((long)param_1 + 0x446) = *(ulong *)((long)param_1 + 0x43c);
    if ((*(ulong *)((long)param_1 + 0x43c) & 0xffff) != 0) {
      cVar1 = cVar1 + '\x01';
      *(char *)((long)param_1 + 0x482) = cVar1;
    }
    *(undefined1 *)(param_1 + 0x8a) = 1;
    *(undefined1 *)((long)param_1 + 0x464) = *(undefined1 *)((long)param_1 + 0x45a);
    *(ulong *)((long)param_1 + 0x45c) = *(ulong *)((long)param_1 + 0x452);
    if ((*(ulong *)((long)param_1 + 0x452) & 0xffff) != 0) {
      cVar1 = cVar1 + '\x01';
      *(char *)((long)param_1 + 0x482) = cVar1;
    }
    *(undefined1 *)((long)param_1 + 0x466) = 1;
    *(long *)((long)param_1 + 0x472) = param_1[0x8d];
    *(char *)((long)param_1 + 0x47a) = (char)param_1[0x8e];
    if ((param_1[0x8d] & 0xffffU) != 0) {
      *(char *)((long)param_1 + 0x482) = cVar1 + '\x01';
    }
    *(undefined1 *)((long)param_1 + 0x47c) = 1;
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
  }
  *(undefined1 *)((long)param_1 + 0x482) = 0;
  param_1[0x86] = *(ulong *)((long)param_1 + 0x426);
  cVar1 = (*(ulong *)((long)param_1 + 0x426) & 0xffff) != 0;
  *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)((long)param_1 + 0x42e);
  if ((bool)cVar1) {
    *(undefined1 *)((long)param_1 + 0x482) = 1;
  }
  *(undefined1 *)((long)param_1 + 0x43a) = 1;
  *(undefined1 *)((long)param_1 + 0x44e) = *(undefined1 *)((long)param_1 + 0x444);
  *(ulong *)((long)param_1 + 0x446) = *(ulong *)((long)param_1 + 0x43c);
  if ((*(ulong *)((long)param_1 + 0x43c) & 0xffff) != 0) {
    cVar1 = cVar1 + '\x01';
    *(char *)((long)param_1 + 0x482) = cVar1;
  }
  *(undefined1 *)(param_1 + 0x8a) = 1;
  *(undefined1 *)((long)param_1 + 0x464) = *(undefined1 *)((long)param_1 + 0x45a);
  *(ulong *)((long)param_1 + 0x45c) = *(ulong *)((long)param_1 + 0x452);
  if ((*(ulong *)((long)param_1 + 0x452) & 0xffff) != 0) {
    cVar1 = cVar1 + '\x01';
    *(char *)((long)param_1 + 0x482) = cVar1;
  }
  *(undefined1 *)((long)param_1 + 0x466) = 1;
  *(long *)((long)param_1 + 0x472) = param_1[0x8d];
  *(char *)((long)param_1 + 0x47a) = (char)param_1[0x8e];
  if ((param_1[0x8d] & 0xffffU) != 0) {
    *(char *)((long)param_1 + 0x482) = cVar1 + '\x01';
  }
  *(undefined1 *)((long)param_1 + 0x486) = 0x12;
  *(undefined1 *)((long)param_1 + 0x47c) = 1;
  *(undefined1 *)((long)param_1 + 0x435) = 0;
  *(undefined1 *)((long)param_1 + 0x42b) = 0;
  *(undefined1 *)((long)param_1 + 1099) = 0;
  *(undefined1 *)((long)param_1 + 0x441) = 0;
  *(undefined1 *)((long)param_1 + 0x461) = 0;
  *(undefined1 *)((long)param_1 + 0x457) = 0;
  *(undefined1 *)((long)param_1 + 0x477) = 0;
  *(undefined1 *)((long)param_1 + 0x46d) = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined2 *)((long)param_1 + 0x48c) = 0;
  param_1[0xb4] = 0;
  (**(code **)(*param_1 + 0x568))(param_1);
  (**(code **)(*param_1 + 0x2d0))(param_1);
  *(undefined1 *)((long)param_1 + 0x487) = 1;
  (**(code **)(*param_1 + 0x580))(param_1);
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  if (*(char *)((long)param_1 + 0x414) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x414) = 6;
  }
  if (*(char *)((long)param_1 + 0x415) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x415) = 6;
  }
  if (*(char *)((long)param_1 + 0x416) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x416) = 6;
  }
  if (*(char *)((long)param_1 + 0x417) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x417) = 6;
  }
  if ((char)param_1[0x83] != '\x06') {
    *(undefined1 *)(param_1 + 0x83) = 6;
  }
  if (*(char *)((long)param_1 + 0x419) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x419) = 6;
  }
  if (*(char *)((long)param_1 + 0x41a) != '\x06') {
    *(undefined1 *)((long)param_1 + 0x41a) = 6;
  }
  *(short *)((long)param_1 + 0x47e) = (short)param_1[0xc];
  uVar2 = (**(code **)(*param_1 + 0x108))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x110))(param_1);
  uVar4 = (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],0);
  uVar4 = (uVar4 & 0xffff) * (uint)*(ushort *)((long)param_1 + 0x3f4);
  uVar6 = uVar4 / 10;
  *(short *)(param_1 + 0xb) = (short)uVar6;
  uVar4 = uVar4 / 10;
  if ((uVar3 & 0xffff) < (uVar6 & 0xffff)) {
    (**(code **)(*param_1 + 0x2e8))(param_1,uVar4 - uVar3);
  }
  if (((uVar4 & 0xffff) < (uVar3 & 0xffff)) && ((uVar4 & 0xffff) < (uVar2 & 0xffff))) {
    (**(code **)(*param_1 + 0x2e0))(param_1,uVar2 - uVar4);
  }
  (**(code **)(*param_1 + 0x810))(param_1);
  if ((uVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e3dfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4d8))(param_1,0x1c);
  return;
}


