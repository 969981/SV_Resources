/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c07f50; name: FUN_01c07f50
 */


undefined8 FUN_01c07f50(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar5 = FUN_015adc40(param_1,1);
  uVar2 = FUN_00c92df0(param_1,2,0);
  uVar3 = FUN_00c92df0(param_1,3,0);
  if ((DAT_04810cd8 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04810cd8);
    if (iVar4 != 0) {
      DAT_04810e40 = '\x01';
      __cxa_guard_release(&DAT_04810cd8);
    }
  }
  puVar1 = PTR_LAB_047d5ab8;
  if (DAT_04810e40 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_18 = uVar3;
  uStack_14 = uVar2;
  FUN_01c0802c(uVar5,puVar1,0,&uStack_14,&local_18);
  return 0;
}


