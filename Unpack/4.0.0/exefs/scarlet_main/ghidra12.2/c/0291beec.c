/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0291beec; name: FUN_0291beec
 */


ulong FUN_0291beec(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (**(code **)(*(long *)*param_2 + 0x98))();
  uVar3 = (**(code **)(*(long *)param_2[1] + 0x98))();
  plVar6 = (long *)FUN_01021c74(param_1);
  uVar7 = (**(code **)(*plVar6 + 0x148))(plVar6,uVar2,0x1e);
  if ((uVar7 & 1) != 0) {
    plVar6 = (long *)FUN_01021c74(param_1);
    uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,uVar2,2);
    if ((uVar7 & 1) == 0) {
      plVar6 = (long *)FUN_01021c74(param_1);
      uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,uVar2,3);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
    }
    plVar6 = (long *)FUN_01021c74(param_1);
    iVar4 = (**(code **)(*plVar6 + 0xa0))(plVar6,uVar2);
    if (0x31 < iVar4) {
      plVar6 = (long *)FUN_01021c74(param_1);
      uVar2 = (**(code **)(*plVar6 + 0x250))(plVar6,uVar2,0);
      plVar6 = (long *)FUN_01021c74(param_1);
      uVar5 = (**(code **)(*plVar6 + 0x188))(plVar6,uVar2);
      plVar6 = (long *)FUN_01021c74(param_1);
      if ((uVar5 & 0xffff) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0291c058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(*plVar6 + 0x4c0))(plVar6,0x32);
        return uVar7;
      }
      cVar1 = (**(code **)(*plVar6 + 0x458))(plVar6,uVar2,uVar3,uVar5);
      return (ulong)(cVar1 == '\x03');
    }
  }
  return 0;
}


