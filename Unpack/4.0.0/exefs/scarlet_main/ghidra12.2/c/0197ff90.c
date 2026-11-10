/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197ff90; name: FUN_0197ff90
 */


void FUN_0197ff90(long *param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  
  plVar9 = (long *)param_1[9];
  plVar7 = (long *)(**(code **)plVar9[5])(plVar9 + 5);
  if (((*PTR_DAT_047dcd50 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar6 != 0))
  {
    uVar8 = FUN_01af5520();
    *(undefined8 *)PTR_DAT_047dcd58 = uVar8;
    __cxa_guard_release(PTR_DAT_047dcd50);
  }
  while( true ) {
    if (plVar7 == (long *)0x0) {
      return;
    }
    if (plVar7 == (long *)PTR_DAT_047dcd58) break;
    plVar7 = (long *)*plVar7;
  }
  *(short *)(param_1 + 0xe3) = (short)param_2;
  *(byte *)((long)param_1 + 0x6f) = param_3 & 1;
  uVar1 = (**(code **)(*plVar9 + 0x1a0))(plVar9);
  FUN_0143b218(plVar9[9],param_2,0);
  (**(code **)(*param_1 + 0x7f8))(param_1,1,1);
  uVar2 = (**(code **)(*param_1 + 0x108))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x110))(param_1);
  uVar4 = (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],0);
  uVar4 = (uVar4 & 0xffff) * (uint)*(ushort *)((long)param_1 + 0x3f4);
  uVar10 = uVar4 / 10;
  *(short *)(param_1 + 0xb) = (short)uVar10;
  uVar4 = uVar4 / 10;
  if ((uVar3 & 0xffff) < (uVar10 & 0xffff)) {
    (**(code **)(*param_1 + 0x2e8))(param_1,uVar4 - uVar3);
  }
  if (((uVar4 & 0xffff) < (uVar3 & 0xffff)) && ((uVar4 & 0xffff) < (uVar2 & 0xffff))) {
    (**(code **)(*param_1 + 0x2e0))(param_1,uVar2 - uVar4);
  }
  (**(code **)(*param_1 + 0x810))(param_1);
  if (((param_2 & 0xffff) == 0) && ((short)param_1[0xe2] == 0x1ec)) {
    *(undefined2 *)((long)param_1 + 0x712) = 0;
    uVar5 = (**(code **)(*plVar9 + 0x140))(plVar9);
    (**(code **)(*param_1 + 0x360))(param_1,uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x019800fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x1a8))(plVar9,uVar1 & 1);
  return;
}


