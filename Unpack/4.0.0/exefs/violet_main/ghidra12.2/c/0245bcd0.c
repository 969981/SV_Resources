/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0245bcd0; name: FUN_0245bcd0
 */


undefined8 FUN_0245bcd0(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0245bbe0(param_1,1);
  if ((DAT_048492f0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048492f0);
    if (iVar2 != 0) {
      DAT_04849668 = '\x01';
      __cxa_guard_release(&DAT_048492f0);
    }
  }
  puVar1 = &LAB_02b95ce4;
  if (DAT_04849668 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  iVar2 = FUN_0245bd78(uVar3,puVar1,0);
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


