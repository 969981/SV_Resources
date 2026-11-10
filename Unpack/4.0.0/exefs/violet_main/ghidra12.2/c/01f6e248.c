/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6e248; name: FUN_01f6e248
 */


void FUN_01f6e248(long *param_1,ulong param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *unaff_x22;
  long local_40;
  long local_38;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
    goto LAB_01f6e2c0;
  }
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    local_38 = param_2 * 0x18;
    local_40 = tpidr_el0;
    plVar3 = *(long **)(local_40 + 0x30);
    if (plVar3 == (long *)0x0) {
      unaff_x22 = &DAT_04859000;
      if ((DAT_04859438 & 1) == 0) goto LAB_01f6e330;
      goto LAB_01f6e308;
    }
  }
  else {
    FUN_01f6e360();
LAB_01f6e330:
    iVar1 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar1 != 0) {
      unaff_x22[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_01f6e308:
    plVar3 = (long *)unaff_x22[0x86];
    *(long **)(local_40 + 0x30) = plVar3;
  }
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,local_38,8);
LAB_01f6e2c0:
  lVar4 = lVar2 + param_3 * 0x18;
  *param_1 = lVar2;
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = lVar2 + param_2 * 0x18;
  return;
}


