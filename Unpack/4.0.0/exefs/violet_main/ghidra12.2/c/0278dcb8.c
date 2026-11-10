/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278dcb8; name: FUN_0278dcb8
 */


bool FUN_0278dcb8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint extraout_var;
  ushort *puVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_047e2090;
  if (((*PTR_DAT_047e2090 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047e2090), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047e20a8,PTR_DAT_047e2098,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2090);
  }
  puVar3 = PTR_DAT_047e20a0;
  puVar2 = PTR_DAT_047e2098;
  lVar9 = *(long *)PTR_DAT_047e2098;
  *(long *)PTR_DAT_047e20a0 = lVar9;
  if (lVar9 != 0) {
    sVar4 = FUN_0278de28(param_1);
    lVar9 = (**(code **)(*param_1 + 0x10))(param_1);
    sVar5 = FUN_0278de80(lVar9 + 2,0xfa);
    if ((sVar5 == sVar4) &&
       (uVar6 = FUN_0278de28(param_1), (((uint)DAT_0485edd0 ^ uVar6 >> 0x10) & 0xfff) != 0)) {
      FUN_0278de28(param_1);
      if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047e2090), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047e20a8,PTR_DAT_047e2098,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047e2090);
      }
      *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
      puVar8 = (ushort *)FUN_0278decc();
      uVar6 = *puVar8 ^ extraout_var;
      if ((uVar6 & 0xf) == 0) {
        if ((uVar6 & 0xf0) == 0) {
          return (uVar6 & 0xf00) == 0;
        }
        return true;
      }
    }
  }
  return false;
}


