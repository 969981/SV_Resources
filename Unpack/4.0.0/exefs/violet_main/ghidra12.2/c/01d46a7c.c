/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d46a7c; name: FUN_01d46a7c
 */


int FUN_01d46a7c(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d7940);
    if (iVar1 != 0) {
      FUN_00100190(&LAB_02b72d48,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar2;
  piVar3 = (int *)FUN_00cf60cc(uVar2,param_1);
  if (*(ushort *)((long)piVar3 - (long)*piVar3) < 0x13) {
    uVar4 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[9];
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar4 = (uint)*(byte *)((long)piVar3 + uVar5);
    }
  }
  if (2 < (param_2 & 0xff)) {
    param_2 = 3;
  }
  return uVar4 + (uVar4 * (param_2 * 0x14 & 0xfc)) / 100;
}


