/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01920670; name: FUN_01920670
 */


void FUN_01920670(void)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if (DAT_0483b098 != (undefined8 *)0x0) {
    nn::ngc::ProfanityFilter::Finalize();
    (**(code **)*DAT_0483b098)();
    puVar3 = DAT_0483b098;
    plVar1 = DAT_0483b088;
    uVar4 = FUN_00c4e564(DAT_0483b088);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar3,0x30,8);
    }
    else {
      FUN_00c48fe8(plVar1,puVar3,0x30,8);
    }
    DAT_0483b098 = (undefined8 *)0x0;
  }
  lVar2 = DAT_0483b090;
  plVar1 = DAT_0483b088;
  if (DAT_0483b090 != 0) {
    uVar4 = FUN_00c4e564(DAT_0483b088);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2,0x20000,0x1000);
    }
    else {
      FUN_00c48fe8(plVar1,lVar2,0x20000,0x1000);
    }
    DAT_0483b090 = 0;
  }
  DAT_0483b088 = (long *)0x0;
  return;
}


