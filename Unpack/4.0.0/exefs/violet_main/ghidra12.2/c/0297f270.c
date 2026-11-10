/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297f270; name: FUN_0297f270
 */


void FUN_0297f270(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) && (*param_2 != 0)) {
    plVar3 = (long *)(**(code **)param_3[5])(param_3 + 5);
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar2 != 0)) {
      uVar6 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar6;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d3f08) {
        if ((short)param_3[0xe2] != 0x271) {
          return;
        }
        uVar6 = *(undefined8 *)(param_1 + 8);
        uVar1 = (**(code **)(*param_3 + 0x2a8))();
        uVar4 = FUN_0161bb5c(uVar6,0x4690abda0b4ec6c4,uVar1);
        if ((uVar4 & 1) == 0) {
          return;
        }
        uVar1 = (**(code **)(*(long *)*param_2 + 0x98))();
        lVar5 = *(long *)(param_1 + 0x20);
        plVar3 = (long *)FUN_01021c94(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 0x30),uVar1);
        (**(code **)(*plVar3 + 0x550))(plVar3,3,1);
        FUN_0129aff0(*(undefined8 *)(lVar5 + 0x18),0x37,uVar1,3,1);
        return;
      }
    }
  }
  return;
}


