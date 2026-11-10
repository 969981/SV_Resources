/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0200833c; name: FUN_0200833c
 */


void FUN_0200833c(ulong *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if ((*PTR_DAT_047d9210 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_047d9210);
    if (iVar5 != 0) {
      FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d9210);
    }
  }
  puVar8 = (undefined8 *)PTR_DAT_047d9220;
  puVar6 = (undefined8 *)PTR_DAT_047d9218;
  puVar1 = PTR_DAT_047d9210;
  *(undefined8 *)PTR_DAT_047d9220 = *(undefined8 *)PTR_DAT_047d9218;
  if (*PTR_DAT_047dca20 == '\0') {
    param_1[1] = 0;
  }
  else {
    uVar7 = *param_1;
    if ((*puVar1 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(PTR_DAT_047d9210);
      puVar6 = (undefined8 *)PTR_DAT_047d9218;
      puVar8 = (undefined8 *)PTR_DAT_047d9220;
      if (iVar5 != 0) {
        FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d9210);
        puVar6 = (undefined8 *)PTR_DAT_047d9218;
        puVar8 = (undefined8 *)PTR_DAT_047d9220;
      }
    }
    puVar4 = PTR_DAT_047dca40;
    puVar3 = PTR_DAT_047dca38;
    puVar2 = PTR_DAT_047dca30;
    puVar1 = PTR_DAT_047dca28;
    *puVar8 = *puVar6;
    param_1[1] = *(ulong *)puVar2 & (long)(uVar7 << 0x3a) >> 0x3f |
                 *(ulong *)puVar1 & (long)(uVar7 << 0x3b) >> 0x3f |
                 *(ulong *)puVar3 & (long)(uVar7 << 0x2d) >> 0x3f |
                 *(ulong *)puVar4 & (long)(uVar7 << 0x2c) >> 0x3f;
    *param_1 = *param_1 & 0xfffffffffff3ffcf;
  }
  return;
}


