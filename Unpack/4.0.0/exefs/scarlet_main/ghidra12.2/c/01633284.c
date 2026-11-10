/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01633284; name: FUN_01633284
 */


void FUN_01633284(long param_1,long *param_2,undefined2 *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  char cVar9;
  
  plVar5 = (long *)(**(code **)param_2[5])(param_2 + 5);
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar4 != 0))
  {
    uVar7 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar7;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (plVar5 == (long *)PTR_DAT_047d3f08) break;
    plVar5 = (long *)*plVar5;
  }
  cVar1 = *(char *)((long)param_2 + 0x714);
  uVar6 = (**(code **)(*param_2 + 0x4d0))(param_2,0x1c);
  if ((cVar1 == '\0') && ((uVar6 & 1) == 0)) {
    return;
  }
  bVar2 = *(byte *)((long)param_2 + 0x715);
  cVar1 = *(char *)(param_3 + 4);
  if ((ulong)bVar2 < 0x13) {
    cVar9 = (&DAT_03d630a1)[(ulong)bVar2 * 2];
  }
  else {
    cVar9 = '\x12';
  }
  if ((cVar1 == '\x12') || (cVar1 != cVar9)) {
    if (bVar2 != 99) {
      return;
    }
    uVar3 = FUN_02e2219c(param_2,cVar1,*param_3);
    if ((uVar3 & 0xff) == 0x12) {
      return;
    }
    if ((uVar3 & 0xff) == 99) {
      uVar3 = 0x1f;
    }
    if ((*(uint *)((long)param_2 + 0x71c) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
      return;
    }
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  *(undefined1 *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x938) * 0xc4 + 0x1f) = 1;
  return;
}


