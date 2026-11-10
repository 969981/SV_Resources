/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ccb130; name: FUN_01ccb130
 */


undefined8 FUN_01ccb130(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((DAT_048190e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048190e8), iVar3 != 0)) {
    DAT_0481aae0 = '\x01';
    __cxa_guard_release(&DAT_048190e8);
  }
  uVar4 = FUN_01ccab70(param_1,1);
  uVar1 = 0x54;
  if (DAT_0481aae0 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  uVar2 = FUN_01ccafe8(uVar4,uVar1);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


