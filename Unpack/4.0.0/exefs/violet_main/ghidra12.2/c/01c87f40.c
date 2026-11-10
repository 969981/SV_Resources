/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c87f40; name: FUN_01c87f40
 */


int FUN_01c87f40(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  char local_2b0 [8];
  undefined1 auStack_2a8 [632];
  
  uVar2 = FUN_0126a9c0();
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar3 = FUN_01ed96ac();
  if ((lVar3 == 0) || (FUN_01edae00(local_2b0,param_1), local_2b0[0] == '\0')) {
    iVar1 = 3;
  }
  else {
    uVar4 = FUN_01edaf30(param_1);
    if ((uVar4 & 1) == 0) {
      iVar1 = 3;
    }
    else {
      iVar1 = FUN_01edb050(uVar2,param_1);
      if (iVar1 != 3) {
        FUN_01edc1d8(lVar3,auStack_2a8);
      }
    }
  }
  return iVar1;
}


