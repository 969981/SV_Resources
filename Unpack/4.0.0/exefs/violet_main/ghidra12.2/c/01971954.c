/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01971954; name: FUN_01971954
 */


void FUN_01971954(long *param_1)

{
  char cVar1;
  undefined2 uVar2;
  ulong uVar3;
  
  *(undefined4 *)((long)param_1 + 0x496) = 0;
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
  uVar3 = (**(code **)(*param_1 + 0x4d0))(param_1,0xe);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*param_1 + 0x5f0))(param_1);
  }
  if (*(char *)((long)param_1 + 0x6f) == '\0') {
    uVar2 = (undefined2)param_1[0xc];
  }
  else {
    uVar2 = (**(code **)(*(long *)param_1[9] + 0x140))();
  }
  *(undefined2 *)((long)param_1 + 0x47e) = uVar2;
  return;
}


