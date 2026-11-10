/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a061f0; name: FUN_01a061f0
 */


undefined8 FUN_01a061f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  uVar4 = FUN_01935a50(param_1,1);
  uVar2 = FUN_00c92df0(param_1,2,0);
  if ((DAT_048519c8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048519c8);
    if (iVar3 != 0) {
      DAT_04851e90 = '\x01';
      __cxa_guard_release(&DAT_048519c8);
    }
  }
  puVar1 = PTR_LAB_047dfad0;
  if (DAT_04851e90 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24 = uVar2;
  FUN_01a062ac(uVar4,puVar1,0,&local_24);
  return 0;
}


