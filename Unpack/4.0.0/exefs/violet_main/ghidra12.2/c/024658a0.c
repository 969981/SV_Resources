/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024658a0; name: FUN_024658a0
 */


undefined8 FUN_024658a0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_02464980(param_1,1);
  if ((DAT_048494c0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048494c0);
    if (iVar2 != 0) {
      DAT_048496c0 = '\x01';
      __cxa_guard_release(&DAT_048494c0);
    }
  }
  puVar1 = PTR_FUN_047dea90;
  if (DAT_048496c0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar3 = FUN_02465948(uVar3,puVar1,0);
  FUN_00c5d960(param_1,uVar3);
  return 1;
}


