/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019205c0; name: FUN_019205c0
 */


undefined8 FUN_019205c0(long *param_1)

{
  long *plVar1;
  int iVar2;
  ProfanityFilter *pPVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  DAT_0483b088 = param_1;
  DAT_0483b090 = (**(code **)(*param_1 + 0x10))(param_1,0x20000,0x1000);
  if (DAT_0483b098 == (ProfanityFilter *)0x0) {
    pPVar3 = (ProfanityFilter *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
    nn::ngc::ProfanityFilter::ProfanityFilter(pPVar3);
    DAT_0483b098 = pPVar3;
  }
  iVar2 = nn::ngc::ProfanityFilter::Initialize(DAT_0483b098,DAT_0483b090);
  if (iVar2 == 0) {
    (**(code **)(*(long *)DAT_0483b098 + 0x10))();
    return 0;
  }
  nn::result::detail::OnUnhandledResult(iVar2);
  uVar5 = 0;
  if (DAT_0483b098 != (ProfanityFilter *)0x0) {
    nn::ngc::ProfanityFilter::Finalize();
    (*(code *)**(undefined8 **)DAT_0483b098)();
    pPVar3 = DAT_0483b098;
    plVar1 = DAT_0483b088;
    uVar4 = FUN_00c4e564(DAT_0483b088);
    if ((uVar4 & 1) == 0) {
      uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1,pPVar3,0x30,8);
    }
    else {
      uVar5 = FUN_00c48fe8(plVar1,pPVar3,0x30,8);
    }
    DAT_0483b098 = (ProfanityFilter *)0x0;
  }
  uVar4 = DAT_0483b090;
  plVar1 = DAT_0483b088;
  if (DAT_0483b090 != 0) {
    uVar6 = FUN_00c4e564(DAT_0483b088);
    if ((uVar6 & 1) == 0) {
      uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar4,0x20000,0x1000);
    }
    else {
      uVar5 = FUN_00c48fe8(plVar1,uVar4,0x20000,0x1000);
    }
    DAT_0483b090 = 0;
  }
  DAT_0483b088 = (long *)0x0;
  return uVar5;
}


