/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03532b54; name: FUN_03532b54
 */


void FUN_03532b54(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_047c9228;
  param_1[3] = &PTR_LAB_047c92b8;
  param_1[5] = &PTR_FUN_047c92e0;
  param_1[0xd] = 0;
  puVar5 = (undefined8 *)param_1[0x11];
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_047e2fd0;
  while (puVar5 != (undefined8 *)0x0) {
    if (puVar5[6] == 0) {
      param_1[0x11] = 0;
    }
    else {
      param_1[0x11] = puVar5[6];
    }
    (**(code **)*puVar5)(puVar5);
    (**(code **)(puVar1 + 0x30))(0,puVar5);
    puVar5 = (undefined8 *)param_1[0x11];
  }
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x30))();
  }
  param_1[0xc] = PTR_DAT_047e7558 + 0x10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_0351bd94(param_1);
  lVar4 = tpidr_el0;
  plVar6 = *(long **)(lVar4 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x03532c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1,0,8);
    return;
  }
  FUN_00c48fe8(plVar6,param_1,0,8);
  return;
}


