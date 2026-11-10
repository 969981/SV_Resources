/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143b06c; name: FUN_0143b06c
 */


void FUN_0143b06c(long *param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)param_1[9];
  plVar5 = (long *)(**(code **)plVar8[5])(plVar8 + 5);
  if (((*PTR_DAT_047dcd50 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar4 != 0))
  {
    uVar6 = FUN_01af5520();
    *(undefined8 *)PTR_DAT_047dcd58 = uVar6;
    __cxa_guard_release(PTR_DAT_047dcd50);
  }
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (plVar5 == (long *)PTR_DAT_047dcd58) break;
    plVar5 = (long *)*plVar5;
  }
  FUN_0143b2e0(param_1,(long)param_1 + 0x41c,plVar8);
  uVar2 = (**(code **)(*param_1 + 0x100))(param_1);
  (**(code **)(*plVar8 + 0xc0))(plVar8,uVar2);
  sVar1 = (**(code **)(*param_1 + 0x108))(param_1);
  (**(code **)(*plVar8 + 0x88))(plVar8,sVar1);
  if (sVar1 == 0) {
    lVar7 = *plVar8;
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x230))(param_1);
    lVar7 = *plVar8;
  }
  (**(code **)(lVar7 + 0xa8))(plVar8,uVar2);
  FUN_0143b514(param_1);
  uVar3 = (**(code **)(*param_1 + 0x5b0))(param_1);
  lVar7 = 0x712;
  if (((uVar3 | param_2) & 1) == 0) {
    lVar7 = 0x718;
  }
  FUN_0143b218(plVar8[9],*(undefined2 *)((long)param_1 + lVar7),0);
  uVar2 = (**(code **)(*param_1 + 0x2a8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0143b1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x168))(plVar8,uVar2);
  return;
}


