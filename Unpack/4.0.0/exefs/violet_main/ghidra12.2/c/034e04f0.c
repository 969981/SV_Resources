/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e04f0; name: FUN_034e04f0
 */


long * FUN_034e04f0(undefined4 param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x1b0);
  if (plVar2 != (long *)0x0) {
    FUN_034aa700(plVar2,param_1);
    *(byte *)((long)plVar2 + 0xf1) = *(byte *)((long)plVar2 + 0xf1) & 0x80;
    *(byte *)(plVar2 + 0x1e) = *(byte *)(plVar2 + 0x1e) & 199;
    plVar2[0x1c] = 0;
    plVar2[0x1d] = 0;
    plVar2[0x20] = 0;
    plVar2[0x21] = 0;
    plVar2[0x22] = 0;
    plVar2[0x23] = 0;
    *(undefined4 *)(plVar2 + 0x27) = 0;
    plVar2[0x35] = 0;
    *plVar2 = (long)&PTR_FUN_047c55f8;
    plVar2[1] = (long)&PTR_FUN_047c5888;
    plVar2[4] = (long)&PTR_FUN_047c58c8;
    plVar2[7] = (long)&PTR_FUN_047c5960;
    plVar2[0x24] = (long)&PTR_FUN_047c5988;
    plVar2[0x25] = (long)&PTR_FUN_047c59b0;
    plVar2[0x26] = 0;
    *(undefined8 *)((long)plVar2 + 0x141) = 0;
    *(undefined8 *)((long)plVar2 + 0x13c) = 0;
    memset(plVar2 + 0x2a,0,0x54);
    iVar1 = FUN_03499a80(plVar2);
    if (iVar1 != 1) {
      (**(code **)(*plVar2 + 0x30))(plVar2);
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}


